`include "defines.vh"

module ysyx_25010030 (
    input         clock,
    input         reset,
    input         io_interrupt,

    //====== AXI Master ======//
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

    // AXI slave: not implemented
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


    wire [31:0] ifu_pc;
    wire [31:0] ifu_inst;
    wire        ifu_valid;
    wire        pc_updata;
    wire        idu_ready;
    wire [`IF_TO_ID_WD-1:0] if_to_id_bus;
    wire                    idu_valid;
    wire [`ID_TO_EX_WD-1:0] id_to_ex_bus;
    wire                    exu_ready;
    wire                    exu_flush_en;
    wire [           31:0]  exu_flush_dnpc;

    wire                    exu_valid;
    wire [            4:0]  exu_rs1;
    wire [            4:0]  exu_rs2;
    wire [            4:0]  exu_rd;
    wire [           31:0]  exu_rd_w_bypass_data;
    wire                    exu_rd_w_bypass_en;
    wire                    exu_is_read;
    wire                    exu_is_fencei;
    wire [`EX_TO_LS_WD-1:0] ex_to_ls_bus;

    wire                    lsu_ready;
    wire                    lsu_valid;
    wire [           31:0]  lsu_data;
    wire                    lsu_en;
    wire [`EX_TO_WB_WD-1:0] ex_to_wb_bus;
    wire [           31:0]  dcache_addr;
    wire                    dcache_valid;
    wire                    dcache_we;
    wire [           31:0]  dcache_wdata;
    wire [            3:0]  dcache_wstrb;
    wire [           31:0]  dcache_rdata;
    wire                    dcache_ready;

    wire [31:0] rf_rs1_data;
    wire [31:0] rf_rs2_data;

    wire [31:0] bypass_rs1_data;
    wire [31:0] bypass_rs2_data;

    wire [31:0] icache_addr;
    wire [31:0] icache_inst;
    wire        icache_valid;
    wire [31:0] icache_araddr;
    wire        icache_arvalid;
    wire        icache_arready;
    wire [ 3:0] icache_arid;
    wire [ 7:0] icache_arlen;
    wire [ 2:0] icache_arsize;
    wire [ 1:0] icache_arburst;
    wire        icache_rready;
    wire        icache_rvalid;
    wire [31:0] icache_rdata;
    wire [ 1:0] icache_rresp;
    wire [ 3:0] icache_rid;
    wire        icache_rlast;

    wire        dcache_awready;
    wire        dcache_awvalid;
    wire [31:0] dcache_awaddr;
    wire [ 3:0] dcache_awid;
    wire [ 7:0] dcache_awlen;
    wire [ 2:0] dcache_awsize;
    wire [ 1:0] dcache_awburst;
    wire        dcache_wready;
    wire        dcache_wvalid_ext;
    wire [31:0] dcache_wdata_ext;
    wire [ 3:0] dcache_wstrb_ext;
    wire        dcache_wlast;
    wire        dcache_bready;
    wire        dcache_bvalid;
    wire [ 1:0] dcache_bresp;
    wire [ 3:0] dcache_bid;
    wire        dcache_arready;
    wire        dcache_arvalid;
    wire [31:0] dcache_araddr;
    wire [ 3:0] dcache_arid;
    wire [ 7:0] dcache_arlen;
    wire [ 2:0] dcache_arsize;
    wire [ 1:0] dcache_arburst;
    wire        dcache_rready;
    wire        dcache_rvalid;
    wire [31:0] dcache_rdata_ext;
    wire [ 1:0] dcache_rresp;
    wire        dcache_rlast;
    wire [ 3:0] dcache_rid;

    wire        clint_arready;
    wire        clint_arvalid;
    wire [31:0] clint_araddr;
    wire        clint_rready;
    wire        clint_rvalid;
    wire [ 1:0] clint_rresp;
    wire [31:0] clint_rdata;
    wire        clint_rlast;

    wire        axi_lsu_awready;
    wire        axi_lsu_awvalid;
    wire [31:0] axi_lsu_awaddr;
    wire [ 3:0] axi_lsu_awid;
    wire [ 7:0] axi_lsu_awlen;
    wire [ 2:0] axi_lsu_awsize;
    wire [ 1:0] axi_lsu_awburst;
    wire        axi_lsu_wready;
    wire        axi_lsu_wvalid;
    wire [31:0] axi_lsu_wdata;
    wire [ 3:0] axi_lsu_wstrb;
    wire        axi_lsu_wlast;
    wire        axi_lsu_bready;
    wire        axi_lsu_bvalid;
    wire [ 1:0] axi_lsu_bresp;
    wire [ 3:0] axi_lsu_bid;
    wire        axi_lsu_arready;
    wire        axi_lsu_arvalid;
    wire [31:0] axi_lsu_araddr;
    wire [ 3:0] axi_lsu_arid;
    wire [ 7:0] axi_lsu_arlen;
    wire [ 2:0] axi_lsu_arsize;
    wire [ 1:0] axi_lsu_arburst;
    wire        axi_lsu_rready;
    wire        axi_lsu_rvalid;
    wire [31:0] axi_lsu_rdata;
    wire [ 1:0] axi_lsu_rresp;
    wire        axi_lsu_rlast;
    wire [ 3:0] axi_lsu_rid;

    wire [31:0] rdata_processed;

    // for difftest
    wire [31:0] wbu_pc;
    wire        wbu_valid;
    wire [31:0] wbu_inst;


    // wire [31:0] bpu_dnpc = ifu_pc + 32'h4;
    wire [31:0] bpu_dnpc;
    wire        ifu_is_call;
    wire        ifu_is_ret;
    wire        ifu_is_jal;
    wire        ifu_is_jalr;
    wire        ifu_is_indirect;
    wire        ifu_is_c_inst;
    wire [31:0] bru_pc;
    wire [31:0] bru_dnpc;
    wire        bru_dnpc_valid;
    wire        bru_taken;
    wire        bru_is_call;
    wire        bru_is_ret;
    wire        bru_is_jal;
    wire        bru_is_jalr;
    wire        bru_is_indirect;
    wire        bru_is_c_inst;

    bpu u_bpu (
        .clk            (clock          ),
        .rst            (reset          ),
        .pc             (ifu_pc         ),
        .dnpc           (bpu_dnpc       ),
        .is_jal         (ifu_is_jal     ),
        .is_jalr        (ifu_is_jalr    ),
        .is_call        (ifu_is_call    ),
        .is_ret         (ifu_is_ret     ),
        .is_indirect    (ifu_is_indirect),
        .is_c_inst      (ifu_is_c_inst  ),
        .bru_is_c_inst  (bru_is_c_inst  ),
        .bru_pc         (bru_pc         ),
        .bru_dnpc       (bru_dnpc       ),
        .bru_dnpc_valid (bru_dnpc_valid ),
        .bru_taken      (bru_taken      ),
        .bru_is_jal     (bru_is_jal     ),
        .bru_is_jalr    (bru_is_jalr    ),
        .bru_is_call    (bru_is_call    ),
        .bru_is_ret     (bru_is_ret     ),
        .bru_is_indirect(bru_is_indirect)
    );

    ifu u_ifu (
        .clk            (clock          ),
        .rst            (reset          ),
        .exu_flush_en   (exu_flush_en   ),
        .exu_flush_dnpc (exu_flush_dnpc ),
        .pc_updata      (pc_updata      ),
        .idu_ready      (idu_ready      ),
        .ifu_valid      (ifu_valid      ),
        .icache_inst    (icache_inst    ),
        .icache_addr    (icache_addr    ),
        .icache_valid   (icache_valid   ),
        .bpu_dnpc       (bpu_dnpc       ),
        .pc             (ifu_pc         ),
        .is_call        (ifu_is_call    ),
        .is_ret         (ifu_is_ret     ),
        .is_jal         (ifu_is_jal     ),
        .is_jalr        (ifu_is_jalr    ),
        .is_indirect    (ifu_is_indirect),
        .is_c_inst      (ifu_is_c_inst  ),
        .if_to_id_bus   (if_to_id_bus   )
    );

    icache u_icache (
        .clk         (clock          ),
        .rst         (reset          ),
        .is_fencei   (exu_is_fencei  ),
        .addr        (icache_addr    ),
        .inst        (icache_inst    ),
        .valid       (icache_valid   ),
        .axi_araddr  (icache_araddr  ),
        .axi_arvalid (icache_arvalid ),
        .axi_arready (icache_arready ),
        .axi_arid    (icache_arid    ),
        .axi_arlen   (icache_arlen   ),
        .axi_arsize  (icache_arsize  ),
        .axi_arburst (icache_arburst ),
        .axi_rvalid  (icache_rvalid  ),
        .axi_rready  (icache_rready  ),
        .axi_rdata   (icache_rdata   ),
        .axi_rresp   (icache_rresp   ),
        .axi_rid     (icache_rid     ),
        .axi_rlast   (icache_rlast   )
    );

    decode u_decode (
        .clk          (clock         ),
        .rst          (reset         ),
        .exu_flush_en (exu_flush_en  ),
        .ifu_valid    (ifu_valid     ),
        .idu_ready    (idu_ready     ),
        .idu_valid    (idu_valid     ),
        .exu_ready    (exu_ready     ),
        .if_to_id_bus (if_to_id_bus  ),
        // .pc           (ifu_pc        ),
        // .bpu_dnpc     (bpu_dnpc      ),
        // .inst         (ifu_inst      ),
        .du_bus       (id_to_ex_bus  )
    );

    bypass u_bypass (
        .clk              (clock              ),
        .rst              (reset              ),
        .idu_valid        (idu_valid          ),
        .exu_ready        (exu_ready          ),
        .exu_flush_en     (exu_flush_en       ),
        .rs1_addr         (exu_rs1            ),
        .rs2_addr         (exu_rs2            ),
        .rd_addr          (exu_rd             ),
        .rd_w_bypass_data (exu_rd_w_bypass_data),
        .rd_w_bypass_en   (exu_rd_w_bypass_en ),
        .rf_rs1_data      (rf_rs1_data        ),
        .rf_rs2_data      (rf_rs2_data        ),
        .bypass_rs1_data  (bypass_rs1_data    ),
        .bypass_rs2_data  (bypass_rs2_data    )
    );

    exu u_exu (
        .clk              (clock              ),
        .rst              (reset              ),
        .idu_valid        (idu_valid          ),
        .exu_ready        (exu_ready          ),
        .exu_valid        (exu_valid          ),
        .lsu_ready        (lsu_ready          ),
        .lsu_valid        (lsu_valid          ),
        .wbu_ready        (1'b1               ),
        .is_fencei        (exu_is_fencei      ),
        .pc_update        (pc_updata          ),
        .exu_flush_en     (exu_flush_en       ),
        .exu_flush_dnpc   (exu_flush_dnpc     ),
        .id_to_ex_bus     (id_to_ex_bus       ),
        .rs1_addr         (exu_rs1            ),
        .rs2_addr         (exu_rs2            ),
        .bypass_rs1_data  (bypass_rs1_data    ),
        .bypass_rs2_data  (bypass_rs2_data    ),
        .rd_addr          (exu_rd             ),
        .rd_w_bypass_data (exu_rd_w_bypass_data),
        .rd_w_bypass_en   (exu_rd_w_bypass_en ),
        .is_read          (exu_is_read        ),
        .bru_pc           (bru_pc             ),
        .bru_dnpc         (bru_dnpc           ),
        .bru_dnpc_valid   (bru_dnpc_valid     ),
        .bru_taken        (bru_taken          ),
        .bru_is_call      (bru_is_call        ),
        .bru_is_ret       (bru_is_ret         ),
        .bru_is_jal       (bru_is_jal         ),
        .bru_is_jalr      (bru_is_jalr        ),
        .bru_is_indirect  (bru_is_indirect    ),
        .bru_is_c_inst    (bru_is_c_inst      ),
        .lsu_en           (lsu_en             ),
        .ex_to_ls_bus     (ex_to_ls_bus       ),
        .lsu_data         (lsu_data           ),
        .ex_to_wb_bus     (ex_to_wb_bus       )
    );

    lsu u_lsu (
        .clk            (clock           ),
        .rst            (reset           ),
        .lsu_en         (lsu_en          ),
        .lsu_ready      (lsu_ready       ),
        .lsu_valid      (lsu_valid       ),
        .rdata_processed(rdata_processed ),
        .ex_to_ls_bus   (ex_to_ls_bus    ),
        .lsu_data       (lsu_data        ),
        .dcache_addr    (dcache_addr     ),
        .dcache_valid   (dcache_valid    ),
        .dcache_we      (dcache_we       ),
        .dcache_wdata   (dcache_wdata    ),
        .dcache_wstrb   (dcache_wstrb    ),
        .dcache_rdata   (dcache_rdata    ),
        .dcache_ready   (dcache_ready    )
    );

    wbu wbu (
        .clk          (clock         ),
        .rst          (reset         ),
        // for difftest
        .wbu_valid    (wbu_valid     ),
        .wbu_pc       (wbu_pc        ),
        .wbu_inst     (wbu_inst      ),

        .exu_valid    (exu_valid     ),
        .ex_to_wb_bus (ex_to_wb_bus  ),
        .rs1          (exu_rs1       ),
        .rs2          (exu_rs2       ),
        .rf_rs1_data  (rf_rs1_data   ),
        .rf_rs2_data  (rf_rs2_data   )
    );

    dcache u_dcache (
        .clk       (clock           ),
        .rst       (reset           ),
        .awready   (dcache_awready  ),
        .awvalid   (dcache_awvalid  ),
        .awaddr    (dcache_awaddr   ),
        .awid      (dcache_awid     ),
        .awlen     (dcache_awlen    ),
        .awsize    (dcache_awsize   ),
        .awburst   (dcache_awburst  ),
        .wready    (dcache_wready   ),
        .wvalid    (dcache_wvalid_ext),
        .wdata     (dcache_wdata_ext),
        .wstrb     (dcache_wstrb_ext),
        .wlast     (dcache_wlast    ),
        .bready    (dcache_bready   ),
        .bvalid    (dcache_bvalid   ),
        .bresp     (dcache_bresp    ),
        .bid       (dcache_bid      ),
        .arready   (dcache_arready  ),
        .arvalid   (dcache_arvalid  ),
        .araddr    (dcache_araddr   ),
        .arid      (dcache_arid     ),
        .arlen     (dcache_arlen    ),
        .arsize    (dcache_arsize   ),
        .arburst   (dcache_arburst  ),
        .rready    (dcache_rready   ),
        .rvalid    (dcache_rvalid   ),
        .rresp     (dcache_rresp    ),
        .rdata     (dcache_rdata_ext),
        .rlast     (dcache_rlast    ),
        .rid       (dcache_rid      ),
        .fence_en  (exu_is_fencei   ),
        .lsu_addr  (dcache_addr     ),
        .lsu_valid (dcache_valid    ),
        .lsu_we    (dcache_we       ),
        .lsu_wdata (dcache_wdata    ),
        .lsu_wstrb (dcache_wstrb    ),
        .lsu_rdata (dcache_rdata    ),
        .lsu_ready (dcache_ready    )
    );

    clint u_clint (
        .clk     (clock         ),
        .rst     (reset         ),
        .arready (clint_arready ),
        .arvalid (clint_arvalid ),
        .araddr  (clint_araddr  ),
        .rready  (clint_rready  ),
        .rvalid  (clint_rvalid  ),
        .rlast   (clint_rlast   ),
        .rresp   (clint_rresp   ),
        .rdata   (clint_rdata   )
    );

    axi_bridge u_axi_bridge (
        .clk              (clock              ),
        .rst              (reset              ),

        .ifu_arready      (icache_arready     ),
        .ifu_arvalid      (icache_arvalid     ),
        .ifu_araddr       (icache_araddr      ),
        .ifu_arid         (icache_arid        ),
        .ifu_arlen        (icache_arlen       ),
        .ifu_arsize       (icache_arsize      ),
        .ifu_arburst      (icache_arburst     ),
        .ifu_rready       (icache_rready      ),
        .ifu_rvalid       (icache_rvalid      ),
        .ifu_rresp        (icache_rresp       ),
        .ifu_rdata        (icache_rdata       ),
        .ifu_rlast        (icache_rlast       ),
        .ifu_rid          (icache_rid         ),

        .lsu_awready      (dcache_awready     ),
        .lsu_awvalid      (dcache_awvalid     ),
        .lsu_awaddr       (dcache_awaddr      ),
        .lsu_awid         (dcache_awid        ),
        .lsu_awlen        (dcache_awlen       ),
        .lsu_awsize       (dcache_awsize      ),
        .lsu_awburst      (dcache_awburst     ),
        .lsu_wready       (dcache_wready      ),
        .lsu_wvalid       (dcache_wvalid_ext  ),
        .lsu_wdata        (dcache_wdata_ext   ),
        .lsu_wstrb        (dcache_wstrb_ext   ),
        .lsu_wlast        (dcache_wlast       ),
        .lsu_bready       (dcache_bready      ),
        .lsu_bvalid       (dcache_bvalid      ),
        .lsu_bresp        (dcache_bresp       ),
        .lsu_bid          (dcache_bid         ),
        .lsu_arready      (dcache_arready     ),
        .lsu_arvalid      (dcache_arvalid     ),
        .lsu_araddr       (dcache_araddr      ),
        .lsu_arid         (dcache_arid        ),
        .lsu_arlen        (dcache_arlen       ),
        .lsu_arsize       (dcache_arsize      ),
        .lsu_arburst      (dcache_arburst     ),
        .lsu_rready       (dcache_rready      ),
        .lsu_rvalid       (dcache_rvalid      ),
        .lsu_rresp        (dcache_rresp       ),
        .lsu_rdata        (dcache_rdata_ext   ),
        .lsu_rlast        (dcache_rlast       ),
        .lsu_rid          (dcache_rid         ),

        .io_master_awready(io_master_awready  ),
        .io_master_awvalid(io_master_awvalid  ),
        .io_master_awaddr (io_master_awaddr   ),
        .io_master_awid   (io_master_awid     ),
        .io_master_awlen  (io_master_awlen    ),
        .io_master_awsize (io_master_awsize   ),
        .io_master_awburst(io_master_awburst  ),
        .io_master_wready (io_master_wready   ),
        .io_master_wvalid (io_master_wvalid   ),
        .io_master_wdata  (io_master_wdata    ),
        .io_master_wstrb  (io_master_wstrb    ),
        .io_master_wlast  (io_master_wlast    ),
        .io_master_bready (io_master_bready   ),
        .io_master_bvalid (io_master_bvalid   ),
        .io_master_bresp  (io_master_bresp    ),
        .io_master_bid    (io_master_bid      ),
        .io_master_arready(io_master_arready  ),
        .io_master_arvalid(io_master_arvalid  ),
        .io_master_araddr (io_master_araddr   ),
        .io_master_arid   (io_master_arid     ),
        .io_master_arlen  (io_master_arlen    ),
        .io_master_arsize (io_master_arsize   ),
        .io_master_arburst(io_master_arburst  ),
        .io_master_rready (io_master_rready   ),
        .io_master_rvalid (io_master_rvalid   ),
        .io_master_rresp  (io_master_rresp    ),
        .io_master_rdata  (io_master_rdata    ),
        .io_master_rlast  (io_master_rlast    ),
        .io_master_rid    (io_master_rid      ),

        .clint_arready    (clint_arready      ),
        .clint_arvalid    (clint_arvalid      ),
        .clint_araddr     (clint_araddr       ),
        .clint_rready     (clint_rready       ),
        .clint_rvalid     (clint_rvalid       ),
        .clint_rresp      (clint_rresp        ),
        .clint_rdata      (clint_rdata        ),
        .clint_rlast      (clint_rlast        )
    );

    // for csrc / difftest
    wire [31:0] IF_ID_pc   = ifu_pc;
    wire [31:0] IF_ID_inst = ifu_inst;

endmodule
