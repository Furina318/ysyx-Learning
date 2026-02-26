`include "ysyx_25010030_define.vh"

module ysyx_25010030_IF_AXI (
    input             clk         ,
    input             reset       ,

    input             EX_flush    ,
    input      [31:0] EX_flush_pc ,

    input             ID_ready    ,
    output reg        IF_valid    ,

    output reg [31:0] IF_ID_pc    ,
    output reg [31:0] IF_ID_inst  ,

`ifdef BPU
    input             predict_taken ,
    input      [31:0] predict_target,
`endif

`ifdef C_EXPAND
    output wire       is_c_inst,
`endif

    // ========== AXI4-Lite ========== 
    output reg        if_axi_arvalid ,       
    output reg [31:0] if_axi_araddr  ,      
    output reg [ 3:0] if_axi_arid    ,
    output reg [ 7:0] if_axi_arlen   ,
    output reg [ 2:0] if_axi_arsize  ,
    output reg [ 1:0] if_axi_arburst ,      
    output reg        if_axi_rready  ,  
    output reg [31:0] next_pc        ,
    input      [31:0] cache_inst     ,
    input             cache_valid    ,
    input      [31:0] cache_araddr   ,
    input             cache_arvalid  ,
    input      [ 3:0] cache_arid     ,
    input      [ 7:0] cache_arlen    ,
    input      [ 2:0] cache_arsize   ,
    input      [ 1:0] cache_arburst  ,
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

    localparam JAL_OPCODE = 7'b1101111;

    reg flush_once;
    reg once;

    // AXI信号转发（缓存 -> 外部总线）
    always @(*) begin
        if_axi_arvalid = cache_arvalid ;
        if_axi_araddr  = cache_araddr  ;
        if_axi_rready  = cache_rready  ;
        if_axi_arid    = cache_arid    ;
        if_axi_arlen   = cache_arlen   ;
        if_axi_arsize  = cache_arsize  ;
        if_axi_arburst = cache_arburst ;
    end

`ifdef C_EXPAND
    // 头两位不是11则为C压缩指令，且默认cache_inst中双指令都是C，需要拆分
    // wire        is_c_inst;
    wire [31:0] inst;
    reg  [31:0] c_next_pc;
    wire        c_second_inst;
    wire [15:0] cur_c_inst; // 指示现在的inst
    assign c_second_inst = (c_next_pc[1:0] != 2'b00) ? 1'b1 : 1'b0;
    assign cur_c_inst = c_second_inst ? cache_inst[31:16] : cache_inst[15:0];
    assign is_c_inst = (cur_c_inst[1:0] != 2'b11);

    wire [31:0] c_to_32_inst;
    wire        pc_add_2;   // pc是否需要+2
    wire        ctrans_valid;

    ysyx_25010030_C_Decode ctrans_decode (
        .clk      (clk          ),
        .reset    (reset        ),
        .c_inst   (cur_c_inst   ),
        .inst     (c_to_32_inst ),
        .pc_add_2 (pc_add_2     ),
        .valid    (ctrans_valid )
    );

    assign inst = is_c_inst ? c_to_32_inst : cache_inst;

    wire        is_jal     = (inst[6:0] == JAL_OPCODE);
    wire [31:0] immJ       = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    wire [31:0] jal_target = (flush_once ? IF_ID_pc : c_next_pc) + immJ;

`else
    wire        is_jal     = (cache_inst[6:0] == JAL_OPCODE);
    wire [31:0] immJ       = {{12{cache_inst[31]}}, cache_inst[19:12], cache_inst[20], cache_inst[30:21], 1'b0};
    wire [31:0] jal_target = (flush_once ? IF_ID_pc : next_pc) + immJ;
`endif

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
        `ifdef C_EXPAND
        `ifdef NPC
            c_next_pc     <= `RESET_PC;
        `else
            c_next_pc     <= `RESET_FLASH_PC;
        `endif
        `endif
        end
        else begin
            if (EX_flush) begin
                IF_valid   <= 0;
                next_pc    <= EX_flush_pc;
                flush_once <= 1;
                ifu_state  <= WAIT_CACHE;
            `ifdef C_EXPAND
                c_next_pc     <= EX_flush_pc;
            `endif
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

                    `ifdef C_EXPAND
                        if (cache_valid) begin
                            IF_ID_inst <= inst;
                            IF_ID_pc   <= (flush_once) ? IF_ID_pc : c_next_pc;
                            c_next_pc  <= (flush_once          ) ? c_next_pc     : 
                                          (is_jal              ) ? jal_target    : 
                                          (is_c_inst & pc_add_2) ? c_next_pc + 2 : c_next_pc + 4;
                            next_pc    <= (flush_once          ) ? (next_pc & ~32'b11)     : 
                                          (is_jal              ) ? jal_target & ~32'b11    : 
                                          (is_c_inst & pc_add_2 & !c_second_inst) ? next_pc : (next_pc & ~32'b11) + 4;
                            IF_valid   <= (flush_once) ? 1'b0 : 
                                          (is_c_inst ) ? ctrans_valid : 1'b1; 
                            ifu_state  <= IDLE;
                        end
                    `else     
                        if (cache_valid) begin
                            IF_ID_inst <= cache_inst;
                            IF_ID_pc   <= (flush_once) ? IF_ID_pc : next_pc;
                            IF_valid   <= (flush_once) ? 0 : 1;
                        `ifdef BPU
                            next_pc    <= (flush_once) ? next_pc : (predict_taken & (predict_target != 32'h0)) ? predict_target : next_pc + 4;
                                        //   (predict_taken && (is_branch || is_jalr)) ? predict_target : next_pc + 4;
                        `else
                            next_pc    <= (flush_once) ? next_pc : (is_jal) ? jal_target : next_pc + 4;
                        `endif
                            ifu_state  <= IDLE;
                        end
                    `endif
                        
                    end

                    default: ifu_state <= IDLE;
                endcase
            end
        end
    end

endmodule
