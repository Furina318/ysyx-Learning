module regfile (
    input  wire        clk       ,
    input  wire        rst       ,
    input  wire [ 4:0] waddr     ,
    input  wire        lsu_valid ,
    input  wire        we        ,
    input  wire [31:0] wdata     ,
    input  wire [ 4:0] rs1       ,
    input  wire [ 4:0] rs2       ,
    output wire [31:0] src1      ,
    output wire [31:0] src2
);

reg [31:0] rf [0:31];

integer i;
always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < 32; i = i + 1) begin
            rf[i] <= 32'h0;
        end
    end
    else if (lsu_valid & we & (|waddr)) begin
        rf[waddr] <= wdata;
    end
end

assign src1 = (|rs1) ? rf[rs1] : 32'h0;
assign src2 = (|rs2) ? rf[rs2] : 32'h0;

endmodule
