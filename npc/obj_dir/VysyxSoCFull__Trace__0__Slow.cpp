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
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+1121,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1122,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1123,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1124,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1125,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1131,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1132,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1133,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1136,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1137,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1138,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1139,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1140,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+1121,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1122,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1123,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1124,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1125,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1131,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1132,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1133,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1136,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1137,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1138,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1139,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1140,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+584,"spi_sck", false,-1);
    tracep->declBus(c+585,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1141,"spi_mosi", false,-1);
    tracep->declBit(c+1142,"spi_miso", false,-1);
    tracep->declBit(c+1139,"uart_rx", false,-1);
    tracep->declBit(c+1140,"uart_tx", false,-1);
    tracep->declBit(c+1143,"psram_sck", false,-1);
    tracep->declBit(c+1144,"psram_ce_n", false,-1);
    tracep->declBus(c+1098,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1145,"sdram_clk", false,-1);
    tracep->declBit(c+586,"sdram_cke", false,-1);
    tracep->declBit(c+587,"sdram_cs", false,-1);
    tracep->declBit(c+588,"sdram_ras", false,-1);
    tracep->declBit(c+589,"sdram_cas", false,-1);
    tracep->declBit(c+590,"sdram_we", false,-1);
    tracep->declBus(c+591,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+592,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+593,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+594,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1121,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1122,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1124,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1131,"ps2_clk", false,-1);
    tracep->declBit(c+1132,"ps2_data", false,-1);
    tracep->declBus(c+1133,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1134,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1136,"vga_hsync", false,-1);
    tracep->declBit(c+1137,"vga_vsync", false,-1);
    tracep->declBit(c+1138,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+938,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"in_psel", false,-1);
    tracep->declBit(c+10,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"in_pready", false,-1);
    tracep->declBus(c+1100,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+942,"in_pslverr", false,-1);
    tracep->declBus(c+938,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"out_psel", false,-1);
    tracep->declBit(c+10,"out_penable", false,-1);
    tracep->declBus(c+1163,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"out_pwrite", false,-1);
    tracep->declBus(c+940,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"out_pready", false,-1);
    tracep->declBus(c+1100,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+942,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+9,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+10,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+942,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1100,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+503,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+504,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+595,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1164,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+596,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+505,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+506,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+943,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+507,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+508,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+944,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1169,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1170,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+509,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+510,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+944,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1172,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+945,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+511,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+938,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1164,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+11,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+946,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+947,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+944,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+948,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1164,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1147,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+949,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+950,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+939,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+943,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1164,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+598,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+951,"sel_0", false,-1);
    tracep->declBit(c+952,"sel_1", false,-1);
    tracep->declBit(c+953,"sel_2", false,-1);
    tracep->declBit(c+954,"sel_3", false,-1);
    tracep->declBit(c+955,"sel_4", false,-1);
    tracep->declBit(c+956,"sel_5", false,-1);
    tracep->declBit(c+957,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+12,"auto_in_awready", false,-1);
    tracep->declBit(c+13,"auto_in_awvalid", false,-1);
    tracep->declBus(c+14,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+15,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+17,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+12,"auto_in_wready", false,-1);
    tracep->declBit(c+18,"auto_in_wvalid", false,-1);
    tracep->declBus(c+19,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+21,"auto_in_bready", false,-1);
    tracep->declBit(c+1101,"auto_in_bvalid", false,-1);
    tracep->declBus(c+22,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+958,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_arready", false,-1);
    tracep->declBit(c+24,"auto_in_arvalid", false,-1);
    tracep->declBus(c+25,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+26,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+27,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+28,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_in_rready", false,-1);
    tracep->declBit(c+1102,"auto_in_rvalid", false,-1);
    tracep->declBus(c+30,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"auto_out_psel", false,-1);
    tracep->declBit(c+10,"auto_out_penable", false,-1);
    tracep->declBit(c+939,"auto_out_pwrite", false,-1);
    tracep->declBus(c+938,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+940,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_out_pready", false,-1);
    tracep->declBit(c+942,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1100,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+10,"nodeOut_penable", false,-1);
    tracep->declBus(c+31,"state", false,-1, 1,0);
    tracep->declBit(c+23,"accept_read", false,-1);
    tracep->declBit(c+12,"accept_write", false,-1);
    tracep->declBit(c+32,"is_write_r", false,-1);
    tracep->declBit(c+939,"is_write", false,-1);
    tracep->declBus(c+30,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+22,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+33,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+36,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+959,"resp", false,-1, 1,0);
    tracep->declBus(c+37,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+958,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1102,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+38,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1101,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+39,"auto_in_awready", false,-1);
    tracep->declBit(c+989,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_in_wready", false,-1);
    tracep->declBit(c+991,"auto_in_wvalid", false,-1);
    tracep->declBus(c+992,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_in_wlast", false,-1);
    tracep->declBit(c+513,"auto_in_bready", false,-1);
    tracep->declBit(c+44,"auto_in_bvalid", false,-1);
    tracep->declBus(c+45,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+47,"auto_in_arready", false,-1);
    tracep->declBit(c+995,"auto_in_arvalid", false,-1);
    tracep->declBus(c+48,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_in_rready", false,-1);
    tracep->declBit(c+51,"auto_in_rvalid", false,-1);
    tracep->declBus(c+52,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_rlast", false,-1);
    tracep->declBit(c+12,"auto_out_awready", false,-1);
    tracep->declBit(c+13,"auto_out_awvalid", false,-1);
    tracep->declBus(c+14,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+15,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+17,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+12,"auto_out_wready", false,-1);
    tracep->declBit(c+18,"auto_out_wvalid", false,-1);
    tracep->declBus(c+19,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+21,"auto_out_bready", false,-1);
    tracep->declBit(c+1101,"auto_out_bvalid", false,-1);
    tracep->declBus(c+22,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+958,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_out_arready", false,-1);
    tracep->declBit(c+24,"auto_out_arvalid", false,-1);
    tracep->declBus(c+25,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+26,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+27,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+28,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_out_rready", false,-1);
    tracep->declBit(c+1102,"auto_out_rvalid", false,-1);
    tracep->declBus(c+30,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1148,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+21,"io_enq_ready", false,-1);
    tracep->declBit(c+1101,"io_enq_valid", false,-1);
    tracep->declBus(c+22,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+958,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+513,"io_deq_ready", false,-1);
    tracep->declBit(c+44,"io_deq_valid", false,-1);
    tracep->declBus(c+45,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+46,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+56,"wrap", false,-1);
    tracep->declBit(c+57,"wrap_1", false,-1);
    tracep->declBit(c+58,"maybe_full", false,-1);
    tracep->declBit(c+59,"ptr_match", false,-1);
    tracep->declBit(c+60,"empty", false,-1);
    tracep->declBit(c+61,"full", false,-1);
    tracep->declBit(c+1103,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+57,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declBus(c+62,"R0_data", false,-1, 5,0);
    tracep->declBit(c+56,"W0_addr", false,-1);
    tracep->declBit(c+1103,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declBus(c+512,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+63+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+65,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+1102,"io_enq_valid", false,-1);
    tracep->declBus(c+30,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1148,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+958,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+514,"io_deq_ready", false,-1);
    tracep->declBit(c+51,"io_deq_valid", false,-1);
    tracep->declBus(c+52,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+53,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+54,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+55,"io_deq_bits_last", false,-1);
    tracep->declBit(c+66,"wrap", false,-1);
    tracep->declBit(c+67,"wrap_1", false,-1);
    tracep->declBit(c+68,"maybe_full", false,-1);
    tracep->declBit(c+69,"ptr_match", false,-1);
    tracep->declBit(c+70,"empty", false,-1);
    tracep->declBit(c+71,"full", false,-1);
    tracep->declBit(c+1104,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+67,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declQuad(c+72,"R0_data", false,-1, 38,0);
    tracep->declBit(c+66,"W0_addr", false,-1);
    tracep->declBit(c+1104,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declQuad(c+1149,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+74+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+78,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+47,"io_enq_ready", false,-1);
    tracep->declBit(c+995,"io_enq_valid", false,-1);
    tracep->declBus(c+48,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+996,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+49,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+24,"io_deq_valid", false,-1);
    tracep->declBus(c+25,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+26,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+27,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+28,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+79,"wrap", false,-1);
    tracep->declBit(c+80,"wrap_1", false,-1);
    tracep->declBit(c+81,"maybe_full", false,-1);
    tracep->declBit(c+82,"ptr_match", false,-1);
    tracep->declBit(c+83,"empty", false,-1);
    tracep->declBit(c+84,"full", false,-1);
    tracep->declBit(c+997,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+80,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declQuad(c+85,"R0_data", false,-1, 46,0);
    tracep->declBit(c+79,"W0_addr", false,-1);
    tracep->declBit(c+997,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declQuad(c+515,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+87+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+91,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+39,"io_enq_ready", false,-1);
    tracep->declBit(c+989,"io_enq_valid", false,-1);
    tracep->declBus(c+40,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+990,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+41,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+42,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+13,"io_deq_valid", false,-1);
    tracep->declBus(c+14,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+15,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+16,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+17,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+92,"wrap", false,-1);
    tracep->declBit(c+93,"wrap_1", false,-1);
    tracep->declBit(c+94,"maybe_full", false,-1);
    tracep->declBit(c+95,"ptr_match", false,-1);
    tracep->declBit(c+96,"empty", false,-1);
    tracep->declBit(c+97,"full", false,-1);
    tracep->declBit(c+998,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+93,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declQuad(c+98,"R0_data", false,-1, 46,0);
    tracep->declBit(c+92,"W0_addr", false,-1);
    tracep->declBit(c+998,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declQuad(c+517,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+100+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+104,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+43,"io_enq_ready", false,-1);
    tracep->declBit(c+991,"io_enq_valid", false,-1);
    tracep->declBus(c+992,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+993,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+994,"io_enq_bits_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+18,"io_deq_valid", false,-1);
    tracep->declBus(c+19,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+20,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+105,"wrap", false,-1);
    tracep->declBit(c+106,"wrap_1", false,-1);
    tracep->declBit(c+107,"maybe_full", false,-1);
    tracep->declBit(c+108,"ptr_match", false,-1);
    tracep->declBit(c+109,"empty", false,-1);
    tracep->declBit(c+110,"full", false,-1);
    tracep->declBit(c+999,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+106,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declQuad(c+111,"R0_data", false,-1, 35,0);
    tracep->declBit(c+105,"W0_addr", false,-1);
    tracep->declBit(c+999,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declQuad(c+1000,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+113+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+117,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+118,"auto_in_awready", false,-1);
    tracep->declBit(c+1002,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1175,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_in_wready", false,-1);
    tracep->declBit(c+1004,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1005,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_in_wlast", false,-1);
    tracep->declBit(c+1007,"auto_in_bready", false,-1);
    tracep->declBit(c+120,"auto_in_bvalid", false,-1);
    tracep->declBus(c+121,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_in_arready", false,-1);
    tracep->declBit(c+1008,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1180,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1009,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1181,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1182,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1183,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_in_rready", false,-1);
    tracep->declBit(c+124,"auto_in_rvalid", false,-1);
    tracep->declBus(c+125,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_rlast", false,-1);
    tracep->declBit(c+1011,"auto_out_awready", false,-1);
    tracep->declBit(c+1012,"auto_out_awvalid", false,-1);
    tracep->declBus(c+40,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+129,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1013,"auto_out_wready", false,-1);
    tracep->declBit(c+1014,"auto_out_wvalid", false,-1);
    tracep->declBus(c+992,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_out_wlast", false,-1);
    tracep->declBit(c+1015,"auto_out_bready", false,-1);
    tracep->declBit(c+130,"auto_out_bvalid", false,-1);
    tracep->declBus(c+121,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1016,"auto_out_arready", false,-1);
    tracep->declBit(c+1017,"auto_out_arvalid", false,-1);
    tracep->declBus(c+48,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+133,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1010,"auto_out_rready", false,-1);
    tracep->declBit(c+124,"auto_out_rvalid", false,-1);
    tracep->declBus(c+125,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+135,"auto_out_rlast", false,-1);
    tracep->declBit(c+1014,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+136,"w_idle", false,-1);
    tracep->declBit(c+1018,"in_awready", false,-1);
    tracep->declBit(c+137,"busy", false,-1);
    tracep->declBus(c+138,"r_addr", false,-1, 31,0);
    tracep->declBus(c+139,"r_len", false,-1, 7,0);
    tracep->declBus(c+140,"len", false,-1, 7,0);
    tracep->declBus(c+1019,"addr", false,-1, 31,0);
    tracep->declBit(c+141,"busy_1", false,-1);
    tracep->declBus(c+142,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+143,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+144,"len_1", false,-1, 7,0);
    tracep->declBus(c+1020,"addr_1", false,-1, 31,0);
    tracep->declBit(c+145,"wbeats_latched", false,-1);
    tracep->declBit(c+1012,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1021,"wbeats_valid", false,-1);
    tracep->declBus(c+146,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1022,"w_todo", false,-1, 8,0);
    tracep->declBit(c+994,"w_last", false,-1);
    tracep->declBit(c+1015,"nodeOut_bready", false,-1);
    tracep->declBus(c+147,"error_0", false,-1, 1,0);
    tracep->declBus(c+148,"error_1", false,-1, 1,0);
    tracep->declBus(c+149,"error_2", false,-1, 1,0);
    tracep->declBus(c+150,"error_3", false,-1, 1,0);
    tracep->declBus(c+151,"error_4", false,-1, 1,0);
    tracep->declBus(c+152,"error_5", false,-1, 1,0);
    tracep->declBus(c+153,"error_6", false,-1, 1,0);
    tracep->declBus(c+154,"error_7", false,-1, 1,0);
    tracep->declBus(c+155,"error_8", false,-1, 1,0);
    tracep->declBus(c+156,"error_9", false,-1, 1,0);
    tracep->declBus(c+157,"error_10", false,-1, 1,0);
    tracep->declBus(c+158,"error_11", false,-1, 1,0);
    tracep->declBus(c+159,"error_12", false,-1, 1,0);
    tracep->declBus(c+160,"error_13", false,-1, 1,0);
    tracep->declBus(c+161,"error_14", false,-1, 1,0);
    tracep->declBus(c+162,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+123,"io_enq_ready", false,-1);
    tracep->declBit(c+1008,"io_enq_valid", false,-1);
    tracep->declBus(c+1180,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1009,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1181,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1182,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1183,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+1017,"io_deq_valid", false,-1);
    tracep->declBus(c+48,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1024,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+163,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+49,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+164,"ram", false,-1, 48,0);
    tracep->declBit(c+166,"full", false,-1);
    tracep->declBit(c+1017,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1025,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+118,"io_enq_ready", false,-1);
    tracep->declBit(c+1002,"io_enq_valid", false,-1);
    tracep->declBus(c+1175,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1003,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1176,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1177,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1178,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1026,"io_deq_ready", false,-1);
    tracep->declBit(c+1027,"io_deq_valid", false,-1);
    tracep->declBus(c+40,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1028,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+167,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+41,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+42,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+168,"ram", false,-1, 48,0);
    tracep->declBit(c+170,"full", false,-1);
    tracep->declBit(c+1027,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1029,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+119,"io_enq_ready", false,-1);
    tracep->declBit(c+1004,"io_enq_valid", false,-1);
    tracep->declBus(c+1005,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1006,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1179,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1030,"io_deq_ready", false,-1);
    tracep->declBit(c+1031,"io_deq_valid", false,-1);
    tracep->declBus(c+992,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+993,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+171,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+172,"ram", false,-1, 36,0);
    tracep->declBit(c+174,"full", false,-1);
    tracep->declBit(c+1031,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1032,"do_enq", false,-1);
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
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+1033,"auto_in_awready", false,-1);
    tracep->declBit(c+1034,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1036,"auto_in_wready", false,-1);
    tracep->declBit(c+1037,"auto_in_wvalid", false,-1);
    tracep->declBus(c+992,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_in_bready", false,-1);
    tracep->declBit(c+175,"auto_in_bvalid", false,-1);
    tracep->declBus(c+176,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+177,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_in_arready", false,-1);
    tracep->declBit(c+1040,"auto_in_arvalid", false,-1);
    tracep->declBus(c+48,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1041,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1042,"auto_in_rready", false,-1);
    tracep->declBit(c+178,"auto_in_rvalid", false,-1);
    tracep->declBus(c+179,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+181,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1039,"nodeIn_arready", false,-1);
    tracep->declBit(c+1033,"nodeIn_awready", false,-1);
    tracep->declBit(c+1043,"w_sel0", false,-1);
    tracep->declBit(c+175,"w_full", false,-1);
    tracep->declBus(c+176,"w_id", false,-1, 3,0);
    tracep->declBit(c+182,"r_sel1", false,-1);
    tracep->declBit(c+183,"w_sel1", false,-1);
    tracep->declBit(c+178,"r_full", false,-1);
    tracep->declBus(c+179,"r_id", false,-1, 3,0);
    tracep->declBit(c+1044,"ren", false,-1);
    tracep->declBit(c+184,"rdata_REG", false,-1);
    tracep->declBus(c+185,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+186,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+187,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+188,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1045,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1044,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declBus(c+189,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1046,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1047,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declBus(c+992,"W0_data", false,-1, 31,0);
    tracep->declBus(c+993,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+118,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1002,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1175,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1004,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1005,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1007,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+120,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+121,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1008,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1180,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1009,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1181,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1182,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1183,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+124,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+118,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1002,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1175,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+1004,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1005,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1007,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+120,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+121,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1008,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1180,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1009,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1181,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1182,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1183,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+124,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+1048,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1049,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1013,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1014,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+992,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1015,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+130,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+121,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1050,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1051,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+48,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+124,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+135,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1033,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1034,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1035,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1036,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+992,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+175,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+176,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+177,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1040,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+48,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1041,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1042,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+178,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+179,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+181,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1052,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1053,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+190,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1054,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+48,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+519,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+191,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+192,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+193,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+39,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+989,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+43,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+991,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+992,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+513,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+46,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+47,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+995,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+48,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+514,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+51,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+52,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+130,"in_0_bvalid", false,-1);
    tracep->declBit(c+124,"in_0_rvalid", false,-1);
    tracep->declBit(c+1056,"in_0_wready", false,-1);
    tracep->declBit(c+1057,"in_0_awready", false,-1);
    tracep->declBit(c+1050,"in_0_arready", false,-1);
    tracep->declBit(c+1048,"anonIn_awready", false,-1);
    tracep->declBit(c+1058,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1059,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1060,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1061,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1062,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1063,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+194,"arSel", false,-1, 15,0);
    tracep->declBus(c+195,"awSel", false,-1, 15,0);
    tracep->declBus(c+196,"rSel", false,-1, 15,0);
    tracep->declBus(c+197,"bSel", false,-1, 15,0);
    tracep->declBit(c+198,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+199,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+200,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+201,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+202,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+203,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+204,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+205,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+206,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+207,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+208,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+209,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+210,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+211,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+212,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+213,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+214,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+215,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+216,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+217,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+218,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+219,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+220,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+221,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+222,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+223,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+224,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+225,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+226,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+227,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+228,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+229,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+230,"latched", false,-1);
    tracep->declBit(c+1064,"in_0_awvalid", false,-1);
    tracep->declBit(c+1065,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1066,"in_0_wvalid", false,-1);
    tracep->declBit(c+231,"idle_3", false,-1);
    tracep->declBit(c+232,"anyValid", false,-1);
    tracep->declBus(c+233,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+234,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+235,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+236,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+237,"prefixOR_1", false,-1);
    tracep->declBit(c+238,"winner_3_1", false,-1);
    tracep->declBit(c+239,"winner_3_2", false,-1);
    tracep->declBit(c+240,"state_3_0", false,-1);
    tracep->declBit(c+241,"state_3_1", false,-1);
    tracep->declBit(c+242,"state_3_2", false,-1);
    tracep->declBit(c+243,"muxState_3_0", false,-1);
    tracep->declBit(c+244,"muxState_3_1", false,-1);
    tracep->declBit(c+245,"muxState_3_2", false,-1);
    tracep->declBit(c+246,"idle_4", false,-1);
    tracep->declBit(c+247,"anyValid_1", false,-1);
    tracep->declBus(c+248,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+249,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+250,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+251,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+252,"winner_4_0", false,-1);
    tracep->declBit(c+253,"winner_4_2", false,-1);
    tracep->declBit(c+254,"state_4_0", false,-1);
    tracep->declBit(c+255,"state_4_2", false,-1);
    tracep->declBit(c+256,"muxState_4_0", false,-1);
    tracep->declBit(c+257,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1065,"io_enq_valid", false,-1);
    tracep->declBus(c+1067,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1068,"io_deq_ready", false,-1);
    tracep->declBit(c+1069,"io_deq_valid", false,-1);
    tracep->declBus(c+1070,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+259,"wrap", false,-1);
    tracep->declBit(c+260,"wrap_1", false,-1);
    tracep->declBit(c+261,"maybe_full", false,-1);
    tracep->declBit(c+262,"ptr_match", false,-1);
    tracep->declBit(c+263,"empty", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+1069,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1071,"do_deq", false,-1);
    tracep->declBit(c+1072,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+260,"R0_addr", false,-1);
    tracep->declBit(c+1174,"R0_en", false,-1);
    tracep->declBit(c+1119,"R0_clk", false,-1);
    tracep->declBus(c+265,"R0_data", false,-1, 2,0);
    tracep->declBit(c+259,"W0_addr", false,-1);
    tracep->declBit(c+1072,"W0_en", false,-1);
    tracep->declBit(c+1119,"W0_clk", false,-1);
    tracep->declBus(c+1067,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+266+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+1011,"auto_in_awready", false,-1);
    tracep->declBit(c+1012,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1013,"auto_in_wready", false,-1);
    tracep->declBit(c+1014,"auto_in_wvalid", false,-1);
    tracep->declBus(c+992,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_in_wlast", false,-1);
    tracep->declBit(c+1015,"auto_in_bready", false,-1);
    tracep->declBit(c+130,"auto_in_bvalid", false,-1);
    tracep->declBus(c+121,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1016,"auto_in_arready", false,-1);
    tracep->declBit(c+1017,"auto_in_arvalid", false,-1);
    tracep->declBus(c+48,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+133,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1010,"auto_in_rready", false,-1);
    tracep->declBit(c+124,"auto_in_rvalid", false,-1);
    tracep->declBus(c+125,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+135,"auto_in_rlast", false,-1);
    tracep->declBit(c+1048,"auto_out_awready", false,-1);
    tracep->declBit(c+1049,"auto_out_awvalid", false,-1);
    tracep->declBus(c+40,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+990,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+42,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1013,"auto_out_wready", false,-1);
    tracep->declBit(c+1014,"auto_out_wvalid", false,-1);
    tracep->declBus(c+992,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+993,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+994,"auto_out_wlast", false,-1);
    tracep->declBit(c+1015,"auto_out_bready", false,-1);
    tracep->declBit(c+130,"auto_out_bvalid", false,-1);
    tracep->declBus(c+121,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1050,"auto_out_arready", false,-1);
    tracep->declBit(c+1051,"auto_out_arvalid", false,-1);
    tracep->declBus(c+48,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_out_rready", false,-1);
    tracep->declBit(c+124,"auto_out_rvalid", false,-1);
    tracep->declBus(c+125,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+135,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+520,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+521,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBit(c+270,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->declBit(c+270,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+522,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+523,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+524,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+525,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+526,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+527,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+528,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+529,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+530,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+531,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+532,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+533,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+534,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+535,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+536,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+537,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+538,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+539,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+540,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+541,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+543,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+545,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+547,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+549,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+551,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+553,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+555,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+557,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+559,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+561,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+563,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+565,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+567,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+569,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+129,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+571,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+573,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+575,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+577,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+579,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+580,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+581,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+582,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+583,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+118,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1002,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1175,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1004,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1005,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1007,"auto_master_out_bready", false,-1);
    tracep->declBit(c+120,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+121,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1008,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1180,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1009,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1181,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1182,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1183,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"auto_master_out_rready", false,-1);
    tracep->declBit(c+124,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+125,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1164,"io_interrupt", false,-1);
    tracep->declBit(c+118,"io_master_awready", false,-1);
    tracep->declBit(c+1002,"io_master_awvalid", false,-1);
    tracep->declBus(c+1003,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1175,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1176,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1177,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1178,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"io_master_wready", false,-1);
    tracep->declBit(c+1004,"io_master_wvalid", false,-1);
    tracep->declBus(c+1005,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1179,"io_master_wlast", false,-1);
    tracep->declBit(c+1007,"io_master_bready", false,-1);
    tracep->declBit(c+120,"io_master_bvalid", false,-1);
    tracep->declBus(c+122,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+121,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+123,"io_master_arready", false,-1);
    tracep->declBit(c+1008,"io_master_arvalid", false,-1);
    tracep->declBus(c+1009,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1180,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1181,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1182,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1183,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1010,"io_master_rready", false,-1);
    tracep->declBit(c+124,"io_master_rvalid", false,-1);
    tracep->declBus(c+127,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+126,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+128,"io_master_rlast", false,-1);
    tracep->declBus(c+125,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1184,"io_slave_awready", false,-1);
    tracep->declBit(c+1164,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1185,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1186,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1187,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1188,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1189,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1190,"io_slave_wready", false,-1);
    tracep->declBit(c+1164,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1185,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1186,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"io_slave_wlast", false,-1);
    tracep->declBit(c+1164,"io_slave_bready", false,-1);
    tracep->declBit(c+1191,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1192,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1193,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1194,"io_slave_arready", false,-1);
    tracep->declBit(c+1164,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1185,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1186,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1187,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1188,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1189,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1164,"io_slave_rready", false,-1);
    tracep->declBit(c+1195,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1196,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1197,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1198,"io_slave_rlast", false,-1);
    tracep->declBus(c+1199,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+823,"pc", false,-1, 31,0);
    tracep->declBus(c+824,"instr", false,-1, 31,0);
    tracep->declBit(c+825,"if_ready", false,-1);
    tracep->declBit(c+826,"wb_valid", false,-1);
    tracep->declBit(c+827,"if_valid", false,-1);
    tracep->declBit(c+828,"id_ready", false,-1);
    tracep->declBit(c+829,"if_access_fault", false,-1);
    tracep->declBus(c+830,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+1200,"trap_pc", false,-1, 31,0);
    tracep->declBus(c+831,"ifu_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+832,"ifu_sram_arvalid", false,-1);
    tracep->declBit(c+1073,"ifu_sram_arready", false,-1);
    tracep->declBus(c+1074,"ifu_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1075,"ifu_sram_rvalid", false,-1);
    tracep->declBit(c+833,"ifu_sram_rready", false,-1);
    tracep->declBus(c+1076,"ifu_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+396,"ifu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+397,"ifu_sram_awvalid", false,-1);
    tracep->declBit(c+1201,"ifu_sram_awready", false,-1);
    tracep->declBus(c+398,"ifu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+399,"ifu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+400,"ifu_sram_wvalid", false,-1);
    tracep->declBit(c+1202,"ifu_sram_wready", false,-1);
    tracep->declBus(c+1203,"ifu_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1204,"ifu_sram_bvalid", false,-1);
    tracep->declBit(c+401,"ifu_sram_bready", false,-1);
    tracep->declBus(c+834,"opcode", false,-1, 6,0);
    tracep->declBus(c+835,"rs1", false,-1, 4,0);
    tracep->declBus(c+836,"rs2", false,-1, 4,0);
    tracep->declBus(c+837,"rd", false,-1, 4,0);
    tracep->declBus(c+838,"imm", false,-1, 31,0);
    tracep->declBus(c+839,"func3", false,-1, 2,0);
    tracep->declBus(c+840,"func7", false,-1, 6,0);
    tracep->declBit(c+841,"RegWrite", false,-1);
    tracep->declBit(c+842,"MemWrite", false,-1);
    tracep->declBit(c+843,"MemRead", false,-1);
    tracep->declBus(c+844,"alu_op", false,-1, 3,0);
    tracep->declBus(c+845,"MemLen", false,-1, 2,0);
    tracep->declBit(c+846,"id_valid", false,-1);
    tracep->declBit(c+847,"ex_ready", false,-1);
    tracep->declBit(c+1205,"reg_valid", false,-1);
    tracep->declBit(c+1206,"reg_ready", false,-1);
    tracep->declBus(c+848,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+849,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+850,"alu_result", false,-1, 31,0);
    tracep->declBit(c+851,"alu_zero", false,-1);
    tracep->declBit(c+852,"alu_less", false,-1);
    tracep->declBit(c+853,"ex_valid", false,-1);
    tracep->declBit(c+854,"mem_ready", false,-1);
    tracep->declBus(c+855,"data_out", false,-1, 31,0);
    tracep->declBit(c+856,"mem_valid", false,-1);
    tracep->declBit(c+857,"wb_ready", false,-1);
    tracep->declBit(c+858,"load_access_fault", false,-1);
    tracep->declBit(c+859,"store_access_fault", false,-1);
    tracep->declBus(c+860,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+861,"mem_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+862,"mem_sram_arvalid", false,-1);
    tracep->declBit(c+1077,"mem_sram_arready", false,-1);
    tracep->declBus(c+1078,"mem_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1079,"mem_sram_rvalid", false,-1);
    tracep->declBit(c+863,"mem_sram_rready", false,-1);
    tracep->declBus(c+1080,"mem_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+864,"mem_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+865,"mem_sram_awvalid", false,-1);
    tracep->declBit(c+1081,"mem_sram_awready", false,-1);
    tracep->declBus(c+866,"mem_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+867,"mem_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+868,"mem_sram_wvalid", false,-1);
    tracep->declBit(c+1082,"mem_sram_wready", false,-1);
    tracep->declBus(c+1083,"mem_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"mem_sram_bvalid", false,-1);
    tracep->declBit(c+869,"mem_sram_bready", false,-1);
    tracep->declBus(c+870,"wb_data", false,-1, 31,0);
    tracep->declBus(c+871,"jal_target", false,-1, 31,0);
    tracep->declBus(c+872,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+873,"is_jal", false,-1);
    tracep->declBit(c+874,"is_jalr", false,-1);
    tracep->declBit(c+875,"take_branch", false,-1);
    tracep->declBus(c+876,"branch_target", false,-1, 31,0);
    tracep->declBus(c+1207,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+1208,"RegWrite_wb", false,-1);
    tracep->declBit(c+1209,"wb_MemRead", false,-1);
    tracep->declBit(c+1210,"wb_MemWrite", false,-1);
    tracep->declBus(c+1211,"wb_MemLen", false,-1, 2,0);
    tracep->declBus(c+1212,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+1213,"wb_data_in", false,-1, 31,0);
    tracep->declBus(c+1214,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1215,"sram_arvalid", false,-1);
    tracep->declBit(c+402,"sram_arready", false,-1);
    tracep->declBus(c+403,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+404,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+405,"sram_rvalid", false,-1);
    tracep->declBit(c+1216,"sram_rready", false,-1);
    tracep->declBus(c+1217,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+406,"sram_awready", false,-1);
    tracep->declBit(c+1218,"sram_awvalid", false,-1);
    tracep->declBus(c+1219,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1220,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1221,"sram_wvalid", false,-1);
    tracep->declBit(c+407,"sram_wready", false,-1);
    tracep->declBus(c+408,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+409,"sram_bvalid", false,-1);
    tracep->declBit(c+1222,"sram_bready", false,-1);
    tracep->declBus(c+1223,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1224,"uart_arvalid", false,-1);
    tracep->declBit(c+410,"uart_arready", false,-1);
    tracep->declBus(c+411,"uart_rresp", false,-1, 1,0);
    tracep->declBus(c+412,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+413,"uart_rvalid", false,-1);
    tracep->declBit(c+1225,"uart_rready", false,-1);
    tracep->declBus(c+1226,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+414,"uart_awready", false,-1);
    tracep->declBit(c+1227,"uart_awvalid", false,-1);
    tracep->declBus(c+1228,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1229,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1230,"uart_wvalid", false,-1);
    tracep->declBit(c+415,"uart_wready", false,-1);
    tracep->declBus(c+416,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+417,"uart_bvalid", false,-1);
    tracep->declBit(c+1231,"uart_bready", false,-1);
    tracep->declBus(c+1085,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+1086,"clint_arvalid", false,-1);
    tracep->declBit(c+418,"clint_arready", false,-1);
    tracep->declBus(c+419,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+420,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+421,"clint_rvalid", false,-1);
    tracep->declBit(c+1087,"clint_rready", false,-1);
    tracep->declBus(c+1088,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+422,"clint_awready", false,-1);
    tracep->declBit(c+1089,"clint_awvalid", false,-1);
    tracep->declBus(c+1090,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1091,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1092,"clint_wvalid", false,-1);
    tracep->declBit(c+423,"clint_wready", false,-1);
    tracep->declBus(c+424,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+425,"clint_bvalid", false,-1);
    tracep->declBit(c+1093,"clint_bready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+831,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+832,"ifu_arvalid", false,-1);
    tracep->declBit(c+1073,"ifu_arready", false,-1);
    tracep->declBus(c+1074,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1076,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1075,"ifu_rvalid", false,-1);
    tracep->declBit(c+833,"ifu_rready", false,-1);
    tracep->declBus(c+861,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+862,"mem_arvalid", false,-1);
    tracep->declBit(c+1077,"mem_arready", false,-1);
    tracep->declBus(c+1078,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"mem_rresp", false,-1, 1,0);
    tracep->declBit(c+1079,"mem_rvalid", false,-1);
    tracep->declBit(c+863,"mem_rready", false,-1);
    tracep->declBus(c+864,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+865,"mem_awvalid", false,-1);
    tracep->declBit(c+1081,"mem_awready", false,-1);
    tracep->declBus(c+866,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+867,"mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+868,"mem_wvalid", false,-1);
    tracep->declBit(c+1082,"mem_wready", false,-1);
    tracep->declBus(c+1083,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"mem_bvalid", false,-1);
    tracep->declBit(c+869,"mem_bready", false,-1);
    tracep->declBus(c+1009,"io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+1008,"io_master_arvalid", false,-1);
    tracep->declBit(c+123,"io_master_arready", false,-1);
    tracep->declBus(c+126,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"io_master_rvalid", false,-1);
    tracep->declBit(c+1010,"io_master_rready", false,-1);
    tracep->declBus(c+1003,"io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+1002,"io_master_awvalid", false,-1);
    tracep->declBit(c+118,"io_master_awready", false,-1);
    tracep->declBus(c+1005,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1004,"io_master_wvalid", false,-1);
    tracep->declBit(c+119,"io_master_wready", false,-1);
    tracep->declBus(c+122,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+120,"io_master_bvalid", false,-1);
    tracep->declBit(c+1007,"io_master_bready", false,-1);
    tracep->declBus(c+1085,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+1086,"clint_arvalid", false,-1);
    tracep->declBit(c+418,"clint_arready", false,-1);
    tracep->declBus(c+420,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+419,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+421,"clint_rvalid", false,-1);
    tracep->declBit(c+1087,"clint_rready", false,-1);
    tracep->declBus(c+1088,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1089,"clint_awvalid", false,-1);
    tracep->declBit(c+422,"clint_awready", false,-1);
    tracep->declBus(c+1090,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1091,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1092,"clint_wvalid", false,-1);
    tracep->declBit(c+423,"clint_wready", false,-1);
    tracep->declBus(c+424,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+425,"clint_bvalid", false,-1);
    tracep->declBit(c+1093,"clint_bready", false,-1);
    tracep->declBus(c+1188,"NONE", false,-1, 2,0);
    tracep->declBus(c+1163,"IFU", false,-1, 2,0);
    tracep->declBus(c+1232,"MEM_READ", false,-1, 2,0);
    tracep->declBus(c+1233,"MEM_WRITE", false,-1, 2,0);
    tracep->declBus(c+1234,"ERROR", false,-1, 2,0);
    tracep->declBus(c+1235,"CLINT", false,-1, 1,0);
    tracep->declBus(c+1236,"MASTER", false,-1, 1,0);
    tracep->declBus(c+426,"current_master", false,-1, 2,0);
    tracep->declBus(c+1152,"next_master", false,-1, 2,0);
    tracep->declBus(c+1189,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1236,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+1237,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1238,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1238,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1239,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1240,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1085,"araddr", false,-1, 31,0);
    tracep->declBit(c+1086,"arvalid", false,-1);
    tracep->declBit(c+418,"arready", false,-1);
    tracep->declBus(c+420,"rdata", false,-1, 31,0);
    tracep->declBit(c+421,"rvalid", false,-1);
    tracep->declBit(c+1087,"rready", false,-1);
    tracep->declBus(c+419,"rresp", false,-1, 1,0);
    tracep->declBus(c+1088,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1089,"awvalid", false,-1);
    tracep->declBit(c+422,"awready", false,-1);
    tracep->declBus(c+1090,"wdata", false,-1, 31,0);
    tracep->declBus(c+1091,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1092,"wvalid", false,-1);
    tracep->declBit(c+423,"wready", false,-1);
    tracep->declBus(c+424,"bresp", false,-1, 1,0);
    tracep->declBit(c+425,"bvalid", false,-1);
    tracep->declBit(c+1093,"bready", false,-1);
    tracep->declBus(c+427,"clint_state", false,-1, 31,0);
    tracep->declBus(c+428,"next_clint_state", false,-1, 31,0);
    tracep->declBus(c+429,"LFSR", false,-1, 31,0);
    tracep->declBus(c+430,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+431,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+432,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+433,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+434,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+1094,"addr_valid", false,-1);
    tracep->declQuad(c+435,"mtime", false,-1, 63,0);
    tracep->declBus(c+437,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+438,"mtime_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+846,"id_valid", false,-1);
    tracep->declBit(c+847,"ex_ready", false,-1);
    tracep->declBus(c+834,"opcode", false,-1, 6,0);
    tracep->declBus(c+848,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+849,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+838,"imm", false,-1, 31,0);
    tracep->declBus(c+844,"alu_op", false,-1, 3,0);
    tracep->declBit(c+854,"mem_ready", false,-1);
    tracep->declBit(c+853,"ex_valid", false,-1);
    tracep->declBus(c+850,"alu_result", false,-1, 31,0);
    tracep->declBit(c+851,"alu_zero", false,-1);
    tracep->declBit(c+852,"alu_less", false,-1);
    tracep->declBus(c+877,"state", false,-1, 31,0);
    tracep->declBus(c+878,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+824,"instr", false,-1, 31,0);
    tracep->declBit(c+847,"ex_ready", false,-1);
    tracep->declBit(c+827,"if_valid", false,-1);
    tracep->declBit(c+828,"id_ready", false,-1);
    tracep->declBit(c+846,"id_valid", false,-1);
    tracep->declBus(c+834,"opcode", false,-1, 6,0);
    tracep->declBus(c+835,"rs1", false,-1, 4,0);
    tracep->declBus(c+836,"rs2", false,-1, 4,0);
    tracep->declBus(c+837,"rd", false,-1, 4,0);
    tracep->declBus(c+838,"imm", false,-1, 31,0);
    tracep->declBus(c+839,"func3", false,-1, 2,0);
    tracep->declBus(c+840,"func7", false,-1, 6,0);
    tracep->declBit(c+841,"RegWrite", false,-1);
    tracep->declBit(c+842,"MemWrite", false,-1);
    tracep->declBit(c+843,"MemRead", false,-1);
    tracep->declBus(c+844,"alu_op", false,-1, 3,0);
    tracep->declBus(c+845,"MemLen", false,-1, 2,0);
    tracep->declBus(c+879,"state", false,-1, 31,0);
    tracep->declBus(c+880,"next_state", false,-1, 31,0);
    tracep->declBus(c+881,"immI", false,-1, 31,0);
    tracep->declBus(c+882,"immU", false,-1, 31,0);
    tracep->declBus(c+883,"immS", false,-1, 31,0);
    tracep->declBus(c+884,"immB", false,-1, 31,0);
    tracep->declBus(c+885,"immJ", false,-1, 31,0);
    tracep->declBus(c+1185,"immR", false,-1, 31,0);
    tracep->declBus(c+886,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+876,"branch_target", false,-1, 31,0);
    tracep->declBit(c+887,"pc_src", false,-1);
    tracep->declBit(c+828,"id_ready", false,-1);
    tracep->declBit(c+826,"wb_valid", false,-1);
    tracep->declBit(c+825,"if_ready", false,-1);
    tracep->declBit(c+827,"if_valid", false,-1);
    tracep->declBus(c+823,"pc", false,-1, 31,0);
    tracep->declBus(c+824,"instr", false,-1, 31,0);
    tracep->declBit(c+829,"if_access_fault", false,-1);
    tracep->declBus(c+830,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+831,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+832,"sram_arvalid", false,-1);
    tracep->declBit(c+1073,"sram_arready", false,-1);
    tracep->declBus(c+1074,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1075,"sram_rvalid", false,-1);
    tracep->declBit(c+833,"sram_rready", false,-1);
    tracep->declBus(c+1076,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+396,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+397,"sram_awvalid", false,-1);
    tracep->declBit(c+1201,"sram_awready", false,-1);
    tracep->declBus(c+398,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+399,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+400,"sram_wvalid", false,-1);
    tracep->declBit(c+1202,"sram_wready", false,-1);
    tracep->declBus(c+1203,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1204,"sram_bvalid", false,-1);
    tracep->declBit(c+401,"sram_bready", false,-1);
    tracep->declBus(c+888,"state", false,-1, 31,0);
    tracep->declBus(c+889,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+853,"ex_valid", false,-1);
    tracep->declBit(c+854,"mem_ready", false,-1);
    tracep->declBit(c+857,"wb_ready", false,-1);
    tracep->declBit(c+856,"mem_valid", false,-1);
    tracep->declBit(c+843,"MemRead", false,-1);
    tracep->declBit(c+842,"MemWrite", false,-1);
    tracep->declBus(c+890,"addr", false,-1, 31,0);
    tracep->declBus(c+849,"data_in", false,-1, 31,0);
    tracep->declBus(c+845,"MemLen", false,-1, 2,0);
    tracep->declBus(c+855,"data_out", false,-1, 31,0);
    tracep->declBit(c+858,"load_access_fault", false,-1);
    tracep->declBit(c+859,"store_access_fault", false,-1);
    tracep->declBus(c+860,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+861,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+862,"sram_arvalid", false,-1);
    tracep->declBit(c+1077,"sram_arready", false,-1);
    tracep->declBus(c+1078,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1079,"sram_rvalid", false,-1);
    tracep->declBit(c+863,"sram_rready", false,-1);
    tracep->declBus(c+1080,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+864,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+865,"sram_awvalid", false,-1);
    tracep->declBit(c+1081,"sram_awready", false,-1);
    tracep->declBus(c+866,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+867,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+868,"sram_wvalid", false,-1);
    tracep->declBit(c+1082,"sram_wready", false,-1);
    tracep->declBus(c+1083,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"sram_bvalid", false,-1);
    tracep->declBit(c+869,"sram_bready", false,-1);
    tracep->declBus(c+891,"state", false,-1, 31,0);
    tracep->declBus(c+892,"next_state", false,-1, 31,0);
    tracep->declBus(c+893,"delay", false,-1, 1,0);
    tracep->declBus(c+1241,"DELAY_CYCLES", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+1238,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1238,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1239,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1240,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1214,"araddr", false,-1, 31,0);
    tracep->declBit(c+1215,"arvalid", false,-1);
    tracep->declBit(c+402,"arready", false,-1);
    tracep->declBus(c+404,"rdata", false,-1, 31,0);
    tracep->declBit(c+405,"rvalid", false,-1);
    tracep->declBit(c+1216,"rready", false,-1);
    tracep->declBus(c+403,"rresp", false,-1, 1,0);
    tracep->declBus(c+1217,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1218,"awvalid", false,-1);
    tracep->declBit(c+406,"awready", false,-1);
    tracep->declBus(c+1219,"wdata", false,-1, 31,0);
    tracep->declBus(c+1220,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1221,"wvalid", false,-1);
    tracep->declBit(c+407,"wready", false,-1);
    tracep->declBus(c+408,"bresp", false,-1, 1,0);
    tracep->declBit(c+409,"bvalid", false,-1);
    tracep->declBit(c+1222,"bready", false,-1);
    tracep->declBus(c+439,"sram_state", false,-1, 31,0);
    tracep->declBus(c+440,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+441,"LFSR", false,-1, 31,0);
    tracep->declBus(c+1242,"random_delay", false,-1, 31,0);
    tracep->declBus(c+442,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+443,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+444,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+445,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+446,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+1,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBus(c+1238,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1238,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1239,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1240,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1223,"araddr", false,-1, 31,0);
    tracep->declBit(c+1224,"arvalid", false,-1);
    tracep->declBit(c+410,"arready", false,-1);
    tracep->declBus(c+412,"rdata", false,-1, 31,0);
    tracep->declBit(c+413,"rvalid", false,-1);
    tracep->declBit(c+1225,"rready", false,-1);
    tracep->declBus(c+411,"rresp", false,-1, 1,0);
    tracep->declBus(c+1226,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1227,"awvalid", false,-1);
    tracep->declBit(c+414,"awready", false,-1);
    tracep->declBus(c+1228,"wdata", false,-1, 31,0);
    tracep->declBus(c+1229,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1230,"wvalid", false,-1);
    tracep->declBit(c+415,"wready", false,-1);
    tracep->declBus(c+416,"bresp", false,-1, 1,0);
    tracep->declBit(c+417,"bvalid", false,-1);
    tracep->declBit(c+1231,"bready", false,-1);
    tracep->declBus(c+447,"uart_state", false,-1, 31,0);
    tracep->declBus(c+448,"next_uart_state", false,-1, 31,0);
    tracep->declBus(c+449,"LFSR", false,-1, 31,0);
    tracep->declBus(c+450,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+451,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+452,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+453,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+454,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+2,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+856,"mem_valid", false,-1);
    tracep->declBit(c+825,"if_ready", false,-1);
    tracep->declBus(c+834,"opcode", false,-1, 6,0);
    tracep->declBus(c+839,"func3", false,-1, 2,0);
    tracep->declBus(c+837,"id_rd", false,-1, 4,0);
    tracep->declBit(c+841,"id_RegWrite", false,-1);
    tracep->declBus(c+835,"rs1", false,-1, 4,0);
    tracep->declBus(c+836,"rs2", false,-1, 4,0);
    tracep->declBus(c+823,"pc", false,-1, 31,0);
    tracep->declBus(c+838,"imm", false,-1, 31,0);
    tracep->declBit(c+851,"alu_zero", false,-1);
    tracep->declBit(c+852,"alu_less", false,-1);
    tracep->declBus(c+850,"alu_result", false,-1, 31,0);
    tracep->declBus(c+855,"data_out", false,-1, 31,0);
    tracep->declBus(c+848,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+849,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+857,"wb_ready", false,-1);
    tracep->declBit(c+826,"wb_valid", false,-1);
    tracep->declBus(c+871,"jal_target", false,-1, 31,0);
    tracep->declBus(c+872,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+873,"is_jal", false,-1);
    tracep->declBit(c+874,"is_jalr", false,-1);
    tracep->declBit(c+875,"take_branch", false,-1);
    tracep->declBus(c+870,"wb_data", false,-1, 31,0);
    tracep->declBus(c+894,"state", false,-1, 31,0);
    tracep->declBus(c+895,"next_state", false,-1, 31,0);
    tracep->declBit(c+896,"RegWrite_wb", false,-1);
    tracep->declBus(c+897,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+898,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+899+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+931,"i", false,-1, 31,0);
    tracep->declBus(c+1243,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"io_d", false,-1);
    tracep->declBit(c+455,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"io_d", false,-1);
    tracep->declBit(c+455,"io_q", false,-1);
    tracep->declBit(c+455,"sync_0", false,-1);
    tracep->declBit(c+456,"sync_1", false,-1);
    tracep->declBit(c+457,"sync_2", false,-1);
    tracep->declBit(c+458,"sync_3", false,-1);
    tracep->declBit(c+459,"sync_4", false,-1);
    tracep->declBit(c+460,"sync_5", false,-1);
    tracep->declBit(c+461,"sync_6", false,-1);
    tracep->declBit(c+462,"sync_7", false,-1);
    tracep->declBit(c+463,"sync_8", false,-1);
    tracep->declBit(c+464,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+509,"auto_in_psel", false,-1);
    tracep->declBit(c+510,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+944,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_in_pready", false,-1);
    tracep->declBit(c+1172,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1121,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1122,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1124,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+960,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+509,"in_psel", false,-1);
    tracep->declBit(c+510,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"in_pready", false,-1);
    tracep->declBus(c+1173,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1172,"in_pslverr", false,-1);
    tracep->declBus(c+1121,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1122,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1124,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+507,"auto_in_psel", false,-1);
    tracep->declBit(c+508,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+944,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"auto_in_pready", false,-1);
    tracep->declBit(c+1169,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1170,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1131,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1132,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+960,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+507,"in_psel", false,-1);
    tracep->declBit(c+508,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"in_pready", false,-1);
    tracep->declBus(c+1170,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1169,"in_pslverr", false,-1);
    tracep->declBit(c+1131,"ps2_clk", false,-1);
    tracep->declBit(c+1132,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+1052,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1053,"auto_in_wvalid", false,-1);
    tracep->declBit(c+190,"auto_in_arready", false,-1);
    tracep->declBit(c+1054,"auto_in_arvalid", false,-1);
    tracep->declBus(c+48,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+519,"auto_in_rready", false,-1);
    tracep->declBit(c+191,"auto_in_rvalid", false,-1);
    tracep->declBus(c+192,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+193,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+191,"state", false,-1);
    tracep->declBus(c+193,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+192,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1095,"raddr", false,-1, 31,0);
    tracep->declBit(c+1096,"ren", false,-1);
    tracep->declBus(c+1097,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+945,"auto_in_psel", false,-1);
    tracep->declBit(c+511,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+11,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1143,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1144,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1098,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+938,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+945,"in_psel", false,-1);
    tracep->declBit(c+511,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"in_pready", false,-1);
    tracep->declBus(c+11,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+1143,"qspi_sck", false,-1);
    tracep->declBit(c+1144,"qspi_ce_n", false,-1);
    tracep->declBus(c+1098,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1098,"din", false,-1, 3,0);
    tracep->declBus(c+1105,"dout", false,-1, 3,0);
    tracep->declBus(c+1106,"douten", false,-1, 3,0);
    tracep->declBit(c+1153,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1119,"clk_i", false,-1);
    tracep->declBit(c+1120,"rst_i", false,-1);
    tracep->declBus(c+938,"adr_i", false,-1, 31,0);
    tracep->declBus(c+940,"dat_i", false,-1, 31,0);
    tracep->declBus(c+11,"dat_o", false,-1, 31,0);
    tracep->declBus(c+941,"sel_i", false,-1, 3,0);
    tracep->declBit(c+945,"cyc_i", false,-1);
    tracep->declBit(c+945,"stb_i", false,-1);
    tracep->declBit(c+1153,"ack_o", false,-1);
    tracep->declBit(c+939,"we_i", false,-1);
    tracep->declBit(c+1143,"sck", false,-1);
    tracep->declBit(c+1144,"ce_n", false,-1);
    tracep->declBus(c+1098,"din", false,-1, 3,0);
    tracep->declBus(c+1105,"dout", false,-1, 3,0);
    tracep->declBus(c+1106,"douten", false,-1, 3,0);
    tracep->declBus(c+1244,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1245,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+599,"mr_sck", false,-1);
    tracep->declBit(c+600,"mr_ce_n", false,-1);
    tracep->declBus(c+1098,"mr_din", false,-1, 3,0);
    tracep->declBus(c+601,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+602,"mr_doe", false,-1);
    tracep->declBit(c+603,"mw_sck", false,-1);
    tracep->declBit(c+604,"mw_ce_n", false,-1);
    tracep->declBus(c+1098,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1107,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+605,"mw_doe", false,-1);
    tracep->declBit(c+1108,"mr_rd", false,-1);
    tracep->declBit(c+606,"mr_done", false,-1);
    tracep->declBit(c+1109,"mw_wr", false,-1);
    tracep->declBit(c+1110,"mw_done", false,-1);
    tracep->declBit(c+945,"wb_valid", false,-1);
    tracep->declBit(c+961,"wb_we", false,-1);
    tracep->declBit(c+962,"wb_re", false,-1);
    tracep->declBit(c+607,"state", false,-1);
    tracep->declBit(c+1111,"nstate", false,-1);
    tracep->declBus(c+963,"size", false,-1, 2,0);
    tracep->declBus(c+964,"byte0", false,-1, 7,0);
    tracep->declBus(c+965,"byte1", false,-1, 7,0);
    tracep->declBus(c+966,"byte2", false,-1, 7,0);
    tracep->declBus(c+967,"byte3", false,-1, 7,0);
    tracep->declBus(c+968,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1154,"rst_n", false,-1);
    tracep->declBus(c+969,"addr", false,-1, 23,0);
    tracep->declBit(c+1108,"rd", false,-1);
    tracep->declBus(c+1234,"size", false,-1, 2,0);
    tracep->declBit(c+606,"done", false,-1);
    tracep->declBus(c+11,"line", false,-1, 31,0);
    tracep->declBit(c+599,"sck", false,-1);
    tracep->declBit(c+600,"ce_n", false,-1);
    tracep->declBus(c+1098,"din", false,-1, 3,0);
    tracep->declBus(c+601,"dout", false,-1, 3,0);
    tracep->declBit(c+602,"douten", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1245,"READ", false,-1, 0,0);
    tracep->declBus(c+1246,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+608,"state", false,-1);
    tracep->declBit(c+1112,"nstate", false,-1);
    tracep->declBus(c+609,"counter", false,-1, 7,0);
    tracep->declBus(c+610,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+465+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1247,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+611,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1154,"rst_n", false,-1);
    tracep->declBus(c+970,"addr", false,-1, 23,0);
    tracep->declBus(c+968,"line", false,-1, 31,0);
    tracep->declBus(c+963,"size", false,-1, 2,0);
    tracep->declBit(c+1109,"wr", false,-1);
    tracep->declBit(c+1110,"done", false,-1);
    tracep->declBit(c+603,"sck", false,-1);
    tracep->declBit(c+604,"ce_n", false,-1);
    tracep->declBus(c+1098,"din", false,-1, 3,0);
    tracep->declBus(c+1107,"dout", false,-1, 3,0);
    tracep->declBit(c+605,"douten", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1245,"WRITE", false,-1, 0,0);
    tracep->declBus(c+971,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+612,"state", false,-1);
    tracep->declBit(c+1113,"nstate", false,-1);
    tracep->declBus(c+613,"counter", false,-1, 7,0);
    tracep->declBus(c+614,"saddr", false,-1, 23,0);
    tracep->declBus(c+1248,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+503,"auto_in_psel", false,-1);
    tracep->declBit(c+504,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+938,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+595,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+596,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+586,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+587,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+588,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+589,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+590,"sdram_bundle_we", false,-1);
    tracep->declBus(c+591,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+592,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+593,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+594,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+938,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+503,"in_psel", false,-1);
    tracep->declBit(c+504,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+595,"in_pready", false,-1);
    tracep->declBus(c+596,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+1145,"sdram_clk", false,-1);
    tracep->declBit(c+586,"sdram_cke", false,-1);
    tracep->declBit(c+587,"sdram_cs", false,-1);
    tracep->declBit(c+588,"sdram_ras", false,-1);
    tracep->declBit(c+589,"sdram_cas", false,-1);
    tracep->declBit(c+590,"sdram_we", false,-1);
    tracep->declBus(c+591,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+592,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+593,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+594,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+615,"sdram_dout_en", false,-1);
    tracep->declBus(c+616,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+469,"state", false,-1, 1,0);
    tracep->declBit(c+617,"req_accept", false,-1);
    tracep->declBit(c+972,"is_read", false,-1);
    tracep->declBit(c+973,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1119,"clk_i", false,-1);
    tracep->declBit(c+1120,"rst_i", false,-1);
    tracep->declBus(c+974,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+972,"inport_rd_i", false,-1);
    tracep->declBus(c+1187,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+938,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+940,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+594,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+617,"inport_accept_o", false,-1);
    tracep->declBit(c+595,"inport_ack_o", false,-1);
    tracep->declBit(c+1164,"inport_error_o", false,-1);
    tracep->declBus(c+596,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1145,"sdram_clk_o", false,-1);
    tracep->declBit(c+586,"sdram_cke_o", false,-1);
    tracep->declBit(c+587,"sdram_cs_o", false,-1);
    tracep->declBit(c+588,"sdram_ras_o", false,-1);
    tracep->declBit(c+589,"sdram_cas_o", false,-1);
    tracep->declBit(c+590,"sdram_we_o", false,-1);
    tracep->declBus(c+593,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+591,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+592,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+616,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+615,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1249,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1250,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1251,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1239,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1253,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1254,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1255,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1256,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1239,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1257,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1258,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1259,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1260,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1261,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1262,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1263,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1186,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1264,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1239,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1186,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1263,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1262,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1258,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1260,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1259,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1261,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1257,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1265,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1266,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1267,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1267,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1268,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1267,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1269,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+938,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+974,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+972,"ram_rd_w", false,-1);
    tracep->declBit(c+617,"ram_accept_w", false,-1);
    tracep->declBus(c+940,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+596,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+595,"ram_ack_w", false,-1);
    tracep->declBit(c+975,"ram_req_w", false,-1);
    tracep->declBus(c+618,"command_q", false,-1, 3,0);
    tracep->declBus(c+591,"addr_q", false,-1, 12,0);
    tracep->declBus(c+616,"data_q", false,-1, 15,0);
    tracep->declBit(c+619,"data_rd_en_q", false,-1);
    tracep->declBus(c+593,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+586,"cke_q", false,-1);
    tracep->declBus(c+592,"bank_q", false,-1, 1,0);
    tracep->declBus(c+620,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+621,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+594,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+622,"refresh_q", false,-1);
    tracep->declBus(c+623,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+624+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+628,"state_q", false,-1, 3,0);
    tracep->declBus(c+1114,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1115,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+629,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+630,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+976,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+977,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+978,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1239,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+631,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1116,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1270,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+632,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+633,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+634,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+635,"idx", false,-1, 31,0);
    tracep->declBus(c+636,"rd_q", false,-1, 3,0);
    tracep->declBit(c+595,"ack_q", false,-1);
    tracep->declArray(c+637,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+949,"auto_in_psel", false,-1);
    tracep->declBit(c+950,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+943,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+598,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+584,"spi_bundle_sck", false,-1);
    tracep->declBus(c+585,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1141,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1142,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1271,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1272,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1273,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+949,"in_psel", false,-1);
    tracep->declBit(c+950,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+597,"in_pready", false,-1);
    tracep->declBus(c+598,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+584,"spi_sck", false,-1);
    tracep->declBus(c+585,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1141,"spi_mosi", false,-1);
    tracep->declBit(c+1142,"spi_miso", false,-1);
    tracep->declBit(c+640,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1240,"Tp", false,-1, 31,0);
    tracep->declBit(c+1119,"wb_clk_i", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBus(c+980,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+940,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+598,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+941,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+939,"wb_we_i", false,-1);
    tracep->declBit(c+949,"wb_stb_i", false,-1);
    tracep->declBit(c+950,"wb_cyc_i", false,-1);
    tracep->declBit(c+597,"wb_ack_o", false,-1);
    tracep->declBit(c+1164,"wb_err_o", false,-1);
    tracep->declBit(c+640,"wb_int_o", false,-1);
    tracep->declBus(c+585,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+584,"sclk_pad_o", false,-1);
    tracep->declBit(c+1141,"mosi_pad_o", false,-1);
    tracep->declBit(c+1142,"miso_pad_i", false,-1);
    tracep->declBus(c+641,"divider", false,-1, 15,0);
    tracep->declBus(c+642,"ctrl", false,-1, 13,0);
    tracep->declBus(c+643,"ss", false,-1, 7,0);
    tracep->declBus(c+1117,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+644,"rx", false,-1, 127,0);
    tracep->declBit(c+648,"rx_negedge", false,-1);
    tracep->declBit(c+649,"tx_negedge", false,-1);
    tracep->declBus(c+650,"char_len", false,-1, 6,0);
    tracep->declBit(c+651,"go", false,-1);
    tracep->declBit(c+652,"lsb", false,-1);
    tracep->declBit(c+653,"ie", false,-1);
    tracep->declBit(c+654,"ass", false,-1);
    tracep->declBit(c+981,"spi_divider_sel", false,-1);
    tracep->declBit(c+982,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+983,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+984,"spi_ss_sel", false,-1);
    tracep->declBit(c+655,"tip", false,-1);
    tracep->declBit(c+656,"pos_edge", false,-1);
    tracep->declBit(c+657,"neg_edge", false,-1);
    tracep->declBit(c+658,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1240,"Tp", false,-1, 31,0);
    tracep->declBit(c+1119,"clk_in", false,-1);
    tracep->declBit(c+1120,"rst", false,-1);
    tracep->declBit(c+655,"enable", false,-1);
    tracep->declBit(c+651,"go", false,-1);
    tracep->declBit(c+658,"last_clk", false,-1);
    tracep->declBus(c+641,"divider", false,-1, 15,0);
    tracep->declBit(c+584,"clk_out", false,-1);
    tracep->declBit(c+656,"pos_edge", false,-1);
    tracep->declBit(c+657,"neg_edge", false,-1);
    tracep->declBus(c+659,"cnt", false,-1, 15,0);
    tracep->declBit(c+660,"cnt_zero", false,-1);
    tracep->declBit(c+661,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1240,"Tp", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"rst", false,-1);
    tracep->declBus(c+985,"latch", false,-1, 3,0);
    tracep->declBus(c+941,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+650,"len", false,-1, 6,0);
    tracep->declBit(c+652,"lsb", false,-1);
    tracep->declBit(c+651,"go", false,-1);
    tracep->declBit(c+656,"pos_edge", false,-1);
    tracep->declBit(c+657,"neg_edge", false,-1);
    tracep->declBit(c+648,"rx_negedge", false,-1);
    tracep->declBit(c+649,"tx_negedge", false,-1);
    tracep->declBit(c+655,"tip", false,-1);
    tracep->declBit(c+658,"last", false,-1);
    tracep->declBus(c+940,"p_in", false,-1, 31,0);
    tracep->declArray(c+644,"p_out", false,-1, 127,0);
    tracep->declBit(c+584,"s_clk", false,-1);
    tracep->declBit(c+1142,"s_in", false,-1);
    tracep->declBit(c+1141,"s_out", false,-1);
    tracep->declBus(c+662,"cnt", false,-1, 7,0);
    tracep->declArray(c+644,"data", false,-1, 127,0);
    tracep->declBus(c+663,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+664,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+665,"rx_clk", false,-1);
    tracep->declBit(c+666,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+946,"auto_in_psel", false,-1);
    tracep->declBit(c+947,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+944,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+948,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1147,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1139,"uart_rx", false,-1);
    tracep->declBit(c+1140,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+946,"in_psel", false,-1);
    tracep->declBit(c+947,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pready", false,-1);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBus(c+960,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1139,"uart_rx", false,-1);
    tracep->declBit(c+1140,"uart_tx", false,-1);
    tracep->declBit(c+667,"rtsn", false,-1);
    tracep->declBit(c+1164,"ctsn", false,-1);
    tracep->declBit(c+668,"dtr_pad_o", false,-1);
    tracep->declBit(c+1164,"dsr_pad_i", false,-1);
    tracep->declBit(c+1164,"ri_pad_i", false,-1);
    tracep->declBit(c+1164,"dcd_pad_i", false,-1);
    tracep->declBit(c+669,"interrupt", false,-1);
    tracep->declBit(c+1155,"reg_we", false,-1);
    tracep->declBit(c+1156,"reg_re", false,-1);
    tracep->declBus(c+986,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+987,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+470,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1118,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+670,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBus(c+986,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+988,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1118,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1155,"wb_we_i", false,-1);
    tracep->declBit(c+1156,"wb_re_i", false,-1);
    tracep->declBit(c+1140,"stx_pad_o", false,-1);
    tracep->declBit(c+1139,"srx_pad_i", false,-1);
    tracep->declBus(c+1265,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+670,"rts_pad_o", false,-1);
    tracep->declBit(c+668,"dtr_pad_o", false,-1);
    tracep->declBit(c+669,"int_o", false,-1);
    tracep->declBit(c+671,"enable", false,-1);
    tracep->declBit(c+672,"srx_pad", false,-1);
    tracep->declBus(c+673,"ier", false,-1, 3,0);
    tracep->declBus(c+674,"iir", false,-1, 3,0);
    tracep->declBus(c+675,"fcr", false,-1, 1,0);
    tracep->declBus(c+676,"mcr", false,-1, 4,0);
    tracep->declBus(c+677,"lcr", false,-1, 7,0);
    tracep->declBus(c+678,"msr", false,-1, 7,0);
    tracep->declBus(c+679,"dl", false,-1, 15,0);
    tracep->declBus(c+680,"scratch", false,-1, 7,0);
    tracep->declBit(c+681,"start_dlc", false,-1);
    tracep->declBit(c+682,"lsr_mask_d", false,-1);
    tracep->declBit(c+683,"msi_reset", false,-1);
    tracep->declBus(c+684,"dlc", false,-1, 15,0);
    tracep->declBus(c+685,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+686,"rx_reset", false,-1);
    tracep->declBit(c+687,"tx_reset", false,-1);
    tracep->declBit(c+688,"dlab", false,-1);
    tracep->declBit(c+1174,"cts_pad_i", false,-1);
    tracep->declBit(c+1164,"dsr_pad_i", false,-1);
    tracep->declBit(c+1164,"ri_pad_i", false,-1);
    tracep->declBit(c+1164,"dcd_pad_i", false,-1);
    tracep->declBit(c+689,"loopback", false,-1);
    tracep->declBit(c+1164,"cts", false,-1);
    tracep->declBit(c+1174,"dsr", false,-1);
    tracep->declBit(c+1174,"ri", false,-1);
    tracep->declBit(c+1174,"dcd", false,-1);
    tracep->declBit(c+690,"cts_c", false,-1);
    tracep->declBit(c+691,"dsr_c", false,-1);
    tracep->declBit(c+692,"ri_c", false,-1);
    tracep->declBit(c+693,"dcd_c", false,-1);
    tracep->declBus(c+694,"lsr", false,-1, 7,0);
    tracep->declBit(c+695,"lsr0", false,-1);
    tracep->declBit(c+696,"lsr1", false,-1);
    tracep->declBit(c+697,"lsr2", false,-1);
    tracep->declBit(c+698,"lsr3", false,-1);
    tracep->declBit(c+699,"lsr4", false,-1);
    tracep->declBit(c+700,"lsr5", false,-1);
    tracep->declBit(c+701,"lsr6", false,-1);
    tracep->declBit(c+702,"lsr7", false,-1);
    tracep->declBit(c+703,"lsr0r", false,-1);
    tracep->declBit(c+704,"lsr1r", false,-1);
    tracep->declBit(c+705,"lsr2r", false,-1);
    tracep->declBit(c+706,"lsr3r", false,-1);
    tracep->declBit(c+707,"lsr4r", false,-1);
    tracep->declBit(c+708,"lsr5r", false,-1);
    tracep->declBit(c+709,"lsr6r", false,-1);
    tracep->declBit(c+710,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+711,"rls_int", false,-1);
    tracep->declBit(c+712,"rda_int", false,-1);
    tracep->declBit(c+713,"ti_int", false,-1);
    tracep->declBit(c+714,"thre_int", false,-1);
    tracep->declBit(c+715,"ms_int", false,-1);
    tracep->declBit(c+716,"tf_push", false,-1);
    tracep->declBit(c+717,"rf_pop", false,-1);
    tracep->declBus(c+1157,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+718,"rf_error_bit", false,-1);
    tracep->declBit(c+696,"rf_overrun", false,-1);
    tracep->declBit(c+719,"rf_push_pulse", false,-1);
    tracep->declBus(c+720,"rf_count", false,-1, 4,0);
    tracep->declBus(c+721,"tf_count", false,-1, 4,0);
    tracep->declBus(c+722,"tstate", false,-1, 2,0);
    tracep->declBus(c+723,"rstate", false,-1, 3,0);
    tracep->declBus(c+724,"counter_t", false,-1, 9,0);
    tracep->declBit(c+725,"thre_set_en", false,-1);
    tracep->declBus(c+726,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+727,"block_value", false,-1, 7,0);
    tracep->declBit(c+728,"serial_out", false,-1);
    tracep->declBit(c+729,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+730,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+731,"lsr0_d", false,-1);
    tracep->declBit(c+732,"lsr1_d", false,-1);
    tracep->declBit(c+733,"lsr2_d", false,-1);
    tracep->declBit(c+734,"lsr3_d", false,-1);
    tracep->declBit(c+735,"lsr4_d", false,-1);
    tracep->declBit(c+736,"lsr5_d", false,-1);
    tracep->declBit(c+737,"lsr6_d", false,-1);
    tracep->declBit(c+738,"lsr7_d", false,-1);
    tracep->declBit(c+739,"rls_int_d", false,-1);
    tracep->declBit(c+740,"thre_int_d", false,-1);
    tracep->declBit(c+741,"ms_int_d", false,-1);
    tracep->declBit(c+742,"ti_int_d", false,-1);
    tracep->declBit(c+743,"rda_int_d", false,-1);
    tracep->declBit(c+744,"rls_int_rise", false,-1);
    tracep->declBit(c+745,"thre_int_rise", false,-1);
    tracep->declBit(c+746,"ms_int_rise", false,-1);
    tracep->declBit(c+747,"ti_int_rise", false,-1);
    tracep->declBit(c+748,"rda_int_rise", false,-1);
    tracep->declBit(c+749,"rls_int_pnd", false,-1);
    tracep->declBit(c+750,"rda_int_pnd", false,-1);
    tracep->declBit(c+751,"thre_int_pnd", false,-1);
    tracep->declBit(c+752,"ms_int_pnd", false,-1);
    tracep->declBit(c+753,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1240,"Tp", false,-1, 31,0);
    tracep->declBus(c+1240,"width", false,-1, 31,0);
    tracep->declBus(c+1245,"init_value", false,-1, 0,0);
    tracep->declBit(c+1120,"rst_i", false,-1);
    tracep->declBit(c+1119,"clk_i", false,-1);
    tracep->declBit(c+1164,"stage1_rst_i", false,-1);
    tracep->declBit(c+1174,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1139,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+672,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+754,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBus(c+677,"lcr", false,-1, 7,0);
    tracep->declBit(c+717,"rf_pop", false,-1);
    tracep->declBit(c+729,"srx_pad_i", false,-1);
    tracep->declBit(c+671,"enable", false,-1);
    tracep->declBit(c+686,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+724,"counter_t", false,-1, 9,0);
    tracep->declBus(c+720,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1157,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+696,"rf_overrun", false,-1);
    tracep->declBit(c+718,"rf_error_bit", false,-1);
    tracep->declBus(c+723,"rstate", false,-1, 3,0);
    tracep->declBit(c+719,"rf_push_pulse", false,-1);
    tracep->declBus(c+755,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+756,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+757,"rshift", false,-1, 7,0);
    tracep->declBit(c+758,"rparity", false,-1);
    tracep->declBit(c+759,"rparity_error", false,-1);
    tracep->declBit(c+760,"rframing_error", false,-1);
    tracep->declBit(c+761,"rbit_in", false,-1);
    tracep->declBit(c+762,"rparity_xor", false,-1);
    tracep->declBus(c+763,"counter_b", false,-1, 7,0);
    tracep->declBit(c+764,"rf_push_q", false,-1);
    tracep->declBus(c+765,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+766,"rf_push", false,-1);
    tracep->declBit(c+767,"break_error", false,-1);
    tracep->declBit(c+768,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+769,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+770,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+771,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1186,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1263,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1262,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1258,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1260,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1259,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1261,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1257,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1265,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1266,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1274,"sr_push", false,-1, 3,0);
    tracep->declBus(c+772,"toc_value", false,-1, 9,0);
    tracep->declBus(c+773,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1275,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1268,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1239,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1276,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBit(c+719,"push", false,-1);
    tracep->declBit(c+717,"pop", false,-1);
    tracep->declBus(c+765,"data_in", false,-1, 10,0);
    tracep->declBit(c+686,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1157,"data_out", false,-1, 10,0);
    tracep->declBit(c+696,"overrun", false,-1);
    tracep->declBus(c+720,"count", false,-1, 4,0);
    tracep->declBit(c+718,"error_bit", false,-1);
    tracep->declBus(c+1158,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+774+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+790,"top", false,-1, 3,0);
    tracep->declBus(c+791,"bottom", false,-1, 3,0);
    tracep->declBus(c+792,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+793,"word0", false,-1, 2,0);
    tracep->declBus(c+794,"word1", false,-1, 2,0);
    tracep->declBus(c+795,"word2", false,-1, 2,0);
    tracep->declBus(c+796,"word3", false,-1, 2,0);
    tracep->declBus(c+797,"word4", false,-1, 2,0);
    tracep->declBus(c+798,"word5", false,-1, 2,0);
    tracep->declBus(c+799,"word6", false,-1, 2,0);
    tracep->declBus(c+800,"word7", false,-1, 2,0);
    tracep->declBus(c+801,"word8", false,-1, 2,0);
    tracep->declBus(c+802,"word9", false,-1, 2,0);
    tracep->declBus(c+803,"word10", false,-1, 2,0);
    tracep->declBus(c+804,"word11", false,-1, 2,0);
    tracep->declBus(c+805,"word12", false,-1, 2,0);
    tracep->declBus(c+806,"word13", false,-1, 2,0);
    tracep->declBus(c+807,"word14", false,-1, 2,0);
    tracep->declBus(c+808,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1239,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1273,"data_width", false,-1, 31,0);
    tracep->declBus(c+1268,"depth", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+790,"a", false,-1, 3,0);
    tracep->declBus(c+791,"dpra", false,-1, 3,0);
    tracep->declBus(c+809,"di", false,-1, 7,0);
    tracep->declBus(c+1158,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+471+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBus(c+677,"lcr", false,-1, 7,0);
    tracep->declBit(c+716,"tf_push", false,-1);
    tracep->declBus(c+988,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+671,"enable", false,-1);
    tracep->declBit(c+687,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+728,"stx_pad_o", false,-1);
    tracep->declBus(c+722,"tstate", false,-1, 2,0);
    tracep->declBus(c+721,"tf_count", false,-1, 4,0);
    tracep->declBus(c+810,"counter", false,-1, 4,0);
    tracep->declBus(c+811,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+812,"shift_out", false,-1, 6,0);
    tracep->declBit(c+813,"stx_o_tmp", false,-1);
    tracep->declBit(c+814,"parity_xor", false,-1);
    tracep->declBit(c+815,"tf_pop", false,-1);
    tracep->declBit(c+816,"bit_out", false,-1);
    tracep->declBus(c+988,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1159,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+817,"tf_overrun", false,-1);
    tracep->declBus(c+1188,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1163,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1232,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1233,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1234,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1277,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1273,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1268,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1239,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1276,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+1120,"wb_rst_i", false,-1);
    tracep->declBit(c+716,"push", false,-1);
    tracep->declBit(c+815,"pop", false,-1);
    tracep->declBus(c+988,"data_in", false,-1, 7,0);
    tracep->declBit(c+687,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1159,"data_out", false,-1, 7,0);
    tracep->declBit(c+817,"overrun", false,-1);
    tracep->declBus(c+721,"count", false,-1, 4,0);
    tracep->declBus(c+818,"top", false,-1, 3,0);
    tracep->declBus(c+819,"bottom", false,-1, 3,0);
    tracep->declBus(c+820,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1239,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1273,"data_width", false,-1, 31,0);
    tracep->declBus(c+1268,"depth", false,-1, 31,0);
    tracep->declBit(c+1119,"clk", false,-1);
    tracep->declBit(c+716,"we", false,-1);
    tracep->declBus(c+818,"a", false,-1, 3,0);
    tracep->declBus(c+819,"dpra", false,-1, 3,0);
    tracep->declBus(c+988,"di", false,-1, 7,0);
    tracep->declBus(c+1159,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+487+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBit(c+505,"auto_in_psel", false,-1);
    tracep->declBit(c+506,"auto_in_penable", false,-1);
    tracep->declBit(c+939,"auto_in_pwrite", false,-1);
    tracep->declBus(c+943,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+940,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1133,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1134,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1136,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1137,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1138,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1119,"clock", false,-1);
    tracep->declBit(c+1120,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+505,"in_psel", false,-1);
    tracep->declBit(c+506,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+939,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+941,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"in_pready", false,-1);
    tracep->declBus(c+1167,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBus(c+1133,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1134,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1136,"vga_hsync", false,-1);
    tracep->declBit(c+1137,"vga_vsync", false,-1);
    tracep->declBit(c+1138,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+584,"sck", false,-1);
    tracep->declBit(c+821,"ss", false,-1);
    tracep->declBit(c+1141,"mosi", false,-1);
    tracep->declBit(c+1174,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+584,"sck", false,-1);
    tracep->declBit(c+822,"ss", false,-1);
    tracep->declBit(c+1141,"mosi", false,-1);
    tracep->declBit(c+1142,"miso", false,-1);
    tracep->declBit(c+822,"reset", false,-1);
    tracep->declBus(c+932,"state", false,-1, 2,0);
    tracep->declBus(c+933,"counter", false,-1, 7,0);
    tracep->declBus(c+934,"cmd", false,-1, 7,0);
    tracep->declBus(c+935,"addr", false,-1, 23,0);
    tracep->declBus(c+936,"data", false,-1, 31,0);
    tracep->declBit(c+937,"ren", false,-1);
    tracep->declBus(c+1160,"rdata", false,-1, 31,0);
    tracep->declBus(c+1161,"raddr", false,-1, 31,0);
    tracep->declBus(c+1162,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+584,"clock", false,-1);
    tracep->declBit(c+937,"valid", false,-1);
    tracep->declBus(c+934,"cmd", false,-1, 7,0);
    tracep->declBus(c+1161,"addr", false,-1, 31,0);
    tracep->declBus(c+1160,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1143,"sck", false,-1);
    tracep->declBit(c+1144,"ce_n", false,-1);
    tracep->declBus(c+1098,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1145,"clk", false,-1);
    tracep->declBit(c+586,"cke", false,-1);
    tracep->declBit(c+587,"cs", false,-1);
    tracep->declBit(c+588,"ras", false,-1);
    tracep->declBit(c+589,"cas", false,-1);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+591,"a", false,-1, 12,0);
    tracep->declBus(c+592,"ba", false,-1, 1,0);
    tracep->declBus(c+593,"dqm", false,-1, 1,0);
    tracep->declBus(c+594,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__addr_valid));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__addr_valid));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+10,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+11,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+13,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+14,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+15,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+16,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+17,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+19,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+20,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+21,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+24,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+25,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+26,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+27,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+28,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+44,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+45,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+46,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+52,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+53,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+54,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+55,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+119,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+122,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+128,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+129,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+133,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+134,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+136,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+177,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+180,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+181,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+194,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+195,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+196,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+197,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awaddr),32);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awvalid));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wdata),32);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wstrb),4);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wvalid));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bready));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),3);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__next_clint_state),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__LFSR),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wdata_reg),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rdata_reg),32);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wstrb_reg),4);
    bufp->fullQData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+437,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+438,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__sram_state),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__next_sram_state),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__LFSR),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__araddr_reg),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__rdata_reg),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__uart_state),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__next_uart_state),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__LFSR),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__araddr_reg),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wdata_reg),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__rdata_reg),32);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+512,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+515,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+517,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+522,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+523,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+524,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+525,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+526,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+527,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+528,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+529,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+530,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+531,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+532,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+533,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+535,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+538,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+539,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+540,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+541,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+542,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+543,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+544,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+545,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+546,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+547,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+548,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+549,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+550,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+551,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+552,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+553,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+554,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+555,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+556,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+557,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+558,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+559,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+560,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+561,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+562,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+563,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+564,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+565,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+566,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+567,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+568,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+569,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+572,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+573,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+574,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+575,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+576,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+577,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+578,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+579,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+580,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+581,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+582,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+583,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+587,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+588,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+589,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+590,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+594,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+596,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+601,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
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
    bufp->fullBit(oldp+602,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+606,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+611,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+617,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+648,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+650,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+652,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+653,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+658,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+660,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+661,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+663,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+667,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+668,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+670,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+690,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+691,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+692,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+693,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+694,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+697,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+698,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+699,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+718,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+725,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+744,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+745,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+746,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+747,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+748,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+767,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+768,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+769,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+770,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+771,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+773,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+792,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+809,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+820,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+821,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault));
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr),32);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode),7);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7),7);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead));
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op),4);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen),3);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready));
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out),32);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault));
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr),32);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr),32);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid));
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata),32);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb),4);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready));
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data),32);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target),32);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target),32);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch));
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+882,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+883,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+884,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+885,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__i),32);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+937,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+943,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+944,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+960,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+966,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+967,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+968,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+969,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+970,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+971,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+976,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+977,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+978,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+979,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+980,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+983,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+986,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+994,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1000,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1035,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1036,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1037,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1040,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1041,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1043,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1045,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1046,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1052,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1053,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1055,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1062,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata),32);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp),2);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready));
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata),32);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid));
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp),2);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready));
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp),2);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid));
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__addr_valid));
    bufp->fullIData(oldp+1095,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1098,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1119,(vlSelf->clock));
    bufp->fullBit(oldp+1120,(vlSelf->reset));
    bufp->fullSData(oldp+1121,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1122,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1123,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1124,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1125,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1126,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1127,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1128,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1129,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1130,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1131,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1132,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1133,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1134,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1135,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1136,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1137,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1138,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1139,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1140,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1142,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1143,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1144,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1145,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1146,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1148,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1149,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1152,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                     ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                              ? 0U : 
                                             (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready))) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready)))
                                               ? 0U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                         ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready)))
                                             ? 0U : 3U)
                                         : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                             ? 0U : 2U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
                                         ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready)))
                                             ? 0U : 1U)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid)
                                             ? 3U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid)
                                              ? 2U : 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid)
                                               ? 1U
                                               : 0U))))))),3);
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1154,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1157,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1161,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1163,(1U),3);
    bufp->fullBit(oldp+1164,(0U));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1174,(1U));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1185,(0U),32);
    bufp->fullCData(oldp+1186,(0U),4);
    bufp->fullCData(oldp+1187,(0U),8);
    bufp->fullCData(oldp+1188,(0U),3);
    bufp->fullCData(oldp+1189,(0U),2);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_pc),32);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wready));
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bresp),2);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bvalid));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_valid));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_ready));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wb),5);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite_wb));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemRead));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemWrite));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemLen),3);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_addr),32);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data_in),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1232,(2U),3);
    bufp->fullCData(oldp+1233,(3U),3);
    bufp->fullCData(oldp+1234,(4U),3);
    bufp->fullCData(oldp+1235,(1U),2);
    bufp->fullCData(oldp+1236,(2U),2);
    bufp->fullCData(oldp+1237,(3U),2);
    bufp->fullIData(oldp+1238,(0x20U),32);
    bufp->fullIData(oldp+1239,(4U),32);
    bufp->fullIData(oldp+1240,(1U),32);
    bufp->fullIData(oldp+1241,(3U),32);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__random_delay),32);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__j),32);
    bufp->fullBit(oldp+1244,(0U));
    bufp->fullBit(oldp+1245,(1U));
    bufp->fullCData(oldp+1246,(0x1bU),8);
    bufp->fullCData(oldp+1247,(0xebU),8);
    bufp->fullCData(oldp+1248,(0x38U),8);
    bufp->fullIData(oldp+1249,(0x64U),32);
    bufp->fullIData(oldp+1250,(0x18U),32);
    bufp->fullIData(oldp+1251,(9U),32);
    bufp->fullIData(oldp+1252,(2U),32);
    bufp->fullIData(oldp+1253,(0xdU),32);
    bufp->fullIData(oldp+1254,(0x2000U),32);
    bufp->fullIData(oldp+1255,(0x2710U),32);
    bufp->fullIData(oldp+1256,(0x30cU),32);
    bufp->fullCData(oldp+1257,(7U),4);
    bufp->fullCData(oldp+1258,(3U),4);
    bufp->fullCData(oldp+1259,(5U),4);
    bufp->fullCData(oldp+1260,(4U),4);
    bufp->fullCData(oldp+1261,(6U),4);
    bufp->fullCData(oldp+1262,(2U),4);
    bufp->fullCData(oldp+1263,(1U),4);
    bufp->fullSData(oldp+1264,(0x21U),13);
    bufp->fullCData(oldp+1265,(8U),4);
    bufp->fullCData(oldp+1266,(9U),4);
    bufp->fullIData(oldp+1267,(0xaU),32);
    bufp->fullIData(oldp+1268,(0x10U),32);
    bufp->fullIData(oldp+1269,(6U),32);
    bufp->fullIData(oldp+1270,(0x11U),32);
    bufp->fullIData(oldp+1271,(0x30000000U),32);
    bufp->fullIData(oldp+1272,(0x3fffffffU),32);
    bufp->fullIData(oldp+1273,(8U),32);
    bufp->fullCData(oldp+1274,(0xaU),4);
    bufp->fullIData(oldp+1275,(0xbU),32);
    bufp->fullIData(oldp+1276,(5U),32);
    bufp->fullCData(oldp+1277,(5U),3);
}
