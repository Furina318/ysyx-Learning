`include "/home/furina/ysyx-workbench/npc/pipeline-soc-vsrc/defines/defines.v"

module CLINT #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter MAX_DELAY  = 4,
    parameter MIN_DELAY  = 1
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
    output reg  [            1:0] rresp, 

    input  wire [ ADDR_WIDTH-1:0] awaddr,
    input  wire                   awvalid,
    output reg                    awready,

    input  wire [ DATA_WIDTH-1:0] wdata,
    input  wire [            3:0] wstrb,
    input  wire                   wvalid,
    output reg                    wready,

    output reg   [           1:0] bresp, 
    output reg                    bvalid,
    input  wire                   bready
);

    localparam IDLE      = 2'b00;
    localparam READ_ADDR = 2'b01;
    localparam READ_DATA = 2'b11;
    reg [1:0] clint_state, next_clint_state;

    reg [           2:0] LFSR; 
    reg [ADDR_WIDTH-1:0] araddr_reg;
    reg [DATA_WIDTH-1:0] rdata_reg;
    // reg addr_valid;

    // 检查地址是否有效
    // wire addr_valid = (araddr >= 32'h0200_0000 && araddr <= 32'h0200_0007);
    reg  [63:0] mtime;//时间寄存器
    wire [31:0] mtime_low  = mtime[31:0];
    wire [31:0] mtime_high = mtime[63:32];

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
            clint_state <= IDLE;
            arready     <= 1'b0;
            rvalid      <= 1'b0;
            rlast       <= 1'b0;  
            wready      <= 1'b0;
            awready     <= 1'b0;
            bvalid      <= 1'b0;
            rdata       <= 32'h0;
            rresp       <= `OKAY;
            bresp       <= `OKAY;
            LFSR        <= MIN_DELAY;
            araddr_reg  <= 32'h0;
            rdata_reg   <= 32'h0;
        end else begin
            clint_state <= next_clint_state;
            case (clint_state)
                IDLE: begin
                    arready <= 1'b1; 
                    awready <= 1'b1; 
                    rvalid  <= 1'b0;
                    rlast   <= 1'b0;  
                    bvalid  <= 1'b0;
                    // LFSR <= $urandom_range(1, 10); // 随机生成1~10的延迟
                    LFSR <= MIN_DELAY;
                    if (arvalid && arready) begin
                        araddr_reg <= araddr;
                        arready    <= 1'b0;
                        next_clint_state <= READ_ADDR;
                    end else if (awvalid && awready) begin 
                        $display("你他妈怎么敢往里面写东西的");
                    end
                end
                READ_ADDR: begin
                    rlast <= 1'b0;  
                    if (LFSR > 0) begin
                        LFSR <= LFSR - 1;
                        next_clint_state <= READ_ADDR;
                    end 
                    else begin
                        // if (addr_valid) begin
                            case(araddr_reg)
                                32'h0200_0000: rdata_reg <= mtime_low;//低32位
                                32'h0200_0004: rdata_reg <= mtime_high;//高32位
                                default: begin
                                    rdata <= 32'h0;
                                    rresp <= `SLVERR;
                                    $display("\033[31mCLINT: Invalid read address %h\033[0m", araddr_reg);
                                end
                            endcase
                            rresp <= `OKAY;
                        // end 
                        // else begin
                        //     rdata_reg <= 32'h0;
                        //     rresp <= `SLVERR; // 无效地址返回SLVERR
                        // end
                        next_clint_state <= READ_DATA;
                    end
                end
                READ_DATA: begin
                    rlast <= 1'b1;
                    if (rready) begin
                        rdata      <= rdata_reg;
                        rvalid     <= 1'b1;
                        araddr_reg <= 32'h0; 
                        next_clint_state <= IDLE;
                    end else begin
                        next_clint_state <= READ_DATA;
                    end
                end
                default: begin
                    next_clint_state <= IDLE;
                end
            endcase
        end
    end

endmodule
