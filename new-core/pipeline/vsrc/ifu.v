`include "defines.vh"

module ifu (
    input  wire         clk            ,
    input  wire         rst            ,
    input  wire         exu_flush_en   ,
    input  wire [31: 0] exu_flush_dnpc ,
    output wire         pc_updata      ,
    input  wire         idu_ready      ,
    output wire         ifu_valid      ,
    
    input  wire [31: 0] icache_inst    ,
    output wire [31: 0] inst           ,
    output reg  [31: 0] pc             ,

    output wire [31: 0] icache_addr    ,
    input  wire         icache_valid   ,
    input  wire [31: 0] bpu_dnpc
);
    wire [31:0] dnpc = exu_flush_en ? exu_flush_dnpc : bpu_dnpc;
    assign      pc_updata = icache_valid & idu_ready;

    assign icache_addr  = pc;
    assign inst         = icache_inst;
    assign ifu_valid    = icache_valid & ~exu_flush_en;
    always @(posedge clk) begin
        if (rst) begin
            pc <= `RESET_PC;
        end else begin
            pc <= pc_updata ? dnpc : pc;
        end
    end

endmodule
