module bpu #(
    parameter DATA_WIDTH        = 32,
    parameter BTB_BLOCKS        = 16,
    parameter TAG_WIDTH         = 10,
    parameter BHR_WIDE          = 2,
    parameter PHT_WIDE          = 2
)(
    input  wire                     clk,
    input  wire                     rst,
    input  wire [DATA_WIDTH-1:0]    pc,
    output wire [DATA_WIDTH-1:0]    dnpc,
    input  wire [DATA_WIDTH-1:0]    exu_pc,
    input  wire [DATA_WIDTH-1:0]    exu_dnpc,
    input  wire                     exu_dnpc_valid,
    input  wire                     exu_taken
);

localparam INDEX_WIDTH     = $clog2(BTB_BLOCKS);
localparam TARGET_WIDTH    = DATA_WIDTH - 2;
localparam PHT_CLASS       = 1 << BHR_WIDE;
localparam PRED_THRESHOLD  = 1 << (PHT_WIDE - 1); // 预测阈值
localparam BHR_TABLE_WIDTH = BHR_WIDE * BTB_BLOCKS; // BHR总宽度 单个宽度*BTB块数
localparam PTH_TABLE_WIDTH = PHT_WIDE * BTB_BLOCKS * PHT_CLASS; // 计数器总宽度 单个宽度*BTB块数*2^BHR宽度

reg  [  BTB_BLOCKS-1:0] btb_valid;
reg  [   TAG_WIDTH-1:0] btb_pc_tag    [0:BTB_BLOCKS-1];
reg  [TARGET_WIDTH-1:0] btb_target_pc [0:BTB_BLOCKS-1];

reg  [BHR_TABLE_WIDTH-1:0] bhr_table;
reg  [PTH_TABLE_WIDTH-1:0] pht_table;

wire [BHR_WIDE-1:0] update_bhr;
wire [BHR_WIDE-1:0] curr_bhr;
wire [PHT_WIDE-1:0] curr_pht;

wire [INDEX_WIDTH-1:0] pred_idx      = pc[2 +: INDEX_WIDTH];
wire [INDEX_WIDTH-1:0] update_idx    = exu_pc[2 +: INDEX_WIDTH];
wire [  TAG_WIDTH-1:0] pred_pc_tag   = pc[2 +: TAG_WIDTH];
wire [  TAG_WIDTH-1:0] target_pc_tag = exu_pc[2 +: TAG_WIDTH];
wire [ DATA_WIDTH-1:0] target_pc     = {btb_target_pc[pred_idx], {2{1'b0}}};

wire         btb_hit = btb_valid[pred_idx] && (btb_pc_tag[pred_idx] == pred_pc_tag);
wire         taken   = btb_hit && (curr_pht >= PRED_THRESHOLD);
assign       dnpc    = taken ? target_pc : pc + 32'h4;

assign update_bhr = bhr_table[update_idx * BHR_WIDE +: BHR_WIDE];
assign curr_bhr   = bhr_table[pred_idx * BHR_WIDE +: BHR_WIDE];
assign curr_pht   = pht_table[pred_idx * BHR_WIDE * PHT_CLASS + curr_bhr * PHT_WIDE +: PHT_WIDE];

always @(posedge clk or posedge rst) begin
    if (rst) begin
        btb_valid <= 'b0;
        bhr_table <= 'b0;
        pht_table <= {BTB_BLOCKS{8'b01_01_01_01}}; // 全部是01 01,对应弱不跳转
    end else if (exu_dnpc_valid) begin
        btb_valid[update_idx]       <= 1'b1;
        btb_pc_tag[update_idx]      <= exu_pc[2 +: TAG_WIDTH];
        btb_target_pc[update_idx]   <= exu_taken ? exu_dnpc[2 +: TARGET_WIDTH] : btb_target_pc[update_idx];
        
        if (exu_taken) begin
            if (&pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE]) begin
                pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] <= pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE];
            end else begin
                pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] <= pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] + 1;
            end
        end else begin
            if (|pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE]) begin
                pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] <= pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] - 1;
            end else begin
                pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE] <= pht_table[update_idx * BHR_WIDE * PHT_CLASS + update_bhr * BHR_WIDE +: PHT_WIDE];
            end
        end
        bhr_table[update_idx * BHR_WIDE +: BHR_WIDE] <= {update_bhr[BHR_WIDE-2:0], exu_taken};
    end
end

endmodule
