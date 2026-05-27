
//  同一个 FIFO 缓冲区，每周期最多写入一次（由仲裁器保证
module bypass #(
    parameter BYPASS_DEPTH = 16
) (
    input  wire         clk                  ,
    input  wire         rst                  ,

    input  wire [ 5: 0] phy_rj_addr_1        ,
    input  wire [ 5: 0] phy_rk_addr_1        ,
    input  wire [31: 0] rj_data_1            ,
    input  wire [31: 0] rk_data_1            ,

    input  wire [ 5: 0] phy_rj_addr_2        ,
    input  wire [ 5: 0] phy_rk_addr_2        ,
    input  wire [31: 0] rj_data_2            ,
    input  wire [31: 0] rk_data_2            ,

    input  wire [31: 0] rd_w_bypass_data_1   ,
    input  wire         rd_w_bypass_en_1     ,
    input  wire [ 5: 0] rd_w_bypass_1        ,

    input  wire [31: 0] rd_w_bypass_data_2   ,
    input  wire         rd_w_bypass_en_2     ,
    input  wire [ 5: 0] rd_w_bypass_2        ,

    output wire [31: 0] bypass_rj_data_1     ,
    output wire [31: 0] bypass_rk_data_1     ,
    output wire [31: 0] bypass_rj_data_2     ,
    output wire [31: 0] bypass_rk_data_2
);

reg [ 5:0] bypass_phy_rd [BYPASS_DEPTH-1:0];
reg [31:0] bypass_data   [BYPASS_DEPTH-1:0];
reg        bypass_valid  [BYPASS_DEPTH-1:0];

// 写端口仲裁,由于提交仲裁保证每周期最多一条提交
wire        wr_en   = rd_w_bypass_en_1 | rd_w_bypass_en_2;
wire [ 5:0] wr_tag  = rd_w_bypass_en_1 ? rd_w_bypass_1    : rd_w_bypass_2;
wire [31:0] wr_data = rd_w_bypass_en_1 ? rd_w_bypass_data_1 : rd_w_bypass_data_2;

integer i;
reg [31:0] brj0, brk0, brj1, brk1;

always @(*) begin
    brj0 = rj_data_1; brk0 = rk_data_1;
    brj1 = rj_data_2; brk1 = rk_data_2;

    for (i = BYPASS_DEPTH-1; i >= 0; i = i - 1) begin
        if (bypass_valid[i]) begin
            if (bypass_phy_rd[i] == phy_rj_addr_1 && phy_rj_addr_1 != 0) brj0 = bypass_data[i];
            if (bypass_phy_rd[i] == phy_rk_addr_1 && phy_rk_addr_1 != 0) brk0 = bypass_data[i];
            if (bypass_phy_rd[i] == phy_rj_addr_2 && phy_rj_addr_2 != 0) brj1 = bypass_data[i];
            if (bypass_phy_rd[i] == phy_rk_addr_2 && phy_rk_addr_2 != 0) brk1 = bypass_data[i];
        end
    end

    if (wr_en && wr_tag != 0) begin
        if (wr_tag == phy_rj_addr_1) brj0 = wr_data;
        if (wr_tag == phy_rk_addr_1) brk0 = wr_data;
        if (wr_tag == phy_rj_addr_2) brj1 = wr_data;
        if (wr_tag == phy_rk_addr_2) brk1 = wr_data;
    end
end

reg [ 5:0] temp_phy_rd [BYPASS_DEPTH-1:0];
reg [31:0] temp_data   [BYPASS_DEPTH-1:0];
reg        temp_valid  [BYPASS_DEPTH-1:0];

always @(*) begin
    for (i = 1; i < BYPASS_DEPTH; i = i + 1) begin
        temp_phy_rd[i] = bypass_phy_rd[i-1];
        temp_data[i]   = bypass_data[i-1];
        temp_valid[i]  = bypass_valid[i-1];
    end
    temp_phy_rd[0] = wr_en ? wr_tag  : bypass_phy_rd[0];
    temp_data[0]   = wr_en ? wr_data : bypass_data[0];
    temp_valid[0]  = wr_en ? 1'b1    : 1'b0;
end

always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < BYPASS_DEPTH; i = i + 1)
            bypass_valid[i] <= 1'b0;
    end else if (wr_en) begin
        bypass_phy_rd <= temp_phy_rd;
        bypass_data   <= temp_data;
        bypass_valid  <= temp_valid;
    end
end

assign bypass_rj_data_1 = brj0;
assign bypass_rk_data_1 = brk0;
assign bypass_rj_data_2 = brj1;
assign bypass_rk_data_2 = brk1;

endmodule
