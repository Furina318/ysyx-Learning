`include "/home/furina/ysyx-workbench/npc/pipeline-soc-vsrc/defines/defines.v"

module CLINT #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
    // parameter MAX_DELAY  = 4,
    // parameter MIN_DELAY  = 1
)(
    input  wire                   clk,
    input  wire                   reset,

    input  wire [ ADDR_WIDTH-1:0] araddr,
    input  wire                   arvalid,
    output reg                    arready,

    output reg  [ DATA_WIDTH-1:0] rdata,
    output reg                    rvalid,
    output reg                    rlast, 
    input  wire                   rready,
    output reg  [            1:0] rresp

    // input  wire [ ADDR_WIDTH-1:0] awaddr,
    // input  wire                   awvalid,
    // output wire                   awready,

    // input  wire [ DATA_WIDTH-1:0] wdata,
    // input  wire [            3:0] wstrb,
    // input  wire                   wvalid,
    // output wire                   wready,

    // output wire  [           1:0] bresp, 
    // output wire                   bvalid,
    // input  wire                   bready
);

    localparam IDLE = 1'b0;
    localparam BUSY = 1'b1;
    reg clint_state, next_clint_state;

    reg [ADDR_WIDTH-1:0] araddr_reg;
    
    reg  [63:0] mtime;//时间寄存器
    wire [31:0] mtime_low  = mtime[31:0];
    wire [31:0] mtime_high = mtime[63:32];
    wire [31:0] clint_offset = araddr_reg - 32'h0200_0000;

    //时间更新逻辑
    always @(posedge clk) begin
        if(reset) begin
            mtime <= 64'h0;
        end
        else begin
            mtime <= mtime + 64'h1;
        end
    end
    
    always @(posedge clk) begin
        if (reset) begin
            // clint_state <= IDLE;
            // arready     <= 1'b0;
            // rvalid      <= 1'b0;
            // rlast       <= 1'b0;  
            // // wready      <= 1'b0;
            // // awready     <= 1'b0;
            // // bvalid      <= 1'b0;
            // rdata       <= 32'h0;
            // rresp       <= `OKAY;
            // // bresp       <= `OKAY;
            // // LFSR        <= MIN_DELAY;
            // araddr_reg  <= 32'h0;
            // // rdata_reg   <= 32'h0;
        end else begin
            clint_state <= next_clint_state;
            case (clint_state)
                IDLE: begin
                    arready <= 1'b1; 
                    rvalid  <= 1'b0;
                    rlast   <= 1'b0;  
                    if (arvalid && arready) begin
                        araddr_reg <= araddr;
                        arready    <= 1'b0;
                        next_clint_state <= BUSY;
                    end 
                end
                BUSY: begin
                    rlast <= 1'b1;
                    if (rready) begin
                        rdata      <= (clint_offset == 32'h0) ? mtime_low :
                                      (clint_offset == 32'h4) ? mtime_high :
                                      32'h0;    
                        rvalid     <= 1'b1;
                        rresp      <= `OKAY;
                        next_clint_state <= IDLE;
                    end else begin
                        next_clint_state <= BUSY;
                    end
                end
                default: begin
                    next_clint_state <= IDLE;
                end
            endcase
        end
    end

endmodule
