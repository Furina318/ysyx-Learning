`include "defines.vh"

// Writeback Unit (WBU)
// 负责将 ROB 提交的指令结果写回物理寄存器文件
// 支持双提交端口，仲裁写回冲突

module wbu (
    input  wire                     clk             ,
    input  wire                     rst             ,

    // 从 ROB 接收的双提交信号
    input  wire                     rob_cmt_valid_1 ,
    input  wire [`RO_TO_WU_WD-1:0]  ro_to_wu_bus_1  ,
    input  wire                     rob_cmt_valid_2 ,
    input  wire [`RO_TO_WU_WD-1:0]  ro_to_wu_bus_2  ,

    // 到物理寄存器文件的写回接口
    output wire                     phy_we          ,
    output wire [5:0]               phy_waddr       ,
    output wire [31:0]              phy_wdata       ,

    // 提交有效信号（用于调试或后续）
    output wire                     commit_valid_1  ,
    output wire                     commit_valid_2
);

// 解析第一个提交总线
wire [31:0] result_1   ;
wire [31:0] pc_1       ;
wire [5:0]  phy_rd_1   ;
wire        gpr_we_1   ;
wire        is_read_1  ;
wire        is_write_1 ;

assign {
    result_1   ,
    pc_1       ,
    phy_rd_1   ,
    gpr_we_1   ,
    is_read_1  ,
    is_write_1
} = ro_to_wu_bus_1;

// 解析第二个提交总线
wire [31:0] result_2   ;
wire [31:0] pc_2       ;
wire [5:0]  phy_rd_2   ;
wire        gpr_we_2   ;
wire        is_read_2  ;
wire        is_write_2 ;

assign {
    result_2   ,
    pc_2       ,
    phy_rd_2   ,
    gpr_we_2   ,
    is_read_2  ,
    is_write_2
} = ro_to_wu_bus_2;

// 提交有效性：有效且需要写回 GPR
assign commit_valid_1 = rob_cmt_valid_1 && gpr_we_1;
assign commit_valid_2 = rob_cmt_valid_2 && gpr_we_2;

// 写回仲裁：如果两个都有效且写同一寄存器，优先第一个（假设顺序提交）
wire conflict = commit_valid_1 && commit_valid_2 && (phy_rd_1 == phy_rd_2);

assign phy_we    = commit_valid_1 || (commit_valid_2 && !conflict);
assign phy_waddr = commit_valid_1 ? phy_rd_1 : phy_rd_2;
assign phy_wdata = commit_valid_1 ? result_1 : result_2;

endmodule
