module bypass #(
    parameter BYPASS_DEPTH      = 3
) (
    input  wire         clk              ,
    input  wire         rst              ,
    // from exu
    input  wire         idu_valid        ,
    input  wire         exu_ready        ,
    input  wire         exu_flush_en     ,
    input  wire [ 4: 0] rs1_addr         ,
    input  wire [ 4: 0] rs2_addr         ,
    input  wire [ 4: 0] rd_addr          ,
    input  wire [31: 0] rd_w_bypass_data ,
    input  wire         rd_w_bypass_en   ,
    // from wbu
    input  wire [31: 0] rf_rs1_data      ,
    input  wire [31: 0] rf_rs2_data      ,
    // to exu
    output wire [31: 0] bypass_rs1_data  ,
    output wire [31: 0] bypass_rs2_data
);
reg [ 4:0] bypass_rd     [BYPASS_DEPTH-1:0];
reg [31:0] bypass_data   [BYPASS_DEPTH-1:0];
reg        bypass_valid  [BYPASS_DEPTH-1:0];

integer    idx;

reg [31:0] bypass_src1;
reg [31:0] bypass_src2;

always @(*) begin
    bypass_src1 = rf_rs1_data;
    if ((bypass_rd[0] == rs1_addr) && (rs1_addr != 5'd0) && bypass_valid[0]) begin
        bypass_src1 = bypass_data[0];
    end
    else if ((bypass_rd[1] == rs1_addr) && (rs1_addr != 5'd0) && bypass_valid[1]) begin
        bypass_src1 = bypass_data[1];
    end
    else if ((bypass_rd[2] == rs1_addr) && (rs1_addr != 5'd0) && bypass_valid[2]) begin
        bypass_src1 = bypass_data[2];
    end
end

always @(*) begin
    bypass_src2 = rf_rs2_data;
    if ((bypass_rd[0] == rs2_addr) && (rs2_addr != 5'd0) && bypass_valid[0]) begin
        bypass_src2 = bypass_data[0];
    end
    else if ((bypass_rd[1] == rs2_addr) && (rs2_addr != 5'd0) && bypass_valid[1]) begin
        bypass_src2 = bypass_data[1];
    end
    else if ((bypass_rd[2] == rs2_addr) && (rs2_addr != 5'd0) && bypass_valid[2]) begin
        bypass_src2 = bypass_data[2];
    end
end

always @(posedge clk) begin
    if (rst) begin
        for (idx = 0; idx < BYPASS_DEPTH; idx = idx + 1) begin
            bypass_rd[idx]      = 5'b0;
            bypass_data[idx]    = 32'b0;
            bypass_valid[idx]   = 1'b0;
        end
    end
    else begin
        if (exu_ready && idu_valid && !exu_flush_en) begin
            // 旁路缓冲区数据移位：条目1 <- 条目0（旧数据后移）
            bypass_rd[2]       = bypass_rd[1];
            bypass_data[2]     = bypass_data[1];
            bypass_valid[2]    = bypass_valid[1];
            bypass_rd[1]       = bypass_rd[0];
            bypass_data[1]     = bypass_data[0];
            bypass_valid[1]    = bypass_valid[0];
            // 旁路缓冲区0更新为当前指令的写回信息
            bypass_rd[0]       = rd_addr;
            bypass_data[0]     = rd_w_bypass_data;
            bypass_valid[0]    = rd_w_bypass_en;
        end
    end
end

assign bypass_rs1_data  = bypass_src1;
assign bypass_rs2_data  = bypass_src2;

endmodule
