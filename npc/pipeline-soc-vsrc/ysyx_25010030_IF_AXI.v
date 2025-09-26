`include "ysyx_25010030_define.vh"

// 带iCache的取指模块
module ysyx_25010030_IF_AXI (
    input             clk,
    input             reset,

    input             EX_flush,
    input      [31:0] EX_flush_pc,

    input             ID_ready,
    output reg        IF_valid,

    output reg [31:0] IF_ID_pc,
    output reg [31:0] IF_ID_inst,

    // AXI4-Lite 接口信号（与 SRAM 连接）
    output reg        if_axi_arvalid,       // 读地址有效
    input             axi_if_arready,       // 读地址就绪
    output reg [31:0] if_axi_araddr,        // 读地址
    output reg [ 3:0] if_axi_arid,
    output reg [ 7:0] if_axi_arlen,
    output reg [ 2:0] if_axi_arsize,
    output reg [ 1:0] if_axi_arburst,
    input      [31:0] axi_if_rdata,         // 读数据
    input             axi_if_rvalid,        // 读数据有效
    output reg        if_axi_rready,        // 读数据就绪
    input      [ 1:0] axi_if_rresp,         // 读响应
    input      [ 3:0] axi_if_rid,
    input             axi_if_rlast

    // output reg [31:0] ifu_active_cycles
);
// `ifdef VERILATOR
    // import "DPI-C" function void counter(input int inst_type, input int ifu_inc, input int lsu_inc, input int exu_inc);
// `endif

    // 状态机定义
    reg [1:0] ifu_state;
    localparam IDLE = 2'b00;
    localparam WAIT_FLUSH = 2'b01;
    localparam WAIT_CACHE = 2'b11;  // 等待缓存响应

    localparam FENCEI = 32'h0000100f;
    localparam JAL_OPCODE = 7'b1101111;

    // 内部信号
    reg [31:0] next_pc;
    // reg cache_req;
    reg flush_once;
    reg once;
    
    // cache接口信号
    wire [31:0] cache_inst;
    wire        cache_valid;

    wire [31:0] cache_araddr;
    wire        cache_arvalid;
    wire [ 3:0] cache_arid;
    wire [ 7:0] cache_arlen;
    wire [ 2:0] cache_arsize;
    wire [ 1:0] cache_arburst;
    wire        cache_rready;

    wire        is_fencei = (IF_ID_inst == FENCEI);
    wire        is_jal    = (cache_inst[6:0] == JAL_OPCODE);
    wire [31:0] immJ      = {{12{cache_inst[31]}}, cache_inst[19:12], cache_inst[20], cache_inst[30:21], 1'b0};
    wire [31:0] jal_target = (flush_once ? IF_ID_pc : next_pc) + immJ;
    
    // 实例化iCache模块
    ysyx_25010030_iCache u_icache (
        .clk            (clk           ),
        .reset          (reset         ),
        .is_fencei      (is_fencei     ),
        .addr           (next_pc       ),
        .inst           (cache_inst    ),
        .valid          (cache_valid   ),
        .axi_araddr     (cache_araddr  ),
        .axi_arvalid    (cache_arvalid ),
        .axi_arready    (axi_if_arready),
        .axi_arid       (cache_arid    ),  
        .axi_arlen      (cache_arlen   ),  
        .axi_arsize     (cache_arsize  ),  
        .axi_arburst    (cache_arburst ),  
        .axi_rvalid     (axi_if_rvalid ),
        .axi_rready     (cache_rready  ),
        .axi_rdata      (axi_if_rdata  ),
        .axi_rresp      (axi_if_rresp  ),
        .axi_rid        (axi_if_rid    ),  
        .axi_rlast      (axi_if_rlast  )   
    );

    // 统计活跃周期
    // always @(posedge clk) begin
    //     if (reset) begin
    //         ifu_active_cycles <= 0;
    //     end else if (ifu_state != IDLE || cache_arvalid) begin
    //         ifu_active_cycles <= ifu_active_cycles + 1;
    //     end
    // end

    // AXI信号转发（缓存 -> 外部总线）
    always @(*) begin
        // if (cache_arvalid || cache_rready) begin
            if_axi_arvalid = cache_arvalid;
            if_axi_araddr  = cache_araddr;
            if_axi_rready  = cache_rready;
            if_axi_arid    = cache_arid;
            if_axi_arlen   = cache_arlen;
            if_axi_arsize  = cache_arsize;
            if_axi_arburst = cache_arburst;
        // end else begin
        //     if_axi_arvalid = 0;
        //     if_axi_araddr  = 0;
        //     if_axi_rready  = 0;
        //     if_axi_arid    = 0;
        //     if_axi_arlen   = 0;
        //     if_axi_arsize  = 0;
        //     if_axi_arburst = 0;
        // end
    end

    // 主控制逻辑
    always @(posedge clk) begin
        if (reset) begin
        `ifdef YSYXSOC
            IF_ID_pc   <= `RESET_FLASH_PC;
            next_pc    <= `RESET_FLASH_PC;
        `else
            IF_ID_pc   <= `RESET_PC;
            next_pc    <= `RESET_PC;
        `endif
            IF_ID_inst <= 0;
            IF_valid   <= 0;
            ifu_state  <= IDLE;
            // cache_req  <= 0;
            flush_once <= 0;
            once       <= 1;
        end
        else begin
            // 处理冲刷信号
            if (EX_flush) begin
                IF_valid   <= 0;
                next_pc    <= EX_flush_pc;
                flush_once <= 1;
                ifu_state  <= WAIT_CACHE;
            end
            else begin
                case (ifu_state)
                    IDLE: begin
                        // 准备新的取指请求
                        if ((IF_valid && ID_ready) || flush_once || once) begin
                            once       <= 0;
                            flush_once <= 0;
                            // cache_req  <= 1;
                            IF_valid   <= 0;
                            ifu_state  <= WAIT_FLUSH;
                        end
                    end
                    WAIT_FLUSH: begin
                        ifu_state <= WAIT_CACHE;
                    end
                    WAIT_CACHE: begin
                        // cache_req <= 0;
                        
                        // 缓存命中
                        if (cache_valid) begin
                            IF_ID_inst <= cache_inst;
                            IF_ID_pc   <= (flush_once) ? IF_ID_pc : next_pc;
                            IF_valid   <= (flush_once) ? 0 : 1;
                            next_pc    <= (flush_once) ? next_pc : (is_jal) ? jal_target : next_pc + 4;
                            ifu_state  <= IDLE;
                        // `ifdef VERILATOR
                        //     // 统计指令
                        //     counter(7, 1, 0, 0);
                        // `endif
                        end
                        
                    end

                    default: ifu_state <= IDLE;
                endcase
            end
        end
    end

endmodule
