module phy_regfile #(
    parameter PHY_REG_NUM = 64,
    parameter DATA_WIDTH = 32
)(
    input  wire                  clk,
    input  wire [           5:0] raddr1,
    output reg  [DATA_WIDTH-1:0] rdata1,
    input  wire [           5:0] raddr2,
    output reg  [DATA_WIDTH-1:0] rdata2,
    input  wire                  we,
    input  wire [           5:0] waddr,
    input  wire [DATA_WIDTH-1:0] wdata
    `ifdef DIFFTEST_EN
    ,
    output wire [DATA_WIDTH-1:0] phy_rf_o [PHY_REG_NUM-1:0]   // difftest
    `endif 
);

reg [DATA_WIDTH-1:0] phy_rf [PHY_REG_NUM-1:0];

//WRITE
always @(posedge clk) begin
    if (we) phy_rf[waddr] <= wdata;
end

//READ OUT 1
assign rdata1 = (raddr1 == 5'b0) ? 32'b0  :
                ((raddr1 == waddr) && we) ? wdata : phy_rf[raddr1];

//READ OUT 2
assign rdata2 = (raddr2 == 5'b0) ? 32'b0 : 
                ((raddr2 == waddr) && we) ? wdata : phy_rf[raddr2];
// difftest
`ifdef DIFFTEST_EN
assign phy_rf_o = phy_rf;
`endif

endmodule
