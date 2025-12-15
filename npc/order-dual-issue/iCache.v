/*
* I-Cache模块：支持双地址请求的直接映射缓存
* TODO：尚未进行相关的测试
*/
module iCache #(
    parameter CACHE_SIZE = 64,   
    parameter BLOCK_SIZE = 16    
)(
    input wire        clk,     
    input wire        reset,   
    input wire        is_fencei, 
    //地址端口1
    input wire [31:0] addr1,    
    output reg [31:0] inst1,    
    output reg        valid1,
    //地址端口2
    input wire [31:0] addr2,
    output reg [31:0] inst2,   
    output reg        valid2,   

    // AXI接口信号（支持突发传输）
    output reg  [31:0] axi_araddr,  
    output reg         axi_arvalid, 
    input  wire        axi_arready, 
    output wire [ 3:0] axi_arid,
    output wire [ 7:0] axi_arlen,   
    output wire [ 2:0] axi_arsize,  
    output wire [ 1:0] axi_arburst, 
    input  wire        axi_rvalid,  
    output reg         axi_rready,  
    input  wire [31:0] axi_rdata,   
    input  wire [ 1:0] axi_rresp,   
    input  wire [ 3:0] axi_rid,
    input  wire        axi_rlast    
);
    // 地址划分 - 直接映射结构（块大小16字节）
    // 31           标签         直接映射索引    块内偏移(4位)  0
    // +-------------+-----------+------------+
    // |     tag     |  index    |  offset    |
    // +-------------+-----------+------------+
    localparam NUM_BLOCKS         = CACHE_SIZE / BLOCK_SIZE;  // 总块数
    localparam BLOCK_OFFSET_WIDTH = $clog2(BLOCK_SIZE);       // 块内偏移宽度（4位 for 16字节）
    localparam INDEX_WIDTH        = $clog2(NUM_BLOCKS);       // 直接映射索引宽度
    localparam TAG_WIDTH          = 32 - INDEX_WIDTH - BLOCK_OFFSET_WIDTH; // 标签宽度
    localparam BEATS_PER_BLOCK    = BLOCK_SIZE / 4;           // 每块的32位数据数（16/4=4）

    // 存储器定义 
    reg [TAG_WIDTH-1:0] tag_ram   [0:NUM_BLOCKS-1];                      // 标签存储器
    reg [         31:0] data_ram  [0:NUM_BLOCKS-1][0:BEATS_PER_BLOCK-1]; // 数据存储器
    reg                 valid_ram [0:NUM_BLOCKS-1];                      // 有效位       

    // 地址分解
    wire [         TAG_WIDTH-1:0] req_tag1    = addr1[31 : 32 - TAG_WIDTH];
    wire [       INDEX_WIDTH-1:0] req_index1  = addr1[INDEX_WIDTH + BLOCK_OFFSET_WIDTH - 1 : BLOCK_OFFSET_WIDTH];
    wire [                   1:0] beat_idx1   = addr1[3:2];  // 块内32位数据索引

    wire [         TAG_WIDTH-1:0] req_tag2    = addr2[31 : 32 - TAG_WIDTH];
    wire [       INDEX_WIDTH-1:0] req_index2  = addr2[INDEX_WIDTH + BLOCK_OFFSET_WIDTH - 1 : BLOCK_OFFSET_WIDTH];
    wire [                   1:0] beat_idx2   = addr2[3:2];  // 块内32位数据索引

    // 保存当前请求信息（双地址）
    reg [         TAG_WIDTH-1:0] saved_tag1, saved_tag2;
    reg [       INDEX_WIDTH-1:0] saved_index1, saved_index2;
    reg [                   1:0] saved_beat_idx1, saved_beat_idx2;

    // 状态机定义（适配双发射）
    localparam IDLE    = 3'b000;
    localparam READ1   = 3'b001;
    localparam READ2   = 3'b010; 
    localparam FILL1   = 3'b011;  
    localparam FILL2   = 3'b100;  

    reg [2:0] state, next_state;

    reg [ 1:0] beat_cnt;                          // 已接收的突发beat数（0-3）
    reg [31:0] block_data [0:BEATS_PER_BLOCK-1];  // 存储块内所有32位数据
    reg        ar_done;               
    reg        is_same_block;                     // 两个地址是否在同一Block

    // 地址范围判断（双地址），一般情况下无需修改，主要用于Debug作用
    wire in_sdram1 = 1'b1; 
    wire in_sdram2 = 1'b1; 


    // 命中判断
    wire hit1 = valid_ram[req_index1] && (tag_ram[req_index1] == req_tag1) && !is_fencei && in_sdram1;
    wire hit2 = valid_ram[req_index2] && (tag_ram[req_index2] == req_tag2) && !is_fencei && in_sdram2;

    wire any_miss  = !hit1 || !hit2;
    wire only_hit1 =  hit1 && !hit2;
    wire only_hit2 = !hit1 &&  hit2;
    wire both_miss = !hit1 && !hit2;

    // AXI突发传输配置
    assign axi_arid    = 4'h0;                   
    assign axi_arlen   = (in_sdram1 || in_sdram2) ? 8'h3 : 8'b0;  
    assign axi_arburst = (in_sdram1 || in_sdram2) ? 2'b01 : 2'b00;
    assign axi_arsize  = 3'b010;                  

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
            IDLE: begin
                if (!any_miss) begin
                    next_state = IDLE;              // 双命中，保持IDLE
                end else if (hit1 && !hit2) begin
                    next_state = READ2;             // 仅第二个地址缺失，读第二个Block
                end else begin
                    next_state = READ1;             // 第一个缺失（或双缺失），先读第一个Block
                end
            end
            READ1: begin
                // 第一个Block读取完成
                next_state = (axi_rvalid && axi_rready && axi_rlast) ? FILL1 : READ1;
            end
            READ2: begin
                // 第二个Block读取完成
                next_state = (axi_rvalid && axi_rready && axi_rlast) ? FILL2 : READ2;
            end
            FILL1: begin
                // 填充第一个Block后，判断是否需要读第二个
                next_state = hit2 ? IDLE : READ2;
            end
            FILL2: begin
                // 填充第二个Block后返回IDLE
                next_state = IDLE;
            end
            default: next_state = IDLE;
        endcase
    end

    integer idx, b;
    always @(posedge clk) begin
        if (reset) begin
            // 初始化缓存：所有块无效
            for (idx = 0; idx < NUM_BLOCKS; idx = idx + 1) begin
                valid_ram[idx] <= 1'b0;
            end
            inst1  <= 32'h0;
            inst2  <= 32'h0;
            valid1 <= 1'b0;
            valid2 <= 1'b0;

            axi_rready    <= 1'b0;
            axi_arvalid   <= 1'b0;
            beat_cnt      <= 2'h0;
            ar_done       <= 1'b0;
            is_same_block <= 1'b0;
        end else begin
            // FENCE.I指令处理：清空所有缓存块的有效位
            if (is_fencei) begin
                for (idx = 0; idx < NUM_BLOCKS; idx = idx + 1) begin
                    valid_ram[idx] <= 1'b0;
                end
                valid1 <= 1'b0;
                valid2 <= 1'b0;
            end

            case (state)
                IDLE: begin
                    axi_rready  <= 1'b0;
                    axi_arvalid <= 1'b0;
                    beat_cnt    <= 2'h0;
                    ar_done     <= 1'b0;

                    saved_tag1      <= req_tag1;
                    saved_index1    <= req_index1;
                    saved_beat_idx1 <= beat_idx1;
                    saved_tag2      <= req_tag2;
                    saved_index2    <= req_index2;
                    saved_beat_idx2 <= beat_idx2;

                    // 判断是否同Block
                    is_same_block <= (req_index1 == req_index2) && (req_tag1 == req_tag2);

                    // 双命中：直接返回指令
                    if (hit1 && hit2) begin
                        inst1  <= data_ram[req_index1][beat_idx1];
                        valid1 <= 1'b1;
                        inst2  <= data_ram[req_index2][beat_idx2];
                        valid2 <= 1'b1;
                    end else if (hit1 && !hit2) begin
                        // 仅第一个命中，第二个缺失
                        inst1  <= data_ram[req_index1][beat_idx1];
                        valid1 <= 1'b1;
                        inst2  <= 32'h0;
                        valid2 <= 1'b0;
                    end else if (!hit1 && hit2) begin
                        // 仅第二个命中，第一个缺失
                        inst1  <= 32'h0;
                        valid1 <= 1'b0;
                        inst2  <= data_ram[req_index2][beat_idx2];
                        valid2 <= 1'b1;
                    end else begin
                        // 双缺失
                        inst1  <= 32'h0;
                        valid1 <= 1'b0;
                        inst2  <= 32'h0;
                        valid2 <= 1'b0;
                    end
                end

                READ1: begin
                    valid1 <= 1'b0;
                    valid2 <= 1'b0;
                    axi_rready <= 1'b1;

                    if (!axi_arvalid && !ar_done) begin
                        axi_arvalid <= 1'b1;
                        axi_araddr  <= in_sdram1 ? {addr1[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}} : addr1;
                    end else if (axi_arready) begin
                        axi_arvalid <= 1'b0;
                        ar_done     <= 1'b1;
                    end

                    if (axi_rvalid) begin
                        block_data[beat_cnt] <= axi_rdata;
                        beat_cnt             <= beat_cnt + 1'b1;
                    end
                end

                READ2: begin
                    valid1     <= (hit1) ? 1'b1 : 1'b0; // 若第一个已命中，保持有效
                    valid2     <= 1'b0;
                    axi_rready <= 1'b1;

                    if (!axi_arvalid && !ar_done) begin
                        axi_arvalid <= 1'b1;
                        axi_araddr  <= in_sdram2 ? {addr2[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}} : addr2;
                    end else if (axi_arready) begin
                        axi_arvalid <= 1'b0;
                        ar_done     <= 1'b1;
                    end

                    if (axi_rvalid) begin
                        block_data[beat_cnt] <= axi_rdata;
                        beat_cnt             <= beat_cnt + 1'b1;
                    end
                end

                FILL1: begin
                    axi_rready              <= 1'b0;
                    valid_ram[saved_index1] <= 1'b1;
                    tag_ram[saved_index1]   <= saved_tag1;
                    for (b = 0; b < BEATS_PER_BLOCK; b = b + 1) begin
                        data_ram[saved_index1][b] <= block_data[b];
                    end

                    // 返回第一个指令，第二个指令状态保持
                    inst1  <= block_data[saved_beat_idx1];
                    valid1 <= 1'b1;
                    inst2  <= (is_same_block) ? block_data[saved_beat_idx2] : inst2;
                    valid2 <= (is_same_block) ? 1'b1 : valid2;
                end

                FILL2: begin
                    axi_rready              <= 1'b0;
                    valid_ram[saved_index2] <= 1'b1;
                    tag_ram[saved_index2]   <= saved_tag2;
                    for (b = 0; b < BEATS_PER_BLOCK; b = b + 1) begin
                        data_ram[saved_index2][b] <= block_data[b];
                    end

                    // 返回第二个指令，第一个指令保持有效
                    inst2  <= block_data[saved_beat_idx2];
                    valid2 <= 1'b1;
                    inst1  <= inst1;
                    valid1 <= valid1;
                end

                default: begin
                    inst1  <= 32'h0;
                    inst2  <= 32'h0;
                    valid1 <= 1'b0;
                    valid2 <= 1'b0;
                end
            endcase
        end
    end

endmodule