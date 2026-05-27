`include "config.vh"

module ifu (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_wash_dnpc_en,
    input  wire [31: 0] exu_wash_dnpc,
    output wire         pc_updata,
    input  wire         idu_ready,
    output wire         ifu_valid,
    output reg  [31: 0] pc,

    output wire [31: 0] icache_addr,
    output wire         icache_valid,
    input  wire         icache_hit,
    input  wire [31: 0] bpu_dnpc
);
    wire [31:0] dnpc = exu_wash_dnpc_en ? exu_wash_dnpc : bpu_dnpc;
    assign      pc_updata = icache_hit & idu_ready;

    assign icache_addr  = pc;
    assign icache_valid = idu_ready;
    assign ifu_valid    = icache_hit & ~exu_wash_dnpc_en;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
`ifdef NPC
            pc <= `NPC_RESET_VAL;
`else
            pc <= `YSYXSOC_RESET_VAL;
`endif
        end else begin
            pc <= pc_updata ? dnpc : pc;
        end
    end

endmodule