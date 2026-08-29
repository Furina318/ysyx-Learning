`include "defines.vh"

module ysyx_25010030 (
    input         clock             ,
    input         reset             ,
    input         io_interrupt      ,

    input         io_master_awready ,
    output        io_master_awvalid ,
    output [31:0] io_master_awaddr  ,
    output [ 3:0] io_master_awid    ,
    output [ 7:0] io_master_awlen   ,
    output [ 2:0] io_master_awsize  ,
    output [ 1:0] io_master_awburst ,
    input         io_master_wready  ,
    output        io_master_wvalid  ,
    output [31:0] io_master_wdata   ,
    output [ 3:0] io_master_wstrb   ,
    output        io_master_wlast   ,
    output        io_master_bready  ,
    input         io_master_bvalid  ,
    input  [ 1:0] io_master_bresp   ,
    input  [ 3:0] io_master_bid     ,
    input         io_master_arready ,
    output        io_master_arvalid ,
    output [31:0] io_master_araddr  ,
    output [ 3:0] io_master_arid    ,
    output [ 7:0] io_master_arlen   ,
    output [ 2:0] io_master_arsize  ,
    output [ 1:0] io_master_arburst ,
    output        io_master_rready  ,
    input         io_master_rvalid  ,
    input  [ 1:0] io_master_rresp   ,
    input  [31:0] io_master_rdata   ,
    input         io_master_rlast   ,
    input  [3:0]  io_master_rid     ,

    output        io_slave_awready  ,
    input         io_slave_awvalid  ,
    input  [31:0] io_slave_awaddr   ,
    input  [ 3:0] io_slave_awid     ,
    input  [ 7:0] io_slave_awlen    ,
    input  [ 2:0] io_slave_awsize   ,
    input  [ 1:0] io_slave_awburst  ,
    output        io_slave_wready   ,
    input         io_slave_wvalid   ,
    input  [31:0] io_slave_wdata    ,
    input  [ 3:0] io_slave_wstrb    ,
    input         io_slave_wlast    ,
    input         io_slave_bready   ,
    output        io_slave_bvalid   ,
    output [ 1:0] io_slave_bresp    ,
    output [ 3:0] io_slave_bid      ,
    output        io_slave_arready  ,
    input         io_slave_arvalid  ,
    input  [31:0] io_slave_araddr   ,
    input  [ 3:0] io_slave_arid     ,
    input  [ 7:0] io_slave_arlen    ,
    input  [ 2:0] io_slave_arsize   ,
    input  [ 1:0] io_slave_arburst  ,
    input         io_slave_rready   ,
    output        io_slave_rvalid   ,
    output [ 1:0] io_slave_rresp    ,
    output [31:0] io_slave_rdata    ,
    output        io_slave_rlast    ,
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

    // 参数配置
    localparam RENAME_DEPTH  = 32;
    localparam ID_WIDTH      = $clog2(RENAME_DEPTH) + 1;
    localparam PHY_REG_WIDTH = 6;
    localparam PHY_REG_NUM   = 64;

    wire [31:0] bpu_pc, bpu_dnpc;
    wire        bpu_en_1, bpu_en_2;
    wire [ 1:0] pre_way;
    wire [31:0] dnpc_slot1, dnpc_slot2;

    wire ifu_is_call_1, ifu_is_ret_1, ifu_is_jal_1, ifu_is_jalr_1, ifu_is_indirect_1, ifu_is_cond_branch_1, ifu_is_c_inst_1;
    wire ifu_is_call_2, ifu_is_ret_2, ifu_is_jal_2, ifu_is_jalr_2, ifu_is_indirect_2, ifu_is_cond_branch_2, ifu_is_c_inst_2;

    wire ifu_valid1, ifu_valid2, pc_updata, ibu_ready;
    wire [`IF_TO_ID_WD-1:0] if_to_ib_bus1, if_to_ib_bus2;

    wire ibu_valid1, ibu_valid2;
    wire [`IF_TO_ID_WD-1:0] ib_to_id_bus1, ib_to_id_bus2;

    wire [31:0] icache_addr, icache_inst1, icache_inst2;
    wire        icache_valid;

    wire        dec_gpr_we_1, dec_mdu_1, dec_special_1, dec_quick_1, dec_ctrl_1, dec_st_ld_1;
    wire [ 4:0] dec_rd_1, dec_rs1_1, dec_rs2_1;
    wire [`ID_TO_EX_WD-1:0] dec_du_bus_1;

    wire        dec_gpr_we_2, dec_mdu_2, dec_special_2, dec_quick_2, dec_ctrl_2, dec_st_ld_2;
    wire [ 4:0] dec_rd_2, dec_rs1_2, dec_rs2_2;
    wire [`ID_TO_EX_WD-1:0] dec_du_bus_2;

    wire        rn_valid_1, rn_valid_2;
    wire [PHY_REG_WIDTH-1:0] rn_prs1_1, rn_prs2_1, rn_prd_1;
    wire [PHY_REG_WIDTH-1:0] rn_prs1_2, rn_prs2_2, rn_prd_2;
    wire        rn_rs1_rdy_1, rn_rs2_rdy_1, rn_rs1_rdy_2, rn_rs2_rdy_2;
    wire [ID_WIDTH-1:0] rn_id_1, rn_id_2;
    wire        rn_mdu_1, rn_special_1, rn_quick_1, rn_ctrl_1, rn_st_ld_1;
    wire        rn_mdu_2, rn_special_2, rn_quick_2, rn_ctrl_2, rn_st_ld_2;
    wire [`ID_TO_IS_WD-1:0] rn_du_bus_1, rn_du_bus_2;
    wire        rename_full;
    wire [32*PHY_REG_WIDTH-1:0] commit_rat;
    wire [PHY_REG_NUM-1:0]      phy_ready;

    wire        cdb1_valid, cdb2_valid;
    wire [PHY_REG_WIDTH-1:0] cdb1_tag, cdb2_tag;
    wire [31:0] cdb1_data, cdb2_data;
    wire [ID_WIDTH-1:0] cdb1_id, cdb2_id;

    wire        is_valid_1, is_valid_2;
    wire [PHY_REG_WIDTH-1:0] is_rs1_1, is_rs2_1, is_rd_1;
    wire [PHY_REG_WIDTH-1:0] is_rs1_2, is_rs2_2, is_rd_2;
    wire [ID_WIDTH-1:0] is_id_1, is_id_2;
    wire [`IS_TO_EX_WD-1:0] is_bus_1, is_bus_2;
    wire        iq_full;

    wire alu1_free, alu2_free, mdu_free, lsu_free, bru_free, csr_free;

    wire        slot1_cmt_valid, slot2_cmt_valid;
    wire [ID_WIDTH-1:0] slot1_cmt_id, slot2_cmt_id;
    wire [`EX_TO_RO_WD-1:0] slot1_ro_bus, slot2_ro_bus;

    wire        exu_flush_en;
    wire [31:0] exu_flush_dnpc;
    wire [ID_WIDTH-1:0] exu_flush_id;

    wire        rob_cmt_valid_1, rob_cmt_valid_2;
    wire [ID_WIDTH-1:0] rob_cmt_id_1, rob_cmt_id_2;
    wire [`RO_TO_WB_WD-1:0] rob_wb_bus_1, rob_wb_bus_2;
    wire        rob_full;

    wire        rn_to_rob_valid_1, rn_to_rob_valid_2;
    wire [ID_WIDTH-1:0] rn_to_rob_id_1, rn_to_rob_id_2;

    wire [31:0] prf_rdata1, prf_rdata2, prf_rdata3, prf_rdata4;
    wire [31:0] bp_src1_s1, bp_src2_s1, bp_src1_s2, bp_src2_s2;

    wire [31:0] bru_pc, bru_dnpc;
    wire        bru_dnpc_valid, bru_taken;
    wire        bru_is_call, bru_is_ret, bru_is_jal, bru_is_jalr, bru_is_indirect, bru_is_c_inst;

    wire        lsu_en;
    wire [`EX_TO_LS_WD-1:0] ex_to_ls_bus;
    wire [31:0] lsu_data;
    wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id;
    wire        lsu_ready_slot2;
    wire        lsu_valid;
    wire [ID_WIDTH-1:0] lsu_inst_id;    

    wire [31:0] dcache_addr;
    wire        dcache_valid, dcache_we;
    wire [31:0] dcache_wdata, dcache_rdata;
    wire [ 3:0] dcache_wstrb;
    wire        dcache_ready;

    wire        stb_drain_valid;
    wire [31:0] stb_drain_addr, stb_drain_data;
    wire [ 3:0] stb_drain_wstrb;
    wire        stb_drain_ready;
    wire [`STB_DEPTH_LOG2-1:0] stb_alloc_id;
    wire        stb_ready;
    wire [31:0] stb_forward_addr, stb_forward_data;
    wire [ 3:0] stb_forward_mask;
    wire        stb_forward_full_hit;
    wire        stb_alloc_valid;
    wire [31:0] stb_alloc_addr, stb_alloc_data;
    wire [ 3:0] stb_alloc_wstrb;

    // CSR
    wire [11:0] csr_raddr;
    wire        ecall_en, mret_en;
    wire [31:0] csr_rdata;

    // fence
    wire fence_done;
    reg  fencei_killed;
    wire is_fencei_slot1, is_fencei_slot2;
    wire is_fencei = is_fencei_slot1 | is_fencei_slot2;

    always @(posedge clock) begin
        if (reset) fencei_killed <= 1'b0;
        else if (is_fencei & exu_flush_en) fencei_killed <= 1'b1;
        else if (!is_fencei)              fencei_killed <= 1'b0;
    end
    wire is_fencei_g = is_fencei & !exu_flush_en & !fencei_killed;

    // 冲刷脉冲转换
    wire               flush_once;
    reg                flush_pre;
    reg [ID_WIDTH-1:0] flush_id_pre;
    always @(posedge clock) begin
        if (exu_flush_en) flush_pre <= 1'b1;
        else              flush_pre <= 1'b0;
        if (exu_flush_en) flush_id_pre <= exu_flush_id;
    end
    assign flush_once = (exu_flush_en & !flush_pre) ||
                        (exu_flush_en && flush_pre && (exu_flush_id != flush_id_pre));

    // difftest
    wire [31:0] wbu_pc, wbu_inst;
    wire [31:0] wbu_inst_2;
    wire [31:0] wbu_addr, wbu_addr_2;
    wire        wbu_valid;
    wire        wbu_dual_cmt;

    bpu u_bpu (
        .clk              (clock               ), 
        .rst              (reset               ),
        .pc               (bpu_pc              ), 
        .dnpc             (bpu_dnpc            ),
        .pre_way          (pre_way             ), 
        .bpu_en_1         (bpu_en_1            ), 
        .bpu_en_2         (bpu_en_2            ),
        .dnpc_slot1       (dnpc_slot1          ), 
        .dnpc_slot2       (dnpc_slot2          ),
        .is_jal_1         (ifu_is_jal_1        ), 
        .is_jalr_1        (ifu_is_jalr_1       ),
        .is_call_1        (ifu_is_call_1       ), 
        .is_ret_1         (ifu_is_ret_1        ),
        .is_indirect_1    (ifu_is_indirect_1   ), 
        .is_cond_branch_1 (ifu_is_cond_branch_1),
        .is_jal_2         (ifu_is_jal_2        ), 
        .is_jalr_2        (ifu_is_jalr_2       ),
        .is_call_2        (ifu_is_call_2       ), 
        .is_ret_2         (ifu_is_ret_2        ),
        .is_indirect_2    (ifu_is_indirect_2   ), 
        .is_cond_branch_2 (ifu_is_cond_branch_2),
        .bru_pc_1         (bru_pc              ), 
        .bru_dnpc_1       (bru_dnpc            ),
        .bru_dnpc_valid_1 (bru_dnpc_valid      ), 
        .bru_taken_1      (bru_taken           ),
        .bru_is_jal_1     (bru_is_jal          ), 
        .bru_is_jalr_1    (bru_is_jalr         ),
        .bru_is_call_1    (bru_is_call         ), 
        .bru_is_ret_1     (bru_is_ret          ),
        .bru_is_indirect_1(bru_is_indirect     ),
        .bru_pc_2         (32'b0               ), 
        .bru_dnpc_2       (32'b0               ), 
        .bru_dnpc_valid_2 (1'b0                ),
        .bru_taken_2      (1'b0                ), 
        .bru_is_jal_2     (1'b0                ), 
        .bru_is_jalr_2    (1'b0                ),
        .bru_is_call_2    (1'b0                ), 
        .bru_is_ret_2     (1'b0                ), 
        .bru_is_indirect_2(1'b0                )
    );

    ifu u_ifu (
        .clk             (clock               ), 
        .rst             (reset               ),
        .exu_flush_en    (exu_flush_en        ), 
        .exu_flush_dnpc  (exu_flush_dnpc      ),
        .pc_updata       (pc_updata           ), 
        .ibu_ready       (ibu_ready           ),
        .ifu_valid1      (ifu_valid1          ), 
        .ifu_valid2      (ifu_valid2          ),
        .icache_inst1    (icache_inst1        ), 
        .icache_inst2    (icache_inst2        ),
        .icache_addr     (icache_addr         ), 
        .icache_valid    (icache_valid        ),
        .bpu_dnpc        (bpu_dnpc            ), 
        .bpu_pc          (bpu_pc              ),
        .dnpc_slot1      (dnpc_slot1          ), 
        .dnpc_slot2      (dnpc_slot2          ),
        .pre_way         (pre_way             ), 
        .bpu_en_1        (bpu_en_1            ), 
        .bpu_en_2        (bpu_en_2            ),
        .is_call_1       (ifu_is_call_1       ), 
        .is_ret_1        (ifu_is_ret_1        ),
        .is_jal_1        (ifu_is_jal_1        ), 
        .is_jalr_1       (ifu_is_jalr_1       ),
        .is_indirect_1   (ifu_is_indirect_1   ), 
        .is_cond_branch_1(ifu_is_cond_branch_1),
        .is_c_inst_1     (ifu_is_c_inst_1     ),
        .is_call_2       (ifu_is_call_2       ), 
        .is_ret_2        (ifu_is_ret_2        ),
        .is_jal_2        (ifu_is_jal_2        ), 
        .is_jalr_2       (ifu_is_jalr_2       ),
        .is_indirect_2   (ifu_is_indirect_2   ), 
        .is_cond_branch_2(ifu_is_cond_branch_2),
        .is_c_inst_2     (ifu_is_c_inst_2     ),
        .if_to_ib_bus1   (if_to_ib_bus1       ), 
        .if_to_ib_bus2   (if_to_ib_bus2       )
    );

    wire idu_ready_w = !rename_full && !iq_full;
    wire ibu_valid1_w, ibu_valid2_w;
    wire [`IF_TO_ID_WD-1:0] ib_bus1_w, ib_bus2_w;

    ibuffer u_ibuffer (
        .clk           (clock        ), 
        .rst           (reset        ), 
        .exu_flush_en  (exu_flush_en),
        .idu_ready     (idu_ready_w  ),
        .ifu_valid1    (ifu_valid1   ), 
        .ifu_valid2    (ifu_valid2   ),
        .if_to_ib_bus1 (if_to_ib_bus1), 
        .if_to_ib_bus2 (if_to_ib_bus2),
        .ibuffer_ready (ibu_ready    ),
        .ibuffer_valid1(ibu_valid1_w ), 
        .ibuffer_valid2(ibu_valid2_w ),
        .ib_to_id_bus1 (ib_bus1_w    ), 
        .ib_to_id_bus2 (ib_bus2_w    )
    );

    // 只有 ibuffer 有数据且 rename 未滿且 issue 队列未满时才送入
    wire dec1_valid = ibu_valid1_w && !rename_full && !iq_full;
    wire dec2_valid = ibu_valid2_w && !rename_full && !iq_full;

    decode u_decode0 (
        .ib_to_id_bus (ib_bus1_w    ),
        .rename_gpr_we(dec_gpr_we_1 ), 
        .rename_rd    (dec_rd_1     ),
        .rename_rs1   (dec_rs1_1    ), 
        .rename_rs2   (dec_rs2_1    ),
        .mdu_type     (dec_mdu_1    ), 
        .special_type (dec_special_1),
        .quick_type   (dec_quick_1  ), 
        .ctrl_type    (dec_ctrl_1   ),
        .st_ld_type   (dec_st_ld_1  ), 
        .du_bus       (dec_du_bus_1 )
    );

    decode u_decode1 (
        .ib_to_id_bus (ib_bus2_w    ),
        .rename_gpr_we(dec_gpr_we_2 ), 
        .rename_rd    (dec_rd_2     ),
        .rename_rs1   (dec_rs1_2    ), 
        .rename_rs2   (dec_rs2_2    ),
        .mdu_type     (dec_mdu_2    ), 
        .special_type (dec_special_2),
        .quick_type   (dec_quick_2  ), 
        .ctrl_type    (dec_ctrl_2   ),
        .st_ld_type   (dec_st_ld_2  ), 
        .du_bus       (dec_du_bus_2 )
    );

    rename #(
        .ARCH_REG_NUM (32           ), 
        .PHY_REG_NUM  (64           ),
        .HIST_DEPTH   (RENAME_DEPTH ), 
        .ID_WIDTH     (ID_WIDTH     )
    ) u_rename (
        .clk     (clock       ), 
        .rst     (reset       ),
        .flush   (flush_once  ),
        .flush_id(exu_flush_id),

        .ifu_valid_1   (dec1_valid   ), 
        .rs1_1         (dec_rs1_1    ), 
        .rs2_1         (dec_rs2_1    ), 
        .rd_1          (dec_rd_1     ),
        .wen_1         (dec_gpr_we_1 ), 
        .mdu_type_1    (dec_mdu_1    ), 
        .special_type_1(dec_special_1),
        .quick_type_1  (dec_quick_1  ), 
        .ctrl_type_1   (dec_ctrl_1   ), 
        .st_ld_type_1  (dec_st_ld_1  ),

        .rename_valid_1  (rn_valid_1  ), 
        .phy_rs1_1       (rn_prs1_1   ), 
        .phy_rs2_1       (rn_prs2_1   ),
        .phy_rd_1        (rn_prd_1    ), 
        .phy_rs1_rdy_1   (rn_rs1_rdy_1), 
        .phy_rs2_rdy_1   (rn_rs2_rdy_1),
        .rename_id_1     (rn_id_1     ), 
        .mdu_type_o_1    (rn_mdu_1    ), 
        .special_type_o_1(rn_special_1),
        .quick_type_o_1  (rn_quick_1  ),
        .ctrl_type_o_1   (rn_ctrl_1   ), 
        .st_ld_type_o_1  (rn_st_ld_1  ),

        .ifu_valid_2   (dec2_valid   ), 
        .rs1_2         (dec_rs1_2    ), 
        .rs2_2         (dec_rs2_2    ), 
        .rd_2          (dec_rd_2     ),
        .wen_2         (dec_gpr_we_2 ), 
        .mdu_type_2    (dec_mdu_2    ), 
        .special_type_2(dec_special_2),
        .quick_type_2  (dec_quick_2  ), 
        .ctrl_type_2   (dec_ctrl_2   ),
        .st_ld_type_2  (dec_st_ld_2  ),

        .rename_valid_2  (rn_valid_2  ), 
        .phy_rs1_2       (rn_prs1_2   ), 
        .phy_rs2_2       (rn_prs2_2   ),
        .phy_rd_2        (rn_prd_2    ), 
        .phy_rs1_rdy_2   (rn_rs1_rdy_2), 
        .phy_rs2_rdy_2   (rn_rs2_rdy_2),
        .rename_id_2     (rn_id_2     ), 
        .mdu_type_o_2    (rn_mdu_2    ), 
        .special_type_o_2(rn_special_2),
        .quick_type_o_2  (rn_quick_2  ), 
        .ctrl_type_o_2   (rn_ctrl_2   ), 
        .st_ld_type_o_2  (rn_st_ld_2  ),

        .du_bus_1  (dec_du_bus_1), 
        .du_bus_2  (dec_du_bus_2),
        .du_bus_o_1(rn_du_bus_1 ), 
        .du_bus_o_2(rn_du_bus_2 ),

        .cdb_valid_1(cdb1_valid), 
        .cdb_id_1   (cdb1_id   ), 
        .cdb_tag_1  (cdb1_tag  ),
        .cdb_valid_2(cdb2_valid), 
        .cdb_id_2   (cdb2_id   ), 
        .cdb_tag_2  (cdb2_tag  ),

        .commit_valid_1(rob_cmt_valid_1),
        .commit_valid_2(rob_cmt_valid_2),
        .iq_full       (iq_full        ),
        .rename_full   (rename_full    ),
        .commit_rat    (commit_rat     ),
        .phy_ready_o   (phy_ready      )
    );

    assign rn_to_rob_valid_1 = rn_valid_1;
    assign rn_to_rob_id_1    = rn_id_1;
    assign rn_to_rob_valid_2 = rn_valid_2;
    assign rn_to_rob_id_2    = rn_id_2;

    issue #(
        .RS_DEPTH(16                 ), 
        .ID_WIDTH(ID_WIDTH           ), 
        .PHY_REG_WIDTH(PHY_REG_WIDTH ),
        .PHY_REG_NUM(PHY_REG_NUM     )
    ) u_issue (
        .clk           (clock        ), 
        .rst           (reset        ),

        .phy_ready     (phy_ready    ),

        .rename_valid_1(rn_valid_1   ), 
        .phy_rs1_1     (rn_prs1_1    ), 
        .phy_rs2_1     (rn_prs2_1    ),
        .phy_rd_1      (rn_prd_1     ), 
        .inst_id_1     (rn_id_1      ),
        .phy_rs1_rdy_1 (rn_rs1_rdy_1 ), 
        .phy_rs2_rdy_1 (rn_rs2_rdy_1 ),
        .quick_type_1  (rn_quick_1   ), 
        .mdu_type_1    (rn_mdu_1     ), 
        .lsu_type_1    (rn_st_ld_1   ),
        .ctrl_type_1   (rn_ctrl_1    ), 
        .special_type_1(rn_special_1 ),
        .du_to_is_bus_1(rn_du_bus_1  ),

        .rename_valid_2(rn_valid_2   ), 
        .phy_rs1_2     (rn_prs1_2    ), 
        .phy_rs2_2     (rn_prs2_2    ),
        .phy_rd_2      (rn_prd_2     ), 
        .inst_id_2     (rn_id_2      ),
        .phy_rs1_rdy_2 (rn_rs1_rdy_2 ), 
        .phy_rs2_rdy_2 (rn_rs2_rdy_2 ),
        .quick_type_2  (rn_quick_2   ), 
        .mdu_type_2    (rn_mdu_2     ), 
        .lsu_type_2    (rn_st_ld_2   ),
        .ctrl_type_2   (rn_ctrl_2    ), 
        .special_type_2(rn_special_2 ),
        .du_to_is_bus_2(rn_du_bus_2  ),

        .iq_full       (iq_full      ),
        .flush         (flush_once   ),
        .flush_id      (exu_flush_id ),

        .cdb_valid_1   (cdb1_valid   ), 
        .cdb_valid_2   (cdb2_valid   ),
        .cdb_tag_1     (cdb1_tag     ), 
        .cdb_tag_2     (cdb2_tag     ),  

        .alu1_free     (alu1_free    ), 
        .alu2_free     (alu2_free    ),
        .mdu_free      (mdu_free     ), 
        .lsu_free      (lsu_free     ),
        .bru_free      (bru_free     ), 
        .csr_free      (csr_free     ),

        .issue_valid_1 (is_valid_1   ), 
        .issue_rs1_1   (is_rs1_1     ), 
        .issue_rs2_1   (is_rs2_1     ),
        .issue_rd_1    (is_rd_1      ), 
        .issue_id_1    (is_id_1      ), 
        .is_to_eu_bus_1(is_bus_1     ),

        .issue_valid_2 (is_valid_2   ), 
        .issue_rs1_2   (is_rs1_2     ), 
        .issue_rs2_2   (is_rs2_2     ),
        .issue_rd_2    (is_rd_2      ), 
        .issue_id_2    (is_id_2      ), 
        .is_to_eu_bus_2(is_bus_2     )
    );

    phy_regfile #(
    .PHY_REG_NUM(PHY_REG_NUM), 
    .DATA_WIDTH(32)
    ) u_phy_rf (
        .clk    (clock     ),
        .raddr1 (is_rs1_1  ), 
        .rdata1 (prf_rdata1),
        .raddr2 (is_rs2_1  ), 
        .rdata2 (prf_rdata2),
        .raddr3 (is_rs1_2  ), 
        .rdata3 (prf_rdata3),
        .raddr4 (is_rs2_2  ), 
        .rdata4 (prf_rdata4),
        .we_1   (cdb1_valid), 
        .waddr_1(cdb1_tag  ), 
        .wdata_1(cdb1_data ),
        .we_2   (cdb2_valid), 
        .waddr_2(cdb2_tag  ), 
        .wdata_2(cdb2_data )
    );

    bypass #(
    .PHY_REG_WIDTH(PHY_REG_WIDTH)
    ) u_bypass (
        .rf_rdata1  (prf_rdata1), 
        .rf_rdata2  (prf_rdata2),
        .rf_rdata3  (prf_rdata3), 
        .rf_rdata4  (prf_rdata4),
        .raddr1     (is_rs1_1  ), 
        .raddr2     (is_rs2_1  ),
        .raddr3     (is_rs1_2  ), 
        .raddr4     (is_rs2_2  ),
        .cdb_valid_1(cdb1_valid), 
        .cdb_tag_1  (cdb1_tag  ), 
        .cdb_data_1 (cdb1_data ),
        .cdb_valid_2(cdb2_valid), 
        .cdb_tag_2  (cdb2_tag  ), 
        .cdb_data_2 (cdb2_data ),
        .src1_slot1 (bp_src1_s1), 
        .src2_slot1 (bp_src2_s1),
        .src1_slot2 (bp_src1_s2), 
        .src2_slot2 (bp_src2_s2)
    );

    // ─── exu_slot1 (ALU1 + BRU + PRU) ───
    /* verilator lint_off PINCONNECTEMPTY */
    exu_slot1 #(
        .ID_WIDTH(ID_WIDTH)
    ) u_slot1 (
        .clk            (clock           ), 
        .rst            (reset           ),
        .issue_valid    (is_valid_1      ),
        .src1           (bp_src1_s1      ), 
        .src2           (bp_src2_s1      ),
        .phy_rd         (is_rd_1         ), 
        .inst_id        (is_id_1         ), 
        .is_to_eu_bus   (is_bus_1        ),

        .cdb_valid      (cdb1_valid      ), 
        .cdb_tag        (cdb1_tag        ),
        .cdb_data       (cdb1_data       ), 
        .cdb_id         (cdb1_id         ),

        .commit_valid   (slot1_cmt_valid ), 
        .commit_id      (slot1_cmt_id    ),
        .eu_to_ro_bus   (slot1_ro_bus    ),

        .alu1_free      (alu1_free       ), 
        .bru_free       (bru_free        ), 
        .csr_free       (csr_free        ),

        .flush_en       (exu_flush_en    ), 
        .flush_dnpc     (exu_flush_dnpc  ),
        .flush_id       (exu_flush_id    ),

        .bru_pc         (bru_pc          ), 
        .bru_dnpc       (bru_dnpc        ),
        .bru_dnpc_valid (bru_dnpc_valid  ), 
        .bru_taken      (bru_taken       ),
        .bru_is_call    (bru_is_call     ), 
        .bru_is_ret     (bru_is_ret      ),
        .bru_is_jal     (bru_is_jal      ), 
        .bru_is_jalr    (bru_is_jalr     ),
        .bru_is_indirect(bru_is_indirect ), 
        .bru_is_c_inst  (bru_is_c_inst   ),

        .is_fencei      (is_fencei_slot1 ), 
        .pc_update      (pc_updata       ),
        .fence_done     (fence_done      ),

        .csr_raddr      (csr_raddr       ), 
        .csr_rdata      (csr_rdata       ),
        .csr_waddr      (), 
        .csr_wdata      (), 
        .csr_gpr_we     (),
        .ecall_en       (ecall_en        ), 
        .mret_en        (mret_en         )
    );
    /* verilator lint_on PINCONNECTEMPTY */

    // ─── exu_slot2 (ALU2 + MDU + LSU) ───
    exu_slot2 #(
        .ID_WIDTH(ID_WIDTH)
    ) u_slot2 (
        .clk                  (clock                ),
        .rst                  (reset                ),
        .flush                (flush_once           ),
        .flush_id             (exu_flush_id         ),
        .issue_valid          (is_valid_2           ),
        .src1                 (bp_src1_s2           ), 
        .src2                 (bp_src2_s2           ),
        .phy_rd               (is_rd_2              ), 
        .inst_id              (is_id_2              ), 
        .is_to_eu_bus         (is_bus_2             ),

        .cdb_valid            (cdb2_valid           ), 
        .cdb_tag              (cdb2_tag             ),
        .cdb_data             (cdb2_data            ), 
        .cdb_id               (cdb2_id              ),

        .commit_valid         (slot2_cmt_valid      ), 
        .commit_id            (slot2_cmt_id         ),
        .eu_to_ro_bus         (slot2_ro_bus         ),

        .alu2_free            (alu2_free            ), 
        .mdu_free             (mdu_free             ), 
        .lsu_free             (lsu_free             ),

        .lsu_en               (lsu_en               ), 
        .ex_to_ls_bus         (ex_to_ls_bus         ),
        .lsu_data             (lsu_data             ), 
        .lsu_stb_id           (lsu_stb_id           ),
        .lsu_ready            (lsu_ready_slot2      ),
        .stb_forward_full_hit (stb_forward_full_hit ),
        .stb_drain_valid      (stb_drain_valid      ),

        .lsu_inst_id          (lsu_inst_id          ),  

        .is_fencei            (is_fencei_slot2      ),
        .fence_done           (fence_done           )
    );

    /* verilator lint_off PINCONNECTEMPTY */
    lsu #(
        .ID_WIDTH(ID_WIDTH)
    ) u_lsu (
        .clk                  (clock                ), 
        .rst                  (reset                ),
        .lsu_en               (lsu_en               ), 
        .lsu_ready            (lsu_ready_slot2      ), 
        .lsu_valid            (lsu_valid            ),
        .ex_to_ls_bus         (ex_to_ls_bus         ), 
        .lsu_data             (lsu_data             ),
        .dcache_addr          (dcache_addr          ), 
        .dcache_valid         (dcache_valid         ),
        .dcache_we            (dcache_we            ), 
        .dcache_wdata         (dcache_wdata         ),
        .dcache_wstrb         (dcache_wstrb         ), 
        .dcache_rdata         (dcache_rdata         ),
        .dcache_ready         (dcache_ready         ),
        .stb_forward_addr     (stb_forward_addr     ), 
        .stb_forward_inst_id  (lsu_inst_id          ),
        .stb_forward_data     (stb_forward_data     ),
        .stb_forward_mask     (stb_forward_mask     ),
        .stb_forward_full_hit (stb_forward_full_hit ),
        .stb_alloc_valid      (stb_alloc_valid      ), 
        .stb_alloc_addr       (stb_alloc_addr       ),
        .stb_alloc_data       (stb_alloc_data       ), 
        .stb_alloc_wstrb      (stb_alloc_wstrb      ),
        .stb_ready            (stb_ready            ), 
        .stb_alloc_id         (stb_alloc_id         ),
        .lsu_stb_id           (lsu_stb_id           ),
        .stb_drain_valid      (stb_drain_valid      ), 
        .stb_drain_addr       (stb_drain_addr       ),
        .stb_drain_data       (stb_drain_data       ), 
        .stb_drain_wstrb      (stb_drain_wstrb      ),
        .stb_drain_ready      (stb_drain_ready      )
    );
    /* verilator lint_on PINCONNECTEMPTY */

    store_buffer #(
        .ID_WIDTH(ID_WIDTH)
    ) stb (
        .clk             (clock           ),
        .rst             (reset           ),
        .flush_en        (flush_once      ),  // 由 flush_once 脉冲驱动, flush_id 变化时重新扫描
        .flush_id        (exu_flush_id    ),  // 精确冲刷: 只清除 error-path 上的条目
        .lsu_valid       (stb_alloc_valid ),
        .lsu_addr        (stb_alloc_addr  ),
        .lsu_data        (stb_alloc_data  ),
        .lsu_wstrb       (stb_alloc_wstrb ),
        .alloc_inst_id   (lsu_inst_id     ),  // 分配时记录指令 ID
        .stb_ready       (stb_ready       ),
        .stb_alloc_id    (stb_alloc_id    ),
        .cmt_valid_1     (stb_cmt1        ),
        .cmt_is_store_1  (stb_cmt1        ),
        .cmt_stb_id_1    (cmt_stb_id_1    ),
        .stb_cmt_addr_1  (stb_cmt_addr_1  ),
        .cmt_valid_2     (stb_cmt2        ),
        .cmt_is_store_2  (stb_cmt2        ),
        .cmt_stb_id_2    (cmt_stb_id_2    ),
        .stb_cmt_addr_2  (stb_cmt_addr_2  ),
        .stb_forward_addr(stb_forward_addr),
        .stb_forward_inst_id(lsu_inst_id  ),
        .stb_forward_data(stb_forward_data),
        .stb_forward_mask(stb_forward_mask),
        .stb_drain_valid (stb_drain_valid ),
        .stb_drain_addr  (stb_drain_addr  ),
        .stb_drain_data  (stb_drain_data  ),
        .stb_drain_wstrb (stb_drain_wstrb ),
        .stb_drain_ready (stb_drain_ready )
    );

    // STB commit: 从 ROB 提交通路提取 store 信息
    // rob_wb_bus 格式 (154 bits):
    //   {pc, inst, ecall, mret, csr_we, csr_waddr, csr_wdata, rd, gpr_we, result,
    //    is_write [bit 4], lsu_stb_id [bits 3:0]}
    wire stb_cmt1 = rob_cmt_valid_1 && rob_wb_bus_1[4];
    wire stb_cmt2 = rob_cmt_valid_2 && rob_wb_bus_2[4];
    wire [`STB_DEPTH_LOG2-1:0] cmt_stb_id_1 = rob_wb_bus_1[3:0];
    wire [`STB_DEPTH_LOG2-1:0] cmt_stb_id_2 = rob_wb_bus_2[3:0];
    wire [31:0] stb_cmt_addr_1 /* verilator public */;
    wire [31:0] stb_cmt_addr_2 /* verilator public */;

    rob #(
        .ARCH_REG_NUM(32           ), 
        .PHY_REG_NUM (64           ),
        .ROB_DEPTH   (RENAME_DEPTH ), 
        .ID_WIDTH    (ID_WIDTH     )
    ) u_rob (
        .clk           (clock            ), 
        .rst           (reset            ),
        .flush         (flush_once       ),

        .flush_id      (exu_flush_id     ),

        .rename_valid_1(rn_to_rob_valid_1), 
        .rename_id_1   (rn_to_rob_id_1   ),
        .rename_valid_2(rn_to_rob_valid_2), 
        .rename_id_2   (rn_to_rob_id_2   ),

        .commit_valid_1(slot1_cmt_valid  ), 
        .commit_valid_2(slot2_cmt_valid  ),
        .commit_id_1   (slot1_cmt_id     ), 
        .commit_id_2   (slot2_cmt_id     ),
        .eu_to_ro_bus_1(slot1_ro_bus     ), 
        .eu_to_ro_bus_2(slot2_ro_bus     ),

        .rob_cmt_valid_1(rob_cmt_valid_1 ), 
        .rob_cmt_id_1   (rob_cmt_id_1    ),
        .ro_to_wu_bus_1 (rob_wb_bus_1    ),
        .rob_cmt_valid_2(rob_cmt_valid_2 ), 
        .rob_cmt_id_2   (rob_cmt_id_2    ),
        .ro_to_wu_bus_2 (rob_wb_bus_2    ),

        .rob_full       (rob_full        )
    );

    wbu wbu (
        .clk            (clock           ),
        .rst            (reset           ),
        .wbu_valid      (wbu_valid       ),
        .wbu_pc         (wbu_pc          ),
        .wbu_inst       (wbu_inst        ),
        .wbu_inst_2     (wbu_inst_2      ),
        .wbu_addr       (wbu_addr        ),
        .wbu_addr_2     (wbu_addr_2      ),
        .wbu_dual_cmt   (wbu_dual_cmt    ),
        .csr_raddr      (csr_raddr       ), 
        .ecall_en       (ecall_en        ), 
        .mret_en        (mret_en         ),
        .csr_rdata      (csr_rdata       ),
        .rob_cmt_valid_1(rob_cmt_valid_1 ), 
        .ro_to_wu_bus_1 (rob_wb_bus_1    ),
        .rob_cmt_valid_2(rob_cmt_valid_2 ), 
        .ro_to_wu_bus_2 (rob_wb_bus_2    )
    );

    icache u_icache (
        .clk         (clock           ), 
        .rst         (reset           ), 
        .is_fencei   (is_fencei_g     ),
        .addr        (icache_addr     ), 
        .inst1       (icache_inst1    ), 
        .inst2       (icache_inst2    ),
        .valid       (icache_valid    ),
        .axi_araddr  (icache_araddr   ), 
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

    dcache u_dcache (
        .clk        (clock             ), 
        .rst        (reset             ),
        .awready    (dcache_awready    ), 
        .awvalid    (dcache_awvalid    ),
        .awaddr     (dcache_awaddr     ), 
        .awid       (dcache_awid       ),
        .awlen      (dcache_awlen      ), 
        .awsize     (dcache_awsize     ), 
        .awburst    (dcache_awburst    ),
        .wready     (dcache_wready     ), 
        .wvalid     (dcache_wvalid_ext ),
        .wdata      (dcache_wdata_ext  ), 
        .wstrb      (dcache_wstrb_ext  ), 
        .wlast      (dcache_wlast      ),
        .bready     (dcache_bready     ), 
        .bvalid     (dcache_bvalid     ),
        .bresp      (dcache_bresp      ), 
        .bid        (dcache_bid        ),
        .arready    (dcache_arready    ), 
        .arvalid    (dcache_arvalid    ),
        .araddr     (dcache_araddr     ), 
        .arid       (dcache_arid       ),
        .arlen      (dcache_arlen      ), 
        .arsize     (dcache_arsize     ), 
        .arburst    (dcache_arburst    ),
        .rready     (dcache_rready     ), 
        .rvalid     (dcache_rvalid     ),
        .rresp      (dcache_rresp      ), 
        .rdata      (dcache_rdata_ext  ),
        .rlast      (dcache_rlast      ), 
        .rid        (dcache_rid        ),
        .fence_en   (is_fencei_g       ), 
        .fence_done (fence_done        ),
        .lsu_addr   (dcache_addr       ), 
        .lsu_valid  (dcache_valid      ), 
        .lsu_we     (dcache_we         ),
        .lsu_wdata  (dcache_wdata      ), 
        .lsu_wstrb  (dcache_wstrb      ),
        .lsu_rdata  (dcache_rdata      ), 
        .lsu_ready  (dcache_ready      )
    ); 

    clint u_clint (
        .clk    (clock        ), 
        .rst    (reset        ),
        .arready(clint_arready), 
        .arvalid(clint_arvalid),
        .araddr (clint_araddr ), 
        .rready (clint_rready ),
        .rvalid (clint_rvalid ), 
        .rlast  (clint_rlast  ),
        .rresp  (clint_rresp  ), 
        .rdata  (clint_rdata  )
    );

    axi_bridge u_axi_bridge (
        .clk(clock), 
        .rst(reset), 
        .fence_done(fence_done),
        .ifu_arready(icache_arready), 
        .ifu_arvalid(icache_arvalid),
        .ifu_araddr(icache_araddr), 
        .ifu_arid(icache_arid),
        .ifu_arlen(icache_arlen), 
        .ifu_arsize(icache_arsize),
        .ifu_arburst(icache_arburst),
        .ifu_rready(icache_rready), 
        .ifu_rvalid(icache_rvalid),
        .ifu_rresp(icache_rresp), 
        .ifu_rdata(icache_rdata),
        .ifu_rlast(icache_rlast), 
        .ifu_rid(icache_rid),
        .lsu_awready(dcache_awready), 
        .lsu_awvalid(dcache_awvalid),
        .lsu_awaddr(dcache_awaddr), 
        .lsu_awid(dcache_awid),
        .lsu_awlen(dcache_awlen), 
        .lsu_awsize(dcache_awsize),
        .lsu_awburst(dcache_awburst),
        .lsu_wready(dcache_wready), 
        .lsu_wvalid(dcache_wvalid_ext),
        .lsu_wdata(dcache_wdata_ext), 
        .lsu_wstrb(dcache_wstrb_ext),
        .lsu_wlast(dcache_wlast),
        .lsu_bready(dcache_bready), 
        .lsu_bvalid(dcache_bvalid),
        .lsu_bresp(dcache_bresp), 
        .lsu_bid(dcache_bid),
        .lsu_arready(dcache_arready), 
        .lsu_arvalid(dcache_arvalid),
        .lsu_araddr(dcache_araddr), 
        .lsu_arid(dcache_arid),
        .lsu_arlen(dcache_arlen), 
        .lsu_arsize(dcache_arsize),
        .lsu_arburst(dcache_arburst),
        .lsu_rready(dcache_rready), 
        .lsu_rvalid(dcache_rvalid),
        .lsu_rresp(dcache_rresp), 
        .lsu_rdata(dcache_rdata_ext),
        .lsu_rlast(dcache_rlast), 
        .lsu_rid(dcache_rid),
        .io_master_awready(io_master_awready), 
        .io_master_awvalid(io_master_awvalid),
        .io_master_awaddr(io_master_awaddr), 
        .io_master_awid(io_master_awid),
        .io_master_awlen(io_master_awlen), 
        .io_master_awsize(io_master_awsize),
        .io_master_awburst(io_master_awburst),
        .io_master_wready(io_master_wready), 
        .io_master_wvalid(io_master_wvalid),
        .io_master_wdata(io_master_wdata), 
        .io_master_wstrb(io_master_wstrb),
        .io_master_wlast(io_master_wlast),
        .io_master_bready(io_master_bready), 
        .io_master_bvalid(io_master_bvalid),
        .io_master_bresp(io_master_bresp), 
        .io_master_bid(io_master_bid),
        .io_master_arready(io_master_arready), 
        .io_master_arvalid(io_master_arvalid),
        .io_master_araddr(io_master_araddr), 
        .io_master_arid(io_master_arid),
        .io_master_arlen(io_master_arlen), 
        .io_master_arsize(io_master_arsize),
        .io_master_arburst(io_master_arburst),
        .io_master_rready(io_master_rready), 
        .io_master_rvalid(io_master_rvalid),
        .io_master_rresp(io_master_rresp), 
        .io_master_rdata(io_master_rdata),
        .io_master_rlast(io_master_rlast), 
        .io_master_rid(io_master_rid),
        .clint_arready(clint_arready), 
        .clint_arvalid(clint_arvalid),
        .clint_araddr(clint_araddr), 
        .clint_rready(clint_rready),
        .clint_rvalid(clint_rvalid), 
        .clint_rresp(clint_rresp),
        .clint_rdata(clint_rdata), 
        .clint_rlast(clint_rlast)
    );

    // AXI D-Cache 未用接口
    wire [31:0] icache_araddr, icache_rdata;
    wire        icache_arvalid, icache_arready;
    wire [ 3:0] icache_arid;
    wire [ 7:0] icache_arlen;
    wire [ 2:0] icache_arsize;
    wire [ 1:0] icache_arburst;
    wire        icache_rready, icache_rvalid;
    wire [ 1:0] icache_rresp;
    wire [ 3:0] icache_rid;
    wire        icache_rlast;

    wire        dcache_awready, dcache_awvalid;
    wire [31:0] dcache_awaddr;
    wire [ 3:0] dcache_awid;
    wire [ 7:0] dcache_awlen;
    wire [ 2:0] dcache_awsize;
    wire [ 1:0] dcache_awburst;
    wire        dcache_wready, dcache_wvalid_ext;
    wire [31:0] dcache_wdata_ext;
    wire [ 3:0] dcache_wstrb_ext;
    wire        dcache_wlast;
    wire        dcache_bready, dcache_bvalid;
    wire [ 1:0] dcache_bresp;
    wire [ 3:0] dcache_bid;
    wire        dcache_arready, dcache_arvalid;
    wire [31:0] dcache_araddr;
    wire [ 3:0] dcache_arid;
    wire [ 7:0] dcache_arlen;
    wire [ 2:0] dcache_arsize;
    wire [ 1:0] dcache_arburst;
    wire        dcache_rready, dcache_rvalid;
    wire [31:0] dcache_rdata_ext;
    wire [ 1:0] dcache_rresp;
    wire        dcache_rlast;
    wire [ 3:0] dcache_rid;

    wire        clint_arready, clint_arvalid;
    wire [31:0] clint_araddr;
    wire        clint_rready, clint_rvalid;
    wire [ 1:0] clint_rresp;
    wire [31:0] clint_rdata;
    wire        clint_rlast;


endmodule
