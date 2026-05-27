`include "defines.vh"

module ysyx_25010030 (
    input         clock,
    input         reset,
    input         io_interrupt,

    input         io_master_awready,
    output        io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [ 3:0] io_master_awid,
    output [ 7:0] io_master_awlen,
    output [ 2:0] io_master_awsize,
    output [ 1:0] io_master_awburst,

    input         io_master_wready,
    output        io_master_wvalid,
    output [31:0] io_master_wdata,
    output [ 3:0] io_master_wstrb,
    output        io_master_wlast,

    output        io_master_bready,
    input         io_master_bvalid,
    input  [ 1:0] io_master_bresp,
    input  [ 3:0] io_master_bid,

    input         io_master_arready,
    output        io_master_arvalid,
    output [31:0] io_master_araddr,
    output [ 3:0] io_master_arid,
    output [ 7:0] io_master_arlen,
    output [ 2:0] io_master_arsize,
    output [ 1:0] io_master_arburst,

    output        io_master_rready,
    input         io_master_rvalid,
    input  [ 1:0] io_master_rresp,
    input  [31:0] io_master_rdata,
    input         io_master_rlast,
    input  [3:0]  io_master_rid,

    //====== AXI Slave ======//
    output        io_slave_awready,
    input         io_slave_awvalid,
    input  [31:0] io_slave_awaddr,
    input  [ 3:0] io_slave_awid,
    input  [ 7:0] io_slave_awlen,
    input  [ 2:0] io_slave_awsize,
    input  [ 1:0] io_slave_awburst,

    output        io_slave_wready,
    input         io_slave_wvalid,
    input  [31:0] io_slave_wdata,
    input  [ 3:0] io_slave_wstrb,
    input         io_slave_wlast,

    input         io_slave_bready,
    output        io_slave_bvalid,
    output [ 1:0] io_slave_bresp,
    output [ 3:0] io_slave_bid,

    output        io_slave_arready,
    input         io_slave_arvalid,
    input  [31:0] io_slave_araddr,
    input  [ 3:0] io_slave_arid,
    input  [ 7:0] io_slave_arlen,
    input  [ 2:0] io_slave_arsize,
    input  [ 1:0] io_slave_arburst,

    input         io_slave_rready,
    output        io_slave_rvalid,
    output [ 1:0] io_slave_rresp,
    output [31:0] io_slave_rdata,
    output        io_slave_rlast,
    output [ 3:0] io_slave_rid
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    assign io_slave_bid     = 4'b0;
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid  = 1'b0;
    assign io_slave_rresp   = 2'b0;
    assign io_slave_rdata   = 32'b0;
    assign io_slave_rlast   = 1'b0;
    assign io_slave_rid     = 4'b0;

`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
`endif

    // axi
    wire         ifu_arready;
    wire         ifu_arvalid;
    wire [31:0]  ifu_araddr;
    wire [ 3:0]  ifu_arid;
    wire [ 7:0]  ifu_arlen;
    wire [ 2:0]  ifu_arsize;
    wire [ 1:0]  ifu_arburst;
    wire         ifu_rready;
    wire         ifu_rvalid;
    wire [ 1:0]  ifu_rresp;
    wire [31:0]  ifu_rdata;
    wire         ifu_rlast;
    wire [ 3:0]  ifu_rid;

    wire         lsu_awready;
    wire         lsu_awvalid;
    wire [31:0]  lsu_awaddr;
    wire [ 3:0]  lsu_awid;
    wire [ 7:0]  lsu_awlen;
    wire [ 2:0]  lsu_awsize;
    wire [ 1:0]  lsu_awburst;
    wire         lsu_wready;
    wire         lsu_wvalid;
    wire [31:0]  lsu_wdata;
    wire [ 3:0]  lsu_wstrb;
    wire         lsu_wlast;
    wire         lsu_wid;
    wire         lsu_bready;
    wire         lsu_bvalid;
    wire [ 1:0]  lsu_bresp;
    wire [ 3:0]  lsu_bid;
    wire         lsu_arready;
    wire         lsu_arvalid;
    wire [31:0]  lsu_araddr;
    wire [ 3:0]  lsu_arid;
    wire [ 7:0]  lsu_arlen;
    wire [ 2:0]  lsu_arsize;
    wire [ 1:0]  lsu_arburst;
    wire         lsu_rready;
    wire         lsu_rvalid;
    wire [ 1:0]  lsu_rresp;
    wire [31:0]  lsu_rdata;
    wire         lsu_rlast;
    wire [ 3:0]  lsu_rid;

    axi_bridge axi_bridge(
        .clk        (clock             ),
        .rst        (reset             ),
        .ifu_arready(ifu_arready       ),
        .ifu_arvalid(ifu_arvalid       ),
        .ifu_araddr (ifu_araddr        ),
        .ifu_arid   (ifu_arid          ),
        .ifu_arlen  (ifu_arlen         ),
        .ifu_arsize (ifu_arsize        ),
        .ifu_arburst(ifu_arburst       ),
        .ifu_rready (ifu_rready        ),
        .ifu_rvalid (ifu_rvalid        ),
        .ifu_rresp  (ifu_rresp         ),
        .ifu_rdata  (ifu_rdata         ),
        .ifu_rlast  (ifu_rlast         ),
        .ifu_rid    (ifu_rid           ),
        .lsu_awready(lsu_awready       ),
        .lsu_awvalid(lsu_awvalid       ),
        .lsu_awaddr (lsu_awaddr        ),
        .lsu_awid   (lsu_awid          ),
        .lsu_awlen  (lsu_awlen         ),
        .lsu_awsize (lsu_awsize        ),
        .lsu_awburst(lsu_awburst       ),
        .lsu_wready (lsu_wready        ),
        .lsu_wvalid (lsu_wvalid        ),
        .lsu_wdata  (lsu_wdata         ),
        .lsu_wstrb  (lsu_wstrb         ),
        .lsu_wlast  (lsu_wlast         ),
        .lsu_wid    (lsu_wid           ),
        .lsu_bready (lsu_bready        ),
        .lsu_bvalid (lsu_bvalid        ),
        .lsu_bresp  (lsu_bresp         ),
        .lsu_bid    (lsu_bid           ),
        .lsu_arready(lsu_arready       ),
        .lsu_arvalid(lsu_arvalid       ),
        .lsu_araddr (lsu_araddr        ),
        .lsu_arid   (lsu_arid          ),
        .lsu_arlen  (lsu_arlen         ),
        .lsu_arsize (lsu_arsize        ),
        .lsu_arburst(lsu_arburst       ),
        .lsu_rready (lsu_rready        ),
        .lsu_rvalid (lsu_rvalid        ),
        .lsu_rresp  (lsu_rresp         ),
        .lsu_rdata  (lsu_rdata         ),
        .lsu_rlast  (lsu_rlast         ),
        .lsu_rid    (lsu_rid           ),
        .awready    (io_master_awready ),
        .awvalid    (io_master_awvalid ),
        .awaddr     (io_master_awaddr  ),
        .awid       (io_master_awid    ),
        .awlen      (io_master_awlen   ),
        .awsize     (io_master_awsize  ),
        .awburst    (io_master_awburst ),
        .wid        (io_master_wid     ),
        .wready     (io_master_wready  ),
        .wvalid     (io_master_wvalid  ),
        .wdata      (io_master_wdata   ),
        .wstrb      (io_master_wstrb   ),
        .wlast      (io_master_wlast   ),
        .bready     (io_master_bready  ),
        .bvalid     (io_master_bvalid  ),
        .bresp      (io_master_bresp   ),
        .bid        (io_master_bid     ),
        .arready    (io_master_arready ),
        .arvalid    (io_master_arvalid ),
        .araddr     (io_master_araddr  ),
        .arid       (io_master_arid    ),
        .arlen      (io_master_arlen   ),
        .arsize     (io_master_arsize  ),
        .arburst    (io_master_arburst ),
        .rready     (io_master_rready  ),
        .rvalid     (io_master_rvalid  ),
        .rresp      (io_master_rresp   ),
        .rdata      (io_master_rdata   ),
        .rlast      (io_master_rlast   ),
        .rid        (io_master_rid     )
    );

    wire        is_fencei;
    wire [31:0] icache_fetch_pc;
    wire [19:0] inst_tag;
    wire [ 7:0] inst_index;
    wire [ 3:0] inst_offset;
    wire        icache_fetch_valid;
    wire [63:0] icache_inst64;
    wire        fetch_done;

    assign {inst_tag, inst_index, inst_offset} = icache_fetch_pc;

    icache icache (
        .clk         (clock             ),
        .rst         (reset             ),
        .arready     (ifu_arready       ),
        .arvalid     (ifu_arvalid       ),
        .araddr      (ifu_araddr        ),
        .arid        (ifu_arid          ),
        .arlen       (ifu_arlen         ),
        .arsize      (ifu_arsize        ),
        .arburst     (ifu_arburst       ),
        .rready      (ifu_rready        ),
        .rvalid      (ifu_rvalid        ),
        .rresp       (ifu_rresp         ),
        .rdata       (ifu_rdata         ),
        .rlast       (ifu_rlast         ),
        .rid         (ifu_rid           ),
        .is_fencei   (is_fencei         ),
        .inst_tag    (inst_tag          ),
        .inst_index  (inst_index        ),
        .inst_offset (inst_offset       ),
        .inst_valid  (icache_fetch_valid),
        .inst64      (icache_inst64     ),
        .fetch_done  (fetch_done        )
    );


endmodule
