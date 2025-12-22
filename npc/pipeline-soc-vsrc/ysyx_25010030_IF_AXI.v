`include "ysyx_25010030_define.vh"

module ysyx_25010030_IF_AXI (
    input             clk,
    input             reset,

    input             EX_flush,
    input      [31:0] EX_flush_pc,
    // input             ex_fencei,

    input             ID_ready,
    output reg        IF_valid,

    output reg [31:0] IF_ID_pc,
    output reg [31:0] IF_ID_inst,

`ifdef BPU
    input             predict_taken,
    input      [31:0] predict_target,
`endif

    // ========== AXI4-Lite ========== 
    output reg        if_axi_arvalid,       // 读地址有效
    // input             axi_if_arready,       // 读地址就绪
    output reg [31:0] if_axi_araddr,        // 读地址
    output reg [ 3:0] if_axi_arid,
    output reg [ 7:0] if_axi_arlen,
    output reg [ 2:0] if_axi_arsize,
    output reg [ 1:0] if_axi_arburst,
    // input      [31:0] axi_if_rdata,         // 读数据
    // input             axi_if_rvalid,        // 读数据有效
    output reg        if_axi_rready,        // 读数据就绪
    // input      [ 1:0] axi_if_rresp,         // 读响应
    // input      [ 3:0] axi_if_rid,
    // input             axi_if_rlast
    output reg [31:0] next_pc,
    input      [31:0] cache_inst,
    input             cache_valid,
    input      [31:0] cache_araddr,
    input             cache_arvalid,
    input      [ 3:0] cache_arid,
    input      [ 7:0] cache_arlen,
    input      [ 2:0] cache_arsize,
    input      [ 1:0] cache_arburst,
    input             cache_rready
);

    // 状态机定义
    reg [ 1:0] ifu_state;
    localparam IDLE       = 2'b00;
    localparam WAIT_FLUSH = 2'b01;
    localparam WAIT_CACHE = 2'b11;  // 等待缓存响应

`ifdef BPU
    localparam JALR_OPCODE   = 7'b1100111;
    localparam BRANCH_OPCODE = 7'b1100011;
    wire is_branch = (cache_inst[6:0] == BRANCH_OPCODE);
    wire is_jalr   = (cache_inst[6:0] == JALR_OPCODE) && (cache_inst[14:12] == 3'b000);
`endif

    // localparam FENCEI = 32'h0000100f;
    localparam JAL_OPCODE = 7'b1101111;

    // 内部信号
    reg flush_once;
    reg once;

    // wire        is_fencei = (IF_ID_inst == FENCEI);
    wire        is_jal     = (cache_inst[6:0] == JAL_OPCODE);
    wire [31:0] immJ       = {{12{cache_inst[31]}}, cache_inst[19:12], cache_inst[20], cache_inst[30:21], 1'b0};
    wire [31:0] jal_target = (flush_once ? IF_ID_pc : next_pc) + immJ;

    // AXI信号转发（缓存 -> 外部总线）
    always @(*) begin
        if_axi_arvalid = cache_arvalid;
        if_axi_araddr  = cache_araddr;
        if_axi_rready  = cache_rready;
        if_axi_arid    = cache_arid;
        if_axi_arlen   = cache_arlen;
        if_axi_arsize  = cache_arsize;
        if_axi_arburst = cache_arburst;
    end

    // 主控制逻辑
    always @(posedge clk) begin
        if (reset) begin
        `ifdef NPC
            IF_ID_pc   <= `RESET_PC;
            next_pc    <= `RESET_PC;
        `else
            IF_ID_pc   <= `RESET_FLASH_PC;
            next_pc    <= `RESET_FLASH_PC;
        `endif
            IF_ID_inst <= 0;
            IF_valid   <= 0;
            ifu_state  <= IDLE;
            flush_once <= 0;
            once       <= 1;
        end
        else begin
            if (EX_flush) begin
                IF_valid   <= 0;
                next_pc    <= EX_flush_pc;
                flush_once <= 1;
                ifu_state  <= WAIT_CACHE;
            end
            else begin
                case (ifu_state)
                    IDLE: begin
                        if ((IF_valid && ID_ready) || flush_once || once) begin
                            once       <= 0;
                            flush_once <= 0;
                            IF_valid   <= 0;
                            ifu_state  <= WAIT_FLUSH;
                        end
                    end
                    WAIT_FLUSH: begin
                        ifu_state <= WAIT_CACHE;
                    end
                    WAIT_CACHE: begin       
                        if (cache_valid) begin
                            IF_ID_inst <= cache_inst;
                            IF_ID_pc   <= (flush_once) ? IF_ID_pc : next_pc;
                            IF_valid   <= (flush_once) ? 0 : 1;
                        `ifdef BPU
                            next_pc    <= (flush_once) ? next_pc : (is_jal) ? jal_target :
                                          (predict_taken & (predict_target != 32'h0)) ? predict_target : next_pc + 4;
                                        //   (predict_taken && (is_branch || is_jalr)) ? predict_target : next_pc + 4;
                        `else
                            next_pc    <= (flush_once) ? next_pc : (is_jal) ? jal_target : next_pc + 4;
                        `endif
                            ifu_state  <= IDLE;
                        end
                        
                    end

                    default: ifu_state <= IDLE;
                endcase
            end
        end
    end

endmodule
