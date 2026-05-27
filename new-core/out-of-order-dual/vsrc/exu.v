`include "defines.vh"

// Execution Unit (EXU)
// 执行单元，负责接收发射队列的指令，分配到相应的执行单元（ALU, MDU, LSU, BRU）
// 支持双发射，处理分支预测错误和冲刷，生成提交信号和 CDB 唤醒

module exu #(
    parameter ID_WIDTH      = 5,
    parameter PHY_REG_WIDTH = 6
)(
    input  wire                        clk              ,
    input  wire                        rst              ,

    input  wire                        pc_update        ,
    input  wire [                31:0] pre_dnpc         ,

    input  wire                        issue_valid_1    ,
    input  wire [        ID_WIDTH-1:0] issue_id_1       ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rs1_1      ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rs2_1      ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rd_1       ,
    input  wire [    `IS_TO_EU_WD-1:0] is_to_eu_bus_1   ,
    input  wire [                31:0] rs1_data_1       ,
    input  wire [                31:0] rs2_data_1       ,

    input  wire                        issue_valid_2    ,
    input  wire [        ID_WIDTH-1:0] issue_id_2       ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rs1_2      ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rs2_2      ,
    input  wire [   PHY_REG_WIDTH-1:0] issue_rd_2       ,
    input  wire [    `IS_TO_EU_WD-1:0] is_to_eu_bus_2   ,
    input  wire [                31:0] rs1_data_2       ,
    input  wire [                31:0] rs2_data_2       , 
 
    output wire                        mdu_free         ,
    output wire                        lsu_free         ,
    output wire                        ctrl_done        ,

    output reg                         flush            ,
    output reg  [    ID_WIDTH-1:0]     flush_id         ,
    output wire                        exu_wash_dnpc_en ,
    output wire [                31:0] exu_wash_dnpc    ,
    output reg  [                31:0] exu_pc           ,
    output reg  [                31:0] exu_dnpc         ,
    output reg                         exu_dnpc_valid   ,
    output reg                         exu_taken        ,

    output wire                        cdb_valid_1      ,
    output wire [   PHY_REG_WIDTH-1:0] cdb_tag_1        ,
    output wire                        cdb_valid_2      ,
    output wire [   PHY_REG_WIDTH-1:0] cdb_tag_2        ,

    output reg                         commit_valid_1   ,
    output reg                         commit_valid_2   ,
    output reg  [        ID_WIDTH-1:0] commit_id_1      ,
    output reg  [        ID_WIDTH-1:0] commit_id_2      ,
    output reg  [`EU_TO_RO_BUS_WD-1:0] eu_to_ro_bus_1   ,
    output reg  [`EU_TO_RO_BUS_WD-1:0] eu_to_ro_bus_2   ,

    output wire [                31:0] dcache_addr      ,
    output wire                        dcache_valid     ,
    output wire                        dcache_we        ,
    output wire [                31:0] dcache_wdata     ,
    output wire [                 3:0] dcache_wstrb     ,
    input  wire [                31:0] dcache_rdata     ,
    input  wire                        dcache_ready
);

// unpack issue buses
wire [31:0] pc_1          ;
wire [ 1:0] lw_lh_lb_1    ;
wire [ 1:0] sw_sh_sb_1    ;
wire        is_load_sign_1;
wire        inst_fence_i_1;
wire [31:0] imm_1         ;
wire [ 4:0] rd_arch_1     ;
wire [ 4:0] rs1_arch_1    ;
wire [ 4:0] rs2_arch_1    ;
wire        is_write_1    ;
wire        is_read_1     ;
wire        gpr_we_1      ;
wire [10:0] alu_op_1      ;
wire [ 5:0] bru_op_1      ;
wire        mdu_en_1      ;
wire [ 7:0] mdu_op_1      ;
wire        src1_is_pc_1  ;
wire        src2_is_imm_1 ;
wire [ 1:0] jal_or_jarl_1 ;
wire        inst_ecall_1  ;
wire        inst_mret_1   ;
wire        inst_csrrs_1  ;
wire        inst_csrrw_1  ;
wire        inst_ebreak_1 ;

wire [31:0] pc_2          ;
wire [ 1:0] lw_lh_lb_2    ;
wire [ 1:0] sw_sh_sb_2    ;
wire        is_load_sign_2;
wire        inst_fence_i_2;
wire [31:0] imm_2         ;
wire [ 4:0] rd_arch_2     ;
wire [ 4:0] rs1_arch_2    ;
wire [ 4:0] rs2_arch_2    ;
wire        is_write_2    ;
wire        is_read_2     ;
wire        gpr_we_2      ;
wire [10:0] alu_op_2      ; 
wire [ 5:0] bru_op_2      ;
wire        mdu_en_2      ;
wire [ 7:0] mdu_op_2      ;
wire        src1_is_pc_2  ;
wire        src2_is_imm_2 ;
wire [ 1:0] jal_or_jarl_2 ;
wire        inst_ecall_2  ;
wire        inst_mret_2   ;
wire        inst_csrrs_2  ;
wire        inst_csrrw_2  ;
wire        inst_ebreak_2 ;

assign {
    pc_1          ,
    lw_lh_lb_1    ,
    sw_sh_sb_1    ,
    is_load_sign_1,
    inst_fence_i_1,
    imm_1         ,
    rd_arch_1     ,
    rs1_arch_1    ,
    rs2_arch_1    ,
    is_write_1    ,
    is_read_1     ,
    gpr_we_1      ,
    alu_op_1      ,
    bru_op_1      ,
    mdu_en_1      ,
    mdu_op_1      ,
    src1_is_pc_1  ,
    src2_is_imm_1 ,
    jal_or_jarl_1 ,
    inst_ecall_1  ,
    inst_mret_1   ,
    inst_csrrs_1  ,
    inst_csrrw_1  ,
    inst_ebreak_1
} = is_to_eu_bus_1;

assign {
    pc_2          ,
    lw_lh_lb_2    ,
    sw_sh_sb_2    ,
    is_load_sign_2,
    inst_fence_i_2,
    imm_2         , 
    rd_arch_2     ,
    rs1_arch_2    ,
    rs2_arch_2    ,
    is_write_2    ,
    is_read_2     ,
    gpr_we_2      ,
    alu_op_2      ,
    bru_op_2      ,
    mdu_en_2      ,
    mdu_op_2      ,
    src1_is_pc_2  ,
    src2_is_imm_2 ,
    jal_or_jarl_2 ,
    inst_ecall_2  ,
    inst_mret_2   ,
    inst_csrrs_2  ,
    inst_csrrw_2  ,
    inst_ebreak_2
} = is_to_eu_bus_2;

wire        is_ctrl_1 = inst_fence_i_1 | (|bru_op_1) | (|jal_or_jarl_1);
wire        is_ctrl_2 = inst_fence_i_2 | (|bru_op_2) | (|jal_or_jarl_2);
wire        is_lsu_1  = issue_valid_1 && (is_read_1 || is_write_1);
wire        is_lsu_2  = issue_valid_2 && (is_read_2 || is_write_2);
wire        is_mdu_1  = issue_valid_1 && mdu_en_1;
wire        is_mdu_2  = issue_valid_2 && mdu_en_2;
wire        is_alu_1  = issue_valid_1 && ~is_lsu_1 && ~is_mdu_1 && ~is_ctrl_1;
wire        is_alu_2  = issue_valid_2 && ~is_lsu_2 && ~is_mdu_2 && ~is_ctrl_2;

wire [31:0] alu_src1_1 = src1_is_pc_1 ? pc_1 : rs1_data_1;
wire [31:0] alu_src2_1 = src2_is_imm_1 ? imm_1 : rs2_data_1;
wire [31:0] alu_src1_2 = src1_is_pc_2 ? pc_2 : rs1_data_2;
wire [31:0] alu_src2_2 = src2_is_imm_2 ? imm_2 : rs2_data_2;

wire [2:0] lw_lh_lb_1_oh = {lw_lh_lb_1 == 2'b10, lw_lh_lb_1 == 2'b01, lw_lh_lb_1 == 2'b00};
wire [2:0] lw_lh_lb_2_oh = {lw_lh_lb_2 == 2'b10, lw_lh_lb_2 == 2'b01, lw_lh_lb_2 == 2'b00};
wire [2:0] sw_sh_sb_1_oh = {sw_sh_sb_1 == 2'b10, sw_sh_sb_1 == 2'b01, sw_sh_sb_1 == 2'b00};
wire [2:0] sw_sh_sb_2_oh = {sw_sh_sb_2 == 2'b10, sw_sh_sb_2 == 2'b01, sw_sh_sb_2 == 2'b00};

wire [        31:0] alu_result_1;
wire                alu_done_1;
wire [         5:0] alu_phy_rd_1;
wire [ID_WIDTH-1:0] alu_inst_id_1;
wire [        31:0] alu_pc_1;
wire                alu_gpr_we_1;

wire [        31:0] alu_result_2;
wire                alu_done_2;
wire [         5:0] alu_phy_rd_2;
wire [ID_WIDTH-1:0] alu_inst_id_2;
wire [        31:0] alu_pc_2;
wire                alu_gpr_we_2;

// Instantiate two ALU units for dual-issue
alu #(.ID_WIDTH(ID_WIDTH)) alu_1 (
    .clk        (clk),
    .rst        (rst),
    .issue_valid(is_alu_1),
    .pc         (pc_1),
    .inst_id    (issue_id_1),
    .phy_rd     (issue_rd_1),
    .gpr_we     (gpr_we_1),
    .alu_op     (alu_op_1),
    .alu_src1   (alu_src1_1),
    .alu_src2   (alu_src2_1),
    .alu_done   (alu_done_1),
    .alu_result (alu_result_1),
    .alu_phy_rd (alu_phy_rd_1),
    .alu_inst_id(alu_inst_id_1),
    .alu_pc     (alu_pc_1),
    .alu_gpr_we (alu_gpr_we_1)
);

alu #(.ID_WIDTH(ID_WIDTH)) alu_2 (
    .clk        (clk),
    .rst        (rst),
    .issue_valid(is_alu_2),
    .pc         (pc_2),
    .inst_id    (iissue_id_2),
    .phy_rd     (issue_rd_2),
    .gpr_we     (gpr_we_2),
    .alu_op     (alu_op_2),
    .alu_src1   (alu_src1_2),
    .alu_src2   (alu_src2_2),
    .alu_done   (alu_done_2),
    .alu_result (alu_result_2),
    .alu_phy_rd (alu_phy_rd_2),
    .alu_inst_id(alu_inst_id_2),
    .alu_pc     (alu_pc_2),
    .alu_gpr_we (alu_gpr_we_2)
);

wire                     mdu_issue_valid;
wire [             31:0] mdu_src1;
wire [             31:0] mdu_src2;
wire [             31:0] mdu_pc;
wire [             31:0] mdu_imm;
wire [     ID_WIDTH-1:0] mdu_inst_id;
wire [PHY_REG_WIDTH-1:0] mdu_phy_rd;
wire                     mdu_gpr_we;
wire                     mdu_gpr_we_input;
wire [              7:0] mdu_op;

assign mdu_issue_valid = is_mdu_1 ? issue_valid_1 : (is_mdu_2 ? issue_valid_2 : 1'b0);
assign mdu_src1        = is_mdu_1 ? rs1_data_1 : rs1_data_2;
assign mdu_src2        = is_mdu_1 ? rs2_data_1 : rs2_data_2;
assign mdu_pc          = is_mdu_1 ? pc_1      : pc_2;
assign mdu_imm         = is_mdu_1 ? imm_1     : imm_2;
assign mdu_inst_id     = is_mdu_1 ? issue_id_1 : iissue_id_2;
assign mdu_phy_rd      = is_mdu_1 ? issue_rd_1 : issue_rd_2;
assign mdu_gpr_we_input= is_mdu_1 ? gpr_we_1   : gpr_we_2;
assign mdu_op          = is_mdu_1 ? mdu_op_1   : mdu_op_2;

wire                     lsu_issue_valid;
wire [             31:0] lsu_src1;
wire [             31:0] lsu_src2;
wire [             31:0] lsu_pc;
wire [             31:0] lsu_imm;
wire [     ID_WIDTH-1:0] lsu_inst_id;
wire [PHY_REG_WIDTH-1:0] lsu_phy_rd;
wire                     lsu_gpr_we_input;
wire                     lsu_is_write;
wire                     lsu_is_read;
wire [             2:0]  lsu_lw_lh_lb;
wire [             2:0]  lsu_sw_sh_sb;
wire                     lsu_load_sign;

assign lsu_issue_valid = is_lsu_1 ? issue_valid_1 : (is_lsu_2 ? issue_valid_2 : 1'b0);
assign lsu_src1        = is_lsu_1 ? rs1_data_1 : rs1_data_2;
assign lsu_src2        = is_lsu_1 ? rs2_data_1 : rs2_data_2;
assign lsu_pc          = is_lsu_1 ? pc_1      : pc_2;
assign lsu_imm         = is_lsu_1 ? imm_1     : imm_2;
assign lsu_inst_id     = is_lsu_1 ? issue_id_1 : iissue_id_2;
assign lsu_phy_rd      = is_lsu_1 ? issue_rd_1 : issue_rd_2;
assign lsu_gpr_we_input= is_lsu_1 ? gpr_we_1   : gpr_we_2;
assign lsu_is_write    = is_lsu_1 ? is_write_1 : is_write_2;
assign lsu_is_read     = is_lsu_1 ? is_read_1  : is_read_2;
assign lsu_lw_lh_lb    = is_lsu_1 ? lw_lh_lb_1_oh : lw_lh_lb_2_oh;
assign lsu_sw_sh_sb    = is_lsu_1 ? sw_sh_sb_1_oh : sw_sh_sb_2_oh;
assign lsu_load_sign   = is_lsu_1 ? is_load_sign_1 : is_load_sign_2;

wire                bru_issue_valid;
wire [        31:0] bru_src1;
wire [        31:0] bru_src2;
wire [        31:0] bru_pc;
wire [        31:0] bru_imm;
wire [ID_WIDTH-1:0] bru_inst_id;
wire [         5:0] bru_op;
wire [         1:0] bru_jal_or_jarl;
wire                bru_inst_jarl;

assign bru_issue_valid   = is_ctrl_1 ? issue_valid_1 : (is_ctrl_2 ? issue_valid_2 : 1'b0);
assign bru_src1          = is_ctrl_1 ? rs1_data_1 : rs1_data_2;
assign bru_src2          = is_ctrl_1 ? rs2_data_1 : rs2_data_2;
assign bru_pc            = is_ctrl_1 ? pc_1      : pc_2;
assign bru_imm           = is_ctrl_1 ? imm_1     : imm_2;
assign bru_inst_id       = is_ctrl_1 ? issue_id_1 : iissue_id_2;
assign bru_op            = is_ctrl_1 ? bru_op_1   : bru_op_2;
assign bru_jal_or_jarl   = is_ctrl_1 ? jal_or_jarl_1 : jal_or_jarl_2;
assign bru_inst_jarl     = bru_jal_or_jarl[0];

wire                mdu_done;
wire [        31:0] mdu_result;
wire [         5:0] mdu_phy_rd_out;
wire [        31:0] mdu_pc_out;
wire [ID_WIDTH-1:0] mdu_inst_id_out;
wire                mdu_gpr_we_out;
wire                mdu_commit;

// Instantiate MDU (Multiply-Divide Unit)
mdu #(.ID_WIDTH(ID_WIDTH)) mdu_u (
    .clk        (clk),
    .rst        (rst),
    .issue_valid(mdu_issue_valid),
    .mdu_free   (mdu_free),
    .mdu_en     (is_mdu_1 ? mdu_en_1 : mdu_en_2),
    .mdu_op     (mdu_op),
    .mdu_src1   (mdu_src1),
    .mdu_src2   (mdu_src2),
    .phy_rd     (mdu_phy_rd),
    .inst_id    (mdu_inst_id),
    .pc         (mdu_pc),
    .gpr_we     (mdu_gpr_we_input),
    .flush      (flush),
    .flush_id   (flush_id),
    .mdu_cmt    (mdu_commit),
    .mdu_done   (mdu_done),
    .mdu_result (mdu_result),
    .mdu_phy_rd (mdu_phy_rd_out),
    .mdu_inst_id(mdu_inst_id_out),
    .mdu_pc     (mdu_pc_out),
    .mdu_gpr_we (mdu_gpr_we_out)
);

wire                lsu_done;
wire [        31:0] lsu_ld_data;
wire [        31:0] lsu_pc_out;
wire [         5:0] lsu_phy_rd_out;
wire [ID_WIDTH-1:0] lsu_inst_id_out;
wire                lsu_gpr_we_out;
wire                lsu_commit;

// Instantiate LSU (Load-Store Unit)
lsu #(.ID_WIDTH(ID_WIDTH)) lsu_u (
    .clk         (clk),
    .rst         (rst),
    .issue_valid (lsu_issue_valid),
    .lsu_free    (lsu_free),
    .pc          (lsu_pc),
    .imm         (lsu_imm),
    .rs1_data    (lsu_src1),
    .rs2_data    (lsu_src2),
    .gpr_we      (lsu_gpr_we_input),
    .inst_id     (lsu_inst_id),
    .phy_rd      (lsu_phy_rd),
    .bit_sext    (lsu_load_sign),
    .half_sext   (lsu_lw_lh_lb == 3'b010),
    .is_write    (lsu_is_write),
    .is_read     (lsu_is_read),
    .lw_lh_lb    (lsu_lw_lh_lb),
    .sw_sh_sb    (lsu_sw_sh_sb),
    .lsu_cmt     (lsu_commit),
    .lsu_done    (lsu_done),
    .lsu_ld_data (lsu_ld_data),
    .lsu_pc      (lsu_pc_out),
    .lsu_phy_rd  (lsu_phy_rd_out),
    .lsu_inst_id (lsu_inst_id_out),
    .lsu_gpr_we  (lsu_gpr_we_out),
    .dcache_addr (dcache_addr),
    .dcache_valid(dcache_valid),
    .dcache_we   (dcache_we),
    .dcache_wdata(dcache_wdata),
    .dcache_wstrb(dcache_wstrb),
    .dcache_rdata(dcache_rdata),
    .dcache_ready(dcache_ready)
);

wire                bru_flush_wire;
wire [        31:0] bru_pc_wire;
wire [        31:0] bru_dnpc_wire;
wire                bru_dnpc_valid_wire;
wire                bru_taken_wire;
wire [ID_WIDTH-1:0] bru_flush_id_wire;

// Instantiate BRU (Branch Resolution Unit)
bru #(.ID_WIDTH(ID_WIDTH)) bru_u (
    .clk            (clk),
    .rst            (rst),
    .issue_valid    (bru_issue_valid),
    .bru_op         (bru_op),
    .rs1_data       (bru_src1),
    .rs2_data       (bru_src2),
    .imm            (bru_imm),
    .pc             (bru_pc),
    .inst_id        (bru_inst_id),
    .pre_dnpc       (pre_dnpc),
    .jal_or_jarl    (|bru_jal_or_jarl),
    .inst_jarl      (bru_inst_jarl),
    .pc_update      (pc_update),
    .bru_wash_en    (bru_issue_valid),
    .bru_wash_id    (bru_inst_id),
    .mdu_cmt        (mdu_commit),
    .lsu_ld_cmt     (lsu_ld_cmt),
    .lsu_st_cmt     (lsu_st_cmt),
    .flush          (bru_flush_wire),
    .flush_id       (bru_flush_id_wire),
    .exu_wash_dnpc_en(exu_wash_dnpc_en),
    .exu_wash_dnpc  (exu_wash_dnpc),
    .bru_pc         (bru_pc_wire),
    .bru_dnpc       (bru_dnpc_wire),
    .bru_dnpc_valid (bru_dnpc_valid_wire),
    .bru_taken      (bru_taken_wire)
);

assign ctrl_done = bru_dnpc_valid_wire;

function automatic [`EU_TO_RO_BUS_WD-1:0] pack_ro_bus;
    input [31:0] result;
    input [31:0] pc;
    input [ 5:0] phy_rd;
    input        gpr_we;
    input        is_read;
    input        is_write;
    begin
        pack_ro_bus = {7'b0, is_write, is_read, gpr_we, phy_rd, pc, result};
    end
endfunction

wire [`EU_TO_RO_BUS_WD-1:0] alu1_ro_bus = pack_ro_bus(alu_result_1, alu_pc_1, alu_phy_rd_1, alu_gpr_we_1, 1'b0, 1'b0);
wire [`EU_TO_RO_BUS_WD-1:0] alu2_ro_bus = pack_ro_bus(alu_result_2, alu_pc_2, alu_phy_rd_2, alu_gpr_we_2, 1'b0, 1'b0);
wire [`EU_TO_RO_BUS_WD-1:0] mdu_ro_bus  = pack_ro_bus(mdu_result, mdu_pc_out, mdu_phy_rd_out, mdu_gpr_we_out, 1'b0, 1'b0);
wire [`EU_TO_RO_BUS_WD-1:0] lsu_ro_bus  = pack_ro_bus(lsu_ld_data, lsu_pc_out, lsu_phy_rd_out, lsu_gpr_we_out, lsu_is_read, lsu_is_write);
wire [`EU_TO_RO_BUS_WD-1:0] bru_ro_bus  = pack_ro_bus(32'b0, bru_pc_wire, 6'b0, 1'b0, 1'b0, 1'b0);

// Pending buffers for multi-cycle operations
reg                        alu1_pending_valid;
reg [`EU_TO_RO_BUS_WD-1:0] alu1_pending_bus;
reg [        ID_WIDTH-1:0] alu1_pending_id;
reg                        alu2_pending_valid;
reg [`EU_TO_RO_BUS_WD-1:0] alu2_pending_bus;
reg [        ID_WIDTH-1:0] alu2_pending_id;
reg                        bru_pending_valid;
reg [`EU_TO_RO_BUS_WD-1:0] bru_pending_bus;
reg [        ID_WIDTH-1:0] bru_pending_id;

wire alu1_ready = alu1_pending_valid || alu_done_1;
wire alu2_ready = alu2_pending_valid || alu_done_2;
wire bru_ready  = bru_pending_valid  || bru_dnpc_valid_wire;

wire [ID_WIDTH-1:0] alu1_ready_id = alu1_pending_valid ? alu1_pending_id : alu_inst_id_1;
wire [ID_WIDTH-1:0] alu2_ready_id = alu2_pending_valid ? alu2_pending_id : alu_inst_id_2;
wire [ID_WIDTH-1:0] bru_ready_id  = bru_pending_valid  ? bru_pending_id  : bru_inst_id;

wire [`EU_TO_RO_BUS_WD-1:0] alu1_ready_bus = alu1_pending_valid ? alu1_pending_bus : alu1_ro_bus;
wire [`EU_TO_RO_BUS_WD-1:0] alu2_ready_bus = alu2_pending_valid ? alu2_pending_bus : alu2_ro_bus;
wire [`EU_TO_RO_BUS_WD-1:0] bru_ready_bus  = bru_pending_valid  ? bru_pending_bus  : bru_ro_bus;

function automatic is_younger_than;
    input [ID_WIDTH-1:0] id;
    input [ID_WIDTH-1:0] flush_id_in;
    begin
        is_younger_than = (id[ID_WIDTH-1] ^ flush_id_in[ID_WIDTH-1]) ?
                          (id[ID_WIDTH-2:0] < flush_id_in[ID_WIDTH-2:0]) :
                          (id[ID_WIDTH-2:0] > flush_id_in[ID_WIDTH-2:0]);
    end
endfunction

wire alu1_valid = alu1_ready && ~(bru_flush_wire && is_younger_than(alu1_ready_id, bru_flush_id_wire));
wire alu2_valid = alu2_ready && ~(bru_flush_wire && is_younger_than(alu2_ready_id, bru_flush_id_wire));
wire mdu_valid  = mdu_done  && ~(bru_flush_wire && is_younger_than(mdu_inst_id_out, bru_flush_id_wire));
wire lsu_valid  = lsu_done  && ~(bru_flush_wire && is_younger_than(lsu_inst_id_out, bru_flush_id_wire));
wire bru_valid  = bru_ready && ~(bru_flush_wire && is_younger_than(bru_ready_id, bru_flush_id_wire));

reg [2:0] selected_src [1:0];
reg [2:0] count;

always @(*) begin
    // Commit selection logic: select up to 2 ready instructions for commit
    commit_valid_1  = 1'b0;
    commit_valid_2  = 1'b0;
    commit_id_1     = {ID_WIDTH{1'b0}};
    commit_id_2     = {ID_WIDTH{1'b0}};
    eu_to_ro_bus_1  = {`EU_TO_RO_BUS_WD{1'b0}};
    eu_to_ro_bus_2  = {`EU_TO_RO_BUS_WD{1'b0}};
    selected_src[0] = 3'b111;
    selected_src[1] = 3'b111;

    count = 0;
    if (alu1_valid) begin
        if (count == 0) begin
            commit_valid_1  = 1'b1;
            commit_id_1     = alu1_ready_id;
            eu_to_ro_bus_1  = alu1_ready_bus;
            selected_src[0] = 3'd0;
        end else if (count == 1) begin
            commit_valid_2  = 1'b1;
            commit_id_2     = alu1_ready_id;
            eu_to_ro_bus_2  = alu1_ready_bus;
            selected_src[1] = 3'd0;
        end
        count = count + 1;
    end
    if (alu2_valid) begin
        if (count == 0) begin
            commit_valid_1  = 1'b1;
            commit_id_1     = alu2_ready_id;
            eu_to_ro_bus_1  = alu2_ready_bus;
            selected_src[0] = 3'd1;
        end else if (count == 1) begin
            commit_valid_2  = 1'b1;
            commit_id_2     = alu2_ready_id;
            eu_to_ro_bus_2  = alu2_ready_bus;
            selected_src[1] = 3'd1;
        end
        count = count + 1;
    end
    if (mdu_valid) begin
        if (count == 0) begin
            commit_valid_1  = 1'b1;
            commit_id_1     = mdu_inst_id_out;
            eu_to_ro_bus_1  = mdu_ro_bus;
            selected_src[0] = 3'd2;
        end else if (count == 1) begin
            commit_valid_2  = 1'b1;
            commit_id_2     = mdu_inst_id_out;
            eu_to_ro_bus_2  = mdu_ro_bus;
            selected_src[1] = 3'd2;
        end
        count = count + 1;
    end
    if (lsu_valid) begin
        if (count == 0) begin
            commit_valid_1  = 1'b1;
            commit_id_1     = lsu_inst_id_out;
            eu_to_ro_bus_1  = lsu_ro_bus;
            selected_src[0] = 3'd3;
        end else if (count == 1) begin
            commit_valid_2  = 1'b1;
            commit_id_2     = lsu_inst_id_out;
            eu_to_ro_bus_2  = lsu_ro_bus;
            selected_src[1] = 3'd3;
        end
        count = count + 1;
    end
    if (bru_valid) begin
        if (count == 0) begin
            commit_valid_1  = 1'b1;
            commit_id_1     = bru_ready_id;
            eu_to_ro_bus_1  = bru_ready_bus;
            selected_src[0] = 3'd4;
        end else if (count == 1) begin
            commit_valid_2  = 1'b1;
            commit_id_2     = bru_ready_id;
            eu_to_ro_bus_2  = bru_ready_bus;
            selected_src[1] = 3'd4;
        end
        count = count + 1;
    end
end

assign cdb_valid_1 = commit_valid_1 && eu_to_ro_bus_1[70];
assign cdb_valid_2 = commit_valid_2 && eu_to_ro_bus_2[70];
assign cdb_tag_1   = eu_to_ro_bus_1[69:64];
assign cdb_tag_2   = eu_to_ro_bus_2[69:64];

assign mdu_commit = ((selected_src[0] == 3'd2) && commit_valid_1) ||
                     ((selected_src[1] == 3'd2) && commit_valid_2);

assign lsu_ld_cmt = ((selected_src[0] == 3'd3) && commit_valid_1 && lsu_is_read) ||
                    ((selected_src[1] == 3'd3) && commit_valid_2 && lsu_is_read);
assign lsu_st_cmt = ((selected_src[0] == 3'd3) && commit_valid_1 && lsu_is_write) ||
                    ((selected_src[1] == 3'd3) && commit_valid_2 && lsu_is_write);

always @(posedge clk) begin
    if (rst) begin
        alu1_pending_valid <= 1'b0;
        alu2_pending_valid <= 1'b0;
        bru_pending_valid  <= 1'b0;
        flush              <= 1'b0;
        flush_id           <= {ID_WIDTH{1'b0}};
        exu_pc             <= 32'b0;
        exu_dnpc           <= 32'b0;
        exu_dnpc_valid     <= 1'b0;
        exu_taken          <= 1'b0;
    end else begin
        if (bru_flush_wire) begin
            flush <= 1'b1;
            flush_id <= bru_flush_id_wire;
            if (alu1_pending_valid && is_younger_than(alu1_pending_id, bru_flush_id_wire)) alu1_pending_valid <= 1'b0;
            if (alu2_pending_valid && is_younger_than(alu2_pending_id, bru_flush_id_wire)) alu2_pending_valid <= 1'b0;
            if (bru_pending_valid  && is_younger_than(bru_pending_id,  bru_flush_id_wire)) bru_pending_valid  <= 1'b0;
        end else if (pc_update) begin
            flush <= 1'b0;
            flush_id <= {ID_WIDTH{1'b0}};
        end

        if (alu_done_1 && !alu1_pending_valid && !(bru_flush_wire && is_younger_than(alu_inst_id_1, bru_flush_id_wire))) begin
            alu1_pending_valid <= 1'b1;
            alu1_pending_bus   <= alu1_ro_bus;
            alu1_pending_id    <= alu_inst_id_1;
        end else if (selected_src[0] == 3'd0 || selected_src[1] == 3'd0) begin
            alu1_pending_valid <= 1'b0;
        end

        if (alu_done_2 && !alu2_pending_valid && !(bru_flush_wire && is_younger_than(alu_inst_id_2, bru_flush_id_wire))) begin
            alu2_pending_valid <= 1'b1;
            alu2_pending_bus   <= alu2_ro_bus;
            alu2_pending_id    <= alu_inst_id_2;
        end else if (selected_src[0] == 3'd1 || selected_src[1] == 3'd1) begin
            alu2_pending_valid <= 1'b0;
        end

        if (bru_dnpc_valid_wire && !bru_pending_valid && !(bru_flush_wire && is_younger_than(bru_inst_id, bru_flush_id_wire))) begin
            bru_pending_valid <= 1'b1;
            bru_pending_bus   <= bru_ro_bus;
            bru_pending_id    <= bru_inst_id;
        end else if (selected_src[0] == 3'd4 || selected_src[1] == 3'd4) begin
            bru_pending_valid <= 1'b0;
        end

        exu_pc         <= bru_pc_wire;
        exu_dnpc       <= bru_dnpc_wire;
        exu_dnpc_valid <= bru_dnpc_valid_wire;
        exu_taken      <= bru_taken_wire;
    end
end

endmodule
