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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1286,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1297,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1298,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1302,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1303,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1304,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1305,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1286,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1297,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1298,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1302,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1303,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1304,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1305,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+737,"spi_sck", false,-1);
    tracep->declBus(c+738,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1306,"spi_mosi", false,-1);
    tracep->declBit(c+1307,"spi_miso", false,-1);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->declBit(c+1262,"psram_sck", false,-1);
    tracep->declBit(c+1263,"psram_ce_n", false,-1);
    tracep->declBus(c+1308,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1309,"sdram_clk", false,-1);
    tracep->declBit(c+1173,"sdram_cke", false,-1);
    tracep->declBit(c+1174,"sdram_cs", false,-1);
    tracep->declBit(c+1175,"sdram_ras", false,-1);
    tracep->declBit(c+1176,"sdram_cas", false,-1);
    tracep->declBit(c+1177,"sdram_we", false,-1);
    tracep->declBus(c+1310,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1178,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1286,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"ps2_clk", false,-1);
    tracep->declBit(c+1297,"ps2_data", false,-1);
    tracep->declBus(c+1298,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_hsync", false,-1);
    tracep->declBit(c+1302,"vga_vsync", false,-1);
    tracep->declBit(c+1303,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1203,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1152,"in_psel", false,-1);
    tracep->declBit(c+189,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"in_pready", false,-1);
    tracep->declBus(c+1265,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1204,"in_pslverr", false,-1);
    tracep->declBus(c+1203,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1152,"out_psel", false,-1);
    tracep->declBit(c+189,"out_penable", false,-1);
    tracep->declBus(c+1336,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"out_pwrite", false,-1);
    tracep->declBus(c+1154,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"out_pready", false,-1);
    tracep->declBus(c+1265,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1204,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1152,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+189,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1204,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1265,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1163,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+731,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+739,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+740,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1206,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+190,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1165,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+732,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+741,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+726,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+733,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1208,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1339,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1209,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+734,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1311,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+191,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1210,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1211,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1312,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1213,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1214,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1153,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1206,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1313,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1314,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1216,"sel_0", false,-1);
    tracep->declBit(c+1217,"sel_1", false,-1);
    tracep->declBit(c+1218,"sel_2", false,-1);
    tracep->declBit(c+1219,"sel_3", false,-1);
    tracep->declBit(c+1220,"sel_4", false,-1);
    tracep->declBit(c+1221,"sel_5", false,-1);
    tracep->declBit(c+1222,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+192,"auto_in_awready", false,-1);
    tracep->declBit(c+193,"auto_in_awvalid", false,-1);
    tracep->declBus(c+194,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+192,"auto_in_wready", false,-1);
    tracep->declBit(c+198,"auto_in_wvalid", false,-1);
    tracep->declBus(c+199,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+200,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+201,"auto_in_bready", false,-1);
    tracep->declBit(c+1266,"auto_in_bvalid", false,-1);
    tracep->declBus(c+202,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_in_arready", false,-1);
    tracep->declBit(c+204,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_in_rready", false,-1);
    tracep->declBit(c+1267,"auto_in_rvalid", false,-1);
    tracep->declBus(c+210,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1315,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1223,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1152,"auto_out_psel", false,-1);
    tracep->declBit(c+189,"auto_out_penable", false,-1);
    tracep->declBit(c+1153,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"auto_out_pready", false,-1);
    tracep->declBit(c+1204,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1265,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+189,"nodeOut_penable", false,-1);
    tracep->declBus(c+211,"state", false,-1, 1,0);
    tracep->declBit(c+203,"accept_read", false,-1);
    tracep->declBit(c+192,"accept_write", false,-1);
    tracep->declBit(c+212,"is_write_r", false,-1);
    tracep->declBit(c+1153,"is_write", false,-1);
    tracep->declBus(c+210,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+202,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+213,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+214,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+215,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+216,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1224,"resp", false,-1, 1,0);
    tracep->declBus(c+217,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1223,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1267,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+218,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1266,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+219,"auto_in_awready", false,-1);
    tracep->declBit(c+74,"auto_in_awvalid", false,-1);
    tracep->declBus(c+220,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+223,"auto_in_wready", false,-1);
    tracep->declBit(c+76,"auto_in_wvalid", false,-1);
    tracep->declBus(c+77,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_in_wlast", false,-1);
    tracep->declBit(c+3,"auto_in_bready", false,-1);
    tracep->declBit(c+224,"auto_in_bvalid", false,-1);
    tracep->declBus(c+225,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_in_arready", false,-1);
    tracep->declBit(c+80,"auto_in_arvalid", false,-1);
    tracep->declBus(c+228,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_in_rready", false,-1);
    tracep->declBit(c+231,"auto_in_rvalid", false,-1);
    tracep->declBus(c+232,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+233,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+235,"auto_in_rlast", false,-1);
    tracep->declBit(c+192,"auto_out_awready", false,-1);
    tracep->declBit(c+193,"auto_out_awvalid", false,-1);
    tracep->declBus(c+194,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+192,"auto_out_wready", false,-1);
    tracep->declBit(c+198,"auto_out_wvalid", false,-1);
    tracep->declBus(c+199,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+200,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+201,"auto_out_bready", false,-1);
    tracep->declBit(c+1266,"auto_out_bvalid", false,-1);
    tracep->declBus(c+202,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_out_arready", false,-1);
    tracep->declBit(c+204,"auto_out_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_out_rready", false,-1);
    tracep->declBit(c+1267,"auto_out_rvalid", false,-1);
    tracep->declBus(c+210,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1315,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1223,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+201,"io_enq_ready", false,-1);
    tracep->declBit(c+1266,"io_enq_valid", false,-1);
    tracep->declBus(c+202,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1223,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+3,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBus(c+225,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+226,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+236,"wrap", false,-1);
    tracep->declBit(c+237,"wrap_1", false,-1);
    tracep->declBit(c+238,"maybe_full", false,-1);
    tracep->declBit(c+239,"ptr_match", false,-1);
    tracep->declBit(c+240,"empty", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+1268,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+237,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declBus(c+242,"R0_data", false,-1, 5,0);
    tracep->declBit(c+236,"W0_addr", false,-1);
    tracep->declBit(c+1268,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declBus(c+735,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+243+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+209,"io_enq_ready", false,-1);
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBus(c+210,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1315,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1223,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBus(c+232,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+233,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+234,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+235,"io_deq_bits_last", false,-1);
    tracep->declBit(c+246,"wrap", false,-1);
    tracep->declBit(c+247,"wrap_1", false,-1);
    tracep->declBit(c+248,"maybe_full", false,-1);
    tracep->declBit(c+249,"ptr_match", false,-1);
    tracep->declBit(c+250,"empty", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+1269,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+247,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declQuad(c+252,"R0_data", false,-1, 38,0);
    tracep->declBit(c+246,"W0_addr", false,-1);
    tracep->declBit(c+1269,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declQuad(c+1316,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+254+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBus(c+228,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+81,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+229,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+230,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+203,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBus(c+205,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+206,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+207,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+208,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+259,"wrap", false,-1);
    tracep->declBit(c+260,"wrap_1", false,-1);
    tracep->declBit(c+261,"maybe_full", false,-1);
    tracep->declBit(c+262,"ptr_match", false,-1);
    tracep->declBit(c+263,"empty", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+82,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+260,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declQuad(c+265,"R0_data", false,-1, 46,0);
    tracep->declBit(c+259,"W0_addr", false,-1);
    tracep->declBit(c+82,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declQuad(c+5,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+267+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBus(c+220,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+75,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+221,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+222,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+192,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBus(c+194,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+195,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+196,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+197,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+272,"wrap", false,-1);
    tracep->declBit(c+273,"wrap_1", false,-1);
    tracep->declBit(c+274,"maybe_full", false,-1);
    tracep->declBit(c+275,"ptr_match", false,-1);
    tracep->declBit(c+276,"empty", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+83,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+273,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declQuad(c+278,"R0_data", false,-1, 46,0);
    tracep->declBit(c+272,"W0_addr", false,-1);
    tracep->declBit(c+83,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declQuad(c+7,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+280+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBus(c+77,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+78,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+79,"io_enq_bits_last", false,-1);
    tracep->declBit(c+192,"io_deq_ready", false,-1);
    tracep->declBit(c+198,"io_deq_valid", false,-1);
    tracep->declBus(c+199,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+200,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+285,"wrap", false,-1);
    tracep->declBit(c+286,"wrap_1", false,-1);
    tracep->declBit(c+287,"maybe_full", false,-1);
    tracep->declBit(c+288,"ptr_match", false,-1);
    tracep->declBit(c+289,"empty", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+84,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+286,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declQuad(c+291,"R0_data", false,-1, 35,0);
    tracep->declBit(c+285,"W0_addr", false,-1);
    tracep->declBit(c+84,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declQuad(c+85,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+293+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+298,"auto_in_awready", false,-1);
    tracep->declBit(c+87,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1341,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1342,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1343,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1344,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_in_wready", false,-1);
    tracep->declBit(c+89,"auto_in_wvalid", false,-1);
    tracep->declBus(c+90,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_in_wlast", false,-1);
    tracep->declBit(c+92,"auto_in_bready", false,-1);
    tracep->declBit(c+300,"auto_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_in_arready", false,-1);
    tracep->declBit(c+93,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1346,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+94,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1347,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_in_rready", false,-1);
    tracep->declBit(c+304,"auto_in_rvalid", false,-1);
    tracep->declBus(c+305,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_in_rlast", false,-1);
    tracep->declBit(c+96,"auto_out_awready", false,-1);
    tracep->declBit(c+97,"auto_out_awvalid", false,-1);
    tracep->declBus(c+220,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+309,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+98,"auto_out_wready", false,-1);
    tracep->declBit(c+99,"auto_out_wvalid", false,-1);
    tracep->declBus(c+77,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_out_wlast", false,-1);
    tracep->declBit(c+100,"auto_out_bready", false,-1);
    tracep->declBit(c+310,"auto_out_bvalid", false,-1);
    tracep->declBus(c+301,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+312,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_out_arready", false,-1);
    tracep->declBit(c+102,"auto_out_arvalid", false,-1);
    tracep->declBus(c+228,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+313,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+95,"auto_out_rready", false,-1);
    tracep->declBit(c+304,"auto_out_rvalid", false,-1);
    tracep->declBus(c+305,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+314,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+315,"auto_out_rlast", false,-1);
    tracep->declBit(c+99,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+316,"w_idle", false,-1);
    tracep->declBit(c+103,"in_awready", false,-1);
    tracep->declBit(c+317,"busy", false,-1);
    tracep->declBus(c+318,"r_addr", false,-1, 31,0);
    tracep->declBus(c+319,"r_len", false,-1, 7,0);
    tracep->declBus(c+320,"len", false,-1, 7,0);
    tracep->declBus(c+104,"addr", false,-1, 31,0);
    tracep->declBit(c+321,"busy_1", false,-1);
    tracep->declBus(c+322,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+323,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+324,"len_1", false,-1, 7,0);
    tracep->declBus(c+105,"addr_1", false,-1, 31,0);
    tracep->declBit(c+325,"wbeats_latched", false,-1);
    tracep->declBit(c+97,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+106,"wbeats_valid", false,-1);
    tracep->declBus(c+326,"w_counter", false,-1, 8,0);
    tracep->declBus(c+107,"w_todo", false,-1, 8,0);
    tracep->declBit(c+79,"w_last", false,-1);
    tracep->declBit(c+100,"nodeOut_bready", false,-1);
    tracep->declBus(c+327,"error_0", false,-1, 1,0);
    tracep->declBus(c+328,"error_1", false,-1, 1,0);
    tracep->declBus(c+329,"error_2", false,-1, 1,0);
    tracep->declBus(c+330,"error_3", false,-1, 1,0);
    tracep->declBus(c+331,"error_4", false,-1, 1,0);
    tracep->declBus(c+332,"error_5", false,-1, 1,0);
    tracep->declBus(c+333,"error_6", false,-1, 1,0);
    tracep->declBus(c+334,"error_7", false,-1, 1,0);
    tracep->declBus(c+335,"error_8", false,-1, 1,0);
    tracep->declBus(c+336,"error_9", false,-1, 1,0);
    tracep->declBus(c+337,"error_10", false,-1, 1,0);
    tracep->declBus(c+338,"error_11", false,-1, 1,0);
    tracep->declBus(c+339,"error_12", false,-1, 1,0);
    tracep->declBus(c+340,"error_13", false,-1, 1,0);
    tracep->declBus(c+341,"error_14", false,-1, 1,0);
    tracep->declBus(c+342,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+93,"io_enq_valid", false,-1);
    tracep->declBus(c+1346,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+94,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1347,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1348,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1349,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+108,"io_deq_ready", false,-1);
    tracep->declBit(c+102,"io_deq_valid", false,-1);
    tracep->declBus(c+228,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+109,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+343,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+229,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+230,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+344,"ram", false,-1, 48,0);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+102,"io_deq_valid_0", false,-1);
    tracep->declBit(c+110,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBus(c+1341,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+88,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1342,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1343,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1344,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+111,"io_deq_ready", false,-1);
    tracep->declBit(c+112,"io_deq_valid", false,-1);
    tracep->declBus(c+220,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+113,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+347,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+221,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+222,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+348,"ram", false,-1, 48,0);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+112,"io_deq_valid_0", false,-1);
    tracep->declBit(c+114,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBus(c+90,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+91,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1345,"io_enq_bits_last", false,-1);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+116,"io_deq_valid", false,-1);
    tracep->declBus(c+77,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+78,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+351,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+352,"ram", false,-1, 36,0);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+116,"io_deq_valid_0", false,-1);
    tracep->declBit(c+117,"do_enq", false,-1);
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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+118,"auto_in_awready", false,-1);
    tracep->declBit(c+119,"auto_in_awvalid", false,-1);
    tracep->declBus(c+220,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+121,"auto_in_wready", false,-1);
    tracep->declBit(c+122,"auto_in_wvalid", false,-1);
    tracep->declBus(c+77,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+123,"auto_in_bready", false,-1);
    tracep->declBit(c+355,"auto_in_bvalid", false,-1);
    tracep->declBus(c+356,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+357,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_in_arready", false,-1);
    tracep->declBit(c+125,"auto_in_arvalid", false,-1);
    tracep->declBus(c+228,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+127,"auto_in_rready", false,-1);
    tracep->declBit(c+358,"auto_in_rvalid", false,-1);
    tracep->declBus(c+359,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+360,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+361,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"nodeIn_arready", false,-1);
    tracep->declBit(c+118,"nodeIn_awready", false,-1);
    tracep->declBit(c+128,"w_sel0", false,-1);
    tracep->declBit(c+355,"w_full", false,-1);
    tracep->declBus(c+356,"w_id", false,-1, 3,0);
    tracep->declBit(c+362,"r_sel1", false,-1);
    tracep->declBit(c+363,"w_sel1", false,-1);
    tracep->declBit(c+358,"r_full", false,-1);
    tracep->declBus(c+359,"r_id", false,-1, 3,0);
    tracep->declBit(c+129,"ren", false,-1);
    tracep->declBit(c+364,"rdata_REG", false,-1);
    tracep->declBus(c+365,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+366,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+367,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+368,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+130,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+129,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declBus(c+369,"R0_data", false,-1, 31,0);
    tracep->declBus(c+131,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+132,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declBus(c+77,"W0_data", false,-1, 31,0);
    tracep->declBus(c+78,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+298,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+87,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1341,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1342,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1343,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1344,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+89,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+90,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+92,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+300,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+93,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1346,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+94,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1347,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+304,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+305,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+298,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+87,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1341,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1342,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1343,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1344,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+89,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+90,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+92,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+300,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+301,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+93,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1346,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+94,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1347,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+304,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+305,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+133,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+134,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+98,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+99,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+77,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+100,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+310,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+135,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+136,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+228,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+304,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+305,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+315,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+118,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+119,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+121,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+122,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+77,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+123,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+355,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+356,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+357,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+125,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+228,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+127,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+358,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+359,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+360,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+361,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+137,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+138,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+370,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+139,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+228,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+9,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+371,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+372,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+373,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+219,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+74,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+223,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+76,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+77,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+3,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+224,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+225,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+226,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+227,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+228,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+4,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+231,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+232,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+233,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+235,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+310,"in_0_bvalid", false,-1);
    tracep->declBit(c+304,"in_0_rvalid", false,-1);
    tracep->declBit(c+141,"in_0_wready", false,-1);
    tracep->declBit(c+142,"in_0_awready", false,-1);
    tracep->declBit(c+135,"in_0_arready", false,-1);
    tracep->declBit(c+133,"anonIn_awready", false,-1);
    tracep->declBit(c+143,"requestARIO_0_0", false,-1);
    tracep->declBit(c+144,"requestARIO_0_1", false,-1);
    tracep->declBit(c+145,"requestARIO_0_2", false,-1);
    tracep->declBit(c+146,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+147,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+148,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+374,"arSel", false,-1, 15,0);
    tracep->declBus(c+375,"awSel", false,-1, 15,0);
    tracep->declBus(c+376,"rSel", false,-1, 15,0);
    tracep->declBus(c+377,"bSel", false,-1, 15,0);
    tracep->declBit(c+378,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+379,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+380,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+381,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+382,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+383,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+384,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+385,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+386,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+387,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+388,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+389,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+390,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+391,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+392,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+393,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+394,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+395,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+396,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+397,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+398,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+399,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+400,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+401,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+402,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+403,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+404,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+405,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+406,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+407,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+408,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+409,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+410,"latched", false,-1);
    tracep->declBit(c+149,"in_0_awvalid", false,-1);
    tracep->declBit(c+150,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+151,"in_0_wvalid", false,-1);
    tracep->declBit(c+411,"idle_3", false,-1);
    tracep->declBit(c+412,"anyValid", false,-1);
    tracep->declBus(c+413,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+414,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+415,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+416,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+417,"prefixOR_1", false,-1);
    tracep->declBit(c+418,"winner_3_1", false,-1);
    tracep->declBit(c+419,"winner_3_2", false,-1);
    tracep->declBit(c+420,"state_3_0", false,-1);
    tracep->declBit(c+421,"state_3_1", false,-1);
    tracep->declBit(c+422,"state_3_2", false,-1);
    tracep->declBit(c+423,"muxState_3_0", false,-1);
    tracep->declBit(c+424,"muxState_3_1", false,-1);
    tracep->declBit(c+425,"muxState_3_2", false,-1);
    tracep->declBit(c+426,"idle_4", false,-1);
    tracep->declBit(c+427,"anyValid_1", false,-1);
    tracep->declBus(c+428,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+429,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+430,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+431,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+432,"winner_4_0", false,-1);
    tracep->declBit(c+433,"winner_4_2", false,-1);
    tracep->declBit(c+434,"state_4_0", false,-1);
    tracep->declBit(c+435,"state_4_2", false,-1);
    tracep->declBit(c+436,"muxState_4_0", false,-1);
    tracep->declBit(c+437,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+150,"io_enq_valid", false,-1);
    tracep->declBus(c+152,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+153,"io_deq_ready", false,-1);
    tracep->declBit(c+154,"io_deq_valid", false,-1);
    tracep->declBus(c+155,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+439,"wrap", false,-1);
    tracep->declBit(c+440,"wrap_1", false,-1);
    tracep->declBit(c+441,"maybe_full", false,-1);
    tracep->declBit(c+442,"ptr_match", false,-1);
    tracep->declBit(c+443,"empty", false,-1);
    tracep->declBit(c+444,"full", false,-1);
    tracep->declBit(c+154,"io_deq_valid_0", false,-1);
    tracep->declBit(c+156,"do_deq", false,-1);
    tracep->declBit(c+157,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+440,"R0_addr", false,-1);
    tracep->declBit(c+1340,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declBus(c+445,"R0_data", false,-1, 2,0);
    tracep->declBit(c+439,"W0_addr", false,-1);
    tracep->declBit(c+157,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declBus(c+152,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+446+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+96,"auto_in_awready", false,-1);
    tracep->declBit(c+97,"auto_in_awvalid", false,-1);
    tracep->declBus(c+220,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+309,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+98,"auto_in_wready", false,-1);
    tracep->declBit(c+99,"auto_in_wvalid", false,-1);
    tracep->declBus(c+77,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_in_wlast", false,-1);
    tracep->declBit(c+100,"auto_in_bready", false,-1);
    tracep->declBit(c+310,"auto_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+312,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+102,"auto_in_arvalid", false,-1);
    tracep->declBus(c+228,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+313,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+95,"auto_in_rready", false,-1);
    tracep->declBit(c+304,"auto_in_rvalid", false,-1);
    tracep->declBus(c+305,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+314,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+315,"auto_in_rlast", false,-1);
    tracep->declBit(c+133,"auto_out_awready", false,-1);
    tracep->declBit(c+134,"auto_out_awvalid", false,-1);
    tracep->declBus(c+220,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+221,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+222,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+98,"auto_out_wready", false,-1);
    tracep->declBit(c+99,"auto_out_wvalid", false,-1);
    tracep->declBus(c+77,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_out_wlast", false,-1);
    tracep->declBit(c+100,"auto_out_bready", false,-1);
    tracep->declBit(c+310,"auto_out_bvalid", false,-1);
    tracep->declBus(c+301,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+311,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+135,"auto_out_arready", false,-1);
    tracep->declBit(c+136,"auto_out_arvalid", false,-1);
    tracep->declBus(c+228,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+81,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+229,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+230,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_out_rready", false,-1);
    tracep->declBit(c+304,"auto_out_rvalid", false,-1);
    tracep->declBus(c+305,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+315,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+10,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+12,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+456,"io_enq_ready", false,-1);
    tracep->declBit(c+14,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+457,"io_deq_valid", false,-1);
    tracep->declBit(c+458,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+457,"full", false,-1);
    tracep->declBit(c+458,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+459,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+16,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+18,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+468,"io_enq_ready", false,-1);
    tracep->declBit(c+20,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+469,"io_deq_valid", false,-1);
    tracep->declBit(c+470,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+469,"full", false,-1);
    tracep->declBit(c+470,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+471,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+24,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+25,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+26,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+27,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+29,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+31,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+32,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+34,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+38,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+39,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+40,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+41,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+43,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+44,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+45,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+46,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+47,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+48,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+49,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+53,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+55,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+56,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+57,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+59,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+309,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+61,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+63,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+65,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+67,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+69,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+71,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+313,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+73,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBit(c+298,"auto_master_out_awready", false,-1);
    tracep->declBit(c+87,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1341,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1342,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1343,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1344,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"auto_master_out_wready", false,-1);
    tracep->declBit(c+89,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+90,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+92,"auto_master_out_bready", false,-1);
    tracep->declBit(c+300,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+301,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_master_out_arready", false,-1);
    tracep->declBit(c+93,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1346,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+94,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1347,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"auto_master_out_rready", false,-1);
    tracep->declBit(c+304,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+305,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+306,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBit(c+1337,"io_interrupt", false,-1);
    tracep->declBit(c+298,"io_master_awready", false,-1);
    tracep->declBit(c+87,"io_master_awvalid", false,-1);
    tracep->declBus(c+88,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1341,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1342,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1343,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1344,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+299,"io_master_wready", false,-1);
    tracep->declBit(c+89,"io_master_wvalid", false,-1);
    tracep->declBus(c+90,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1345,"io_master_wlast", false,-1);
    tracep->declBit(c+92,"io_master_bready", false,-1);
    tracep->declBit(c+300,"io_master_bvalid", false,-1);
    tracep->declBus(c+302,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+301,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+303,"io_master_arready", false,-1);
    tracep->declBit(c+93,"io_master_arvalid", false,-1);
    tracep->declBus(c+94,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1347,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+95,"io_master_rready", false,-1);
    tracep->declBit(c+304,"io_master_rvalid", false,-1);
    tracep->declBus(c+307,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+306,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+308,"io_master_rlast", false,-1);
    tracep->declBus(c+305,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1350,"io_slave_awready", false,-1);
    tracep->declBit(c+1337,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1351,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1352,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1353,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1354,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1355,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1356,"io_slave_wready", false,-1);
    tracep->declBit(c+1337,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1351,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1352,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1337,"io_slave_wlast", false,-1);
    tracep->declBit(c+1337,"io_slave_bready", false,-1);
    tracep->declBit(c+1357,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1358,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1359,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1360,"io_slave_arready", false,-1);
    tracep->declBit(c+1337,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1351,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1352,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1353,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1354,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1355,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1337,"io_slave_rready", false,-1);
    tracep->declBit(c+1361,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1362,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1363,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1364,"io_slave_rlast", false,-1);
    tracep->declBus(c+1365,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+962,"pc", false,-1, 31,0);
    tracep->declBus(c+963,"instr", false,-1, 31,0);
    tracep->declBit(c+964,"if_ready", false,-1);
    tracep->declBit(c+965,"wb_valid", false,-1);
    tracep->declBit(c+966,"if_valid", false,-1);
    tracep->declBit(c+967,"id_ready", false,-1);
    tracep->declBit(c+968,"if_access_fault", false,-1);
    tracep->declBus(c+969,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+1366,"trap_pc", false,-1, 31,0);
    tracep->declBus(c+970,"ifu_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+971,"ifu_sram_arvalid", false,-1);
    tracep->declBit(c+158,"ifu_sram_arready", false,-1);
    tracep->declBus(c+159,"ifu_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+160,"ifu_sram_rvalid", false,-1);
    tracep->declBit(c+972,"ifu_sram_rready", false,-1);
    tracep->declBus(c+161,"ifu_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+576,"ifu_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+577,"ifu_sram_awvalid", false,-1);
    tracep->declBit(c+1367,"ifu_sram_awready", false,-1);
    tracep->declBus(c+578,"ifu_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+579,"ifu_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+580,"ifu_sram_wvalid", false,-1);
    tracep->declBit(c+1368,"ifu_sram_wready", false,-1);
    tracep->declBus(c+1369,"ifu_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"ifu_sram_bvalid", false,-1);
    tracep->declBit(c+581,"ifu_sram_bready", false,-1);
    tracep->declBus(c+973,"opcode", false,-1, 6,0);
    tracep->declBus(c+974,"rs1", false,-1, 4,0);
    tracep->declBus(c+975,"rs2", false,-1, 4,0);
    tracep->declBus(c+976,"rd", false,-1, 4,0);
    tracep->declBus(c+977,"imm", false,-1, 31,0);
    tracep->declBus(c+978,"func3", false,-1, 2,0);
    tracep->declBus(c+979,"func7", false,-1, 6,0);
    tracep->declBit(c+980,"RegWrite", false,-1);
    tracep->declBit(c+981,"MemWrite", false,-1);
    tracep->declBit(c+982,"MemRead", false,-1);
    tracep->declBus(c+983,"alu_op", false,-1, 3,0);
    tracep->declBus(c+984,"MemLen", false,-1, 2,0);
    tracep->declBit(c+985,"id_valid", false,-1);
    tracep->declBit(c+986,"ex_ready", false,-1);
    tracep->declBit(c+1371,"reg_valid", false,-1);
    tracep->declBit(c+1372,"reg_ready", false,-1);
    tracep->declBus(c+987,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+988,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+989,"alu_result", false,-1, 31,0);
    tracep->declBit(c+990,"alu_zero", false,-1);
    tracep->declBit(c+991,"alu_less", false,-1);
    tracep->declBit(c+992,"ex_valid", false,-1);
    tracep->declBit(c+993,"mem_ready", false,-1);
    tracep->declBus(c+994,"data_out", false,-1, 31,0);
    tracep->declBit(c+995,"mem_valid", false,-1);
    tracep->declBit(c+996,"wb_ready", false,-1);
    tracep->declBit(c+997,"load_access_fault", false,-1);
    tracep->declBit(c+998,"store_access_fault", false,-1);
    tracep->declBus(c+999,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+1000,"mem_sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1001,"mem_sram_arvalid", false,-1);
    tracep->declBit(c+162,"mem_sram_arready", false,-1);
    tracep->declBus(c+163,"mem_sram_rdata", false,-1, 31,0);
    tracep->declBit(c+164,"mem_sram_rvalid", false,-1);
    tracep->declBit(c+1002,"mem_sram_rready", false,-1);
    tracep->declBus(c+165,"mem_sram_rresp", false,-1, 1,0);
    tracep->declBus(c+1003,"mem_sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1004,"mem_sram_awvalid", false,-1);
    tracep->declBit(c+166,"mem_sram_awready", false,-1);
    tracep->declBus(c+1005,"mem_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"mem_sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"mem_sram_wvalid", false,-1);
    tracep->declBit(c+167,"mem_sram_wready", false,-1);
    tracep->declBus(c+168,"mem_sram_bresp", false,-1, 1,0);
    tracep->declBit(c+169,"mem_sram_bvalid", false,-1);
    tracep->declBit(c+1008,"mem_sram_bready", false,-1);
    tracep->declBus(c+1009,"wb_data", false,-1, 31,0);
    tracep->declBus(c+1010,"jal_target", false,-1, 31,0);
    tracep->declBus(c+1011,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+1012,"is_jal", false,-1);
    tracep->declBit(c+1013,"is_jalr", false,-1);
    tracep->declBit(c+1014,"take_branch", false,-1);
    tracep->declBus(c+1015,"branch_target", false,-1, 31,0);
    tracep->declBus(c+1373,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+1374,"RegWrite_wb", false,-1);
    tracep->declBit(c+1375,"wb_MemRead", false,-1);
    tracep->declBit(c+1376,"wb_MemWrite", false,-1);
    tracep->declBus(c+1377,"wb_MemLen", false,-1, 2,0);
    tracep->declBus(c+1378,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+1379,"wb_data_in", false,-1, 31,0);
    tracep->declBus(c+1380,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1381,"sram_arvalid", false,-1);
    tracep->declBit(c+582,"sram_arready", false,-1);
    tracep->declBus(c+583,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+584,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+585,"sram_rvalid", false,-1);
    tracep->declBit(c+1382,"sram_rready", false,-1);
    tracep->declBus(c+1383,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+586,"sram_awready", false,-1);
    tracep->declBit(c+1384,"sram_awvalid", false,-1);
    tracep->declBus(c+1385,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1386,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"sram_wvalid", false,-1);
    tracep->declBit(c+587,"sram_wready", false,-1);
    tracep->declBus(c+588,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+589,"sram_bvalid", false,-1);
    tracep->declBit(c+1388,"sram_bready", false,-1);
    tracep->declBus(c+1389,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1390,"uart_arvalid", false,-1);
    tracep->declBit(c+590,"uart_arready", false,-1);
    tracep->declBus(c+591,"uart_rresp", false,-1, 1,0);
    tracep->declBus(c+592,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+593,"uart_rvalid", false,-1);
    tracep->declBit(c+1391,"uart_rready", false,-1);
    tracep->declBus(c+1392,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+594,"uart_awready", false,-1);
    tracep->declBit(c+1393,"uart_awvalid", false,-1);
    tracep->declBus(c+1394,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1395,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"uart_wvalid", false,-1);
    tracep->declBit(c+595,"uart_wready", false,-1);
    tracep->declBus(c+596,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+597,"uart_bvalid", false,-1);
    tracep->declBit(c+1397,"uart_bready", false,-1);
    tracep->declBus(c+170,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+171,"clint_arvalid", false,-1);
    tracep->declBit(c+598,"clint_arready", false,-1);
    tracep->declBus(c+599,"clint_rresp", false,-1, 1,0);
    tracep->declBus(c+600,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+601,"clint_rvalid", false,-1);
    tracep->declBit(c+172,"clint_rready", false,-1);
    tracep->declBus(c+173,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+602,"clint_awready", false,-1);
    tracep->declBit(c+174,"clint_awvalid", false,-1);
    tracep->declBus(c+175,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+176,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+177,"clint_wvalid", false,-1);
    tracep->declBit(c+603,"clint_wready", false,-1);
    tracep->declBus(c+604,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+605,"clint_bvalid", false,-1);
    tracep->declBit(c+178,"clint_bready", false,-1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+970,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+971,"ifu_arvalid", false,-1);
    tracep->declBit(c+158,"ifu_arready", false,-1);
    tracep->declBus(c+159,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+161,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+160,"ifu_rvalid", false,-1);
    tracep->declBit(c+972,"ifu_rready", false,-1);
    tracep->declBus(c+1000,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+1001,"mem_arvalid", false,-1);
    tracep->declBit(c+162,"mem_arready", false,-1);
    tracep->declBus(c+163,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+165,"mem_rresp", false,-1, 1,0);
    tracep->declBit(c+164,"mem_rvalid", false,-1);
    tracep->declBit(c+1002,"mem_rready", false,-1);
    tracep->declBus(c+1003,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+1004,"mem_awvalid", false,-1);
    tracep->declBit(c+166,"mem_awready", false,-1);
    tracep->declBus(c+1005,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"mem_wvalid", false,-1);
    tracep->declBit(c+167,"mem_wready", false,-1);
    tracep->declBus(c+168,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+169,"mem_bvalid", false,-1);
    tracep->declBit(c+1008,"mem_bready", false,-1);
    tracep->declBus(c+94,"io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"io_master_arvalid", false,-1);
    tracep->declBit(c+303,"io_master_arready", false,-1);
    tracep->declBus(c+306,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+304,"io_master_rvalid", false,-1);
    tracep->declBit(c+95,"io_master_rready", false,-1);
    tracep->declBus(c+88,"io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+87,"io_master_awvalid", false,-1);
    tracep->declBit(c+298,"io_master_awready", false,-1);
    tracep->declBus(c+90,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+89,"io_master_wvalid", false,-1);
    tracep->declBit(c+299,"io_master_wready", false,-1);
    tracep->declBus(c+302,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+300,"io_master_bvalid", false,-1);
    tracep->declBit(c+92,"io_master_bready", false,-1);
    tracep->declBus(c+170,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+171,"clint_arvalid", false,-1);
    tracep->declBit(c+598,"clint_arready", false,-1);
    tracep->declBus(c+600,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+599,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+601,"clint_rvalid", false,-1);
    tracep->declBit(c+172,"clint_rready", false,-1);
    tracep->declBus(c+173,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+174,"clint_awvalid", false,-1);
    tracep->declBit(c+602,"clint_awready", false,-1);
    tracep->declBus(c+175,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+176,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+177,"clint_wvalid", false,-1);
    tracep->declBit(c+603,"clint_wready", false,-1);
    tracep->declBus(c+604,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+605,"clint_bvalid", false,-1);
    tracep->declBit(c+178,"clint_bready", false,-1);
    tracep->declBus(c+1354,"NONE", false,-1, 2,0);
    tracep->declBus(c+1336,"IFU", false,-1, 2,0);
    tracep->declBus(c+1398,"MEM_READ", false,-1, 2,0);
    tracep->declBus(c+1399,"MEM_WRITE", false,-1, 2,0);
    tracep->declBus(c+1400,"ERROR", false,-1, 2,0);
    tracep->declBus(c+1401,"CLINT", false,-1, 1,0);
    tracep->declBus(c+1402,"MASTER", false,-1, 1,0);
    tracep->declBus(c+606,"current_master", false,-1, 2,0);
    tracep->declBus(c+1319,"next_master", false,-1, 2,0);
    tracep->declBus(c+1355,"OKAY", false,-1, 1,0);
    tracep->declBus(c+1402,"SLVERR", false,-1, 1,0);
    tracep->declBus(c+1403,"DECERR", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1404,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1406,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+170,"araddr", false,-1, 31,0);
    tracep->declBit(c+171,"arvalid", false,-1);
    tracep->declBit(c+598,"arready", false,-1);
    tracep->declBus(c+600,"rdata", false,-1, 31,0);
    tracep->declBit(c+601,"rvalid", false,-1);
    tracep->declBit(c+172,"rready", false,-1);
    tracep->declBus(c+599,"rresp", false,-1, 1,0);
    tracep->declBus(c+173,"awaddr", false,-1, 31,0);
    tracep->declBit(c+174,"awvalid", false,-1);
    tracep->declBit(c+602,"awready", false,-1);
    tracep->declBus(c+175,"wdata", false,-1, 31,0);
    tracep->declBus(c+176,"wstrb", false,-1, 3,0);
    tracep->declBit(c+177,"wvalid", false,-1);
    tracep->declBit(c+603,"wready", false,-1);
    tracep->declBus(c+604,"bresp", false,-1, 1,0);
    tracep->declBit(c+605,"bvalid", false,-1);
    tracep->declBit(c+178,"bready", false,-1);
    tracep->declBus(c+607,"clint_state", false,-1, 31,0);
    tracep->declBus(c+608,"next_clint_state", false,-1, 31,0);
    tracep->declBus(c+609,"LFSR", false,-1, 31,0);
    tracep->declBus(c+610,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+611,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+612,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+613,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+614,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+179,"addr_valid", false,-1);
    tracep->declQuad(c+615,"mtime", false,-1, 63,0);
    tracep->declBus(c+617,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+618,"mtime_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_stage ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBit(c+985,"id_valid", false,-1);
    tracep->declBit(c+986,"ex_ready", false,-1);
    tracep->declBus(c+973,"opcode", false,-1, 6,0);
    tracep->declBus(c+987,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+988,"rs2_val", false,-1, 31,0);
    tracep->declBus(c+977,"imm", false,-1, 31,0);
    tracep->declBus(c+983,"alu_op", false,-1, 3,0);
    tracep->declBit(c+993,"mem_ready", false,-1);
    tracep->declBit(c+992,"ex_valid", false,-1);
    tracep->declBus(c+989,"alu_result", false,-1, 31,0);
    tracep->declBit(c+990,"alu_zero", false,-1);
    tracep->declBit(c+991,"alu_less", false,-1);
    tracep->declBus(c+1016,"state", false,-1, 31,0);
    tracep->declBus(c+1017,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+963,"instr", false,-1, 31,0);
    tracep->declBit(c+986,"ex_ready", false,-1);
    tracep->declBit(c+966,"if_valid", false,-1);
    tracep->declBit(c+967,"id_ready", false,-1);
    tracep->declBit(c+985,"id_valid", false,-1);
    tracep->declBus(c+973,"opcode", false,-1, 6,0);
    tracep->declBus(c+974,"rs1", false,-1, 4,0);
    tracep->declBus(c+975,"rs2", false,-1, 4,0);
    tracep->declBus(c+976,"rd", false,-1, 4,0);
    tracep->declBus(c+977,"imm", false,-1, 31,0);
    tracep->declBus(c+978,"func3", false,-1, 2,0);
    tracep->declBus(c+979,"func7", false,-1, 6,0);
    tracep->declBit(c+980,"RegWrite", false,-1);
    tracep->declBit(c+981,"MemWrite", false,-1);
    tracep->declBit(c+982,"MemRead", false,-1);
    tracep->declBus(c+983,"alu_op", false,-1, 3,0);
    tracep->declBus(c+984,"MemLen", false,-1, 2,0);
    tracep->declBus(c+1018,"state", false,-1, 31,0);
    tracep->declBus(c+1019,"next_state", false,-1, 31,0);
    tracep->declBus(c+1020,"immI", false,-1, 31,0);
    tracep->declBus(c+1021,"immU", false,-1, 31,0);
    tracep->declBus(c+1022,"immS", false,-1, 31,0);
    tracep->declBus(c+1023,"immB", false,-1, 31,0);
    tracep->declBus(c+1024,"immJ", false,-1, 31,0);
    tracep->declBus(c+1351,"immR", false,-1, 31,0);
    tracep->declBus(c+1025,"get_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+1015,"branch_target", false,-1, 31,0);
    tracep->declBit(c+1026,"pc_src", false,-1);
    tracep->declBit(c+967,"id_ready", false,-1);
    tracep->declBit(c+965,"wb_valid", false,-1);
    tracep->declBit(c+964,"if_ready", false,-1);
    tracep->declBit(c+966,"if_valid", false,-1);
    tracep->declBus(c+962,"pc", false,-1, 31,0);
    tracep->declBus(c+963,"instr", false,-1, 31,0);
    tracep->declBit(c+968,"if_access_fault", false,-1);
    tracep->declBus(c+969,"if_fault_addr", false,-1, 31,0);
    tracep->declBus(c+970,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+971,"sram_arvalid", false,-1);
    tracep->declBit(c+158,"sram_arready", false,-1);
    tracep->declBus(c+159,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+160,"sram_rvalid", false,-1);
    tracep->declBit(c+972,"sram_rready", false,-1);
    tracep->declBus(c+161,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+576,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+577,"sram_awvalid", false,-1);
    tracep->declBit(c+1367,"sram_awready", false,-1);
    tracep->declBus(c+578,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+579,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+580,"sram_wvalid", false,-1);
    tracep->declBit(c+1368,"sram_wready", false,-1);
    tracep->declBus(c+1369,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"sram_bvalid", false,-1);
    tracep->declBit(c+581,"sram_bready", false,-1);
    tracep->declBus(c+1027,"state", false,-1, 31,0);
    tracep->declBus(c+1407,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBit(c+992,"ex_valid", false,-1);
    tracep->declBit(c+993,"mem_ready", false,-1);
    tracep->declBit(c+996,"wb_ready", false,-1);
    tracep->declBit(c+995,"mem_valid", false,-1);
    tracep->declBit(c+982,"MemRead", false,-1);
    tracep->declBit(c+981,"MemWrite", false,-1);
    tracep->declBus(c+1028,"addr", false,-1, 31,0);
    tracep->declBus(c+988,"data_in", false,-1, 31,0);
    tracep->declBus(c+984,"MemLen", false,-1, 2,0);
    tracep->declBus(c+994,"data_out", false,-1, 31,0);
    tracep->declBit(c+997,"load_access_fault", false,-1);
    tracep->declBit(c+998,"store_access_fault", false,-1);
    tracep->declBus(c+999,"mem_fault_addr", false,-1, 31,0);
    tracep->declBus(c+1000,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1001,"sram_arvalid", false,-1);
    tracep->declBit(c+162,"sram_arready", false,-1);
    tracep->declBus(c+163,"sram_rdata", false,-1, 31,0);
    tracep->declBit(c+164,"sram_rvalid", false,-1);
    tracep->declBit(c+1002,"sram_rready", false,-1);
    tracep->declBus(c+165,"sram_rresp", false,-1, 1,0);
    tracep->declBus(c+1003,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1004,"sram_awvalid", false,-1);
    tracep->declBit(c+166,"sram_awready", false,-1);
    tracep->declBus(c+1005,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1006,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1007,"sram_wvalid", false,-1);
    tracep->declBit(c+167,"sram_wready", false,-1);
    tracep->declBus(c+168,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+169,"sram_bvalid", false,-1);
    tracep->declBit(c+1008,"sram_bready", false,-1);
    tracep->declBus(c+1029,"state", false,-1, 31,0);
    tracep->declBus(c+1030,"next_state", false,-1, 31,0);
    tracep->declBus(c+1031,"delay", false,-1, 1,0);
    tracep->declBus(c+1408,"DELAY_CYCLES", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+1404,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1406,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+1380,"araddr", false,-1, 31,0);
    tracep->declBit(c+1381,"arvalid", false,-1);
    tracep->declBit(c+582,"arready", false,-1);
    tracep->declBus(c+584,"rdata", false,-1, 31,0);
    tracep->declBit(c+585,"rvalid", false,-1);
    tracep->declBit(c+1382,"rready", false,-1);
    tracep->declBus(c+583,"rresp", false,-1, 1,0);
    tracep->declBus(c+1383,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1384,"awvalid", false,-1);
    tracep->declBit(c+586,"awready", false,-1);
    tracep->declBus(c+1385,"wdata", false,-1, 31,0);
    tracep->declBus(c+1386,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1387,"wvalid", false,-1);
    tracep->declBit(c+587,"wready", false,-1);
    tracep->declBus(c+588,"bresp", false,-1, 1,0);
    tracep->declBit(c+589,"bvalid", false,-1);
    tracep->declBit(c+1388,"bready", false,-1);
    tracep->declBus(c+619,"sram_state", false,-1, 31,0);
    tracep->declBus(c+620,"next_sram_state", false,-1, 31,0);
    tracep->declBus(c+621,"LFSR", false,-1, 31,0);
    tracep->declBus(c+1409,"random_delay", false,-1, 31,0);
    tracep->declBus(c+622,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+623,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+624,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+625,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+626,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+1,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBus(c+1404,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1406,"MIN_DELAY", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBus(c+1389,"araddr", false,-1, 31,0);
    tracep->declBit(c+1390,"arvalid", false,-1);
    tracep->declBit(c+590,"arready", false,-1);
    tracep->declBus(c+592,"rdata", false,-1, 31,0);
    tracep->declBit(c+593,"rvalid", false,-1);
    tracep->declBit(c+1391,"rready", false,-1);
    tracep->declBus(c+591,"rresp", false,-1, 1,0);
    tracep->declBus(c+1392,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1393,"awvalid", false,-1);
    tracep->declBit(c+594,"awready", false,-1);
    tracep->declBus(c+1394,"wdata", false,-1, 31,0);
    tracep->declBus(c+1395,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1396,"wvalid", false,-1);
    tracep->declBit(c+595,"wready", false,-1);
    tracep->declBus(c+596,"bresp", false,-1, 1,0);
    tracep->declBit(c+597,"bvalid", false,-1);
    tracep->declBit(c+1397,"bready", false,-1);
    tracep->declBus(c+627,"uart_state", false,-1, 31,0);
    tracep->declBus(c+628,"next_uart_state", false,-1, 31,0);
    tracep->declBus(c+629,"LFSR", false,-1, 31,0);
    tracep->declBus(c+630,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+631,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+632,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+633,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+634,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+2,"addr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_stage ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1318,"reset", false,-1);
    tracep->declBit(c+995,"mem_valid", false,-1);
    tracep->declBit(c+964,"if_ready", false,-1);
    tracep->declBus(c+973,"opcode", false,-1, 6,0);
    tracep->declBus(c+978,"func3", false,-1, 2,0);
    tracep->declBus(c+976,"id_rd", false,-1, 4,0);
    tracep->declBit(c+980,"id_RegWrite", false,-1);
    tracep->declBus(c+974,"rs1", false,-1, 4,0);
    tracep->declBus(c+975,"rs2", false,-1, 4,0);
    tracep->declBus(c+962,"pc", false,-1, 31,0);
    tracep->declBus(c+977,"imm", false,-1, 31,0);
    tracep->declBit(c+990,"alu_zero", false,-1);
    tracep->declBit(c+991,"alu_less", false,-1);
    tracep->declBus(c+989,"alu_result", false,-1, 31,0);
    tracep->declBus(c+994,"data_out", false,-1, 31,0);
    tracep->declBus(c+987,"rs1_val", false,-1, 31,0);
    tracep->declBus(c+988,"rs2_val", false,-1, 31,0);
    tracep->declBit(c+996,"wb_ready", false,-1);
    tracep->declBit(c+965,"wb_valid", false,-1);
    tracep->declBus(c+1010,"jal_target", false,-1, 31,0);
    tracep->declBus(c+1011,"jalr_target", false,-1, 31,0);
    tracep->declBit(c+1012,"is_jal", false,-1);
    tracep->declBit(c+1013,"is_jalr", false,-1);
    tracep->declBit(c+1014,"take_branch", false,-1);
    tracep->declBus(c+1009,"wb_data", false,-1, 31,0);
    tracep->declBus(c+1032,"state", false,-1, 31,0);
    tracep->declBus(c+1033,"next_state", false,-1, 31,0);
    tracep->declBit(c+1034,"RegWrite_wb", false,-1);
    tracep->declBus(c+1035,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+1036,"rd_wb_pre", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1037+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+1069,"i", false,-1, 31,0);
    tracep->declBus(c+1410,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"io_d", false,-1);
    tracep->declBit(c+635,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"io_d", false,-1);
    tracep->declBit(c+635,"io_q", false,-1);
    tracep->declBit(c+635,"sync_0", false,-1);
    tracep->declBit(c+636,"sync_1", false,-1);
    tracep->declBit(c+637,"sync_2", false,-1);
    tracep->declBit(c+638,"sync_3", false,-1);
    tracep->declBit(c+639,"sync_4", false,-1);
    tracep->declBit(c+640,"sync_5", false,-1);
    tracep->declBit(c+641,"sync_6", false,-1);
    tracep->declBit(c+642,"sync_7", false,-1);
    tracep->declBit(c+643,"sync_8", false,-1);
    tracep->declBit(c+644,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1166,"auto_in_psel", false,-1);
    tracep->declBit(c+733,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1208,"auto_in_pready", false,-1);
    tracep->declBit(c+1339,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1286,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1166,"in_psel", false,-1);
    tracep->declBit(c+733,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1208,"in_pready", false,-1);
    tracep->declBus(c+1167,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1339,"in_pslverr", false,-1);
    tracep->declBus(c+1286,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_7", false,-1, 7,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+645+i*1,"gpio_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+1226,"wen", false,-1);
    tracep->declBit(c+1168,"ren", false,-1);
    tracep->declBus(c+1227,"wdata", false,-1, 31,0);
    tracep->declBus(c+1228,"addr", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1165,"auto_in_psel", false,-1);
    tracep->declBit(c+732,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+741,"auto_in_pready", false,-1);
    tracep->declBit(c+1337,"auto_in_pslverr", false,-1);
    tracep->declBus(c+726,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1296,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1297,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1165,"in_psel", false,-1);
    tracep->declBit(c+732,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+741,"in_pready", false,-1);
    tracep->declBus(c+726,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"in_pslverr", false,-1);
    tracep->declBit(c+1296,"ps2_clk", false,-1);
    tracep->declBit(c+1297,"ps2_data", false,-1);
    tracep->declBus(c+742,"ps2_state", false,-1, 1,0);
    tracep->declBus(c+1338,"PS2_IDLE", false,-1, 31,0);
    tracep->declBus(c+1406,"PS2_READ", false,-1, 31,0);
    tracep->declBus(c+649,"buffer", false,-1, 9,0);
    tracep->declBus(c+650,"counter", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+651+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+667,"w_ptr", false,-1, 3,0);
    tracep->declBus(c+668,"r_ptr", false,-1, 3,0);
    tracep->declBit(c+669,"isn_empty", false,-1);
    tracep->declBus(c+670,"i", false,-1, 31,0);
    tracep->declBus(c+671,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+672,"sampling", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+137,"auto_in_awvalid", false,-1);
    tracep->declBit(c+138,"auto_in_wvalid", false,-1);
    tracep->declBit(c+370,"auto_in_arready", false,-1);
    tracep->declBit(c+139,"auto_in_arvalid", false,-1);
    tracep->declBus(c+228,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+9,"auto_in_rready", false,-1);
    tracep->declBit(c+371,"auto_in_rvalid", false,-1);
    tracep->declBus(c+372,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+373,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+371,"state", false,-1);
    tracep->declBus(c+373,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+372,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+180,"raddr", false,-1, 31,0);
    tracep->declBit(c+181,"ren", false,-1);
    tracep->declBus(c+182,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1209,"auto_in_psel", false,-1);
    tracep->declBit(c+734,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1311,"auto_in_pready", false,-1);
    tracep->declBit(c+1337,"auto_in_pslverr", false,-1);
    tracep->declBus(c+191,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1262,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1263,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1308,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1203,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1209,"in_psel", false,-1);
    tracep->declBit(c+734,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1311,"in_pready", false,-1);
    tracep->declBus(c+191,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"in_pslverr", false,-1);
    tracep->declBit(c+1262,"qspi_sck", false,-1);
    tracep->declBit(c+1263,"qspi_ce_n", false,-1);
    tracep->declBus(c+1308,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1308,"din", false,-1, 3,0);
    tracep->declBus(c+1270,"dout", false,-1, 3,0);
    tracep->declBus(c+1271,"douten", false,-1, 3,0);
    tracep->declBit(c+1320,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBus(c+1203,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1154,"dat_i", false,-1, 31,0);
    tracep->declBus(c+191,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1155,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1209,"cyc_i", false,-1);
    tracep->declBit(c+1209,"stb_i", false,-1);
    tracep->declBit(c+1320,"ack_o", false,-1);
    tracep->declBit(c+1153,"we_i", false,-1);
    tracep->declBit(c+1262,"sck", false,-1);
    tracep->declBit(c+1263,"ce_n", false,-1);
    tracep->declBus(c+1308,"din", false,-1, 3,0);
    tracep->declBus(c+1270,"dout", false,-1, 3,0);
    tracep->declBus(c+1271,"douten", false,-1, 3,0);
    tracep->declBus(c+1411,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1412,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+743,"mr_sck", false,-1);
    tracep->declBit(c+744,"mr_ce_n", false,-1);
    tracep->declBus(c+1308,"mr_din", false,-1, 3,0);
    tracep->declBus(c+745,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+746,"mr_doe", false,-1);
    tracep->declBit(c+747,"mw_sck", false,-1);
    tracep->declBit(c+748,"mw_ce_n", false,-1);
    tracep->declBus(c+1308,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1170,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+749,"mw_doe", false,-1);
    tracep->declBit(c+1272,"mr_rd", false,-1);
    tracep->declBit(c+750,"mr_done", false,-1);
    tracep->declBit(c+1273,"mw_wr", false,-1);
    tracep->declBit(c+1171,"mw_done", false,-1);
    tracep->declBit(c+1209,"wb_valid", false,-1);
    tracep->declBit(c+1229,"wb_we", false,-1);
    tracep->declBit(c+1230,"wb_re", false,-1);
    tracep->declBit(c+751,"state", false,-1);
    tracep->declBit(c+1274,"nstate", false,-1);
    tracep->declBus(c+1156,"size", false,-1, 2,0);
    tracep->declBus(c+1157,"byte0", false,-1, 7,0);
    tracep->declBus(c+1158,"byte1", false,-1, 7,0);
    tracep->declBus(c+1159,"byte2", false,-1, 7,0);
    tracep->declBus(c+1160,"byte3", false,-1, 7,0);
    tracep->declBus(c+1161,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1321,"rst_n", false,-1);
    tracep->declBus(c+1231,"addr", false,-1, 23,0);
    tracep->declBit(c+1272,"rd", false,-1);
    tracep->declBus(c+1400,"size", false,-1, 2,0);
    tracep->declBit(c+750,"done", false,-1);
    tracep->declBus(c+191,"line", false,-1, 31,0);
    tracep->declBit(c+743,"sck", false,-1);
    tracep->declBit(c+744,"ce_n", false,-1);
    tracep->declBus(c+1308,"din", false,-1, 3,0);
    tracep->declBus(c+745,"dout", false,-1, 3,0);
    tracep->declBit(c+746,"douten", false,-1);
    tracep->declBus(c+1411,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1412,"READ", false,-1, 0,0);
    tracep->declBus(c+1413,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+752,"state", false,-1);
    tracep->declBit(c+1275,"nstate", false,-1);
    tracep->declBus(c+753,"counter", false,-1, 7,0);
    tracep->declBus(c+754,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+673+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1414,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+755,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1321,"rst_n", false,-1);
    tracep->declBus(c+1232,"addr", false,-1, 23,0);
    tracep->declBus(c+1161,"line", false,-1, 31,0);
    tracep->declBus(c+1156,"size", false,-1, 2,0);
    tracep->declBit(c+1273,"wr", false,-1);
    tracep->declBit(c+1171,"done", false,-1);
    tracep->declBit(c+747,"sck", false,-1);
    tracep->declBit(c+748,"ce_n", false,-1);
    tracep->declBus(c+1308,"din", false,-1, 3,0);
    tracep->declBus(c+1170,"dout", false,-1, 3,0);
    tracep->declBit(c+749,"douten", false,-1);
    tracep->declBus(c+1411,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1412,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1162,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+756,"state", false,-1);
    tracep->declBit(c+1276,"nstate", false,-1);
    tracep->declBus(c+757,"counter", false,-1, 7,0);
    tracep->declBus(c+758,"saddr", false,-1, 23,0);
    tracep->declBus(c+1415,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1163,"auto_in_psel", false,-1);
    tracep->declBit(c+731,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1203,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+739,"auto_in_pready", false,-1);
    tracep->declBit(c+1337,"auto_in_pslverr", false,-1);
    tracep->declBus(c+740,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1309,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1173,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1174,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1175,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1176,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1177,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1310,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1178,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1203,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1163,"in_psel", false,-1);
    tracep->declBit(c+731,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+739,"in_pready", false,-1);
    tracep->declBus(c+740,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"in_pslverr", false,-1);
    tracep->declBit(c+1309,"sdram_clk", false,-1);
    tracep->declBit(c+1173,"sdram_cke", false,-1);
    tracep->declBit(c+1174,"sdram_cs", false,-1);
    tracep->declBit(c+1175,"sdram_ras", false,-1);
    tracep->declBit(c+1176,"sdram_cas", false,-1);
    tracep->declBit(c+1177,"sdram_we", false,-1);
    tracep->declBus(c+1310,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1178,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1179,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+759,"sdram_dout_en", false,-1);
    tracep->declBus(c+760,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+677,"state", false,-1, 1,0);
    tracep->declBit(c+1180,"req_accept", false,-1);
    tracep->declBit(c+1233,"is_read", false,-1);
    tracep->declBit(c+1234,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBus(c+1235,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1233,"inport_rd_i", false,-1);
    tracep->declBus(c+1353,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1203,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1154,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1191,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1180,"inport_accept_o", false,-1);
    tracep->declBit(c+739,"inport_ack_o", false,-1);
    tracep->declBit(c+1337,"inport_error_o", false,-1);
    tracep->declBus(c+740,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1309,"sdram_clk_o", false,-1);
    tracep->declBit(c+1173,"sdram_cke_o", false,-1);
    tracep->declBit(c+1174,"sdram_cs_o", false,-1);
    tracep->declBit(c+1175,"sdram_ras_o", false,-1);
    tracep->declBit(c+1176,"sdram_cas_o", false,-1);
    tracep->declBit(c+1177,"sdram_we_o", false,-1);
    tracep->declBus(c+1179,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1310,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1178,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+760,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+759,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1416,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1417,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1418,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1419,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1419,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1405,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1420,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1421,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1422,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1423,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1424,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1405,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1425,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1426,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1427,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1428,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1429,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1430,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1431,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1352,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1432,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1405,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1352,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1431,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1430,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1426,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1428,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1427,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1429,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1425,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1433,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1434,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1435,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1435,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1404,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1435,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1419,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1419,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1436,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1203,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1235,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1233,"ram_rd_w", false,-1);
    tracep->declBit(c+1180,"ram_accept_w", false,-1);
    tracep->declBus(c+1154,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+740,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+739,"ram_ack_w", false,-1);
    tracep->declBit(c+1236,"ram_req_w", false,-1);
    tracep->declBus(c+1181,"command_q", false,-1, 3,0);
    tracep->declBus(c+1182,"addr_q", false,-1, 12,0);
    tracep->declBus(c+760,"data_q", false,-1, 31,0);
    tracep->declBit(c+761,"data_rd_en_q", false,-1);
    tracep->declBus(c+1179,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1173,"cke_q", false,-1);
    tracep->declBus(c+1178,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1191,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+762,"refresh_q", false,-1);
    tracep->declBus(c+763,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+764+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1183,"state_q", false,-1, 3,0);
    tracep->declBus(c+1277,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1278,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+772,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+773,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1237,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1238,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1239,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1240,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1405,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+774,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1279,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1437,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1184,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+775,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+740,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+776,"idx", false,-1, 31,0);
    tracep->declBus(c+777,"rd_q", false,-1, 3,0);
    tracep->declBit(c+739,"ack_q", false,-1);
    tracep->declArray(c+1185,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1213,"auto_in_psel", false,-1);
    tracep->declBit(c+1214,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1206,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1313,"auto_in_pready", false,-1);
    tracep->declBit(c+1215,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1314,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+737,"spi_bundle_sck", false,-1);
    tracep->declBus(c+738,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1306,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1307,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1438,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1439,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1420,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1213,"in_psel", false,-1);
    tracep->declBit(c+1214,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1313,"in_pready", false,-1);
    tracep->declBus(c+1314,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1215,"in_pslverr", false,-1);
    tracep->declBit(c+737,"spi_sck", false,-1);
    tracep->declBus(c+738,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1306,"spi_mosi", false,-1);
    tracep->declBit(c+1307,"spi_miso", false,-1);
    tracep->declBit(c+778,"spi_irq_out", false,-1);
    tracep->declBus(c+1440,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1441,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1438,"FLASH_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1439,"FLASH_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+1242,"is_spi_addr", false,-1);
    tracep->declBit(c+1169,"is_flash_addr", false,-1);
    tracep->declBus(c+1354,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1336,"INIT_DIV", false,-1, 2,0);
    tracep->declBus(c+1398,"INIT_SS", false,-1, 2,0);
    tracep->declBus(c+1399,"INIT_CTRL", false,-1, 2,0);
    tracep->declBus(c+1400,"WRITE_CMD", false,-1, 2,0);
    tracep->declBus(c+1442,"START_TRANS", false,-1, 2,0);
    tracep->declBus(c+1443,"WAIT_TRANS", false,-1, 2,0);
    tracep->declBus(c+1444,"READ_DATA", false,-1, 2,0);
    tracep->declBus(c+678,"xip_state", false,-1, 2,0);
    tracep->declBit(c+1243,"spi_master_psel", false,-1);
    tracep->declBus(c+1244,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+1245,"apb_psel", false,-1);
    tracep->declBit(c+1246,"apb_penable", false,-1);
    tracep->declBus(c+1247,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+1248,"apb_pwrite", false,-1);
    tracep->declBus(c+1249,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+1250,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+779,"apb_pready", false,-1);
    tracep->declBus(c+780,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"apb_pslverr", false,-1);
    tracep->declBit(c+1251,"flash_xip_sel", false,-1);
    tracep->declBus(c+679,"flash_xip_paddr", false,-1, 31,0);
    tracep->declBit(c+680,"flash_xip_psel", false,-1);
    tracep->declBit(c+681,"flash_xip_penable", false,-1);
    tracep->declBus(c+1336,"flash_xip_pprot", false,-1, 2,0);
    tracep->declBit(c+682,"flash_xip_pwrite", false,-1);
    tracep->declBus(c+683,"flash_xip_pwdata", false,-1, 31,0);
    tracep->declBus(c+736,"flash_xip_pstrb", false,-1, 3,0);
    tracep->declBit(c+684,"flash_xip_pready", false,-1);
    tracep->declBus(c+685,"flash_xip_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"flash_xip_pslverr", false,-1);
    tracep->declBit(c+1340,"spi_ctrl_ass", false,-1);
    tracep->declBit(c+1340,"spi_ctrl_ie", false,-1);
    tracep->declBus(c+1445,"spi_ctrl_char_len", false,-1, 6,0);
    tracep->declBit(c+1337,"spi_ctrl_reserved", false,-1);
    tracep->declBit(c+1340,"spi_ctrl_tx_neg", false,-1);
    tracep->declBit(c+1337,"spi_ctrl_rx_neg", false,-1);
    tracep->declBit(c+1337,"spi_ctrl_lsb", false,-1);
    tracep->declBus(c+727,"spi_ctrl_data", false,-1, 31,0);
    tracep->declBit(c+728,"spi_ctrl_go", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"wb_clk_i", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+1252,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1249,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+780,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1250,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1248,"wb_we_i", false,-1);
    tracep->declBit(c+1245,"wb_stb_i", false,-1);
    tracep->declBit(c+1246,"wb_cyc_i", false,-1);
    tracep->declBit(c+779,"wb_ack_o", false,-1);
    tracep->declBit(c+1337,"wb_err_o", false,-1);
    tracep->declBit(c+778,"wb_int_o", false,-1);
    tracep->declBus(c+738,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+737,"sclk_pad_o", false,-1);
    tracep->declBit(c+1306,"mosi_pad_o", false,-1);
    tracep->declBit(c+1307,"miso_pad_i", false,-1);
    tracep->declBus(c+781,"divider", false,-1, 15,0);
    tracep->declBus(c+782,"ctrl", false,-1, 13,0);
    tracep->declBus(c+783,"ss", false,-1, 7,0);
    tracep->declBus(c+1280,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+784,"rx", false,-1, 127,0);
    tracep->declBit(c+788,"rx_negedge", false,-1);
    tracep->declBit(c+789,"tx_negedge", false,-1);
    tracep->declBus(c+790,"char_len", false,-1, 6,0);
    tracep->declBit(c+791,"go", false,-1);
    tracep->declBit(c+792,"lsb", false,-1);
    tracep->declBit(c+793,"ie", false,-1);
    tracep->declBit(c+794,"ass", false,-1);
    tracep->declBit(c+1253,"spi_divider_sel", false,-1);
    tracep->declBit(c+1254,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1255,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1256,"spi_ss_sel", false,-1);
    tracep->declBit(c+795,"tip", false,-1);
    tracep->declBit(c+796,"pos_edge", false,-1);
    tracep->declBit(c+797,"neg_edge", false,-1);
    tracep->declBit(c+798,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"clk_in", false,-1);
    tracep->declBit(c+1285,"rst", false,-1);
    tracep->declBit(c+795,"enable", false,-1);
    tracep->declBit(c+791,"go", false,-1);
    tracep->declBit(c+798,"last_clk", false,-1);
    tracep->declBus(c+781,"divider", false,-1, 15,0);
    tracep->declBit(c+737,"clk_out", false,-1);
    tracep->declBit(c+796,"pos_edge", false,-1);
    tracep->declBit(c+797,"neg_edge", false,-1);
    tracep->declBus(c+799,"cnt", false,-1, 15,0);
    tracep->declBit(c+800,"cnt_zero", false,-1);
    tracep->declBit(c+801,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"rst", false,-1);
    tracep->declBus(c+1257,"latch", false,-1, 3,0);
    tracep->declBus(c+1250,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+790,"len", false,-1, 6,0);
    tracep->declBit(c+792,"lsb", false,-1);
    tracep->declBit(c+791,"go", false,-1);
    tracep->declBit(c+796,"pos_edge", false,-1);
    tracep->declBit(c+797,"neg_edge", false,-1);
    tracep->declBit(c+788,"rx_negedge", false,-1);
    tracep->declBit(c+789,"tx_negedge", false,-1);
    tracep->declBit(c+795,"tip", false,-1);
    tracep->declBit(c+798,"last", false,-1);
    tracep->declBus(c+1249,"p_in", false,-1, 31,0);
    tracep->declArray(c+784,"p_out", false,-1, 127,0);
    tracep->declBit(c+737,"s_clk", false,-1);
    tracep->declBit(c+1307,"s_in", false,-1);
    tracep->declBit(c+1306,"s_out", false,-1);
    tracep->declBus(c+802,"cnt", false,-1, 7,0);
    tracep->declArray(c+784,"data", false,-1, 127,0);
    tracep->declBus(c+803,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+804,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+805,"rx_clk", false,-1);
    tracep->declBit(c+806,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1210,"auto_in_psel", false,-1);
    tracep->declBit(c+1211,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1207,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_in_pready", false,-1);
    tracep->declBit(c+1337,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1312,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1210,"in_psel", false,-1);
    tracep->declBit(c+1211,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1212,"in_pready", false,-1);
    tracep->declBit(c+1337,"in_pslverr", false,-1);
    tracep->declBus(c+1225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1312,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->declBit(c+807,"rtsn", false,-1);
    tracep->declBit(c+1337,"ctsn", false,-1);
    tracep->declBit(c+808,"dtr_pad_o", false,-1);
    tracep->declBit(c+1337,"dsr_pad_i", false,-1);
    tracep->declBit(c+1337,"ri_pad_i", false,-1);
    tracep->declBit(c+1337,"dcd_pad_i", false,-1);
    tracep->declBit(c+809,"interrupt", false,-1);
    tracep->declBit(c+1322,"reg_we", false,-1);
    tracep->declBit(c+1323,"reg_re", false,-1);
    tracep->declBus(c+1258,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1259,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+686,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1281,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+810,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+1258,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1260,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1281,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1322,"wb_we_i", false,-1);
    tracep->declBit(c+1323,"wb_re_i", false,-1);
    tracep->declBit(c+1305,"stx_pad_o", false,-1);
    tracep->declBit(c+1304,"srx_pad_i", false,-1);
    tracep->declBus(c+1433,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+810,"rts_pad_o", false,-1);
    tracep->declBit(c+808,"dtr_pad_o", false,-1);
    tracep->declBit(c+809,"int_o", false,-1);
    tracep->declBit(c+811,"enable", false,-1);
    tracep->declBit(c+812,"srx_pad", false,-1);
    tracep->declBus(c+813,"ier", false,-1, 3,0);
    tracep->declBus(c+814,"iir", false,-1, 3,0);
    tracep->declBus(c+815,"fcr", false,-1, 1,0);
    tracep->declBus(c+816,"mcr", false,-1, 4,0);
    tracep->declBus(c+817,"lcr", false,-1, 7,0);
    tracep->declBus(c+818,"msr", false,-1, 7,0);
    tracep->declBus(c+819,"dl", false,-1, 15,0);
    tracep->declBus(c+820,"scratch", false,-1, 7,0);
    tracep->declBit(c+821,"start_dlc", false,-1);
    tracep->declBit(c+822,"lsr_mask_d", false,-1);
    tracep->declBit(c+823,"msi_reset", false,-1);
    tracep->declBus(c+824,"dlc", false,-1, 15,0);
    tracep->declBus(c+825,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+826,"rx_reset", false,-1);
    tracep->declBit(c+827,"tx_reset", false,-1);
    tracep->declBit(c+828,"dlab", false,-1);
    tracep->declBit(c+1340,"cts_pad_i", false,-1);
    tracep->declBit(c+1337,"dsr_pad_i", false,-1);
    tracep->declBit(c+1337,"ri_pad_i", false,-1);
    tracep->declBit(c+1337,"dcd_pad_i", false,-1);
    tracep->declBit(c+829,"loopback", false,-1);
    tracep->declBit(c+1337,"cts", false,-1);
    tracep->declBit(c+1340,"dsr", false,-1);
    tracep->declBit(c+1340,"ri", false,-1);
    tracep->declBit(c+1340,"dcd", false,-1);
    tracep->declBit(c+830,"cts_c", false,-1);
    tracep->declBit(c+831,"dsr_c", false,-1);
    tracep->declBit(c+832,"ri_c", false,-1);
    tracep->declBit(c+833,"dcd_c", false,-1);
    tracep->declBus(c+834,"lsr", false,-1, 7,0);
    tracep->declBit(c+835,"lsr0", false,-1);
    tracep->declBit(c+836,"lsr1", false,-1);
    tracep->declBit(c+837,"lsr2", false,-1);
    tracep->declBit(c+838,"lsr3", false,-1);
    tracep->declBit(c+839,"lsr4", false,-1);
    tracep->declBit(c+840,"lsr5", false,-1);
    tracep->declBit(c+841,"lsr6", false,-1);
    tracep->declBit(c+842,"lsr7", false,-1);
    tracep->declBit(c+843,"lsr0r", false,-1);
    tracep->declBit(c+844,"lsr1r", false,-1);
    tracep->declBit(c+845,"lsr2r", false,-1);
    tracep->declBit(c+846,"lsr3r", false,-1);
    tracep->declBit(c+847,"lsr4r", false,-1);
    tracep->declBit(c+848,"lsr5r", false,-1);
    tracep->declBit(c+849,"lsr6r", false,-1);
    tracep->declBit(c+850,"lsr7r", false,-1);
    tracep->declBit(c+183,"lsr_mask", false,-1);
    tracep->declBit(c+851,"rls_int", false,-1);
    tracep->declBit(c+852,"rda_int", false,-1);
    tracep->declBit(c+853,"ti_int", false,-1);
    tracep->declBit(c+854,"thre_int", false,-1);
    tracep->declBit(c+855,"ms_int", false,-1);
    tracep->declBit(c+856,"tf_push", false,-1);
    tracep->declBit(c+857,"rf_pop", false,-1);
    tracep->declBus(c+729,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+858,"rf_error_bit", false,-1);
    tracep->declBit(c+836,"rf_overrun", false,-1);
    tracep->declBit(c+859,"rf_push_pulse", false,-1);
    tracep->declBus(c+860,"rf_count", false,-1, 4,0);
    tracep->declBus(c+861,"tf_count", false,-1, 4,0);
    tracep->declBus(c+862,"tstate", false,-1, 2,0);
    tracep->declBus(c+863,"rstate", false,-1, 3,0);
    tracep->declBus(c+864,"counter_t", false,-1, 9,0);
    tracep->declBit(c+865,"thre_set_en", false,-1);
    tracep->declBus(c+866,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+867,"block_value", false,-1, 7,0);
    tracep->declBit(c+868,"serial_out", false,-1);
    tracep->declBit(c+869,"serial_in", false,-1);
    tracep->declBit(c+184,"lsr_mask_condition", false,-1);
    tracep->declBit(c+185,"iir_read", false,-1);
    tracep->declBit(c+186,"msr_read", false,-1);
    tracep->declBit(c+187,"fifo_read", false,-1);
    tracep->declBit(c+188,"fifo_write", false,-1);
    tracep->declBus(c+870,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+871,"lsr0_d", false,-1);
    tracep->declBit(c+872,"lsr1_d", false,-1);
    tracep->declBit(c+873,"lsr2_d", false,-1);
    tracep->declBit(c+874,"lsr3_d", false,-1);
    tracep->declBit(c+875,"lsr4_d", false,-1);
    tracep->declBit(c+876,"lsr5_d", false,-1);
    tracep->declBit(c+877,"lsr6_d", false,-1);
    tracep->declBit(c+878,"lsr7_d", false,-1);
    tracep->declBit(c+879,"rls_int_d", false,-1);
    tracep->declBit(c+880,"thre_int_d", false,-1);
    tracep->declBit(c+881,"ms_int_d", false,-1);
    tracep->declBit(c+882,"ti_int_d", false,-1);
    tracep->declBit(c+883,"rda_int_d", false,-1);
    tracep->declBit(c+884,"rls_int_rise", false,-1);
    tracep->declBit(c+885,"thre_int_rise", false,-1);
    tracep->declBit(c+886,"ms_int_rise", false,-1);
    tracep->declBit(c+887,"ti_int_rise", false,-1);
    tracep->declBit(c+888,"rda_int_rise", false,-1);
    tracep->declBit(c+889,"rls_int_pnd", false,-1);
    tracep->declBit(c+890,"rda_int_pnd", false,-1);
    tracep->declBit(c+891,"thre_int_pnd", false,-1);
    tracep->declBit(c+892,"ms_int_pnd", false,-1);
    tracep->declBit(c+893,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBus(c+1406,"width", false,-1, 31,0);
    tracep->declBus(c+1412,"init_value", false,-1, 0,0);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1337,"stage1_rst_i", false,-1);
    tracep->declBit(c+1340,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1304,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+812,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+894,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+817,"lcr", false,-1, 7,0);
    tracep->declBit(c+857,"rf_pop", false,-1);
    tracep->declBit(c+869,"srx_pad_i", false,-1);
    tracep->declBit(c+811,"enable", false,-1);
    tracep->declBit(c+826,"rx_reset", false,-1);
    tracep->declBit(c+183,"lsr_mask", false,-1);
    tracep->declBus(c+864,"counter_t", false,-1, 9,0);
    tracep->declBus(c+860,"rf_count", false,-1, 4,0);
    tracep->declBus(c+729,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+836,"rf_overrun", false,-1);
    tracep->declBit(c+858,"rf_error_bit", false,-1);
    tracep->declBus(c+863,"rstate", false,-1, 3,0);
    tracep->declBit(c+859,"rf_push_pulse", false,-1);
    tracep->declBus(c+895,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+896,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+897,"rshift", false,-1, 7,0);
    tracep->declBit(c+898,"rparity", false,-1);
    tracep->declBit(c+899,"rparity_error", false,-1);
    tracep->declBit(c+900,"rframing_error", false,-1);
    tracep->declBit(c+901,"rbit_in", false,-1);
    tracep->declBit(c+902,"rparity_xor", false,-1);
    tracep->declBus(c+903,"counter_b", false,-1, 7,0);
    tracep->declBit(c+904,"rf_push_q", false,-1);
    tracep->declBus(c+905,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+906,"rf_push", false,-1);
    tracep->declBit(c+907,"break_error", false,-1);
    tracep->declBit(c+908,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+909,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+910,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+911,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1352,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1431,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1430,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1426,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1428,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1427,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1429,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1425,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1433,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1434,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1446,"sr_push", false,-1, 3,0);
    tracep->declBus(c+912,"toc_value", false,-1, 9,0);
    tracep->declBus(c+913,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1447,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1448,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1405,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1449,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBit(c+859,"push", false,-1);
    tracep->declBit(c+857,"pop", false,-1);
    tracep->declBus(c+905,"data_in", false,-1, 10,0);
    tracep->declBit(c+826,"fifo_reset", false,-1);
    tracep->declBit(c+183,"reset_status", false,-1);
    tracep->declBus(c+729,"data_out", false,-1, 10,0);
    tracep->declBit(c+836,"overrun", false,-1);
    tracep->declBus(c+860,"count", false,-1, 4,0);
    tracep->declBit(c+858,"error_bit", false,-1);
    tracep->declBus(c+730,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+914+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+930,"top", false,-1, 3,0);
    tracep->declBus(c+931,"bottom", false,-1, 3,0);
    tracep->declBus(c+932,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+933,"word0", false,-1, 2,0);
    tracep->declBus(c+934,"word1", false,-1, 2,0);
    tracep->declBus(c+935,"word2", false,-1, 2,0);
    tracep->declBus(c+936,"word3", false,-1, 2,0);
    tracep->declBus(c+937,"word4", false,-1, 2,0);
    tracep->declBus(c+938,"word5", false,-1, 2,0);
    tracep->declBus(c+939,"word6", false,-1, 2,0);
    tracep->declBus(c+940,"word7", false,-1, 2,0);
    tracep->declBus(c+941,"word8", false,-1, 2,0);
    tracep->declBus(c+942,"word9", false,-1, 2,0);
    tracep->declBus(c+943,"word10", false,-1, 2,0);
    tracep->declBus(c+944,"word11", false,-1, 2,0);
    tracep->declBus(c+945,"word12", false,-1, 2,0);
    tracep->declBus(c+946,"word13", false,-1, 2,0);
    tracep->declBus(c+947,"word14", false,-1, 2,0);
    tracep->declBus(c+948,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1405,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1420,"data_width", false,-1, 31,0);
    tracep->declBus(c+1448,"depth", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+859,"we", false,-1);
    tracep->declBus(c+930,"a", false,-1, 3,0);
    tracep->declBus(c+931,"dpra", false,-1, 3,0);
    tracep->declBus(c+949,"di", false,-1, 7,0);
    tracep->declBus(c+730,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+687+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+817,"lcr", false,-1, 7,0);
    tracep->declBit(c+856,"tf_push", false,-1);
    tracep->declBus(c+1260,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+811,"enable", false,-1);
    tracep->declBit(c+827,"tx_reset", false,-1);
    tracep->declBit(c+183,"lsr_mask", false,-1);
    tracep->declBit(c+868,"stx_pad_o", false,-1);
    tracep->declBus(c+862,"tstate", false,-1, 2,0);
    tracep->declBus(c+861,"tf_count", false,-1, 4,0);
    tracep->declBus(c+950,"counter", false,-1, 4,0);
    tracep->declBus(c+951,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+952,"shift_out", false,-1, 6,0);
    tracep->declBit(c+953,"stx_o_tmp", false,-1);
    tracep->declBit(c+954,"parity_xor", false,-1);
    tracep->declBit(c+955,"tf_pop", false,-1);
    tracep->declBit(c+956,"bit_out", false,-1);
    tracep->declBus(c+1260,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1172,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+957,"tf_overrun", false,-1);
    tracep->declBus(c+1354,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1336,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1398,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1399,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1400,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1442,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1420,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1448,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1405,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1449,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBit(c+856,"push", false,-1);
    tracep->declBit(c+955,"pop", false,-1);
    tracep->declBus(c+1260,"data_in", false,-1, 7,0);
    tracep->declBit(c+827,"fifo_reset", false,-1);
    tracep->declBit(c+183,"reset_status", false,-1);
    tracep->declBus(c+1172,"data_out", false,-1, 7,0);
    tracep->declBit(c+957,"overrun", false,-1);
    tracep->declBus(c+861,"count", false,-1, 4,0);
    tracep->declBus(c+958,"top", false,-1, 3,0);
    tracep->declBus(c+959,"bottom", false,-1, 3,0);
    tracep->declBus(c+960,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1405,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1420,"data_width", false,-1, 31,0);
    tracep->declBus(c+1448,"depth", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+856,"we", false,-1);
    tracep->declBus(c+958,"a", false,-1, 3,0);
    tracep->declBus(c+959,"dpra", false,-1, 3,0);
    tracep->declBus(c+1260,"di", false,-1, 7,0);
    tracep->declBus(c+1172,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+703+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1164,"auto_in_psel", false,-1);
    tracep->declBit(c+1205,"auto_in_penable", false,-1);
    tracep->declBit(c+1153,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1206,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1154,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+190,"auto_in_pready", false,-1);
    tracep->declBit(c+1337,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1298,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1302,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1303,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1241,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1164,"in_psel", false,-1);
    tracep->declBit(c+1205,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1153,"in_pwrite", false,-1);
    tracep->declBus(c+1154,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1155,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+190,"in_pready", false,-1);
    tracep->declBus(c+1338,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1337,"in_pslverr", false,-1);
    tracep->declBus(c+1298,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_hsync", false,-1);
    tracep->declBit(c+1302,"vga_vsync", false,-1);
    tracep->declBit(c+1303,"vga_valid", false,-1);
    tracep->declBus(c+1450,"NUM", false,-1, 31,0);
    tracep->declBit(c+719,"sync_reg", false,-1);
    tracep->declBus(c+1451,"H_FRONT", false,-1, 31,0);
    tracep->declBus(c+1452,"H_ACT", false,-1, 31,0);
    tracep->declBus(c+1453,"H_BACK", false,-1, 31,0);
    tracep->declBus(c+1454,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1419,"V_FRONT", false,-1, 31,0);
    tracep->declBus(c+1455,"V_ACT", false,-1, 31,0);
    tracep->declBus(c+1456,"V_BACK", false,-1, 31,0);
    tracep->declBus(c+1457,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1458,"VGA_SYNC", false,-1, 31,0);
    tracep->declBus(c+720,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+721,"y_cnt", false,-1, 9,0);
    tracep->declBus(c+722,"cnt", false,-1, 20,0);
    tracep->declBit(c+723,"h_valid", false,-1);
    tracep->declBit(c+724,"v_valid", false,-1);
    tracep->declBus(c+1338,"VGA_IDLE", false,-1, 31,0);
    tracep->declBus(c+1406,"VGA_WRITE", false,-1, 31,0);
    tracep->declBit(c+190,"vga_state", false,-1);
    tracep->declBus(c+725,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+737,"sck", false,-1);
    tracep->declBit(c+1324,"ss", false,-1);
    tracep->declBit(c+1306,"mosi", false,-1);
    tracep->declBit(c+1325,"miso", false,-1);
    tracep->declBus(c+1199,"data_in", false,-1, 7,0);
    tracep->declBus(c+1200,"data_out", false,-1, 7,0);
    tracep->declBus(c+1201,"bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1202,"receiving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+737,"sck", false,-1);
    tracep->declBit(c+961,"ss", false,-1);
    tracep->declBit(c+1306,"mosi", false,-1);
    tracep->declBit(c+1326,"miso", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+1146,"state", false,-1, 2,0);
    tracep->declBus(c+1147,"counter", false,-1, 7,0);
    tracep->declBus(c+1148,"cmd", false,-1, 7,0);
    tracep->declBus(c+1149,"addr", false,-1, 23,0);
    tracep->declBus(c+1150,"data", false,-1, 31,0);
    tracep->declBit(c+1151,"ren", false,-1);
    tracep->declBus(c+1327,"rdata", false,-1, 31,0);
    tracep->declBus(c+1328,"raddr", false,-1, 31,0);
    tracep->declBus(c+1329,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+737,"clock", false,-1);
    tracep->declBit(c+1151,"valid", false,-1);
    tracep->declBus(c+1148,"cmd", false,-1, 7,0);
    tracep->declBus(c+1328,"addr", false,-1, 31,0);
    tracep->declBus(c+1327,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1262,"sck", false,-1);
    tracep->declBit(c+1263,"ce_n", false,-1);
    tracep->declBus(c+1308,"dio", false,-1, 3,0);
    tracep->declBus(c+1414,"RCMD", false,-1, 7,0);
    tracep->declBus(c+1415,"WCMD", false,-1, 7,0);
    tracep->declBus(c+1459,"QPICMD", false,-1, 7,0);
    tracep->declBus(c+1194,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1330,"dout", false,-1, 3,0);
    tracep->declBus(c+1308,"din", false,-1, 3,0);
    tracep->declBit(c+1331,"QPI_MODE", false,-1);
    tracep->declBus(c+1195,"cmd", false,-1, 7,0);
    tracep->declBus(c+1196,"addr", false,-1, 23,0);
    tracep->declBus(c+1332,"data", false,-1, 31,0);
    tracep->declBus(c+1333,"rdata", false,-1, 31,0);
    tracep->declBus(c+1197,"cnt", false,-1, 7,0);
    tracep->declBus(c+1198,"state", false,-1, 2,0);
    tracep->declBus(c+1354,"CMD", false,-1, 2,0);
    tracep->declBus(c+1336,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1398,"DATA", false,-1, 2,0);
    tracep->declBus(c+1399,"DELAY", false,-1, 2,0);
    tracep->declBus(c+1400,"ERR", false,-1, 2,0);
    tracep->declBus(c+1334,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1335,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1174,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1310,"a", false,-1, 13,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1179,"dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"dq", false,-1, 31,0);
    tracep->declBus(c+1182,"addr", false,-1, 12,0);
    tracep->declBit(c+1261,"bank_sel", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1282,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1179,"dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1282,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1188,"dqm", false,-1, 1,0);
    tracep->declBus(c+1192,"dq", false,-1, 15,0);
    tracep->declBus(c+1189,"cmd", false,-1, 2,0);
    tracep->declBus(c+1444,"NOP", false,-1, 2,0);
    tracep->declBus(c+1399,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1442,"READ", false,-1, 2,0);
    tracep->declBus(c+1400,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1443,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1398,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1336,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1354,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1460,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1070+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1074,"den", false,-1, 15,0);
    tracep->declBus(c+1192,"din", false,-1, 15,0);
    tracep->declBus(c+1075,"dout", false,-1, 15,0);
    tracep->declBus(c+1076,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1077,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1078,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1079,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1080,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1081,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1082,"read_flag", false,-1);
    tracep->declBus(c+1083,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1084,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1085,"w_data", false,-1, 15,0);
    tracep->declBus(c+1086,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1087,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1088,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1282,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1190,"dqm", false,-1, 1,0);
    tracep->declBus(c+1193,"dq", false,-1, 15,0);
    tracep->declBus(c+1189,"cmd", false,-1, 2,0);
    tracep->declBus(c+1444,"NOP", false,-1, 2,0);
    tracep->declBus(c+1399,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1442,"READ", false,-1, 2,0);
    tracep->declBus(c+1400,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1443,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1398,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1336,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1354,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1460,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1089+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1093,"den", false,-1, 15,0);
    tracep->declBus(c+1193,"din", false,-1, 15,0);
    tracep->declBus(c+1094,"dout", false,-1, 15,0);
    tracep->declBus(c+1095,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1096,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1097,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1098,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1099,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1100,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1101,"read_flag", false,-1);
    tracep->declBus(c+1102,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1103,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1104,"w_data", false,-1, 15,0);
    tracep->declBus(c+1105,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1106,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1107,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1283,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1179,"dqm", false,-1, 3,0);
    tracep->declBus(c+1191,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1283,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1188,"dqm", false,-1, 1,0);
    tracep->declBus(c+1192,"dq", false,-1, 15,0);
    tracep->declBus(c+1189,"cmd", false,-1, 2,0);
    tracep->declBus(c+1444,"NOP", false,-1, 2,0);
    tracep->declBus(c+1399,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1442,"READ", false,-1, 2,0);
    tracep->declBus(c+1400,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1443,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1398,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1336,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1354,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1460,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1108+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1112,"den", false,-1, 15,0);
    tracep->declBus(c+1192,"din", false,-1, 15,0);
    tracep->declBus(c+1113,"dout", false,-1, 15,0);
    tracep->declBus(c+1114,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1115,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1116,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1117,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1118,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1119,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1120,"read_flag", false,-1);
    tracep->declBus(c+1121,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1122,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1123,"w_data", false,-1, 15,0);
    tracep->declBus(c+1124,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1125,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1126,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u2 ");
    tracep->declBit(c+1309,"clk", false,-1);
    tracep->declBit(c+1173,"cke", false,-1);
    tracep->declBit(c+1283,"cs", false,-1);
    tracep->declBit(c+1175,"ras", false,-1);
    tracep->declBit(c+1176,"cas", false,-1);
    tracep->declBit(c+1177,"we", false,-1);
    tracep->declBus(c+1182,"a", false,-1, 12,0);
    tracep->declBus(c+1178,"ba", false,-1, 1,0);
    tracep->declBus(c+1190,"dqm", false,-1, 1,0);
    tracep->declBus(c+1193,"dq", false,-1, 15,0);
    tracep->declBus(c+1189,"cmd", false,-1, 2,0);
    tracep->declBus(c+1444,"NOP", false,-1, 2,0);
    tracep->declBus(c+1399,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1442,"READ", false,-1, 2,0);
    tracep->declBus(c+1400,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1443,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1398,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1336,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1354,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1460,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1127+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1131,"den", false,-1, 15,0);
    tracep->declBus(c+1193,"din", false,-1, 15,0);
    tracep->declBus(c+1132,"dout", false,-1, 15,0);
    tracep->declBus(c+1133,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1134,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1135,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1136,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1137,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1138,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1139,"read_flag", false,-1);
    tracep->declBus(c+1140,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1141,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1142,"w_data", false,-1, 15,0);
    tracep->declBus(c+1143,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1144,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1145,"Length", false,-1, 3,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__addr_valid));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__addr_valid));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+5,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                              << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                            << 0xbU) 
                                           | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+7,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                              << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                            << 0xbU) 
                                           | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+12,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+13,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+14,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+15,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+17,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+19,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+21,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+23,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+25,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+28,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+29,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+30,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+31,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+32,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+33,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+34,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+35,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+36,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+37,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+38,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+39,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+40,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+41,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+42,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+43,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+44,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+45,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+46,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+47,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+48,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+49,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+50,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+51,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+52,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+53,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+54,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+55,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+56,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+57,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+58,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+59,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+62,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+63,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+64,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+65,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+66,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+67,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+68,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+69,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+70,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+71,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+72,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+73,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+79,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+85,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                               << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+120,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+126,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+128,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+130,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+131,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+140,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+147,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arready));
    bufp->fullIData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rdata),32);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rvalid));
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rresp),2);
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arready));
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rdata),32);
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rvalid));
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rresp),2);
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awready));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wready));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bresp),2);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bvalid));
    bufp->fullIData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullIData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullIData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__addr_valid));
    bufp->fullIData(oldp+180,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+189,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state));
    bufp->fullIData(oldp+191,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+194,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+195,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+196,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+197,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+199,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+200,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+205,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+206,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+207,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+208,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+225,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+226,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+232,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+233,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+234,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+235,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+302,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+308,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+309,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+313,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+314,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+316,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+351,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+360,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+374,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+375,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+376,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+377,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+468,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awaddr),32);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awvalid));
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wdata),32);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wstrb),4);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wvalid));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bready));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master),3);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__clint_state),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__next_clint_state),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__LFSR),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__araddr_reg),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wdata_reg),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rdata_reg),32);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__wstrb_reg),4);
    bufp->fullQData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullIData(oldp+617,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime)),32);
    bufp->fullIData(oldp+618,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__sram_state),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__next_sram_state),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__LFSR),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__araddr_reg),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__rdata_reg),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__uart_state),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__next_uart_state),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__LFSR),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__araddr_reg),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wdata_reg),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__rdata_reg),32);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[0]),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[1]),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[2]),32);
    bufp->fullIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_reg[3]),32);
    bufp->fullSData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty));
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+672,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),3);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_paddr),32);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwrite));
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pwdata),32);
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready));
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata),32);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg));
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__cnt),21);
    bufp->fullBit(oldp+723,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                             & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+724,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                             & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullIData(oldp+726,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                   [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+727,((0x3440U | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable))) 
                                          << 8U))),32);
    bufp->fullBit(oldp+728,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_penable)))));
    bufp->fullSData(oldp+729,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+735,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+736,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_psel) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+741,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))));
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state),2);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+745,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+746,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+749,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+750,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+755,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+759,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+788,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+789,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+790,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+798,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+800,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+801,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+803,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+807,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+808,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+810,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+828,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+829,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+830,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+831,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+832,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+833,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+834,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+837,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+838,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+858,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+865,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+884,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+885,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+886,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+887,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+888,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+907,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+908,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+909,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+910,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+911,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+913,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+932,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+949,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+960,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_access_fault));
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_fault_addr),32);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_araddr),32);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_arvalid));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_rready));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode),7);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullIData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func3),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__func7),7);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWrite));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemRead));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_op),4);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemLen),3);
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ready));
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_val),32);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_val),32);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_zero));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_less));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_out),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_ready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__load_access_fault));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__store_access_fault));
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fault_addr),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_araddr),32);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_arvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_rready));
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awaddr),32);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_awvalid));
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wdata),32);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wstrb),4);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_wvalid));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_sram_bready));
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data),32);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal_target),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr_target),32);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jal));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_jalr));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__take_branch));
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_target),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__state),32);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_stage__DOT__next_state),32);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__state),32);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__next_state),32);
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__immI),32);
    bufp->fullIData(oldp+1021,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+1022,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1023,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
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
    bufp->fullIData(oldp+1024,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_stage__DOT__get_opcode),5);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__if_stage__pc_src));
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__state),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__mem_stage__addr),32);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__state),32);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__next_state),32);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_stage__DOT__delay),2);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__state),32);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__next_state),32);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__RegWrite_wb));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb),5);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__rd_wb_pre),5);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__i),32);
    bufp->fullSData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__brust_len),3);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_addr),9);
    bufp->fullSData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_addr),9);
    bufp->fullSData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_data),16);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dout),16);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__brust_len),3);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__read_flag));
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_addr),9);
    bufp->fullSData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_addr),9);
    bufp->fullSData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_data),16);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u2__DOT__Length),4);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1151,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1159,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1160,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1161,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1162,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+1167,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h430db664__0
                                 : 0U)),32);
    bufp->fullBit(oldp+1168,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))));
    bufp->fullBit(oldp+1169,(((0x30000000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))));
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1174,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1176,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1177,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1180,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+1188,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1189,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1190,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1192,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1193,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1194,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_in),8);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_out),8);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),3);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__receiving));
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1206,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1207,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1212,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1215,(0U));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1225,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wen));
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata),32);
    bufp->fullCData(oldp+1228,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1231,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1232,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1237,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1238,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1239,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+1241,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1242,(((0x10001000U <= (0x3fffffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                              & (0x10001fffU >= (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullCData(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                          ? 1U : 0U))),3);
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel));
    bufp->fullCData(oldp+1252,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+1254,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1255,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1258,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1261,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u0__cs));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sdram_32_u1__cs));
    bufp->fullBit(oldp+1284,(vlSelf->clock));
    bufp->fullBit(oldp+1285,(vlSelf->reset));
    bufp->fullSData(oldp+1286,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1287,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1288,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1289,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1290,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1291,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1292,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1293,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1294,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1295,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1296,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1297,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1298,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1299,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1300,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1301,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1302,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1303,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1304,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1305,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1309,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1310,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1311,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1313,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_pready)
                                         : 0U)))));
    bufp->fullIData(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_sel)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_xip_prdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1315,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1316,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1319,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arb__DOT__current_master))
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
    bufp->fullBit(oldp+1320,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1321,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1326,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1328,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1330,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h2a2074af__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1335,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1336,(1U),3);
    bufp->fullBit(oldp+1337,(0U));
    bufp->fullIData(oldp+1338,(0U),32);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1340,(1U));
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1351,(0U),32);
    bufp->fullCData(oldp+1352,(0U),4);
    bufp->fullCData(oldp+1353,(0U),8);
    bufp->fullCData(oldp+1354,(0U),3);
    bufp->fullCData(oldp+1355,(0U),2);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_pc),32);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_awready));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_wready));
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bresp),2);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_sram_bvalid));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_valid));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_ready));
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wb),5);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWrite_wb));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemRead));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemWrite));
    bufp->fullCData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_MemLen),3);
    bufp->fullIData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_addr),32);
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data_in),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullIData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullIData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1398,(2U),3);
    bufp->fullCData(oldp+1399,(3U),3);
    bufp->fullCData(oldp+1400,(4U),3);
    bufp->fullCData(oldp+1401,(1U),2);
    bufp->fullCData(oldp+1402,(2U),2);
    bufp->fullCData(oldp+1403,(3U),2);
    bufp->fullIData(oldp+1404,(0x20U),32);
    bufp->fullIData(oldp+1405,(4U),32);
    bufp->fullIData(oldp+1406,(1U),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_stage__DOT__next_state),32);
    bufp->fullIData(oldp+1408,(3U),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram__DOT__random_delay),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__j),32);
    bufp->fullBit(oldp+1411,(0U));
    bufp->fullBit(oldp+1412,(1U));
    bufp->fullCData(oldp+1413,(0x1bU),8);
    bufp->fullCData(oldp+1414,(0xebU),8);
    bufp->fullCData(oldp+1415,(0x38U),8);
    bufp->fullIData(oldp+1416,(0x64U),32);
    bufp->fullIData(oldp+1417,(0x18U),32);
    bufp->fullIData(oldp+1418,(9U),32);
    bufp->fullIData(oldp+1419,(2U),32);
    bufp->fullIData(oldp+1420,(8U),32);
    bufp->fullIData(oldp+1421,(0xdU),32);
    bufp->fullIData(oldp+1422,(0x2000U),32);
    bufp->fullIData(oldp+1423,(0x2710U),32);
    bufp->fullIData(oldp+1424,(0x30cU),32);
    bufp->fullCData(oldp+1425,(7U),4);
    bufp->fullCData(oldp+1426,(3U),4);
    bufp->fullCData(oldp+1427,(5U),4);
    bufp->fullCData(oldp+1428,(4U),4);
    bufp->fullCData(oldp+1429,(6U),4);
    bufp->fullCData(oldp+1430,(2U),4);
    bufp->fullCData(oldp+1431,(1U),4);
    bufp->fullSData(oldp+1432,(0x20U),13);
    bufp->fullCData(oldp+1433,(8U),4);
    bufp->fullCData(oldp+1434,(9U),4);
    bufp->fullIData(oldp+1435,(0xaU),32);
    bufp->fullIData(oldp+1436,(6U),32);
    bufp->fullIData(oldp+1437,(0x11U),32);
    bufp->fullIData(oldp+1438,(0x30000000U),32);
    bufp->fullIData(oldp+1439,(0x3fffffffU),32);
    bufp->fullIData(oldp+1440,(0x10001000U),32);
    bufp->fullIData(oldp+1441,(0x10001fffU),32);
    bufp->fullCData(oldp+1442,(5U),3);
    bufp->fullCData(oldp+1443,(6U),3);
    bufp->fullCData(oldp+1444,(7U),3);
    bufp->fullCData(oldp+1445,(0x40U),7);
    bufp->fullCData(oldp+1446,(0xaU),4);
    bufp->fullIData(oldp+1447,(0xbU),32);
    bufp->fullIData(oldp+1448,(0x10U),32);
    bufp->fullIData(oldp+1449,(5U),32);
    bufp->fullIData(oldp+1450,(0x200000U),32);
    bufp->fullIData(oldp+1451,(0x60U),32);
    bufp->fullIData(oldp+1452,(0x90U),32);
    bufp->fullIData(oldp+1453,(0x310U),32);
    bufp->fullIData(oldp+1454,(0x320U),32);
    bufp->fullIData(oldp+1455,(0x23U),32);
    bufp->fullIData(oldp+1456,(0x203U),32);
    bufp->fullIData(oldp+1457,(0x20dU),32);
    bufp->fullIData(oldp+1458,(0x211ffff4U),32);
    bufp->fullCData(oldp+1459,(0x35U),8);
    bufp->fullIData(oldp+1460,(0x400000U),32);
}
