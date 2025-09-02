/* ****************************************
    * iCache.v - 指令缓存模块（直接映射版，无LRU）
    * 
    * 该模块实现了直接映射结构的指令缓存，移除了LRU替换逻辑。
    * 未命中时直接覆盖当前索引位置的块，支持16字节块突发传输。
    *
***************************************** */
module iCache #(
    parameter CACHE_SIZE = 64,    // 缓存总大小（字节）
    parameter BLOCK_SIZE = 16     // 块大小（16字节）
)(
    input             clk,        // 时钟信号
    input             reset,      // 复位信号
    input             is_fencei,  // 是否为fence.i指令（清空缓存）
    input      [31:0] addr,       // 指令地址
    output reg [31:0] inst,       // 输出指令
    output reg        valid,      // 指令有效信号

    // AXI接口信号（支持突发传输）
    output reg [31:0] axi_araddr,  // AXI读地址
    output reg        axi_arvalid, // AXI读地址有效
    input             axi_arready, // AXI读地址就绪
    output reg [ 3:0] axi_arid,
    output reg [ 7:0] axi_arlen,   // 突发长度（数量-1）
    output reg [ 2:0] axi_arsize,  // 数据宽度（字节）
    output reg [ 1:0] axi_arburst, // 突发类型
    input             axi_rvalid,  // AXI读数据有效
    output reg        axi_rready,  // AXI读数据就绪
    input      [31:0] axi_rdata,   // AXI读数据
    input      [1:0]  axi_rresp,   // AXI读响应
    input      [ 3:0] axi_rid,
    input             axi_rlast    // 突发传输结束标志
);
`ifdef VERILATOR
    // import "DPI-C" function void cache_counter(input bit ihit);
`endif

    // 地址划分 - 直接映射结构（块大小16字节）
    // 31           标签         直接映射索引    块内偏移(4位)  0
    // +-------------+-----------+------------+
    // |     tag     |  index    |  offset    |
    // +-------------+-----------+------------+
    // localparam NUM_BLOCKS         = CACHE_SIZE / BLOCK_SIZE;  // 总块数
    localparam NUM_BLOCKS         = 4;                        // 总块数
    // localparam BLOCK_OFFSET_WIDTH = $clog2(BLOCK_SIZE);       // 块内偏移宽度（4位 for 16字节）
    localparam BLOCK_OFFSET_WIDTH = 4;                        // 块内偏移宽度（4位 for 16字节）
    // localparam INDEX_WIDTH        = $clog2(NUM_BLOCKS);       // 直接映射索引宽度
    localparam INDEX_WIDTH        = 2;                        // 直接映射索引宽度
    // localparam TAG_WIDTH          = 32 - INDEX_WIDTH - BLOCK_OFFSET_WIDTH; // 标签宽度
    localparam TAG_WIDTH          = 26;                       // 标签宽度
    // localparam BEATS_PER_BLOCK    = BLOCK_SIZE / 4;           // 每块的32位数据数（16/4=4）
    localparam BEATS_PER_BLOCK    = 4;                        // 每块的32位数据数（16/4=4）

    // 存储器定义 
    reg [TAG_WIDTH-1:0] tag_ram   [0:NUM_BLOCKS-1];          // 标签存储器
    reg [         31:0] data_ram  [0:NUM_BLOCKS-1][0:BEATS_PER_BLOCK-1]; // 数据存储器
    reg                 valid_ram [0:NUM_BLOCKS-1];          // 有效位       

    // 地址分解
    wire [         TAG_WIDTH-1:0] req_tag    = addr[31 : 32 - TAG_WIDTH];
    wire [       INDEX_WIDTH-1:0] req_index  = addr[INDEX_WIDTH + BLOCK_OFFSET_WIDTH - 1 : BLOCK_OFFSET_WIDTH];
    // wire [BLOCK_OFFSET_WIDTH-1:0] req_offset = addr[BLOCK_OFFSET_WIDTH - 1 : 0];
    // wire [                   1:0] beat_idx   = req_offset[3:2];  // 块内32位数据索引
    wire [                   1:0] beat_idx   = addr[3:2];  // 块内32位数据索引

    // 命中检测信号
    reg hit;             // 命中标志

    // 保存当前请求信息
    reg [         TAG_WIDTH-1:0] saved_tag;    // 保存标签
    reg [       INDEX_WIDTH-1:0] saved_index;  // 保存索引
    reg [                   1:0] saved_beat_idx; // 保存块内数据索引

    // 状态机定义
    localparam IDLE = 2'b00;
    localparam MISS = 2'b01;
    localparam READ = 2'b10;  // 接收突发传输数据
    localparam FILL = 2'b11;  // 填充缓存块

    reg [1:0] state, next_state;
    reg busy;  // 缓存忙信号

    // 突发传输相关信号
    reg [ 1:0] beat_cnt;  // 已接收的突发beat数（0-3）
    reg [31:0] block_data [0:BEATS_PER_BLOCK-1];  // 存储块内所有32位数据

    // 保存请求信息
    always @(posedge clk) begin
        if (reset) begin
            saved_tag      <= 0;
            saved_index    <= 0;
            saved_beat_idx <= 0;
        end else if (!busy) begin
            saved_tag      <= req_tag;
            saved_index    <= req_index;
            saved_beat_idx <= beat_idx; 
        end
    end

    // 状态寄存器
    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    // 状态转换逻辑
    always @(*) begin
        case (state)
            IDLE: next_state = hit ? IDLE : (!busy ? MISS : IDLE);
            MISS: next_state = (axi_arvalid && axi_arready) ? READ : MISS; 
            READ: next_state = (axi_rvalid && axi_rready && axi_rlast) ? FILL : READ;
            FILL: next_state = IDLE; 
            default: next_state = IDLE;
        endcase
    end

    // 命中检测逻辑
    always @(*) begin
        hit = 1'b0;
        // 有效位为1且标签匹配，且非FENCE.I指令→命中
        if (valid_ram[req_index] && (tag_ram[req_index] == req_tag) && !is_fencei) begin
            hit = 1'b1;
        end
    end

    // AXI突发传输配置与控制
    always @(posedge clk) begin
        if (reset) begin
            axi_arvalid <= 1'b0;
            axi_araddr  <= 32'h0;
            axi_arid    <= 4'h0;
            axi_arlen   <= 8'h0;
            axi_arsize  <= 3'h0;
            axi_arburst <= 2'h0;
        end else if (state == MISS && !axi_arvalid) begin
            // 突发传输配置：16字节块=4个32位beat
            axi_araddr  <= {addr[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}};  // 块对齐地址
            axi_arvalid <= 1'b1;
            axi_arid    <= 4'h1;
            axi_arlen   <= 8'h3;  // 4拍突发
            axi_arsize  <= 3'b010;  // 4字节
            axi_arburst <= 2'b01;  // 递增突发
        end else if (axi_arready) begin
            axi_arvalid <= 1'b0; 
        end
    end

    // AXI读数据通道控制与块数据接收
    integer i;
    always @(posedge clk) begin
        if (reset) begin
            axi_rready <= 1'b0;
            beat_cnt   <= 2'h0;
            // for (i = 0; i < BEATS_PER_BLOCK; i++) begin
            //     block_data[i] <= 32'h0;
            // end
            block_data[0] <= 32'h0;
            block_data[1] <= 32'h0;
            block_data[2] <= 32'h0;
            block_data[3] <= 32'h0;
        end else begin
            case (state)
                MISS: begin
                    axi_rready <= 1'b1;
                    beat_cnt   <= 2'h0;
                end
                READ: begin
                    axi_rready <= 1'b1;
                    if (axi_rvalid) begin
                        block_data[beat_cnt] <= axi_rdata;
                        beat_cnt <= beat_cnt + 1'b1;
                    end
                end
                default: begin
                    axi_rready <= 1'b0;
                    beat_cnt   <= 2'h0;
                end
            endcase
        end
    end
    
    // FENCE.I指令处理：清空所有缓存块的有效位
    integer idx;
    always @(posedge clk) begin
        if(is_fencei) begin
            for (idx = 0; idx < NUM_BLOCKS; idx = idx + 1) begin
                valid_ram[idx] <= 1'b0;
            end
        end
    end
    
    // 缓存初始化、命中处理、填充处理（无LRU逻辑）
    integer b;
    always @(posedge clk) begin
        if (reset) begin
            // 初始化缓存：所有块无效
            for (idx = 0; idx < NUM_BLOCKS; idx = idx + 1) begin
                valid_ram[idx] <= 1'b0;
                tag_ram[idx]   <= {TAG_WIDTH{1'b0}};
                for (b = 0; b < BEATS_PER_BLOCK; b = b + 1) begin
                    data_ram[idx][b] <= 32'h0;
                end
            end
            inst  <= 32'h0;
            valid <= 1'b0;
            busy  <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    busy  <= 1'b0;
                    valid <= 1'b0;
                    
                    if (hit) begin
                        // 命中：输出指令
                        inst  <= data_ram[req_index][beat_idx];
                        valid <= 1'b1;
                    // `ifdef VERILATOR
                    //     cache_counter(1'b1);  // 统计命中
                    // `endif
                    end else if (!busy) begin
                        // 未命中：进入忙状态
                        busy  <= 1'b1;
                        valid <= 1'b0;
                    // `ifdef VERILATOR
                    //     cache_counter(1'b0);  // 统计未命中
                    // `endif
                    end
                end

                MISS, READ: begin
                    valid <= 1'b0;
                    busy  <= 1'b1;
                end

                FILL: begin
                        // 填充缓存：直接覆盖当前索引的块（无LRU判断）
                        valid_ram[saved_index] <= 1'b1;
                        tag_ram[saved_index]   <= saved_tag;
                        for (b = 0; b < BEATS_PER_BLOCK; b = b + 1) begin
                            data_ram[saved_index][b] <= block_data[b];
                        end
                        // 输出当前请求的指令
                        inst  <= block_data[saved_beat_idx];
                        valid <= 1'b1;
                        busy  <= 1'b0;
                    end
                default: begin end
            endcase
        end
    end

endmodule
