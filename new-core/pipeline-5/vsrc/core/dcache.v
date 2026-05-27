`include "config.vh"

module dcache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 16,
    parameter BLOCK_SIZE    = 16,
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_BLOCKS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input  wire         clk,
    input  wire         rst,

    input  wire         awready,
    output reg          awvalid,
    output reg  [31: 0] awaddr,
    output reg  [ 3: 0] awid,
    output reg  [ 7: 0] awlen,
    output reg  [ 2: 0] awsize,
    output reg  [ 1: 0] awburst,
    input  wire         wready,
    output reg          wvalid,
    output reg  [31: 0] wdata,
    output reg  [ 3: 0] wstrb,
    output reg          wlast,
    output reg          bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    input  wire         arready,
    output reg          arvalid,
    output reg  [31: 0] araddr,
    output reg  [ 3: 0] arid,
    output reg  [ 7: 0] arlen,
    output reg  [ 2: 0] arsize,
    output reg  [ 1: 0] arburst,
    output reg          rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid,

    input  wire                  fence_en,
    input  wire [ADDR_WIDTH-1:0] cpu_addr,
    input  wire                  cpu_valid,
    input  wire                  cpu_we,
    input  wire [DATA_WIDTH-1:0] cpu_wdata,
    input  wire [ 3: 0]          cpu_wstrb,
    output wire [DATA_WIDTH-1:0] cpu_rdata,
    output wire                  cpu_ready
);
localparam FLASH_BASE = 4'h3; // 3000_0000-3FFF_FFFF
localparam SRAM_BASE  = 4'hf; // 0F00_0000-0FFF_FFFF
localparam PSRAM_BASE = 4'h8; // 8000_0000-9FFF_FFFF
localparam PSRAM_END  = 4'h9;
localparam SDRAM_BASE = 4'hA; // A000_0000-BFFF_FFFF
localparam SDRAM_END  = 4'hB;

localparam IDLE     = 2'b00;
localparam MEM_BUSY = 2'b01;
localparam FENCE    = 2'b10;
localparam WB       = 2'b11;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

wire [31:0] block_addr = {cpu_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
wire        is_flash   = (cpu_addr[31:28] == FLASH_BASE);
wire        is_sram    = (cpu_addr[27:24] == SRAM_BASE);
wire        is_psram   = (cpu_addr[31:28] == PSRAM_BASE) | (cpu_addr[31:28] == PSRAM_END);
wire        is_sdram   = (cpu_addr[31:28] == SDRAM_BASE) | (cpu_addr[31:28] == SDRAM_END);
wire        is_mem     = is_flash | is_sram | is_psram | is_sdram;

wire is_sdram_wb    = (tag_array[index][TAG_WIDTH-1 -: 4] == SDRAM_BASE) | (tag_array[index][TAG_WIDTH-1 -: 4] == SDRAM_END);
wire is_sdram_fence = (tag_array[fence_index][TAG_WIDTH-1 -: 4] == SDRAM_BASE) | (tag_array[fence_index][TAG_WIDTH-1 -: 4] == SDRAM_END);
reg  is_sdram_fence_reg;

assign offset = {cpu_addr[OFFSET_WIDTH-1 : 2], 2'b0};
assign index  = cpu_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag    = cpu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_BLOCKS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]  valid_array;
reg [CACHE_BLOCKS-1:0]  dirty_array;

wire dcache_hit = valid_array[index] && (tag_array[index] == tag);

reg [1:0]  state, next_state;
reg [1:0]  burst_cnt;

reg [INDEX_WIDTH-1:0] fence_index;
reg        fence_ing;
reg        fence_done;
reg        write_done;

reg [31:0] device_rdata;
reg        device_done;

always @(*) begin
    case (state)
        IDLE    : begin next_state = fence_en            ? FENCE    :
                                     ~cpu_valid          ? IDLE     :
                                     ~is_mem             ? MEM_BUSY :
                                      dcache_hit         ? IDLE     : 
                                      dirty_array[index] ? WB       : MEM_BUSY;end
        MEM_BUSY: begin next_state = (dcache_hit | device_done) ? IDLE : MEM_BUSY; end
        FENCE   : begin next_state = fence_done ? IDLE : dirty_array[fence_index] ? WB : FENCE; end
        WB      : begin next_state = (write_done) ? fence_ing ? FENCE : MEM_BUSY : WB; end
        default: next_state = IDLE;
    endcase
end

wire [31: 0] wdata_mask;
wire [31: 0] dcache_wdata;

assign wdata_mask   = {{8{cpu_wstrb[3]}},{8{cpu_wstrb[2]}},{8{cpu_wstrb[1]}},{8{cpu_wstrb[0]}}};
assign dcache_wdata = cpu_wdata | (data_array[index][32*offset/4 +: 32] & ~wdata_mask);
assign cpu_rdata    = is_mem    ? data_array[index][offset*8 +: DATA_WIDTH] : device_rdata;
assign cpu_ready    = cpu_valid ? (dcache_hit | device_done) : ~fence_ing;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= IDLE;
        valid_array <= 'b0;
        dirty_array <= 'b0;
        burst_cnt <= 2'd0;
        write_done <= 1'b0;
        fence_index <= 'b0;
        fence_done <= 1'b1;
        fence_ing <= 1'b0;
        is_sdram_fence_reg <= 1'b0;
        device_done <= 1'b0;

        arvalid <= 1'b0;
        awvalid <= 1'b0;
        wvalid <= 1'b0;
        bready <= 1'b0;
        rready <= 1'b0;
    end else begin
        state <= next_state;
        valid_array <= fence_en ? 'b0 : valid_array;
        device_done <= 1'b0;
        write_done <= 1'b0;
        case (state)
            IDLE: begin
                fence_done <= ~fence_en;
                fence_ing <= fence_en;
                if (cpu_valid && dcache_hit) begin
                    if (cpu_we) begin
                        case (offset)
                            4'h0: data_array[index][ 31: 0] <= dcache_wdata;
                            4'h4: data_array[index][ 63:32] <= dcache_wdata;
                            4'h8: data_array[index][ 95:64] <= dcache_wdata;
                            4'hc: data_array[index][127:96] <= dcache_wdata;
                            default: data_array[index] <= data_array[index];
                        endcase
                        dirty_array[index] <= 1'b1;
                    end
                end else if (cpu_valid && !dcache_hit) begin
                    if ((dirty_array[index] && is_mem) | (~is_mem && cpu_we)) begin
                        awaddr <= is_mem ? {tag_array[index], index, {OFFSET_WIDTH{1'b0}}} : cpu_addr;
                        awvalid <= 1'b1;
                        wdata <= is_mem ? data_array[index][burst_cnt*32 +: 32] : cpu_wdata;
                        wstrb <= is_mem ? 4'hf : cpu_wstrb;
                        wvalid <= 1'b1;
                        wlast <= is_mem ? ~is_sdram_wb : 1'b1;
                        awid <= 4'h0;
                        awsize <= is_mem ? 3'h2 : 3'b0;
                        awlen <= is_mem ? is_sdram_wb ? 8'h3 : 8'h0 : 8'b0;
                        awburst <= is_mem ? is_sdram_wb ? 2'h1 : 2'h0 : 2'b0;
                    end else begin
                        valid_array[index] <= 1'b0;
                        araddr <= is_mem ? block_addr : cpu_addr;
                        arvalid <= 1'b1;
                        arid <= 4'h0;
                        arsize <= is_mem ? 3'h2 : 3'b0;
                        arlen <= is_sdram ? 8'h3 : 8'h0;
                        arburst <= is_sdram ? 2'h1 : 2'h0;
                    end
                end
            end

            MEM_BUSY: begin
                if(cpu_we) begin
                    if (awvalid && awready && wvalid && wready) begin
                        awvalid <= 1'b0;
                        wvalid <= 1'b0;
                        bready <= 1'b1;
                    end
                    if (bvalid && bready) begin
                        device_done <= 1'b1;
                        bready <= 1'b0;
                        wlast <= 1'b0;
                    end
                end
                if (arvalid && arready) begin
                    arvalid <= 1'b0;
                    rready <= 1'b1;
                end
                if (rvalid && rready) begin
                    if(is_mem) begin
                        case(burst_cnt)
                            2'd0: data_array[index][ 31: 0] <= rdata;
                            2'd1: data_array[index][ 63:32] <= rdata;
                            2'd2: data_array[index][ 95:64] <= rdata;
                            2'd3: data_array[index][127:96] <= rdata;
                        endcase
                        burst_cnt <= burst_cnt + 2'b1;
                        if (is_sdram) begin
                            if (rlast) begin
                                rready <= 1'b0;
                                tag_array[index]   <= tag;
                                valid_array[index] <= 1'b1;
                            end
                        end else begin
                            if (burst_cnt == 2'b11) begin
                                rready <= 1'b0;
                                tag_array[index]   <= tag;
                                valid_array[index] <= 1'b1;
                            end else begin
                                araddr <= araddr + 32'h4;
                                arvalid <= 1'b1;
                            end
                        end
                    end else begin
                        device_rdata <= rdata;
                        device_done <= 1'b1;
                        rready <= 1'b0;
                    end
                end
                if(valid_array[index] && is_mem) begin
                    dirty_array[index] <= cpu_we;
                    if (cpu_we) begin
                        case (offset)
                            4'h0: data_array[index][ 31: 0] <= dcache_wdata;
                            4'h4: data_array[index][ 63:32] <= dcache_wdata;
                            4'h8: data_array[index][ 95:64] <= dcache_wdata;
                            4'hc: data_array[index][127:96] <= dcache_wdata;
                            default: data_array[index] <= data_array[index];
                        endcase
                    end
                end
            end
            FENCE: begin
                if(fence_done) begin
                    fence_ing <= 1'b0;
                end else begin
                    fence_index <= fence_index + 1;
                end
                if (dirty_array[fence_index]) begin
                    is_sdram_fence_reg <= is_sdram_fence;
                    awaddr <= {tag_array[fence_index], fence_index, {OFFSET_WIDTH{1'b0}}};
                    awvalid <= 1'b1;
                    wdata <= data_array[fence_index][burst_cnt*32 +: 32];
                    wstrb <= 4'hf;
                    wvalid <= 1'b1;
                    wlast <= ~is_sdram_fence;
                    awid <= 4'h0;
                    awsize <= 3'h2;
                    awlen <= is_sdram_fence ? 8'h3 : 8'h0;
                    awburst <= is_sdram_fence ? 2'h1 : 2'h0;
                end
                if(&fence_index) begin
                    dirty_array <= 'b0;
                    fence_done <= 1'b1;
                end
            end

            WB: begin
                if (is_sdram_wb | is_sdram_fence_reg) begin
                    if (awvalid && awready) begin
                        awvalid <= 1'b0;
                        bready <= 1'b1;
                    end
                    if (wvalid && wready) begin
                        wvalid <= ~wlast;
                        burst_cnt <= burst_cnt + 2'b1;
                        wdata <= fence_ing ? data_array[fence_index-1][((burst_cnt)*32+32) +: 32] : data_array[index][((burst_cnt)*32+32) +: 32];
                        wlast <= (burst_cnt == 2'b10);
                    end
                    if(bvalid && bready) begin
                        bready <= 1'b0;
                        valid_array[index] <= fence_ing ? valid_array[index] : 1'b0;
                        dirty_array[index] <= fence_ing ? dirty_array[index] : 1'b0;
                        write_done <= 1'b1;
                        is_sdram_fence_reg <= 1'b0;

                        if(~fence_ing) begin
                            araddr <= block_addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arsize <= 3'h2;
                            arlen <= is_sdram ? 8'h3 : 8'h0;
                            arburst <= is_sdram ? 2'h1 : 2'h0;
                        end
                    end 
                end else begin
                    if (awvalid && awready && wvalid && wready) begin
                        awvalid <= 1'b0;
                        wvalid <= 1'b0;
                        bready <= 1'b1;
                    end
                    if(bvalid && bready) begin
                        burst_cnt <= burst_cnt + 2'b1;
                        wdata <= fence_ing ? data_array[fence_index-1][((burst_cnt)*32+32) +: 32] : data_array[index][((burst_cnt)*32+32) +: 32];
                        if(burst_cnt == 2'b11) begin
                            bready <= 1'b0;
                            valid_array[index] <= fence_ing ? valid_array[index] : 1'b0;
                            dirty_array[index] <= fence_ing ? dirty_array[index] : 1'b0;
                            write_done <= 1'b1;
                            wlast <= 1'b0;

                            if(~fence_ing) begin
                                araddr <= block_addr;
                                arvalid <= 1'b1;
                                arid <= 4'h0;
                                arsize <= 3'h2;
                                arlen <= is_sdram ? 8'h3 : 8'h0;
                                arburst <= is_sdram ? 2'h1 : 2'h0;
                            end
                        end else begin
                            awaddr <= awaddr + 32'h4;
                            awvalid <= 1'b1;
                            wvalid <= 1'b1;
                            wlast <= 1'b1;
                        end
                    end
                end
            end
        endcase
    end
end

endmodule
