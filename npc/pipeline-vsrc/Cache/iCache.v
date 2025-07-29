/* ****************************************
    * iCache.v - 指令缓存模块（草稿）
    * 
    * 该模块实现了一个简单的指令缓存，支持多路组相联缓存。
    * 包含地址分解、命中检测、LRU 替换策略等功能。
    * 
    * 目前DPI-C的内存访问函数尚不支持如下操作：
    * 实际使用需要调用pmem_read函数从主存读取数据，以及在替换时调用pmem_write函数写回数据。
    *
    * 主要参数：
    * - SETS: 缓存组数
    * - WAYS: 路数
    * - LINE_SIZE: 行大小（字节）
    * - OFFSET_BITS: 偏移位数
    * - INDEX_BITS: 索引位数
    * - TAG_BITS: 标签位数
***************************************** */
module iCache (
    input wire clk,              
    input wire rst,             
    input wire [31:0] addr,      
    output reg [31:0] instr,     
    output reg hit               // 缓存命中信号
);

    // 参数定义
    parameter SETS = 256;        // 组数 (2^8)
    parameter WAYS = 4;          // 路数
    parameter LINE_SIZE = 64;    // 行大小（字节）
    parameter OFFSET_BITS = 6;   // 偏移位数 (log2(64))
    parameter INDEX_BITS = 8;    // 索引位数 (log2(256))
    parameter TAG_BITS = 18;     // 标签位数 (32 - 8 - 6)

    // 地址分解
    wire [OFFSET_BITS-1:0] offset = addr[5:0];    // 偏移
    wire [INDEX_BITS-1:0] index = addr[13:6];     // 组索引
    wire [TAG_BITS-1:0] tag = addr[31:14];        // 标签

    // 缓存存储
    reg [TAG_BITS-1:0] tag_mem [0:SETS-1][0:WAYS-1];    // 标签存储
    reg [LINE_SIZE*8-1:0] data_mem [0:SETS-1][0:WAYS-1]; // 数据存储 (64字节=512位)
    reg valid [0:SETS-1][0:WAYS-1];                     // 有效位

    // LRU 替换策略
    reg [1:0] lru [0:SETS-1][0:WAYS-1];  // LRU 计数器, 0 表示最近使用，1 表示次新使用，2 表示最久未使用(age)

    // 复位逻辑
    integer i, j;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < SETS; i = i + 1) begin
                for (j = 0; j < WAYS; j = j + 1) begin
                    valid[i][j] <= 0;
                    lru[i][j] <= 0;
                end
            end
            hit <= 0;
            instr <= 0;
        end
    end

    // 命中检测
    always @(*) begin
        hit = 0;
        instr = 0;
        for (j = 0; j < WAYS; j = j + 1) begin
            if (valid[index][j] && (tag_mem[index][j] == tag)) begin//如果标签匹配且有效
                hit = 1;//命中
                instr = data_mem[index][j][offset*8 +: 32]; // 提取4字节指令
                break;
            end
        end
    end

    // LRU 更新和替换
    always @(posedge clk) begin
        if (hit) begin
            lru[index][j] <= 0;  // 命中路置 0
            for (int k = 0; k < WAYS; k = k + 1) begin
                if (k != j && lru[index][k] < lru[index][j]) lru[index][k] <= lru[index][k] + 1;// 其他路加 1
            end
        end else if (!hit && !rst) begin
            // 选择 LRU 路
            reg [1:0] max_lru = 0;
            reg [1:0] replace_way = 0;
            for (int k = 0; k < WAYS; k = k + 1) begin
                if (lru[index][k] > max_lru) begin
                    max_lru = lru[index][k];
                    replace_way = k;
                end
            end
            // 替换
            tag_mem[index][replace_way] <= tag;
            data_mem[index][replace_way] <= 512'h0; // 模拟填充数据
            valid[index][replace_way] <= 1;
            lru[index][replace_way] <= 0;  // 替换后置 0
            for (int k = 0; k < WAYS; k = k + 1) begin
                if (k != replace_way) lru[index][k] <= lru[index][k] + 1;
            end
        end
    end

endmodule