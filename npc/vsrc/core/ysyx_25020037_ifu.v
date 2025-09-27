`include "ysyx_25020037_config.vh"

module ysyx_25020037_ifu #(
    parameter BLOCK_SIZE = 4
) (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_dnpc_valid,
    input  wire [31: 0] exu_dnpc,
    output wire         pc_updata,
    input  wire         idu_ready,
    output reg          ifu_valid,
    output reg  [`FU_TO_DU_BUS_WD-1: 0] fu_to_du_bus,
    output reg          access_fault,

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

    output wire [31: 0] icache_addr,
    input  wire [31: 0] icache_data,
    input  wire         icache_hit,
    input  wire         icache_ready,
    input  wire         mem_req,
    input  wire [31: 0] mem_addr,
    output wire [BLOCK_SIZE*8-1:0] mem_data,
    output wire         mem_ready
);
    localparam SDRAM_BASE = 4'hA; // A000_0000-BFFF_FFFF
    localparam SDRAM_END  = 4'hB; 

    localparam OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam IDLE    = 1'b0;
    localparam BUSY    = 1'b1;
    
    reg         state, next_state;
    reg  [31:0] pc;
    wire [31:0] inst = fu_to_du_bus[31:0];
    wire [31:0] snpc = pc + 32'h4;
    wire [31:0] dnpc = exu_dnpc_valid ? exu_dnpc : snpc;
    wire [31:0] block_base_addr = {pc[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire        is_sdram = (block_base_addr[31:28] == SDRAM_BASE) | (block_base_addr[31:28] == SDRAM_END);
    reg  [1:0]  burst_cnt;
    reg [31:0]  data_buf[0:2];
    assign      pc_updata = (next_state == IDLE) & idu_ready;

    always @(*) begin
        case (state)
            IDLE:  begin next_state = (idu_ready) ? (icache_hit) ? IDLE : BUSY : IDLE; end
            BUSY:  begin next_state = (icache_hit & idu_ready) ? IDLE : BUSY; end
            default: next_state = IDLE;
        endcase
    end
    assign icache_addr = pc;
    assign mem_data = {rdata, data_buf[2], data_buf[1], data_buf[0]};
    assign mem_ready = is_sdram ? rlast : rvalid & (burst_cnt == 2'b11);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc <= `PC_RESET_VAL;
            state <= IDLE;
            burst_cnt <= 2'd0;
        end else begin
            pc <= pc_updata ? dnpc : pc;
            state <= next_state;
            case (state)
                IDLE: begin
                    if (idu_ready) begin
                        ifu_valid <= 1'b0;
                        fu_to_du_bus <= 'b0;
                        if (icache_hit) begin
                            fu_to_du_bus <= {pc[31:2], icache_data};
                            ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                        end else if (mem_req) begin
                            araddr <= block_base_addr;
                            arvalid <= 1'b1;
                            arid <= 4'h0;
                            arsize <= 3'h2;
                            if (is_sdram) begin
                                arlen <= 8'h3;
                                arburst <= 2'h1;
                            end else begin
                                arlen <= 8'h0;
                                arburst <= 2'h0;
                            end
                        end
                    end
                end
                BUSY: begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                    if (rvalid && rready) begin
                        access_fault <= (rresp != 2'b00);
                        case(burst_cnt)
                            2'd0: data_buf[0] <= rdata;
                            2'd1: data_buf[1] <= rdata;
                            2'd2: data_buf[2] <= rdata;
                            default: ;
                        endcase
                        burst_cnt <= burst_cnt + 2'b1;
                        if (is_sdram) begin
                            if (rlast) begin
                                rready <= 1'b0;
                                burst_cnt <= 2'd0;
                            end
                        end else begin
                            if (burst_cnt == 2'b11) begin
                                rready <= 1'b0;
                                burst_cnt <= 2'd0;
                            end else begin
                                araddr <= block_base_addr + ({{30{1'b0}}, burst_cnt} + 32'd1) * 32'd4;
                                arvalid <= 1'b1;
                            end
                        end
                    end
                    ifu_valid <= 1'b0;
                    fu_to_du_bus <= 'b0;
                    if(icache_hit & idu_ready) begin
                        fu_to_du_bus <= {pc[31:2], icache_data};
                        ifu_valid <= exu_dnpc_valid ? 1'b0 : 1'b1;
                    end
                end
                default: begin end
            endcase
        end
    end

endmodule
