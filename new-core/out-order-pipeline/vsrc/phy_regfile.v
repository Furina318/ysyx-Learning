module phy_regfile #(
    parameter PHY_REG_NUM = 64,
    parameter DATA_WIDTH  = 32
)(
    input  wire                  clk,

    // 4 读端口 (2条指令 × 2源操作数)
    input  wire [           5:0] raddr1,
    output wire [DATA_WIDTH-1:0] rdata1,
    input  wire [           5:0] raddr2,
    output wire [DATA_WIDTH-1:0] rdata2,
    input  wire [           5:0] raddr3,
    output wire [DATA_WIDTH-1:0] rdata3,
    input  wire [           5:0] raddr4,
    output wire [DATA_WIDTH-1:0] rdata4,

    // 2 写端口 (CDB1 / CDB2)
    input  wire                  we_1,
    input  wire [           5:0] waddr_1,
    input  wire [DATA_WIDTH-1:0] wdata_1,
    input  wire                  we_2,
    input  wire [           5:0] waddr_2,
    input  wire [DATA_WIDTH-1:0] wdata_2

    `ifdef DIFFTEST_EN
    ,
    output wire [PHY_REG_NUM*DATA_WIDTH-1:0] phy_rf_o   // difftest
    `endif
);

    reg [DATA_WIDTH-1:0] phy_rf [PHY_REG_NUM-1:0];

    // 写端口
    always @(posedge clk) begin
        if (we_1) begin
            phy_rf[waddr_1] <= wdata_1;
        end
        if (we_2) begin
            phy_rf[waddr_2] <= wdata_2;
        end
    end

    // 读端口1 (带写前读旁路)
    assign rdata1 = (raddr1 == 6'b0) ? 32'b0 :
                    ((raddr1 == waddr_1) && we_1) ? wdata_1 :
                    ((raddr1 == waddr_2) && we_2) ? wdata_2 :
                    phy_rf[raddr1];

    // 读端口2
    assign rdata2 = (raddr2 == 6'b0) ? 32'b0 :
                    ((raddr2 == waddr_1) && we_1) ? wdata_1 :
                    ((raddr2 == waddr_2) && we_2) ? wdata_2 :
                    phy_rf[raddr2];

    // 读端口3
    assign rdata3 = (raddr3 == 6'b0) ? 32'b0 :
                    ((raddr3 == waddr_1) && we_1) ? wdata_1 :
                    ((raddr3 == waddr_2) && we_2) ? wdata_2 :
                    phy_rf[raddr3];

    // 读端口4
    assign rdata4 = (raddr4 == 6'b0) ? 32'b0 :
                    ((raddr4 == waddr_1) && we_1) ? wdata_1 :
                    ((raddr4 == waddr_2) && we_2) ? wdata_2 :
                    phy_rf[raddr4];

    // difftest
    `ifdef DIFFTEST_EN
    genvar phy_rf_o_idx;
    generate
        for (phy_rf_o_idx = 0; phy_rf_o_idx < PHY_REG_NUM; phy_rf_o_idx = phy_rf_o_idx + 1) begin : gen_phy_rf_o
            assign phy_rf_o[phy_rf_o_idx*DATA_WIDTH +: DATA_WIDTH] = phy_rf[phy_rf_o_idx];
        end
    endgenerate
    `endif

endmodule
