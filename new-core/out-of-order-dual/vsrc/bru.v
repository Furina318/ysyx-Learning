module bru#(
    parameter ID_WIDTH      = 4
) (
    input  wire                clk                  ,
    input  wire                rst                  ,
    input  wire                issue_valid          ,
    input  wire [ 5:0]         bru_op               ,
    input  wire [31:0]         rs1_data             ,
    input  wire [31:0]         rs2_data             ,
    input  wire [31:0]         imm                  ,
    input  wire [31:0]         pc                   ,
    input  wire [ID_WIDTH-1:0] inst_id              ,
    input  wire [31:0]         pre_dnpc             ,
    input  wire                jal_or_jarl          ,
    input  wire                inst_jarl            ,
        
    input  wire                pc_update            ,
    input  wire                bru_wash_en          ,
    input  wire [ID_WIDTH-1:0] bru_wash_id          ,
    input  wire                mdu_cmt              ,
    input  wire                lsu_ld_cmt           ,
    input  wire                lsu_st_cmt           ,
    output reg                 flush                , // 冲刷FU，持续一周期
    output reg  [ID_WIDTH-1:0] flush_id             ,
    output reg                 exu_wash_dnpc_en     , // 冲刷pc
    output reg  [31:0]         exu_wash_dnpc        ,

    output reg  [31: 0]        bru_pc               ,
    output reg  [31: 0]        bru_dnpc             ,
    output reg                 bru_dnpc_valid       ,
    output reg                 bru_taken
);
reg  [ 5:0] bru_op_r      ;
reg  [31:0] rs1_data_r    ;
reg  [31:0] rs2_data_r    ;
reg  [31:0] imm_r         ;
reg  [31:0] pc_r          ; 
reg  [31:0] pre_dnpc_r    ;
reg         jal_or_jarl_r ;
reg         inst_jarl_r   ;
always @(posedge clk) begin
    if (rst) begin
        bru_op_r    <= 'b0;
    end else begin
        if (issue_valid) begin
            bru_op_r      <= bru_op      ;
            rs1_data_r    <= rs1_data    ;
            rs2_data_r    <= rs2_data    ;
            imm_r         <= imm         ; 
            pc_r          <= pc          ;
            pre_dnpc_r    <= pre_dnpc    ;
            jal_or_jarl_r <= jal_or_jarl ;
            inst_jarl_r   <= inst_jarl   ;
        end else begin
            bru_op_r      <= 'b0         ;
        end
    end
end

wire [31: 0] snpc           ;
wire [31: 0] target_dnpc    ;
wire         bpu_update     ;
wire [31: 0] bru_nxpc       ;
wire         pre_fail       ;
wire         inst_washed    ; // 后续指令能够顶掉dnpc的能力

wire [31: 0] branch_a = rs1_data_r;
wire [31: 0] branch_b = ~rs2_data_r;
wire         branch_cin = 1'b1;
wire [31: 0] branch_result;
wire         branch_cout;
assign {branch_cout, branch_result} = branch_a + branch_b + {{32{1'b0}}, branch_cin};

wire op_bne    = bru_op_r[0];
wire op_beq    = bru_op_r[1];
wire op_bge    = bru_op_r[2];
wire op_bgeu   = bru_op_r[3];
wire op_blt    = bru_op_r[4];
wire op_bltu   = bru_op_r[5];
wire beq_en    = (rs1_data_r == rs2_data_r);
wire bne_en    = ~beq_en;
wire blt_en    = (rs1_data_r[31] & ~rs2_data_r[31]) | ((rs1_data_r[31] ~^ rs2_data_r[31]) & branch_result[31]);
wire bge_en    = ~blt_en;
wire bltu_en   = ~branch_cout;
wire bgeu_en   = ~bltu_en;
wire branch_en = (op_beq  & beq_en ) 
               | (op_blt  & blt_en )
               | (op_bltu & bltu_en)
               | (op_bge  & bge_en )
               | (op_bgeu & bgeu_en)
               | (op_bne  & bne_en ); 

assign snpc     = pc_r + 32'h8;
assign bru_nxpc = inst_jarl_r ? (rs1_data_r + imm_r) & ~1 : pc_r + imm_r; // 计算跳转地址
assign bpu_update  = (|bru_op_r   | jal_or_jarl_r) & ~inst_washed; 
assign target_dnpc = (jal_or_jarl_r | branch_en  ) ? bru_nxpc : snpc;
assign pre_fail    = (target_dnpc != pre_dnpc_r) & (~(mdu_cmt | lsu_ld_cmt | lsu_st_cmt));
// flush: 冲刷时比冲刷id更年轻，但已经接收并执行完成，不应该发起冲刷
// exu_wash_dnpc_en :来的晚的冲刷指令不能顶掉前面的冲刷
assign inst_washed = (flush | exu_wash_dnpc_en) & ((bru_wash_id[4] ^ flush_id[4]) ? (bru_wash_id[3:0] < flush_id[3:0]) : (bru_wash_id[3:0] > flush_id[3:0]));

always @(posedge clk) begin
    if (rst) begin
        flush             <= 'b0;
        flush_id          <= 'b0;
        exu_wash_dnpc_en  <= 'b0;
        bru_pc            <= 'b0;
        bru_dnpc          <= 'b0;
        bru_dnpc_valid    <= 'b0;
        bru_taken         <= 'b0;
    end else begin
        // 分支冲刷逻辑
        if(pre_fail & bru_wash_en & ~inst_washed) begin 
            flush             <= 1'b1;
            exu_wash_dnpc_en  <= 1'b1;
            flush_id          <= bru_wash_id;
            exu_wash_dnpc     <= target_dnpc;
        end else if (pc_update) begin 
            flush             <= 1'b0; 
            exu_wash_dnpc_en  <= 1'b0;
            flush_id          <= 'b0;
        end else begin
            flush             <= 1'b0;
        end

        // BPU更新逻辑
        if(bru_wash_en & bpu_update) begin 
            if(target_dnpc == snpc) begin
                bru_pc         <= pc_r;
                bru_dnpc       <= target_dnpc;
                bru_dnpc_valid <= 1'b1;
                bru_taken      <= 1'b0;
            end else begin
                bru_pc         <= pc_r;
                bru_dnpc       <= target_dnpc;
                bru_dnpc_valid <= 1'b1;
                bru_taken      <= 1'b1;
            end
        end else begin
            bru_dnpc_valid <= 1'b0;
            bru_taken      <= 1'b0;
        end
    end
end

endmodule
