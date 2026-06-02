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
    output wire [31: 0] icache_addr    ,
    input  wire         icache_valid   ,
    input  wire [31: 0] bpu_dnpc       ,
    output reg  [31: 0] pc             ,

    output wire         is_call        ,
    output wire         is_ret         ,
    output wire         is_jal         ,
    output wire         is_jalr        ,
    output wire         is_indirect    ,

    output wire [`IF_TO_ID_WD-1:0] if_to_id_bus
);  
    localparam JAL_OP  = 7'b1101111;
    localparam JALR_OP = 7'b1100111;

    wire [31:0] inst;
    reg  [31:0] inst_old;
    wire        sent = icache_valid & (inst != inst_old); //只发送一次
    // 快速译码
    wire [ 6:0] opcode = inst[ 6: 0];
    wire [ 4:0] rd     = inst[11: 7];
    wire [ 4:0] rs1    = inst[19:15];
    wire [31:0] immJ   = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    wire [31:0] jal_target = pc + immJ;
    wire inst_is_call     = ((opcode == JAL_OP) | (opcode == JALR_OP)) & (rd == 5'd1);
    wire inst_is_ret      = (opcode == JALR_OP) && (rd == 5'd0) && (rs1 == 5'd1) && (inst[31:20] == 0);
    wire inst_is_jal      = (opcode == JAL_OP );
    wire inst_is_jalr     = (opcode == JALR_OP);
    wire inst_is_indirect = (opcode == JALR_OP) && (rs1 != 5'd1);

    assign is_call     = sent & inst_is_call;
    assign is_ret      = sent & inst_is_ret;
    assign is_jal      = sent & inst_is_jal;
    assign is_jalr     = sent & inst_is_jalr;
    assign is_indirect = sent & inst_is_indirect;

    wire [31:0] pre_dnpc = inst_is_jal ? jal_target : bpu_dnpc;
    wire [31:0] dnpc = exu_flush_en ? exu_flush_dnpc :
                       inst_is_jal       ? jal_target     :
                       bpu_dnpc;
    assign      pc_updata = icache_valid & idu_ready;

    assign icache_addr  = pc;
    assign inst         = icache_inst;
    assign ifu_valid    = icache_valid & ~exu_flush_en;
    assign if_to_id_bus = {pc, pre_dnpc, inst, inst_is_call, inst_is_ret, inst_is_jal, inst_is_jalr, inst_is_indirect};
    always @(posedge clk) begin
        if (rst) begin
`ifdef YSYXSOC
            pc <= `RESET_FLASH_PC;
`else
            pc <= `RESET_PC;
`endif  
            inst_old <= 32'b0;
        end else begin
            pc       <= pc_updata ? dnpc : pc;
            inst_old <= inst;
        end
    end

endmodule
