module iCache #(
    parameter CACHE_SIZE = 1024,
    parameter BLOCK_SIZE = 32,
    parameter WAYS       = 2
)(
    input             clk,
    input             reset,
    input      [31:0] addr,
    output reg [31:0] inst,
    output reg        valid,

    output reg [31:0] axi_araddr,
    output reg        axi_arvalid,
    input             axi_arready,
    input             axi_rvalid,
    output reg        axi_rready,
    output reg [31:0] axi_rdata,
    input      [1:0]  axi_rresp
);
    //  31    m+n m+n-1   m m-1    0
    // +---------+---------+--------+
    // |   tag   |  index  | offset |
    // +---------+---------+--------+
    localparam NUM_BLOCKS         = CACHE_SIZE / BLOCK_SIZE;
    localparam NUM_SETS           = NUM_BLOCKS / WAYS;
    localparam SET_INDEX_WIDTH    = $clog2(NUM_SETS);
    localparam BLOCK_OFFSET_WIDTH = $clog2(BLOCK_SIZE);
    localparam TAG_WIDTH          = 32 - SET_INDEX_WIDTH - BLOCK_OFFSET_WIDTH;

    reg [TAG_WIDTH-1:0] tag_ram [0:NUM_SETS-1][0:WAYS-1];//标签存储器
    reg [         31:0] data_ram [0:NUM_SETS-1][0:WAYS-1][0:7];//数据存储器，每一块32字节，8个字
    reg                 valid_ram [0:NUM_SETS-1][0:WAYS-1];
    reg [          3:0] lru_counter [0:NUM_SETS-1][0:WAYS-1];//LRU计数器，每路4位计数器

    wire [      TAG_WIDTH-1:0] req_tag = addr[31:32-TAG_WIDTH];
    wire [SET_INDEX_WIDTH-1:0] req_index = addr[SET_INDEX_WIDTH + BLOCK_OFFSET_WIDTH-1:BLOCK_OFFSET_WIDTH];
    wire [                2:0] req_offset = addr[4:2];  // 字偏移 (4字节为单位)

    reg                       hit;
    reg [           WAYS-1:0] hit_way;
    reg [           WAYS-1:0] hit_way_reg;
    reg [      TAG_WIDTH-1:0] saved_tag;
    reg [SET_INDEX_WIDTH-1:0] saved_index;
    reg [                2:0] saved_offset;

    // ========================= 状态机 =========================
    localparam IDLE = 2'b00;
    localparam MISS = 2'b01;
    localparam READ = 2'b10;
    localparam FILL = 2'b11;

    reg [1:0] state, next_state;
    reg busy;  // 缓存忙信号

    always @(posedge clk) begin
        if (reset) begin
            saved_tag <= 0;
            saved_index <= 0;
            saved_offset <= 0;
            hit_way_reg <= 0;
        end 
        else if (!busy) begin
            saved_tag <= req_tag;
            saved_index <= req_index;
            saved_offset <= req_offset;
            hit_way_reg <= hit_way;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
        end 
        else begin
            state <= next_state;
        end
    end

    always @(*) begin
        case (state)
            IDLE: begin
                if (hit) begin
                    next_state = IDLE;
                end else begin
                    next_state = MISS;
                end
            end
            
            MISS: begin
                if (axi_arvalid && axi_arready) begin
                    next_state = READ;
                end else begin
                    next_state = MISS;
                end
            end
            
            READ: begin
                if (word_count == 3'd7 && axi_rvalid && axi_rready) begin
                    next_state = FILL;
                end else begin
                    next_state = READ;
                end
            end
            
            FILL: begin
                next_state = IDLE;
            end
            
            default: next_state = IDLE;
        endcase
    end

    // ========================= 未命中处理 =========================
    reg [2:0] word_count;  // 字计数器 (0-7)
    reg [31:0] block_data [0:7];  // 临时块数据存储
    
    // 字计数器逻辑
    always @(posedge clk) begin
        if (reset) begin
            word_count <= 0;
        end else if (state == READ && axi_rvalid && axi_rready) begin
            if (word_count == 3'd7) begin
                word_count <= 0;
            end else begin
                word_count <= word_count + 1;
            end
        end else if (state == IDLE) begin
            word_count <= 0;
        end
    end

    // ========================= LRU替换策略 =========================
    reg [WAYS-1:0] replace_way;
    reg [     3:0] min_val;
    
    // 找到LRU值最小的路
    always @(*) begin
        replace_way = 0;
        min_val = 4'b1111;  // 初始最大值
        
        for (integer j = 0; j < WAYS; j = j + 1) begin
            if (lru_counter[saved_index][j] < min_val) begin
                min_val = lru_counter[saved_index][j];
                replace_way = j;
            end
        end
    end

    // ========================= 缓存填充逻辑 =========================
    always @(posedge clk) begin
        if (reset) begin
            // 初始化缓存
            for (integer s = 0; s < NUM_SETS; s = s + 1) begin
                for (integer w = 0; w < WAYS; w = w + 1) begin
                    valid_ram[s][w] <= 0;
                    lru_counter[s][w] <= w; // 初始LRU值
                    for (integer b = 0; b < 8; b = b + 1) begin
                        data_ram[s][w][b] <= 0;
                    end
                end
            end
            inst <= 0;
            valid <= 0;
            busy <= 0;
        end else begin
            case (state)
                IDLE: begin
                    busy <= 0;
                    valid <= 0;
                    
                    if (hit) begin
                        // 命中：输出指令并更新LRU
                        inst <= data_ram[req_index][hit_way][req_offset];
                        valid <= 1;
                        
                        // 更新LRU：命中的路设置为最大值
                        lru_counter[req_index][hit_way] <= 4'b1111;
                        
                        // 其他路的LRU递减
                        for (integer k = 0; k < WAYS; k = k + 1) begin
                            if (k != hit_way && lru_counter[req_index][k] > 0) begin
                                lru_counter[req_index][k] <= lru_counter[req_index][k] - 1;
                            end
                        end
                    end else if (!busy) begin
                        // 未命中且不忙，准备处理
                        busy <= 1;
                        valid <= 0;
                    end
                end
                
                MISS: begin
                    valid <= 0;
                end
                
                READ: begin
                    valid <= 0;
                end
                
                FILL: begin
                    // 填充缓存块
                    valid_ram[saved_index][replace_way] <= 1;
                    tag_ram[saved_index][replace_way] <= saved_tag;
                    
                    // 复制整个块数据
                    for (integer b = 0; b < 8; b = b + 1) begin
                        data_ram[saved_index][replace_way][b] <= block_data[b];
                    end
                    
                    // 输出请求的指令
                    inst <= block_data[saved_offset];
                    valid <= 1;
                    
                    // 更新LRU：新填充的路设置为最大值
                    lru_counter[saved_index][replace_way] <= 4'b1111;
                    
                    // 其他路的LRU递减
                    for (integer k = 0; k < WAYS; k = k + 1) begin
                        if (k != replace_way && lru_counter[saved_index][k] > 0) begin
                            lru_counter[saved_index][k] <= lru_counter[saved_index][k] - 1;
                        end
                    end
                    
                    busy <= 0;
                end
            endcase
        end
    end

endmodule