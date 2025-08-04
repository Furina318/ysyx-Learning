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
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+1096,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1097,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1104,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1105,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1106,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1107,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1108,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1110,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1111,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1112,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1113,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1114,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1115,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+1096,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1097,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1104,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1105,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1106,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1107,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1108,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1110,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1111,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1112,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1113,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1114,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1115,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1145,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1146,"spi_mosi", false,-1);
    tracep->declBit(c+1116,"spi_miso", false,-1);
    tracep->declBit(c+1114,"uart_rx", false,-1);
    tracep->declBit(c+1115,"uart_tx", false,-1);
    tracep->declBit(c+1074,"psram_sck", false,-1);
    tracep->declBit(c+1075,"psram_ce_n", false,-1);
    tracep->declBus(c+1117,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1118,"sdram_clk", false,-1);
    tracep->declBit(c+593,"sdram_cke", false,-1);
    tracep->declBit(c+594,"sdram_cs", false,-1);
    tracep->declBit(c+595,"sdram_ras", false,-1);
    tracep->declBit(c+596,"sdram_cas", false,-1);
    tracep->declBit(c+597,"sdram_we", false,-1);
    tracep->declBus(c+598,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+599,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+600,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+601,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1098,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1105,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1106,"ps2_clk", false,-1);
    tracep->declBit(c+1107,"ps2_data", false,-1);
    tracep->declBus(c+1108,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1110,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1111,"vga_hsync", false,-1);
    tracep->declBit(c+1112,"vga_vsync", false,-1);
    tracep->declBit(c+1113,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+907,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+11,"in_psel", false,-1);
    tracep->declBit(c+12,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1076,"in_pready", false,-1);
    tracep->declBus(c+1077,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+909,"in_pslverr", false,-1);
    tracep->declBus(c+907,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+11,"out_psel", false,-1);
    tracep->declBit(c+12,"out_penable", false,-1);
    tracep->declBus(c+1147,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"out_pwrite", false,-1);
    tracep->declBus(c+908,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1076,"out_pready", false,-1);
    tracep->declBus(c+1077,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+909,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+11,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+12,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+907,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1076,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+909,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+511,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+512,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+907,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+602,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1148,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+603,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+513,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+514,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+910,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1147,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1150,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1151,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+515,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+516,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1154,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+517,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+518,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1156,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1157,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+912,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+519,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+907,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1119,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1148,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+15,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+913,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+914,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+911,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+915,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1148,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1120,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+916,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+917,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+13,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+910,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1147,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+520,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1148,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+16,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+918,"sel_0", false,-1);
    tracep->declBit(c+919,"sel_1", false,-1);
    tracep->declBit(c+920,"sel_2", false,-1);
    tracep->declBit(c+921,"sel_3", false,-1);
    tracep->declBit(c+922,"sel_4", false,-1);
    tracep->declBit(c+923,"sel_5", false,-1);
    tracep->declBit(c+924,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+17,"auto_in_awready", false,-1);
    tracep->declBit(c+18,"auto_in_awvalid", false,-1);
    tracep->declBus(c+19,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+22,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+17,"auto_in_wready", false,-1);
    tracep->declBit(c+23,"auto_in_wvalid", false,-1);
    tracep->declBus(c+24,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+25,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+26,"auto_in_bready", false,-1);
    tracep->declBit(c+1078,"auto_in_bvalid", false,-1);
    tracep->declBus(c+27,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+925,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_arready", false,-1);
    tracep->declBit(c+29,"auto_in_arvalid", false,-1);
    tracep->declBus(c+30,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_in_rready", false,-1);
    tracep->declBit(c+1079,"auto_in_rvalid", false,-1);
    tracep->declBus(c+35,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1121,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+925,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+11,"auto_out_psel", false,-1);
    tracep->declBit(c+12,"auto_out_penable", false,-1);
    tracep->declBit(c+13,"auto_out_pwrite", false,-1);
    tracep->declBus(c+907,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+908,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1076,"auto_out_pready", false,-1);
    tracep->declBit(c+909,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+12,"nodeOut_penable", false,-1);
    tracep->declBus(c+36,"state", false,-1, 1,0);
    tracep->declBit(c+28,"accept_read", false,-1);
    tracep->declBit(c+17,"accept_write", false,-1);
    tracep->declBit(c+37,"is_write_r", false,-1);
    tracep->declBit(c+13,"is_write", false,-1);
    tracep->declBus(c+35,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+27,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+38,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+39,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+40,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+41,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+926,"resp", false,-1, 1,0);
    tracep->declBus(c+42,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+925,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1079,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+43,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1078,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+44,"auto_in_awready", false,-1);
    tracep->declBit(c+950,"auto_in_awvalid", false,-1);
    tracep->declBus(c+45,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+48,"auto_in_wready", false,-1);
    tracep->declBit(c+952,"auto_in_wvalid", false,-1);
    tracep->declBus(c+953,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_in_wlast", false,-1);
    tracep->declBit(c+522,"auto_in_bready", false,-1);
    tracep->declBit(c+49,"auto_in_bvalid", false,-1);
    tracep->declBus(c+50,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arready", false,-1);
    tracep->declBit(c+956,"auto_in_arvalid", false,-1);
    tracep->declBus(c+53,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+523,"auto_in_rready", false,-1);
    tracep->declBit(c+56,"auto_in_rvalid", false,-1);
    tracep->declBus(c+57,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_in_rlast", false,-1);
    tracep->declBit(c+17,"auto_out_awready", false,-1);
    tracep->declBit(c+18,"auto_out_awvalid", false,-1);
    tracep->declBus(c+19,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+20,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+21,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+22,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+17,"auto_out_wready", false,-1);
    tracep->declBit(c+23,"auto_out_wvalid", false,-1);
    tracep->declBus(c+24,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+25,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+26,"auto_out_bready", false,-1);
    tracep->declBit(c+1078,"auto_out_bvalid", false,-1);
    tracep->declBus(c+27,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+925,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_out_arready", false,-1);
    tracep->declBit(c+29,"auto_out_arvalid", false,-1);
    tracep->declBus(c+30,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+31,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+32,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_out_rready", false,-1);
    tracep->declBit(c+1079,"auto_out_rvalid", false,-1);
    tracep->declBus(c+35,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1121,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+925,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+26,"io_enq_ready", false,-1);
    tracep->declBit(c+1078,"io_enq_valid", false,-1);
    tracep->declBus(c+27,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+925,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+522,"io_deq_ready", false,-1);
    tracep->declBit(c+49,"io_deq_valid", false,-1);
    tracep->declBus(c+50,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+61,"wrap", false,-1);
    tracep->declBit(c+62,"wrap_1", false,-1);
    tracep->declBit(c+63,"maybe_full", false,-1);
    tracep->declBit(c+64,"ptr_match", false,-1);
    tracep->declBit(c+65,"empty", false,-1);
    tracep->declBit(c+66,"full", false,-1);
    tracep->declBit(c+1080,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+62,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declBus(c+67,"R0_data", false,-1, 5,0);
    tracep->declBit(c+61,"W0_addr", false,-1);
    tracep->declBit(c+1080,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declBus(c+521,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+68+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+70,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+34,"io_enq_ready", false,-1);
    tracep->declBit(c+1079,"io_enq_valid", false,-1);
    tracep->declBus(c+35,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1121,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+925,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+523,"io_deq_ready", false,-1);
    tracep->declBit(c+56,"io_deq_valid", false,-1);
    tracep->declBus(c+57,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+58,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+59,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+60,"io_deq_bits_last", false,-1);
    tracep->declBit(c+71,"wrap", false,-1);
    tracep->declBit(c+72,"wrap_1", false,-1);
    tracep->declBit(c+73,"maybe_full", false,-1);
    tracep->declBit(c+74,"ptr_match", false,-1);
    tracep->declBit(c+75,"empty", false,-1);
    tracep->declBit(c+76,"full", false,-1);
    tracep->declBit(c+1081,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+72,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declQuad(c+77,"R0_data", false,-1, 38,0);
    tracep->declBit(c+71,"W0_addr", false,-1);
    tracep->declBit(c+1081,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declQuad(c+1122,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+79+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+83,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+52,"io_enq_ready", false,-1);
    tracep->declBit(c+956,"io_enq_valid", false,-1);
    tracep->declBus(c+53,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+957,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+54,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+55,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+28,"io_deq_ready", false,-1);
    tracep->declBit(c+29,"io_deq_valid", false,-1);
    tracep->declBus(c+30,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+31,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+32,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+33,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+84,"wrap", false,-1);
    tracep->declBit(c+85,"wrap_1", false,-1);
    tracep->declBit(c+86,"maybe_full", false,-1);
    tracep->declBit(c+87,"ptr_match", false,-1);
    tracep->declBit(c+88,"empty", false,-1);
    tracep->declBit(c+89,"full", false,-1);
    tracep->declBit(c+958,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+85,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declQuad(c+90,"R0_data", false,-1, 46,0);
    tracep->declBit(c+84,"W0_addr", false,-1);
    tracep->declBit(c+958,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declQuad(c+524,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+92+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+96,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+44,"io_enq_ready", false,-1);
    tracep->declBit(c+950,"io_enq_valid", false,-1);
    tracep->declBus(c+45,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+951,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+46,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+47,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+18,"io_deq_valid", false,-1);
    tracep->declBus(c+19,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+20,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+21,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+22,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+97,"wrap", false,-1);
    tracep->declBit(c+98,"wrap_1", false,-1);
    tracep->declBit(c+99,"maybe_full", false,-1);
    tracep->declBit(c+100,"ptr_match", false,-1);
    tracep->declBit(c+101,"empty", false,-1);
    tracep->declBit(c+102,"full", false,-1);
    tracep->declBit(c+959,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+98,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declQuad(c+103,"R0_data", false,-1, 46,0);
    tracep->declBit(c+97,"W0_addr", false,-1);
    tracep->declBit(c+959,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declQuad(c+526,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+105+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+109,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+48,"io_enq_ready", false,-1);
    tracep->declBit(c+952,"io_enq_valid", false,-1);
    tracep->declBus(c+953,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+954,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+955,"io_enq_bits_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+23,"io_deq_valid", false,-1);
    tracep->declBus(c+24,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+25,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+110,"wrap", false,-1);
    tracep->declBit(c+111,"wrap_1", false,-1);
    tracep->declBit(c+112,"maybe_full", false,-1);
    tracep->declBit(c+113,"ptr_match", false,-1);
    tracep->declBit(c+114,"empty", false,-1);
    tracep->declBit(c+115,"full", false,-1);
    tracep->declBit(c+960,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+111,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declQuad(c+116,"R0_data", false,-1, 35,0);
    tracep->declBit(c+110,"W0_addr", false,-1);
    tracep->declBit(c+960,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declQuad(c+961,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+118+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+122,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+123,"auto_in_awready", false,-1);
    tracep->declBit(c+963,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1158,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+964,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+124,"auto_in_wready", false,-1);
    tracep->declBit(c+965,"auto_in_wvalid", false,-1);
    tracep->declBus(c+966,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1162,"auto_in_wlast", false,-1);
    tracep->declBit(c+968,"auto_in_bready", false,-1);
    tracep->declBit(c+125,"auto_in_bvalid", false,-1);
    tracep->declBus(c+126,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_arready", false,-1);
    tracep->declBit(c+969,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1163,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1166,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_in_rready", false,-1);
    tracep->declBit(c+129,"auto_in_rvalid", false,-1);
    tracep->declBus(c+130,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"auto_in_rlast", false,-1);
    tracep->declBit(c+972,"auto_out_awready", false,-1);
    tracep->declBit(c+973,"auto_out_awvalid", false,-1);
    tracep->declBus(c+45,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+134,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+974,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+953,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_out_wlast", false,-1);
    tracep->declBit(c+976,"auto_out_bready", false,-1);
    tracep->declBit(c+135,"auto_out_bvalid", false,-1);
    tracep->declBus(c+126,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+137,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+977,"auto_out_arready", false,-1);
    tracep->declBit(c+978,"auto_out_arvalid", false,-1);
    tracep->declBus(c+53,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+971,"auto_out_rready", false,-1);
    tracep->declBit(c+129,"auto_out_rvalid", false,-1);
    tracep->declBus(c+130,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+140,"auto_out_rlast", false,-1);
    tracep->declBit(c+975,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+141,"w_idle", false,-1);
    tracep->declBit(c+979,"in_awready", false,-1);
    tracep->declBit(c+142,"busy", false,-1);
    tracep->declBus(c+143,"r_addr", false,-1, 31,0);
    tracep->declBus(c+144,"r_len", false,-1, 7,0);
    tracep->declBus(c+145,"len", false,-1, 7,0);
    tracep->declBus(c+980,"addr", false,-1, 31,0);
    tracep->declBit(c+146,"busy_1", false,-1);
    tracep->declBus(c+147,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+148,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+149,"len_1", false,-1, 7,0);
    tracep->declBus(c+981,"addr_1", false,-1, 31,0);
    tracep->declBit(c+150,"wbeats_latched", false,-1);
    tracep->declBit(c+973,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+982,"wbeats_valid", false,-1);
    tracep->declBus(c+151,"w_counter", false,-1, 8,0);
    tracep->declBus(c+983,"w_todo", false,-1, 8,0);
    tracep->declBit(c+955,"w_last", false,-1);
    tracep->declBit(c+976,"nodeOut_bready", false,-1);
    tracep->declBus(c+152,"error_0", false,-1, 1,0);
    tracep->declBus(c+153,"error_1", false,-1, 1,0);
    tracep->declBus(c+154,"error_2", false,-1, 1,0);
    tracep->declBus(c+155,"error_3", false,-1, 1,0);
    tracep->declBus(c+156,"error_4", false,-1, 1,0);
    tracep->declBus(c+157,"error_5", false,-1, 1,0);
    tracep->declBus(c+158,"error_6", false,-1, 1,0);
    tracep->declBus(c+159,"error_7", false,-1, 1,0);
    tracep->declBus(c+160,"error_8", false,-1, 1,0);
    tracep->declBus(c+161,"error_9", false,-1, 1,0);
    tracep->declBus(c+162,"error_10", false,-1, 1,0);
    tracep->declBus(c+163,"error_11", false,-1, 1,0);
    tracep->declBus(c+164,"error_12", false,-1, 1,0);
    tracep->declBus(c+165,"error_13", false,-1, 1,0);
    tracep->declBus(c+166,"error_14", false,-1, 1,0);
    tracep->declBus(c+167,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+128,"io_enq_ready", false,-1);
    tracep->declBit(c+969,"io_enq_valid", false,-1);
    tracep->declBus(c+1163,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+970,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1164,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1165,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1166,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+978,"io_deq_valid", false,-1);
    tracep->declBus(c+53,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+985,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+168,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+54,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+55,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+169,"ram", false,-1, 48,0);
    tracep->declBit(c+171,"full", false,-1);
    tracep->declBit(c+978,"io_deq_valid_0", false,-1);
    tracep->declBit(c+986,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+123,"io_enq_ready", false,-1);
    tracep->declBit(c+963,"io_enq_valid", false,-1);
    tracep->declBus(c+1158,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+964,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1159,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1160,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1161,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+988,"io_deq_valid", false,-1);
    tracep->declBus(c+45,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+989,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+172,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+46,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+47,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+173,"ram", false,-1, 48,0);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+988,"io_deq_valid_0", false,-1);
    tracep->declBit(c+990,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+124,"io_enq_ready", false,-1);
    tracep->declBit(c+965,"io_enq_valid", false,-1);
    tracep->declBus(c+966,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+967,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1162,"io_enq_bits_last", false,-1);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
    tracep->declBit(c+992,"io_deq_valid", false,-1);
    tracep->declBus(c+953,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+954,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+176,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+177,"ram", false,-1, 36,0);
    tracep->declBit(c+179,"full", false,-1);
    tracep->declBit(c+992,"io_deq_valid_0", false,-1);
    tracep->declBit(c+993,"do_enq", false,-1);
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
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+994,"auto_in_awready", false,-1);
    tracep->declBit(c+995,"auto_in_awvalid", false,-1);
    tracep->declBus(c+45,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+997,"auto_in_wready", false,-1);
    tracep->declBit(c+998,"auto_in_wvalid", false,-1);
    tracep->declBus(c+953,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+999,"auto_in_bready", false,-1);
    tracep->declBit(c+180,"auto_in_bvalid", false,-1);
    tracep->declBus(c+181,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1000,"auto_in_arready", false,-1);
    tracep->declBit(c+1001,"auto_in_arvalid", false,-1);
    tracep->declBus(c+53,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1003,"auto_in_rready", false,-1);
    tracep->declBit(c+183,"auto_in_rvalid", false,-1);
    tracep->declBus(c+184,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+186,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1000,"nodeIn_arready", false,-1);
    tracep->declBit(c+994,"nodeIn_awready", false,-1);
    tracep->declBit(c+1004,"w_sel0", false,-1);
    tracep->declBit(c+180,"w_full", false,-1);
    tracep->declBus(c+181,"w_id", false,-1, 3,0);
    tracep->declBit(c+187,"r_sel1", false,-1);
    tracep->declBit(c+188,"w_sel1", false,-1);
    tracep->declBit(c+183,"r_full", false,-1);
    tracep->declBus(c+184,"r_id", false,-1, 3,0);
    tracep->declBit(c+1005,"ren", false,-1);
    tracep->declBit(c+189,"rdata_REG", false,-1);
    tracep->declBus(c+190,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+191,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+192,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+193,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1006,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1005,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declBus(c+194,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1007,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1008,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declBus(c+953,"W0_data", false,-1, 31,0);
    tracep->declBus(c+954,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+123,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+963,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1158,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+964,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+124,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+965,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+966,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1162,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+968,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+125,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+126,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+969,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1163,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1166,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+129,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+130,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+123,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+963,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1158,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+964,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+124,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+965,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+966,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1162,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+968,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+125,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+126,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+969,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1163,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1166,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+129,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+130,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+1009,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1010,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+974,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+975,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+953,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+976,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+135,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+126,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1012,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+129,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+130,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+994,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+995,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+996,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+997,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+998,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+953,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+999,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+180,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+181,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1000,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1001,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1003,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+183,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+184,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+185,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+186,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1013,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1014,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+195,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1015,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+528,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+196,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+197,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+198,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+44,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+950,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+45,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+48,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+952,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+953,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+522,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+49,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+956,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+523,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+56,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+57,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+135,"in_0_bvalid", false,-1);
    tracep->declBit(c+129,"in_0_rvalid", false,-1);
    tracep->declBit(c+1017,"in_0_wready", false,-1);
    tracep->declBit(c+1018,"in_0_awready", false,-1);
    tracep->declBit(c+1011,"in_0_arready", false,-1);
    tracep->declBit(c+1009,"anonIn_awready", false,-1);
    tracep->declBit(c+1019,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1020,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1021,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1022,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1023,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1024,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+199,"arSel", false,-1, 15,0);
    tracep->declBus(c+200,"awSel", false,-1, 15,0);
    tracep->declBus(c+201,"rSel", false,-1, 15,0);
    tracep->declBus(c+202,"bSel", false,-1, 15,0);
    tracep->declBit(c+203,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+204,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+205,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+206,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+207,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+208,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+209,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+210,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+211,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+212,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+213,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+214,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+215,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+216,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+217,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+218,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+219,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+220,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+221,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+222,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+223,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+224,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+225,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+226,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+227,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+228,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+229,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+230,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+231,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+232,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+233,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+234,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+235,"latched", false,-1);
    tracep->declBit(c+1025,"in_0_awvalid", false,-1);
    tracep->declBit(c+1026,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1027,"in_0_wvalid", false,-1);
    tracep->declBit(c+236,"idle_3", false,-1);
    tracep->declBit(c+237,"anyValid", false,-1);
    tracep->declBus(c+238,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+239,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+240,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+241,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+242,"prefixOR_1", false,-1);
    tracep->declBit(c+243,"winner_3_1", false,-1);
    tracep->declBit(c+244,"winner_3_2", false,-1);
    tracep->declBit(c+245,"state_3_0", false,-1);
    tracep->declBit(c+246,"state_3_1", false,-1);
    tracep->declBit(c+247,"state_3_2", false,-1);
    tracep->declBit(c+248,"muxState_3_0", false,-1);
    tracep->declBit(c+249,"muxState_3_1", false,-1);
    tracep->declBit(c+250,"muxState_3_2", false,-1);
    tracep->declBit(c+251,"idle_4", false,-1);
    tracep->declBit(c+252,"anyValid_1", false,-1);
    tracep->declBus(c+253,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+254,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+255,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+256,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+257,"winner_4_0", false,-1);
    tracep->declBit(c+258,"winner_4_2", false,-1);
    tracep->declBit(c+259,"state_4_0", false,-1);
    tracep->declBit(c+260,"state_4_2", false,-1);
    tracep->declBit(c+261,"muxState_4_0", false,-1);
    tracep->declBit(c+262,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+1026,"io_enq_valid", false,-1);
    tracep->declBus(c+1028,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1029,"io_deq_ready", false,-1);
    tracep->declBit(c+1030,"io_deq_valid", false,-1);
    tracep->declBus(c+1031,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+264,"wrap", false,-1);
    tracep->declBit(c+265,"wrap_1", false,-1);
    tracep->declBit(c+266,"maybe_full", false,-1);
    tracep->declBit(c+267,"ptr_match", false,-1);
    tracep->declBit(c+268,"empty", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->declBit(c+1030,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1032,"do_deq", false,-1);
    tracep->declBit(c+1033,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+265,"R0_addr", false,-1);
    tracep->declBit(c+1146,"R0_en", false,-1);
    tracep->declBit(c+1094,"R0_clk", false,-1);
    tracep->declBus(c+270,"R0_data", false,-1, 2,0);
    tracep->declBit(c+264,"W0_addr", false,-1);
    tracep->declBit(c+1033,"W0_en", false,-1);
    tracep->declBit(c+1094,"W0_clk", false,-1);
    tracep->declBus(c+1028,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+271+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+972,"auto_in_awready", false,-1);
    tracep->declBit(c+973,"auto_in_awvalid", false,-1);
    tracep->declBus(c+45,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+134,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+974,"auto_in_wready", false,-1);
    tracep->declBit(c+975,"auto_in_wvalid", false,-1);
    tracep->declBus(c+953,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_in_wlast", false,-1);
    tracep->declBit(c+976,"auto_in_bready", false,-1);
    tracep->declBit(c+135,"auto_in_bvalid", false,-1);
    tracep->declBus(c+126,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+137,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+977,"auto_in_arready", false,-1);
    tracep->declBit(c+978,"auto_in_arvalid", false,-1);
    tracep->declBus(c+53,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+971,"auto_in_rready", false,-1);
    tracep->declBit(c+129,"auto_in_rvalid", false,-1);
    tracep->declBus(c+130,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+140,"auto_in_rlast", false,-1);
    tracep->declBit(c+1009,"auto_out_awready", false,-1);
    tracep->declBit(c+1010,"auto_out_awvalid", false,-1);
    tracep->declBus(c+45,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+46,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+47,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+974,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+953,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+954,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+955,"auto_out_wlast", false,-1);
    tracep->declBit(c+976,"auto_out_bready", false,-1);
    tracep->declBit(c+135,"auto_out_bvalid", false,-1);
    tracep->declBus(c+126,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_out_arready", false,-1);
    tracep->declBit(c+1012,"auto_out_arvalid", false,-1);
    tracep->declBus(c+53,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+54,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+55,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_out_rready", false,-1);
    tracep->declBit(c+129,"auto_out_rvalid", false,-1);
    tracep->declBus(c+130,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+529,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+530,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+531,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+538,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+540,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+542,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+544,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+546,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+548,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+550,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+552,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+554,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+556,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+558,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+560,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+562,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+564,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+566,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+568,"io_deq_ready", false,-1);
    tracep->declBit(c+350,"io_deq_valid", false,-1);
    tracep->declBit(c+351,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+351,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+353,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+570,"io_deq_ready", false,-1);
    tracep->declBit(c+354,"io_deq_valid", false,-1);
    tracep->declBit(c+355,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+355,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+356,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+572,"io_deq_ready", false,-1);
    tracep->declBit(c+358,"io_deq_valid", false,-1);
    tracep->declBit(c+359,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+358,"full", false,-1);
    tracep->declBit(c+359,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+360,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+574,"io_deq_ready", false,-1);
    tracep->declBit(c+362,"io_deq_valid", false,-1);
    tracep->declBit(c+363,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"full", false,-1);
    tracep->declBit(c+363,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+364,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+576,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+578,"io_deq_ready", false,-1);
    tracep->declBit(c+370,"io_deq_valid", false,-1);
    tracep->declBit(c+371,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+371,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+372,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+134,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+580,"io_deq_ready", false,-1);
    tracep->declBit(c+374,"io_deq_valid", false,-1);
    tracep->declBit(c+375,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"full", false,-1);
    tracep->declBit(c+375,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+376,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+581,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+582,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBit(c+379,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"full", false,-1);
    tracep->declBit(c+379,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+380,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+583,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+584,"io_deq_ready", false,-1);
    tracep->declBit(c+382,"io_deq_valid", false,-1);
    tracep->declBit(c+383,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+383,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+384,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+585,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+586,"io_deq_ready", false,-1);
    tracep->declBit(c+386,"io_deq_valid", false,-1);
    tracep->declBit(c+387,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"full", false,-1);
    tracep->declBit(c+387,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+388,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+587,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+588,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+589,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+590,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+397,"io_enq_ready", false,-1);
    tracep->declBit(c+591,"io_enq_valid", false,-1);
    tracep->declBit(c+138,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+592,"io_deq_ready", false,-1);
    tracep->declBit(c+398,"io_deq_valid", false,-1);
    tracep->declBit(c+399,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->declBit(c+399,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+400,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBit(c+123,"auto_master_out_awready", false,-1);
    tracep->declBit(c+963,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1158,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+964,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+124,"auto_master_out_wready", false,-1);
    tracep->declBit(c+965,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+966,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1162,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+968,"auto_master_out_bready", false,-1);
    tracep->declBit(c+125,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+126,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_master_out_arready", false,-1);
    tracep->declBit(c+969,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1163,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1166,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"auto_master_out_rready", false,-1);
    tracep->declBit(c+129,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+130,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBit(c+1148,"io_interrupt", false,-1);
    tracep->declBit(c+123,"io_master_awready", false,-1);
    tracep->declBit(c+963,"io_master_awvalid", false,-1);
    tracep->declBus(c+964,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1158,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1159,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1160,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1161,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+124,"io_master_wready", false,-1);
    tracep->declBit(c+965,"io_master_wvalid", false,-1);
    tracep->declBus(c+966,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1162,"io_master_wlast", false,-1);
    tracep->declBit(c+968,"io_master_bready", false,-1);
    tracep->declBit(c+125,"io_master_bvalid", false,-1);
    tracep->declBus(c+127,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+126,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+128,"io_master_arready", false,-1);
    tracep->declBit(c+969,"io_master_arvalid", false,-1);
    tracep->declBus(c+970,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1163,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1164,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1165,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1166,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+971,"io_master_rready", false,-1);
    tracep->declBit(c+129,"io_master_rvalid", false,-1);
    tracep->declBus(c+132,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+131,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+133,"io_master_rlast", false,-1);
    tracep->declBus(c+130,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1167,"io_slave_awready", false,-1);
    tracep->declBit(c+1148,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1168,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1169,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1145,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1170,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1171,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1172,"io_slave_wready", false,-1);
    tracep->declBit(c+1148,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1168,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1169,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"io_slave_wlast", false,-1);
    tracep->declBit(c+1148,"io_slave_bready", false,-1);
    tracep->declBit(c+1173,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1174,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1175,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1176,"io_slave_arready", false,-1);
    tracep->declBit(c+1148,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1168,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1169,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1145,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1170,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1171,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1148,"io_slave_rready", false,-1);
    tracep->declBit(c+1177,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1178,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1179,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1180,"io_slave_rlast", false,-1);
    tracep->declBus(c+1181,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+799,"pc", false,-1, 31,0);
    tracep->declBus(c+800,"instr", false,-1, 31,0);
    tracep->declBit(c+801,"if_ready", false,-1);
    tracep->declBit(c+802,"wb_valid", false,-1);
    tracep->declBit(c+803,"if_valid", false,-1);
    tracep->declBit(c+804,"id_ready", false,-1);
    tracep->declBit(c+805,"if_access_fault", false,-1);
    tracep->declBus(c+806,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+1182,"trap_pc", false,-1, 31,0);
    tracep->declBus(c+807,"ifu_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+808,"ifu_sram_arvalid", false,-1);
    tracep->declBit(c+1034,"ifu_sram_arready", false,-1);
    tracep->declBus(c+1035,"ifu_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1036,"ifu_sram_rvalid", false,-1);
    tracep->declBit(c+809,"ifu_sram_rready", false,-1);
    tracep->declBus(c+1037,"ifu_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+401,"ifu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+402,"ifu_sram_awvalid", false,-1);
    tracep->declBit(c+1183,"ifu_sram_awready", false,-1);
    tracep->declBus(c+403,"ifu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+404,"ifu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+405,"ifu_sram_wvalid", false,-1);
    tracep->declBit(c+1184,"ifu_sram_wready", false,-1);
    tracep->declBus(c+1185,"ifu_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1186,"ifu_sram_bvalid", false,-1);
    tracep->declBit(c+406,"ifu_sram_bready", false,-1);
    tracep->declBus(c+810,"opcode", false,-1, 6,0);
    tracep->declBus(c+811,"rs1", false,-1, 4,0);
    tracep->declBus(c+812,"rs2", false,-1, 4,0);
    tracep->declBus(c+813,"rd", false,-1, 4,0);
    tracep->declBus(c+814,"imm", false,-1, 31,0);
    tracep->declBus(c+815,"func3", false,-1, 2,0);
    tracep->declBus(c+816,"func7", false,-1, 6,0);
    tracep->declBit(c+817,"RegWrite", false,-1);
    tracep->declBit(c+818,"MemWrite", false,-1);
    tracep->declBit(c+819,"MemRead", false,-1);
    tracep->declBus(c+820,"alu_op", false,-1, 3,0);
    tracep->declBus(c+821,"MemLen", false,-1, 2,0);
    tracep->declBit(c+822,"id_valid", false,-1);
    tracep->declBit(c+823,"ex_ready", false,-1);
    tracep->declBit(c+1187,"reg_valid", false,-1);
    tracep->declBit(c+1188,"reg_ready", false,-1);
    tracep->declBus(c+824,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+825,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBit(c+827,"alu_zero", false,-1);
    tracep->declBit(c+828,"alu_less", false,-1);
    tracep->declBit(c+829,"ex_valid", false,-1);
    tracep->declBit(c+830,"mem_ready", false,-1);
    tracep->declBus(c+831,"data_out", false,-1, 31,0);
    tracep->declBit(c+832,"mem_valid", false,-1);
    tracep->declBit(c+833,"wb_ready", false,-1);
    tracep->declBit(c+834,"load_access_fault", false,-1);
    tracep->declBit(c+835,"store_access_fault", false,-1);
    tracep->declBus(c+836,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+837,"mem_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+838,"mem_sram_arvalid", false,-1);
    tracep->declBit(c+1038,"mem_sram_arready", false,-1);
    tracep->declBus(c+1039,"mem_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1040,"mem_sram_rvalid", false,-1);
    tracep->declBit(c+839,"mem_sram_rready", false,-1);
    tracep->declBus(c+1041,"mem_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+840,"mem_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+841,"mem_sram_awvalid", false,-1);
    tracep->declBit(c+1042,"mem_sram_awready", false,-1);
    tracep->declBus(c+842,"mem_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+843,"mem_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"mem_sram_wvalid", false,-1);
    tracep->declBit(c+1043,"mem_sram_wready", false,-1);
    tracep->declBus(c+1044,"mem_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1045,"mem_sram_bvalid", false,-1);
    tracep->declBit(c+845,"mem_sram_bready", false,-1);
    tracep->declBus(c+846,"wb_data", false,-1, 31,0);
    tracep->declBus(c+847,"jal_target", false,-1, 31,0);
    tracep->declBus(c+848,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+849,"is_jal", false,-1);
    tracep->declBit(c+850,"is_jalr", false,-1);
    tracep->declBit(c+851,"take_branch", false,-1);
    tracep->declBus(c+852,"branch_target", false,-1, 31,0);
    tracep->declBus(c+1189,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+1190,"RegWrite_wb", false,-1);
    tracep->declBit(c+1191,"wb_MemRead", false,-1);
    tracep->declBit(c+1192,"wb_MemWrite", false,-1);
    tracep->declBus(c+1193,"wb_MemLen", false,-1, 2,0);
    tracep->declBus(c+1194,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+1195,"wb_data_in", false,-1, 31,0);
    tracep->declBus(c+1196,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1197,"sram_arvalid", false,-1);
    tracep->declBit(c+407,"sram_arready", false,-1);
    tracep->declBus(c+408,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+409,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+410,"sram_rvalid", false,-1);
    tracep->declBit(c+1198,"sram_rready", false,-1);
    tracep->declBus(c+1199,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+411,"sram_awready", false,-1);
    tracep->declBit(c+1200,"sram_awvalid", false,-1);
    tracep->declBus(c+1201,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1202,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1203,"sram_wvalid", false,-1);
    tracep->declBit(c+412,"sram_wready", false,-1);
    tracep->declBus(c+413,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+414,"sram_bvalid", false,-1);
    tracep->declBit(c+1204,"sram_bready", false,-1);
    tracep->declBus(c+1205,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1206,"uart_arvalid", false,-1);
    tracep->declBit(c+415,"uart_arready", false,-1);
    tracep->declBus(c+416,"uart_rresp", false,-1, 1,0);
    tracep->declBus(c+417,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+418,"uart_rvalid", false,-1);
    tracep->declBit(c+1207,"uart_rready", false,-1);
    tracep->declBus(c+1208,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+419,"uart_awready", false,-1);
    tracep->declBit(c+1209,"uart_awvalid", false,-1);
    tracep->declBus(c+1210,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1211,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"uart_wvalid", false,-1);
    tracep->declBit(c+420,"uart_wready", false,-1);
    tracep->declBus(c+421,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+422,"uart_bvalid", false,-1);
    tracep->declBit(c+1213,"uart_bready", false,-1);
    tracep->declBus(c+1046,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+1047,"clint_arvalid", false,-1);
    tracep->declBit(c+423,"clint_arready", false,-1);
    tracep->declBus(c+424,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+425,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+426,"clint_rvalid", false,-1);
    tracep->declBit(c+1048,"clint_rready", false,-1);
    tracep->declBus(c+1049,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+427,"clint_awready", false,-1);
    tracep->declBit(c+1050,"clint_awvalid", false,-1);
    tracep->declBus(c+1051,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1052,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"clint_wvalid", false,-1);
    tracep->declBit(c+428,"clint_wready", false,-1);
    tracep->declBus(c+429,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+430,"clint_bvalid", false,-1);
    tracep->declBit(c+1054,"clint_bready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+807,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+808,"ifu_arvalid", false,-1);
    tracep->declBit(c+1034,"ifu_arready", false,-1);
    tracep->declBus(c+1035,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1037,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1036,"ifu_rvalid", false,-1);
    tracep->declBit(c+809,"ifu_rready", false,-1);
    tracep->declBus(c+837,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+838,"mem_arvalid", false,-1);
    tracep->declBit(c+1038,"mem_arready", false,-1);
    tracep->declBus(c+1039,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1041,"mem_rresp", false,-1, 1,0);
    tracep->declBit(c+1040,"mem_rvalid", false,-1);
    tracep->declBit(c+839,"mem_rready", false,-1);
    tracep->declBus(c+840,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+841,"mem_awvalid", false,-1);
    tracep->declBit(c+1042,"mem_awready", false,-1);
    tracep->declBus(c+842,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+843,"mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"mem_wvalid", false,-1);
    tracep->declBit(c+1043,"mem_wready", false,-1);
    tracep->declBus(c+1044,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+1045,"mem_bvalid", false,-1);
    tracep->declBit(c+845,"mem_bready", false,-1);
    tracep->declBus(c+970,"io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+969,"io_master_arvalid", false,-1);
    tracep->declBit(c+128,"io_master_arready", false,-1);
    tracep->declBus(c+131,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+132,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"io_master_rvalid", false,-1);
    tracep->declBit(c+971,"io_master_rready", false,-1);
    tracep->declBus(c+964,"io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+963,"io_master_awvalid", false,-1);
    tracep->declBit(c+123,"io_master_awready", false,-1);
    tracep->declBus(c+966,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+967,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+965,"io_master_wvalid", false,-1);
    tracep->declBit(c+124,"io_master_wready", false,-1);
    tracep->declBus(c+127,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+125,"io_master_bvalid", false,-1);
    tracep->declBit(c+968,"io_master_bready", false,-1);
    tracep->declBus(c+1046,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+1047,"clint_arvalid", false,-1);
    tracep->declBit(c+423,"clint_arready", false,-1);
    tracep->declBus(c+425,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+424,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"clint_rvalid", false,-1);
    tracep->declBit(c+1048,"clint_rready", false,-1);
    tracep->declBus(c+1049,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1050,"clint_awvalid", false,-1);
    tracep->declBit(c+427,"clint_awready", false,-1);
    tracep->declBus(c+1051,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1052,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"clint_wvalid", false,-1);
    tracep->declBit(c+428,"clint_wready", false,-1);
    tracep->declBus(c+429,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+430,"clint_bvalid", false,-1);
    tracep->declBit(c+1054,"clint_bready", false,-1);
    tracep->declBus(c+1170,"NONE", false,-1, 2,0);
    tracep->declBus(c+1147,"IFU", false,-1, 2,0);
    tracep->declBus(c+1214,"MEM_READ", false,-1, 2,0);
    tracep->declBus(c+1215,"MEM_WRITE", false,-1, 2,0);
    tracep->declBus(c+1216,"ERROR", false,-1, 2,0);
    tracep->declBus(c+1217,"CLINT", false,-1, 1,0);
    tracep->declBus(c+1218,"MASTER", false,-1, 1,0);
    tracep->declBus(c+431,"current_master", false,-1, 2,0);
    tracep->declBus(c+1125,"next_master", false,-1, 2,0);
    tracep->declBus(c+1171,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1218,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+1219,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1220,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1221,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1222,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+1046,"araddr", false,-1, 31,0);
    tracep->declBit(c+1047,"arvalid", false,-1);
    tracep->declBit(c+423,"arready", false,-1);
    tracep->declBus(c+425,"rdata", false,-1, 31,0);
    tracep->declBit(c+426,"rvalid", false,-1);
    tracep->declBit(c+1048,"rready", false,-1);
    tracep->declBus(c+424,"rresp", false,-1, 1,0);
    tracep->declBus(c+1049,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1050,"awvalid", false,-1);
    tracep->declBit(c+427,"awready", false,-1);
    tracep->declBus(c+1051,"wdata", false,-1, 31,0);
    tracep->declBus(c+1052,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"wvalid", false,-1);
    tracep->declBit(c+428,"wready", false,-1);
    tracep->declBus(c+429,"bresp", false,-1, 1,0);
    tracep->declBit(c+430,"bvalid", false,-1);
    tracep->declBit(c+1054,"bready", false,-1);
    tracep->declBus(c+432,"clint_state", false,-1, 31,0);
    tracep->declBus(c+433,"next_clint_state", false,-1, 31,0);
    tracep->declBus(c+434,"LFSR", false,-1, 31,0);
    tracep->declBus(c+435,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+436,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+437,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+438,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+439,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+1055,"addr_valid", false,-1);
    tracep->declQuad(c+440,"mtime", false,-1, 63,0);
    tracep->declBus(c+442,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+443,"mtime_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBit(c+822,"id_valid", false,-1);
    tracep->declBit(c+823,"ex_ready", false,-1);
    tracep->declBus(c+810,"opcode", false,-1, 6,0);
    tracep->declBus(c+824,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+825,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+814,"imm", false,-1, 31,0);
    tracep->declBus(c+820,"alu_op", false,-1, 3,0);
    tracep->declBit(c+830,"mem_ready", false,-1);
    tracep->declBit(c+829,"ex_valid", false,-1);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBit(c+827,"alu_zero", false,-1);
    tracep->declBit(c+828,"alu_less", false,-1);
    tracep->declBus(c+853,"state", false,-1, 31,0);
    tracep->declBus(c+854,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+800,"instr", false,-1, 31,0);
    tracep->declBit(c+823,"ex_ready", false,-1);
    tracep->declBit(c+803,"if_valid", false,-1);
    tracep->declBit(c+804,"id_ready", false,-1);
    tracep->declBit(c+822,"id_valid", false,-1);
    tracep->declBus(c+810,"opcode", false,-1, 6,0);
    tracep->declBus(c+811,"rs1", false,-1, 4,0);
    tracep->declBus(c+812,"rs2", false,-1, 4,0);
    tracep->declBus(c+813,"rd", false,-1, 4,0);
    tracep->declBus(c+814,"imm", false,-1, 31,0);
    tracep->declBus(c+815,"func3", false,-1, 2,0);
    tracep->declBus(c+816,"func7", false,-1, 6,0);
    tracep->declBit(c+817,"RegWrite", false,-1);
    tracep->declBit(c+818,"MemWrite", false,-1);
    tracep->declBit(c+819,"MemRead", false,-1);
    tracep->declBus(c+820,"alu_op", false,-1, 3,0);
    tracep->declBus(c+821,"MemLen", false,-1, 2,0);
    tracep->declBus(c+855,"state", false,-1, 31,0);
    tracep->declBus(c+856,"next_state", false,-1, 31,0);
    tracep->declBus(c+857,"immI", false,-1, 31,0);
    tracep->declBus(c+858,"immU", false,-1, 31,0);
    tracep->declBus(c+859,"immS", false,-1, 31,0);
    tracep->declBus(c+860,"immB", false,-1, 31,0);
    tracep->declBus(c+861,"immJ", false,-1, 31,0);
    tracep->declBus(c+1168,"immR", false,-1, 31,0);
    tracep->declBus(c+862,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+852,"branch_target", false,-1, 31,0);
    tracep->declBit(c+863,"pc_src", false,-1);
    tracep->declBit(c+804,"id_ready", false,-1);
    tracep->declBit(c+802,"wb_valid", false,-1);
    tracep->declBit(c+801,"if_ready", false,-1);
    tracep->declBit(c+803,"if_valid", false,-1);
    tracep->declBus(c+799,"pc", false,-1, 31,0);
    tracep->declBus(c+800,"instr", false,-1, 31,0);
    tracep->declBit(c+805,"if_access_fault", false,-1);
    tracep->declBus(c+806,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+807,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+808,"sram_arvalid", false,-1);
    tracep->declBit(c+1034,"sram_arready", false,-1);
    tracep->declBus(c+1035,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1036,"sram_rvalid", false,-1);
    tracep->declBit(c+809,"sram_rready", false,-1);
    tracep->declBus(c+1037,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+401,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+402,"sram_awvalid", false,-1);
    tracep->declBit(c+1183,"sram_awready", false,-1);
    tracep->declBus(c+403,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+404,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+405,"sram_wvalid", false,-1);
    tracep->declBit(c+1184,"sram_wready", false,-1);
    tracep->declBus(c+1185,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1186,"sram_bvalid", false,-1);
    tracep->declBit(c+406,"sram_bready", false,-1);
    tracep->declBus(c+864,"state", false,-1, 31,0);
    tracep->declBus(c+1223,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBit(c+829,"ex_valid", false,-1);
    tracep->declBit(c+830,"mem_ready", false,-1);
    tracep->declBit(c+833,"wb_ready", false,-1);
    tracep->declBit(c+832,"mem_valid", false,-1);
    tracep->declBit(c+819,"MemRead", false,-1);
    tracep->declBit(c+818,"MemWrite", false,-1);
    tracep->declBus(c+865,"addr", false,-1, 31,0);
    tracep->declBus(c+825,"data_in", false,-1, 31,0);
    tracep->declBus(c+821,"MemLen", false,-1, 2,0);
    tracep->declBus(c+831,"data_out", false,-1, 31,0);
    tracep->declBit(c+834,"load_access_fault", false,-1);
    tracep->declBit(c+835,"store_access_fault", false,-1);
    tracep->declBus(c+836,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+837,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+838,"sram_arvalid", false,-1);
    tracep->declBit(c+1038,"sram_arready", false,-1);
    tracep->declBus(c+1039,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+1040,"sram_rvalid", false,-1);
    tracep->declBit(c+839,"sram_rready", false,-1);
    tracep->declBus(c+1041,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+840,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+841,"sram_awvalid", false,-1);
    tracep->declBit(c+1042,"sram_awready", false,-1);
    tracep->declBus(c+842,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+843,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+844,"sram_wvalid", false,-1);
    tracep->declBit(c+1043,"sram_wready", false,-1);
    tracep->declBus(c+1044,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1045,"sram_bvalid", false,-1);
    tracep->declBit(c+845,"sram_bready", false,-1);
    tracep->declBus(c+866,"state", false,-1, 31,0);
    tracep->declBus(c+867,"next_state", false,-1, 31,0);
    tracep->declBus(c+868,"delay", false,-1, 1,0);
    tracep->declBus(c+1224,"DELAY_CYCLES", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+1220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1220,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1221,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1222,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+1196,"araddr", false,-1, 31,0);
    tracep->declBit(c+1197,"arvalid", false,-1);
    tracep->declBit(c+407,"arready", false,-1);
    tracep->declBus(c+409,"rdata", false,-1, 31,0);
    tracep->declBit(c+410,"rvalid", false,-1);
    tracep->declBit(c+1198,"rready", false,-1);
    tracep->declBus(c+408,"rresp", false,-1, 1,0);
    tracep->declBus(c+1199,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1200,"awvalid", false,-1);
    tracep->declBit(c+411,"awready", false,-1);
    tracep->declBus(c+1201,"wdata", false,-1, 31,0);
    tracep->declBus(c+1202,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1203,"wvalid", false,-1);
    tracep->declBit(c+412,"wready", false,-1);
    tracep->declBus(c+413,"bresp", false,-1, 1,0);
    tracep->declBit(c+414,"bvalid", false,-1);
    tracep->declBit(c+1204,"bready", false,-1);
    tracep->declBus(c+444,"sram_state", false,-1, 31,0);
    tracep->declBus(c+445,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+446,"LFSR", false,-1, 31,0);
    tracep->declBus(c+1225,"random_delay", false,-1, 31,0);
    tracep->declBus(c+447,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+448,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+449,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+450,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+451,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+2,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBus(c+1220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1220,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1221,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1222,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+1205,"araddr", false,-1, 31,0);
    tracep->declBit(c+1206,"arvalid", false,-1);
    tracep->declBit(c+415,"arready", false,-1);
    tracep->declBus(c+417,"rdata", false,-1, 31,0);
    tracep->declBit(c+418,"rvalid", false,-1);
    tracep->declBit(c+1207,"rready", false,-1);
    tracep->declBus(c+416,"rresp", false,-1, 1,0);
    tracep->declBus(c+1208,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1209,"awvalid", false,-1);
    tracep->declBit(c+419,"awready", false,-1);
    tracep->declBus(c+1210,"wdata", false,-1, 31,0);
    tracep->declBus(c+1211,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"wvalid", false,-1);
    tracep->declBit(c+420,"wready", false,-1);
    tracep->declBus(c+421,"bresp", false,-1, 1,0);
    tracep->declBit(c+422,"bvalid", false,-1);
    tracep->declBit(c+1213,"bready", false,-1);
    tracep->declBus(c+452,"uart_state", false,-1, 31,0);
    tracep->declBus(c+453,"next_uart_state", false,-1, 31,0);
    tracep->declBus(c+454,"LFSR", false,-1, 31,0);
    tracep->declBus(c+455,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+456,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+457,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+458,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+459,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+3,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBit(c+832,"mem_valid", false,-1);
    tracep->declBit(c+801,"if_ready", false,-1);
    tracep->declBus(c+810,"opcode", false,-1, 6,0);
    tracep->declBus(c+815,"func3", false,-1, 2,0);
    tracep->declBus(c+813,"id_rd", false,-1, 4,0);
    tracep->declBit(c+817,"id_RegWrite", false,-1);
    tracep->declBus(c+811,"rs1", false,-1, 4,0);
    tracep->declBus(c+812,"rs2", false,-1, 4,0);
    tracep->declBus(c+799,"pc", false,-1, 31,0);
    tracep->declBus(c+814,"imm", false,-1, 31,0);
    tracep->declBit(c+827,"alu_zero", false,-1);
    tracep->declBit(c+828,"alu_less", false,-1);
    tracep->declBus(c+826,"alu_result", false,-1, 31,0);
    tracep->declBus(c+831,"data_out", false,-1, 31,0);
    tracep->declBus(c+824,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+825,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+833,"wb_ready", false,-1);
    tracep->declBit(c+802,"wb_valid", false,-1);
    tracep->declBus(c+847,"jal_target", false,-1, 31,0);
    tracep->declBus(c+848,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+849,"is_jal", false,-1);
    tracep->declBit(c+850,"is_jalr", false,-1);
    tracep->declBit(c+851,"take_branch", false,-1);
    tracep->declBus(c+846,"wb_data", false,-1, 31,0);
    tracep->declBus(c+869,"state", false,-1, 31,0);
    tracep->declBus(c+870,"next_state", false,-1, 31,0);
    tracep->declBit(c+871,"RegWrite_wb", false,-1);
    tracep->declBus(c+872,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+873,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+874+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->declBus(c+1226,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"io_d", false,-1);
    tracep->declBit(c+460,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"io_d", false,-1);
    tracep->declBit(c+460,"io_q", false,-1);
    tracep->declBit(c+460,"sync_0", false,-1);
    tracep->declBit(c+461,"sync_1", false,-1);
    tracep->declBit(c+462,"sync_2", false,-1);
    tracep->declBit(c+463,"sync_3", false,-1);
    tracep->declBit(c+464,"sync_4", false,-1);
    tracep->declBit(c+465,"sync_5", false,-1);
    tracep->declBit(c+466,"sync_6", false,-1);
    tracep->declBit(c+467,"sync_7", false,-1);
    tracep->declBit(c+468,"sync_8", false,-1);
    tracep->declBit(c+469,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+517,"auto_in_psel", false,-1);
    tracep->declBit(c+518,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"auto_in_pready", false,-1);
    tracep->declBit(c+1156,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1157,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1096,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1098,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1105,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+927,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+517,"in_psel", false,-1);
    tracep->declBit(c+518,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1155,"in_pready", false,-1);
    tracep->declBus(c+1157,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1156,"in_pslverr", false,-1);
    tracep->declBus(c+1096,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1097,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1098,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1104,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1105,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+515,"auto_in_psel", false,-1);
    tracep->declBit(c+516,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_in_pready", false,-1);
    tracep->declBit(c+1153,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1154,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1106,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1107,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+927,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+515,"in_psel", false,-1);
    tracep->declBit(c+516,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"in_pready", false,-1);
    tracep->declBus(c+1154,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1153,"in_pslverr", false,-1);
    tracep->declBit(c+1106,"ps2_clk", false,-1);
    tracep->declBit(c+1107,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+1013,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1014,"auto_in_wvalid", false,-1);
    tracep->declBit(c+195,"auto_in_arready", false,-1);
    tracep->declBit(c+1015,"auto_in_arvalid", false,-1);
    tracep->declBus(c+53,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+528,"auto_in_rready", false,-1);
    tracep->declBit(c+196,"auto_in_rvalid", false,-1);
    tracep->declBus(c+197,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+198,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+196,"state", false,-1);
    tracep->declBus(c+198,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+197,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1056,"raddr", false,-1, 31,0);
    tracep->declBit(c+1057,"ren", false,-1);
    tracep->declBus(c+1058,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+912,"auto_in_psel", false,-1);
    tracep->declBit(c+519,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+907,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1119,"auto_in_pready", false,-1);
    tracep->declBit(c+1148,"auto_in_pslverr", false,-1);
    tracep->declBus(c+15,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1074,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1075,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1117,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+907,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+912,"in_psel", false,-1);
    tracep->declBit(c+519,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1119,"in_pready", false,-1);
    tracep->declBus(c+15,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1148,"in_pslverr", false,-1);
    tracep->declBit(c+1074,"qspi_sck", false,-1);
    tracep->declBit(c+1075,"qspi_ce_n", false,-1);
    tracep->declBus(c+1117,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1117,"din", false,-1, 3,0);
    tracep->declBus(c+1082,"dout", false,-1, 3,0);
    tracep->declBus(c+1083,"douten", false,-1, 3,0);
    tracep->declBit(c+1126,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1094,"clk_i", false,-1);
    tracep->declBit(c+1095,"rst_i", false,-1);
    tracep->declBus(c+907,"adr_i", false,-1, 31,0);
    tracep->declBus(c+908,"dat_i", false,-1, 31,0);
    tracep->declBus(c+15,"dat_o", false,-1, 31,0);
    tracep->declBus(c+14,"sel_i", false,-1, 3,0);
    tracep->declBit(c+912,"cyc_i", false,-1);
    tracep->declBit(c+912,"stb_i", false,-1);
    tracep->declBit(c+1126,"ack_o", false,-1);
    tracep->declBit(c+13,"we_i", false,-1);
    tracep->declBit(c+1074,"sck", false,-1);
    tracep->declBit(c+1075,"ce_n", false,-1);
    tracep->declBus(c+1117,"din", false,-1, 3,0);
    tracep->declBus(c+1082,"dout", false,-1, 3,0);
    tracep->declBus(c+1083,"douten", false,-1, 3,0);
    tracep->declBus(c+1227,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1228,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+604,"mr_sck", false,-1);
    tracep->declBit(c+605,"mr_ce_n", false,-1);
    tracep->declBus(c+1117,"mr_din", false,-1, 3,0);
    tracep->declBus(c+606,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+607,"mr_doe", false,-1);
    tracep->declBit(c+608,"mw_sck", false,-1);
    tracep->declBit(c+609,"mw_ce_n", false,-1);
    tracep->declBus(c+1117,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1084,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+610,"mw_doe", false,-1);
    tracep->declBit(c+1085,"mr_rd", false,-1);
    tracep->declBit(c+611,"mr_done", false,-1);
    tracep->declBit(c+1086,"mw_wr", false,-1);
    tracep->declBit(c+1127,"mw_done", false,-1);
    tracep->declBit(c+912,"wb_valid", false,-1);
    tracep->declBit(c+928,"wb_we", false,-1);
    tracep->declBit(c+929,"wb_re", false,-1);
    tracep->declBit(c+612,"state", false,-1);
    tracep->declBit(c+1087,"nstate", false,-1);
    tracep->declBus(c+470,"size", false,-1, 2,0);
    tracep->declBus(c+930,"byte0", false,-1, 7,0);
    tracep->declBus(c+931,"byte1", false,-1, 7,0);
    tracep->declBus(c+932,"byte2", false,-1, 7,0);
    tracep->declBus(c+933,"byte3", false,-1, 7,0);
    tracep->declBus(c+934,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1128,"rst_n", false,-1);
    tracep->declBus(c+935,"addr", false,-1, 23,0);
    tracep->declBit(c+1085,"rd", false,-1);
    tracep->declBus(c+1216,"size", false,-1, 2,0);
    tracep->declBit(c+611,"done", false,-1);
    tracep->declBus(c+15,"line", false,-1, 31,0);
    tracep->declBit(c+604,"sck", false,-1);
    tracep->declBit(c+605,"ce_n", false,-1);
    tracep->declBus(c+1117,"din", false,-1, 3,0);
    tracep->declBus(c+606,"dout", false,-1, 3,0);
    tracep->declBit(c+607,"douten", false,-1);
    tracep->declBus(c+1227,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1228,"READ", false,-1, 0,0);
    tracep->declBus(c+1229,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+613,"state", false,-1);
    tracep->declBit(c+1088,"nstate", false,-1);
    tracep->declBus(c+614,"counter", false,-1, 7,0);
    tracep->declBus(c+615,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+471+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1230,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+616,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1128,"rst_n", false,-1);
    tracep->declBus(c+936,"addr", false,-1, 23,0);
    tracep->declBus(c+934,"line", false,-1, 31,0);
    tracep->declBus(c+470,"size", false,-1, 2,0);
    tracep->declBit(c+1086,"wr", false,-1);
    tracep->declBit(c+1127,"done", false,-1);
    tracep->declBit(c+608,"sck", false,-1);
    tracep->declBit(c+609,"ce_n", false,-1);
    tracep->declBus(c+1117,"din", false,-1, 3,0);
    tracep->declBus(c+1084,"dout", false,-1, 3,0);
    tracep->declBit(c+610,"douten", false,-1);
    tracep->declBus(c+1227,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1228,"WRITE", false,-1, 0,0);
    tracep->declBus(c+475,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+617,"state", false,-1);
    tracep->declBit(c+1089,"nstate", false,-1);
    tracep->declBus(c+618,"counter", false,-1, 7,0);
    tracep->declBus(c+619,"saddr", false,-1, 23,0);
    tracep->declBus(c+1231,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+511,"auto_in_psel", false,-1);
    tracep->declBit(c+512,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+907,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+602,"auto_in_pready", false,-1);
    tracep->declBit(c+1148,"auto_in_pslverr", false,-1);
    tracep->declBus(c+603,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1118,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+593,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+594,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+595,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+596,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+597,"sdram_bundle_we", false,-1);
    tracep->declBus(c+598,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+599,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+600,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+601,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+907,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+511,"in_psel", false,-1);
    tracep->declBit(c+512,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+602,"in_pready", false,-1);
    tracep->declBus(c+603,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1148,"in_pslverr", false,-1);
    tracep->declBit(c+1118,"sdram_clk", false,-1);
    tracep->declBit(c+593,"sdram_cke", false,-1);
    tracep->declBit(c+594,"sdram_cs", false,-1);
    tracep->declBit(c+595,"sdram_ras", false,-1);
    tracep->declBit(c+596,"sdram_cas", false,-1);
    tracep->declBit(c+597,"sdram_we", false,-1);
    tracep->declBus(c+598,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+599,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+600,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+601,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+620,"sdram_dout_en", false,-1);
    tracep->declBus(c+621,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+476,"state", false,-1, 1,0);
    tracep->declBit(c+622,"req_accept", false,-1);
    tracep->declBit(c+937,"is_read", false,-1);
    tracep->declBit(c+938,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1094,"clk_i", false,-1);
    tracep->declBit(c+1095,"rst_i", false,-1);
    tracep->declBus(c+939,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+937,"inport_rd_i", false,-1);
    tracep->declBus(c+1145,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+907,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+908,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+601,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+622,"inport_accept_o", false,-1);
    tracep->declBit(c+602,"inport_ack_o", false,-1);
    tracep->declBit(c+1148,"inport_error_o", false,-1);
    tracep->declBus(c+603,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1118,"sdram_clk_o", false,-1);
    tracep->declBit(c+593,"sdram_cke_o", false,-1);
    tracep->declBit(c+594,"sdram_cs_o", false,-1);
    tracep->declBit(c+595,"sdram_ras_o", false,-1);
    tracep->declBit(c+596,"sdram_cas_o", false,-1);
    tracep->declBit(c+597,"sdram_we_o", false,-1);
    tracep->declBus(c+600,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+598,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+599,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+621,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+620,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1232,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1221,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1236,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1237,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1238,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1239,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1221,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1240,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1241,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1242,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1243,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1244,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1245,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1246,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1169,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1247,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1221,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1169,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1246,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1245,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1243,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1242,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1240,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1248,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1249,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1250,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1250,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1251,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1250,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1252,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+907,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+939,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+937,"ram_rd_w", false,-1);
    tracep->declBit(c+622,"ram_accept_w", false,-1);
    tracep->declBus(c+908,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+603,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+602,"ram_ack_w", false,-1);
    tracep->declBit(c+940,"ram_req_w", false,-1);
    tracep->declBus(c+623,"command_q", false,-1, 3,0);
    tracep->declBus(c+598,"addr_q", false,-1, 12,0);
    tracep->declBus(c+621,"data_q", false,-1, 15,0);
    tracep->declBit(c+624,"data_rd_en_q", false,-1);
    tracep->declBus(c+600,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+593,"cke_q", false,-1);
    tracep->declBus(c+599,"bank_q", false,-1, 1,0);
    tracep->declBus(c+625,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+626,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+601,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+627,"refresh_q", false,-1);
    tracep->declBus(c+628,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+629+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+633,"state_q", false,-1, 3,0);
    tracep->declBus(c+1090,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1091,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+634,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+635,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+941,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+942,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+943,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1221,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+636,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1092,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1253,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+637,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+638,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+639,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+640,"idx", false,-1, 31,0);
    tracep->declBus(c+641,"rd_q", false,-1, 3,0);
    tracep->declBit(c+602,"ack_q", false,-1);
    tracep->declArray(c+642,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+916,"auto_in_psel", false,-1);
    tracep->declBit(c+917,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+910,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+520,"auto_in_pready", false,-1);
    tracep->declBit(c+1148,"auto_in_pslverr", false,-1);
    tracep->declBus(c+16,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1145,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1146,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1116,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1254,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1255,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1256,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+944,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+916,"in_psel", false,-1);
    tracep->declBit(c+917,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+520,"in_pready", false,-1);
    tracep->declBus(c+16,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1148,"in_pslverr", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1145,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1146,"spi_mosi", false,-1);
    tracep->declBit(c+1116,"spi_miso", false,-1);
    tracep->declBit(c+1148,"spi_irq_out", false,-1);
    tracep->declBus(c+16,"data", false,-1, 31,0);
    tracep->declBus(c+1145,"invalid_cmd", false,-1, 7,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+945,"valid", false,-1);
    tracep->declBus(c+477,"cmd", false,-1, 7,0);
    tracep->declBus(c+946,"addr", false,-1, 31,0);
    tracep->declBus(c+16,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+913,"auto_in_psel", false,-1);
    tracep->declBit(c+914,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+911,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+915,"auto_in_pready", false,-1);
    tracep->declBit(c+1148,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1120,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1114,"uart_rx", false,-1);
    tracep->declBit(c+1115,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+913,"in_psel", false,-1);
    tracep->declBit(c+914,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+915,"in_pready", false,-1);
    tracep->declBit(c+1148,"in_pslverr", false,-1);
    tracep->declBus(c+927,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+1120,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1114,"uart_rx", false,-1);
    tracep->declBit(c+1115,"uart_tx", false,-1);
    tracep->declBit(c+645,"rtsn", false,-1);
    tracep->declBit(c+1148,"ctsn", false,-1);
    tracep->declBit(c+646,"dtr_pad_o", false,-1);
    tracep->declBit(c+1148,"dsr_pad_i", false,-1);
    tracep->declBit(c+1148,"ri_pad_i", false,-1);
    tracep->declBit(c+1148,"dcd_pad_i", false,-1);
    tracep->declBit(c+647,"interrupt", false,-1);
    tracep->declBit(c+1129,"reg_we", false,-1);
    tracep->declBit(c+1130,"reg_re", false,-1);
    tracep->declBus(c+947,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+948,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+478,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1093,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+648,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1095,"wb_rst_i", false,-1);
    tracep->declBus(c+947,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+949,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1093,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1129,"wb_we_i", false,-1);
    tracep->declBit(c+1130,"wb_re_i", false,-1);
    tracep->declBit(c+1115,"stx_pad_o", false,-1);
    tracep->declBit(c+1114,"srx_pad_i", false,-1);
    tracep->declBus(c+1248,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+648,"rts_pad_o", false,-1);
    tracep->declBit(c+646,"dtr_pad_o", false,-1);
    tracep->declBit(c+647,"int_o", false,-1);
    tracep->declBit(c+649,"enable", false,-1);
    tracep->declBit(c+650,"srx_pad", false,-1);
    tracep->declBus(c+651,"ier", false,-1, 3,0);
    tracep->declBus(c+652,"iir", false,-1, 3,0);
    tracep->declBus(c+653,"fcr", false,-1, 1,0);
    tracep->declBus(c+654,"mcr", false,-1, 4,0);
    tracep->declBus(c+655,"lcr", false,-1, 7,0);
    tracep->declBus(c+656,"msr", false,-1, 7,0);
    tracep->declBus(c+657,"dl", false,-1, 15,0);
    tracep->declBus(c+658,"scratch", false,-1, 7,0);
    tracep->declBit(c+659,"start_dlc", false,-1);
    tracep->declBit(c+660,"lsr_mask_d", false,-1);
    tracep->declBit(c+661,"msi_reset", false,-1);
    tracep->declBus(c+662,"dlc", false,-1, 15,0);
    tracep->declBus(c+663,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+664,"rx_reset", false,-1);
    tracep->declBit(c+665,"tx_reset", false,-1);
    tracep->declBit(c+666,"dlab", false,-1);
    tracep->declBit(c+1146,"cts_pad_i", false,-1);
    tracep->declBit(c+1148,"dsr_pad_i", false,-1);
    tracep->declBit(c+1148,"ri_pad_i", false,-1);
    tracep->declBit(c+1148,"dcd_pad_i", false,-1);
    tracep->declBit(c+667,"loopback", false,-1);
    tracep->declBit(c+1148,"cts", false,-1);
    tracep->declBit(c+1146,"dsr", false,-1);
    tracep->declBit(c+1146,"ri", false,-1);
    tracep->declBit(c+1146,"dcd", false,-1);
    tracep->declBit(c+668,"cts_c", false,-1);
    tracep->declBit(c+669,"dsr_c", false,-1);
    tracep->declBit(c+670,"ri_c", false,-1);
    tracep->declBit(c+671,"dcd_c", false,-1);
    tracep->declBus(c+672,"lsr", false,-1, 7,0);
    tracep->declBit(c+673,"lsr0", false,-1);
    tracep->declBit(c+674,"lsr1", false,-1);
    tracep->declBit(c+675,"lsr2", false,-1);
    tracep->declBit(c+676,"lsr3", false,-1);
    tracep->declBit(c+677,"lsr4", false,-1);
    tracep->declBit(c+678,"lsr5", false,-1);
    tracep->declBit(c+679,"lsr6", false,-1);
    tracep->declBit(c+680,"lsr7", false,-1);
    tracep->declBit(c+681,"lsr0r", false,-1);
    tracep->declBit(c+682,"lsr1r", false,-1);
    tracep->declBit(c+683,"lsr2r", false,-1);
    tracep->declBit(c+684,"lsr3r", false,-1);
    tracep->declBit(c+685,"lsr4r", false,-1);
    tracep->declBit(c+686,"lsr5r", false,-1);
    tracep->declBit(c+687,"lsr6r", false,-1);
    tracep->declBit(c+688,"lsr7r", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBit(c+689,"rls_int", false,-1);
    tracep->declBit(c+690,"rda_int", false,-1);
    tracep->declBit(c+691,"ti_int", false,-1);
    tracep->declBit(c+692,"thre_int", false,-1);
    tracep->declBit(c+693,"ms_int", false,-1);
    tracep->declBit(c+694,"tf_push", false,-1);
    tracep->declBit(c+695,"rf_pop", false,-1);
    tracep->declBus(c+1131,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+696,"rf_error_bit", false,-1);
    tracep->declBit(c+674,"rf_overrun", false,-1);
    tracep->declBit(c+697,"rf_push_pulse", false,-1);
    tracep->declBus(c+698,"rf_count", false,-1, 4,0);
    tracep->declBus(c+699,"tf_count", false,-1, 4,0);
    tracep->declBus(c+700,"tstate", false,-1, 2,0);
    tracep->declBus(c+701,"rstate", false,-1, 3,0);
    tracep->declBus(c+702,"counter_t", false,-1, 9,0);
    tracep->declBit(c+703,"thre_set_en", false,-1);
    tracep->declBus(c+704,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+705,"block_value", false,-1, 7,0);
    tracep->declBit(c+706,"serial_out", false,-1);
    tracep->declBit(c+707,"serial_in", false,-1);
    tracep->declBit(c+6,"lsr_mask_condition", false,-1);
    tracep->declBit(c+7,"iir_read", false,-1);
    tracep->declBit(c+8,"msr_read", false,-1);
    tracep->declBit(c+9,"fifo_read", false,-1);
    tracep->declBit(c+10,"fifo_write", false,-1);
    tracep->declBus(c+708,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+709,"lsr0_d", false,-1);
    tracep->declBit(c+710,"lsr1_d", false,-1);
    tracep->declBit(c+711,"lsr2_d", false,-1);
    tracep->declBit(c+712,"lsr3_d", false,-1);
    tracep->declBit(c+713,"lsr4_d", false,-1);
    tracep->declBit(c+714,"lsr5_d", false,-1);
    tracep->declBit(c+715,"lsr6_d", false,-1);
    tracep->declBit(c+716,"lsr7_d", false,-1);
    tracep->declBit(c+717,"rls_int_d", false,-1);
    tracep->declBit(c+718,"thre_int_d", false,-1);
    tracep->declBit(c+719,"ms_int_d", false,-1);
    tracep->declBit(c+720,"ti_int_d", false,-1);
    tracep->declBit(c+721,"rda_int_d", false,-1);
    tracep->declBit(c+722,"rls_int_rise", false,-1);
    tracep->declBit(c+723,"thre_int_rise", false,-1);
    tracep->declBit(c+724,"ms_int_rise", false,-1);
    tracep->declBit(c+725,"ti_int_rise", false,-1);
    tracep->declBit(c+726,"rda_int_rise", false,-1);
    tracep->declBit(c+727,"rls_int_pnd", false,-1);
    tracep->declBit(c+728,"rda_int_pnd", false,-1);
    tracep->declBit(c+729,"thre_int_pnd", false,-1);
    tracep->declBit(c+730,"ms_int_pnd", false,-1);
    tracep->declBit(c+731,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1222,"Tp", false,-1, 31,0);
    tracep->declBus(c+1222,"width", false,-1, 31,0);
    tracep->declBus(c+1228,"init_value", false,-1, 0,0);
    tracep->declBit(c+1095,"rst_i", false,-1);
    tracep->declBit(c+1094,"clk_i", false,-1);
    tracep->declBit(c+1148,"stage1_rst_i", false,-1);
    tracep->declBit(c+1146,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1114,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+650,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+732,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1095,"wb_rst_i", false,-1);
    tracep->declBus(c+655,"lcr", false,-1, 7,0);
    tracep->declBit(c+695,"rf_pop", false,-1);
    tracep->declBit(c+707,"srx_pad_i", false,-1);
    tracep->declBit(c+649,"enable", false,-1);
    tracep->declBit(c+664,"rx_reset", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBus(c+702,"counter_t", false,-1, 9,0);
    tracep->declBus(c+698,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1131,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+674,"rf_overrun", false,-1);
    tracep->declBit(c+696,"rf_error_bit", false,-1);
    tracep->declBus(c+701,"rstate", false,-1, 3,0);
    tracep->declBit(c+697,"rf_push_pulse", false,-1);
    tracep->declBus(c+733,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+734,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+735,"rshift", false,-1, 7,0);
    tracep->declBit(c+736,"rparity", false,-1);
    tracep->declBit(c+737,"rparity_error", false,-1);
    tracep->declBit(c+738,"rframing_error", false,-1);
    tracep->declBit(c+739,"rbit_in", false,-1);
    tracep->declBit(c+740,"rparity_xor", false,-1);
    tracep->declBus(c+741,"counter_b", false,-1, 7,0);
    tracep->declBit(c+742,"rf_push_q", false,-1);
    tracep->declBus(c+743,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+744,"rf_push", false,-1);
    tracep->declBit(c+745,"break_error", false,-1);
    tracep->declBit(c+746,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+747,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+748,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+749,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1169,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1246,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1245,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1243,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1242,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1248,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1249,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1257,"sr_push", false,-1, 3,0);
    tracep->declBus(c+750,"toc_value", false,-1, 9,0);
    tracep->declBus(c+751,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1258,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1251,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1221,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1259,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1095,"wb_rst_i", false,-1);
    tracep->declBit(c+697,"push", false,-1);
    tracep->declBit(c+695,"pop", false,-1);
    tracep->declBus(c+743,"data_in", false,-1, 10,0);
    tracep->declBit(c+664,"fifo_reset", false,-1);
    tracep->declBit(c+5,"reset_status", false,-1);
    tracep->declBus(c+1131,"data_out", false,-1, 10,0);
    tracep->declBit(c+674,"overrun", false,-1);
    tracep->declBus(c+698,"count", false,-1, 4,0);
    tracep->declBit(c+696,"error_bit", false,-1);
    tracep->declBus(c+1132,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+752+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+768,"top", false,-1, 3,0);
    tracep->declBus(c+769,"bottom", false,-1, 3,0);
    tracep->declBus(c+770,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+771,"word0", false,-1, 2,0);
    tracep->declBus(c+772,"word1", false,-1, 2,0);
    tracep->declBus(c+773,"word2", false,-1, 2,0);
    tracep->declBus(c+774,"word3", false,-1, 2,0);
    tracep->declBus(c+775,"word4", false,-1, 2,0);
    tracep->declBus(c+776,"word5", false,-1, 2,0);
    tracep->declBus(c+777,"word6", false,-1, 2,0);
    tracep->declBus(c+778,"word7", false,-1, 2,0);
    tracep->declBus(c+779,"word8", false,-1, 2,0);
    tracep->declBus(c+780,"word9", false,-1, 2,0);
    tracep->declBus(c+781,"word10", false,-1, 2,0);
    tracep->declBus(c+782,"word11", false,-1, 2,0);
    tracep->declBus(c+783,"word12", false,-1, 2,0);
    tracep->declBus(c+784,"word13", false,-1, 2,0);
    tracep->declBus(c+785,"word14", false,-1, 2,0);
    tracep->declBus(c+786,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1221,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1256,"data_width", false,-1, 31,0);
    tracep->declBus(c+1251,"depth", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+697,"we", false,-1);
    tracep->declBus(c+768,"a", false,-1, 3,0);
    tracep->declBus(c+769,"dpra", false,-1, 3,0);
    tracep->declBus(c+787,"di", false,-1, 7,0);
    tracep->declBus(c+1132,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+479+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1095,"wb_rst_i", false,-1);
    tracep->declBus(c+655,"lcr", false,-1, 7,0);
    tracep->declBit(c+694,"tf_push", false,-1);
    tracep->declBus(c+949,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+649,"enable", false,-1);
    tracep->declBit(c+665,"tx_reset", false,-1);
    tracep->declBit(c+5,"lsr_mask", false,-1);
    tracep->declBit(c+706,"stx_pad_o", false,-1);
    tracep->declBus(c+700,"tstate", false,-1, 2,0);
    tracep->declBus(c+699,"tf_count", false,-1, 4,0);
    tracep->declBus(c+788,"counter", false,-1, 4,0);
    tracep->declBus(c+789,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+790,"shift_out", false,-1, 6,0);
    tracep->declBit(c+791,"stx_o_tmp", false,-1);
    tracep->declBit(c+792,"parity_xor", false,-1);
    tracep->declBit(c+793,"tf_pop", false,-1);
    tracep->declBit(c+794,"bit_out", false,-1);
    tracep->declBus(c+949,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1133,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+795,"tf_overrun", false,-1);
    tracep->declBus(c+1170,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1147,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1214,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1215,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1216,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1260,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1256,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1251,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1221,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1259,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+1095,"wb_rst_i", false,-1);
    tracep->declBit(c+694,"push", false,-1);
    tracep->declBit(c+793,"pop", false,-1);
    tracep->declBus(c+949,"data_in", false,-1, 7,0);
    tracep->declBit(c+665,"fifo_reset", false,-1);
    tracep->declBit(c+5,"reset_status", false,-1);
    tracep->declBus(c+1133,"data_out", false,-1, 7,0);
    tracep->declBit(c+795,"overrun", false,-1);
    tracep->declBus(c+699,"count", false,-1, 4,0);
    tracep->declBus(c+796,"top", false,-1, 3,0);
    tracep->declBus(c+797,"bottom", false,-1, 3,0);
    tracep->declBus(c+798,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1221,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1256,"data_width", false,-1, 31,0);
    tracep->declBus(c+1251,"depth", false,-1, 31,0);
    tracep->declBit(c+1094,"clk", false,-1);
    tracep->declBit(c+694,"we", false,-1);
    tracep->declBus(c+796,"a", false,-1, 3,0);
    tracep->declBus(c+797,"dpra", false,-1, 3,0);
    tracep->declBus(c+949,"di", false,-1, 7,0);
    tracep->declBus(c+1133,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+495+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBit(c+513,"auto_in_psel", false,-1);
    tracep->declBit(c+514,"auto_in_penable", false,-1);
    tracep->declBit(c+13,"auto_in_pwrite", false,-1);
    tracep->declBus(c+910,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1147,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+908,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_in_pready", false,-1);
    tracep->declBit(c+1150,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1151,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1108,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1110,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1111,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1112,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1113,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1094,"clock", false,-1);
    tracep->declBit(c+1095,"reset", false,-1);
    tracep->declBus(c+944,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+513,"in_psel", false,-1);
    tracep->declBit(c+514,"in_penable", false,-1);
    tracep->declBus(c+1147,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+13,"in_pwrite", false,-1);
    tracep->declBus(c+908,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"in_pready", false,-1);
    tracep->declBus(c+1151,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1150,"in_pslverr", false,-1);
    tracep->declBus(c+1108,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1109,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1110,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1111,"vga_hsync", false,-1);
    tracep->declBit(c+1112,"vga_vsync", false,-1);
    tracep->declBit(c+1113,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+4,"ss", false,-1);
    tracep->declBit(c+1146,"mosi", false,-1);
    tracep->declBit(c+1134,"miso", false,-1);
    tracep->declBus(c+1065,"data_in", false,-1, 7,0);
    tracep->declBus(c+1066,"data_out", false,-1, 7,0);
    tracep->declBus(c+1067,"bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1068,"receiving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+4,"ss", false,-1);
    tracep->declBit(c+1146,"mosi", false,-1);
    tracep->declBit(c+1135,"miso", false,-1);
    tracep->declBit(c+4,"reset", false,-1);
    tracep->declBus(c+1059,"state", false,-1, 2,0);
    tracep->declBus(c+1060,"counter", false,-1, 7,0);
    tracep->declBus(c+1061,"cmd", false,-1, 7,0);
    tracep->declBus(c+1062,"addr", false,-1, 23,0);
    tracep->declBus(c+1136,"data", false,-1, 31,0);
    tracep->declBit(c+1063,"ren", false,-1);
    tracep->declBus(c+1137,"rdata", false,-1, 31,0);
    tracep->declBus(c+1064,"raddr", false,-1, 31,0);
    tracep->declBus(c+1138,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+1063,"valid", false,-1);
    tracep->declBus(c+1061,"cmd", false,-1, 7,0);
    tracep->declBus(c+1064,"addr", false,-1, 31,0);
    tracep->declBus(c+1137,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1074,"sck", false,-1);
    tracep->declBit(c+1075,"ce_n", false,-1);
    tracep->declBus(c+1117,"dio", false,-1, 3,0);
    tracep->declBus(c+1230,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1231,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1261,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1069,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1139,"dout", false,-1, 3,0);
    tracep->declBus(c+1117,"din", false,-1, 3,0);
    tracep->declBit(c+1140,"QPI_MODE", false,-1);
    tracep->declBus(c+1070,"cmd", false,-1, 7,0);
    tracep->declBus(c+1071,"addr", false,-1, 23,0);
    tracep->declBus(c+1141,"data", false,-1, 31,0);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+1072,"cnt", false,-1, 7,0);
    tracep->declBus(c+1073,"state", false,-1, 2,0);
    tracep->declBus(c+1170,"CMD", false,-1, 2,0);
    tracep->declBus(c+1147,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1214,"DATA", false,-1, 2,0);
    tracep->declBus(c+1215,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1216,"ERR", false,-1, 2,0);
    tracep->declBus(c+1143,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1144,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1118,"clk", false,-1);
    tracep->declBit(c+593,"cke", false,-1);
    tracep->declBit(c+594,"cs", false,-1);
    tracep->declBit(c+595,"ras", false,-1);
    tracep->declBit(c+596,"cas", false,-1);
    tracep->declBit(c+597,"we", false,-1);
    tracep->declBus(c+598,"a", false,-1, 12,0);
    tracep->declBus(c+599,"ba", false,-1, 1,0);
    tracep->declBus(c+600,"dqm", false,-1, 1,0);
    tracep->declBus(c+601,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__addr_valid));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__addr_valid));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+12,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+15,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+19,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+20,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+21,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+22,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+24,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+25,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+30,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+31,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+32,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+33,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+44,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+50,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+51,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+56,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+57,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+58,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+59,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+60,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+124,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+127,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+133,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+134,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+138,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+139,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+141,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+176,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+185,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+199,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+200,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+201,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+202,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awaddr),32);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awvalid));
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wdata),32);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wstrb),4);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wvalid));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bready));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),3);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__next_clint_state),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__LFSR),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wdata_reg),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rdata_reg),32);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wstrb_reg),4);
    bufp->fullQData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+442,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+443,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__sram_state),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__next_sram_state),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__LFSR),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__araddr_reg),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__rdata_reg),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__uart_state),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__next_uart_state),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__LFSR),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__araddr_reg),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wdata_reg),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__rdata_reg),32);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+475,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? 0U : 3U)),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)))));
    bufp->fullCData(oldp+521,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+524,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+526,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+531,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+532,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+534,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+535,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+536,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+537,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+538,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+539,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+540,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+541,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+542,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+544,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+547,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+548,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+549,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+550,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+551,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+552,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+553,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+554,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+555,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+556,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+557,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+558,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+559,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+560,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+561,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+562,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+563,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+564,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+565,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+566,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+567,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+568,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+569,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+570,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+571,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+572,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+573,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+574,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+575,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+576,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+577,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+578,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+579,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+581,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+582,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+583,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+584,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+585,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+586,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+587,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+588,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+589,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+590,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+591,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+592,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+597,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+601,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+603,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+606,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+607,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+610,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+611,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+616,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+620,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+622,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+645,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+646,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+648,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+666,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+667,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+668,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+669,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+670,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+671,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+672,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+676,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+677,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+696,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+703,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+722,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+723,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+724,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+725,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+726,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+745,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+746,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+747,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+748,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+749,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+751,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+770,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+787,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+798,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault));
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr),32);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode),7);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7),7);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op),4);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen),3);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val),32);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready));
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out),32);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault));
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr),32);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready));
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr),32);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid));
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata),32);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb),4);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready));
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data),32);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target),32);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch));
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state),32);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+858,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+859,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+860,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
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
    bufp->fullIData(oldp+861,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__i),32);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+910,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+911,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+926,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+927,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+932,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+933,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+934,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+935,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+936,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+941,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+942,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+943,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+944,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+945,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullIData(oldp+946,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+947,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+955,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+961,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+996,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1001,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1002,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1004,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1006,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1007,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1014,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1015,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1016,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1023,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready));
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata),32);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp),2);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready));
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata),32);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid));
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp),2);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready));
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp),2);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__addr_valid));
    bufp->fullIData(oldp+1056,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullBit(oldp+1063,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1064,((1U | (0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                   << 1U)))),32);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out),8);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),3);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving));
    bufp->fullCData(oldp+1069,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1094,(vlSelf->clock));
    bufp->fullBit(oldp+1095,(vlSelf->reset));
    bufp->fullSData(oldp+1096,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1097,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1098,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1099,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1100,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1101,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1102,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1103,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1104,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1105,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1106,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1107,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1108,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1109,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1110,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1111,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1112,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1113,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1114,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1115,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   >> 8U)) 
                                               | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  >> 0x18U))))
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1118,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1119,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1121,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1122,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1125,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
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
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1128,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1131,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1135,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))))
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1138,(((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1139,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1144,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1145,(0U),8);
    bufp->fullBit(oldp+1146,(1U));
    bufp->fullCData(oldp+1147,(1U),3);
    bufp->fullBit(oldp+1148,(0U));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1168,(0U),32);
    bufp->fullCData(oldp+1169,(0U),4);
    bufp->fullCData(oldp+1170,(0U),3);
    bufp->fullCData(oldp+1171,(0U),2);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_pc),32);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awready));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wready));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bresp),2);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bvalid));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_valid));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_ready));
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wb),5);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite_wb));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemRead));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemWrite));
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemLen),3);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_addr),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data_in),32);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1214,(2U),3);
    bufp->fullCData(oldp+1215,(3U),3);
    bufp->fullCData(oldp+1216,(4U),3);
    bufp->fullCData(oldp+1217,(1U),2);
    bufp->fullCData(oldp+1218,(2U),2);
    bufp->fullCData(oldp+1219,(3U),2);
    bufp->fullIData(oldp+1220,(0x20U),32);
    bufp->fullIData(oldp+1221,(4U),32);
    bufp->fullIData(oldp+1222,(1U),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+1224,(3U),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__random_delay),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__j),32);
    bufp->fullBit(oldp+1227,(0U));
    bufp->fullBit(oldp+1228,(1U));
    bufp->fullCData(oldp+1229,(0x1bU),8);
    bufp->fullCData(oldp+1230,(0xebU),8);
    bufp->fullCData(oldp+1231,(0x38U),8);
    bufp->fullIData(oldp+1232,(0x64U),32);
    bufp->fullIData(oldp+1233,(0x18U),32);
    bufp->fullIData(oldp+1234,(9U),32);
    bufp->fullIData(oldp+1235,(2U),32);
    bufp->fullIData(oldp+1236,(0xdU),32);
    bufp->fullIData(oldp+1237,(0x2000U),32);
    bufp->fullIData(oldp+1238,(0x2710U),32);
    bufp->fullIData(oldp+1239,(0x30cU),32);
    bufp->fullCData(oldp+1240,(7U),4);
    bufp->fullCData(oldp+1241,(3U),4);
    bufp->fullCData(oldp+1242,(5U),4);
    bufp->fullCData(oldp+1243,(4U),4);
    bufp->fullCData(oldp+1244,(6U),4);
    bufp->fullCData(oldp+1245,(2U),4);
    bufp->fullCData(oldp+1246,(1U),4);
    bufp->fullSData(oldp+1247,(0x21U),13);
    bufp->fullCData(oldp+1248,(8U),4);
    bufp->fullCData(oldp+1249,(9U),4);
    bufp->fullIData(oldp+1250,(0xaU),32);
    bufp->fullIData(oldp+1251,(0x10U),32);
    bufp->fullIData(oldp+1252,(6U),32);
    bufp->fullIData(oldp+1253,(0x11U),32);
    bufp->fullIData(oldp+1254,(0x30000000U),32);
    bufp->fullIData(oldp+1255,(0x3fffffffU),32);
    bufp->fullIData(oldp+1256,(8U),32);
    bufp->fullCData(oldp+1257,(0xaU),4);
    bufp->fullIData(oldp+1258,(0xbU),32);
    bufp->fullIData(oldp+1259,(5U),32);
    bufp->fullCData(oldp+1260,(5U),3);
    bufp->fullCData(oldp+1261,(0x35U),8);
}
