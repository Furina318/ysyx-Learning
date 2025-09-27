`include "ysyx_25020037_config.vh"

module ysyx_25020037_icache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 16,
    parameter BLOCK_SIZE    = 16,
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_BLOCKS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input                           clk,
    input                           rst,

    input  wire [`EU_TO_IC_BUS_WD -1:0] eu_to_ic_bus,

    input  wire [ADDR_WIDTH-1:0] cpu_addr,
    output wire [DATA_WIDTH-1:0] cpu_data,
    output wire                  cpu_hit,
    output wire                  cpu_ready,
    
    output wire                  mem_req,
    output wire [ADDR_WIDTH-1:0] mem_addr,
    input  wire [BLOCK_SIZE*8-1:0] mem_data,
    input  wire                  mem_ready
);
wire is_fence_i = eu_to_ic_bus;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

assign offset = cpu_addr[OFFSET_WIDTH-1 : 0];
assign index  = cpu_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag    = cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];

assign mem_addr = {cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_BLOCKS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]  valid_array;

assign cpu_hit   = valid_array[index] && (tag_array[index] == tag);
assign cpu_data  = data_array[index][offset*8 +: DATA_WIDTH];
assign cpu_ready = (cpu_hit | mem_ready);
assign mem_req   = ~cpu_hit;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        valid_array <= 'b0;
    end else if (is_fence_i) begin
        valid_array <= 'b0;
    end else if (mem_ready) begin
        tag_array[index]    <= tag;
        data_array[index]   <= mem_data;
        valid_array[index]  <= 1'b1;
    end
end

endmodule
