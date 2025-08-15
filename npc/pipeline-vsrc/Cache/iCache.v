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
    reg [TAG_BITS-1:0] tag_mem [0:SETS-1][0:WAYS-1];     // 标签存储
    reg [LINE_SIZE*8-1:0] data_mem [0:SETS-1][0:WAYS-1]; // 数据存储 (64字节=512位)
    reg valid [0:SETS-1][0:WAYS-1];                      // 有效位

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

module icache#(
    parameter BASE_ADDR         = 32'h40000000,//基准玛
    parameter CACHE_SIZE        = 1024,    //总的字节
    parameter SET_SIZE          = 32,      //每一块的字节
    parameter SET_ASSOCIATIVITY = 4,   //每一set里面的路数
    parameter DATA_WIDTH        = 32,      
    parameter ADDR_WIDTH        = 32       
)(
    // 系统信号
    input  wire                     M_AXI_ACLK,
    input  wire                     M_AXI_ARESETN,
    
    // CPU接口
    //cpu读地址
    input  wire [ADDR_WIDTH-1:0]    W_CPU_AXI_ARADDR,
    input  wire                     W_CPU_AXI_ARVALID,
    output wire                     W_CPU_AXI_ARREADY,

   //cpu读数据
    output wire [ADDR_WIDTH-1:0]    W_CPU_AXI_RDATA,
    output wire [1:0]               W_CPU_AXI_RRESP,
    output wire                     W_CPU_AXI_RVALID,
    input  wire                     W_CPU_AXI_RREADY,
    
    //merory接口
    // 读地址通道
    output wire [ADDR_WIDTH-1:0]    W_MEMORY_AXI_ARADDR1,
    output wire [ADDR_WIDTH-1:0]    W_MEMORY_AXI_ARADDR2,
    output wire                     W_MEMORY_AXI_ARVALID,
    input  wire                     W_MEMORY_AXI_ARREADY,
    
    // 读数据通道
    input  wire [DATA_WIDTH-1:0]    W_MEMORY_AXI_RDATA1,
    input  wire [ADDR_WIDTH-1:0]    W_MEMORY_AXI_RDATA2,
    /* verilator lint_off UNUSEDSIGNAL */
    input  wire [1:0]               W_MEMORY_AXI_RRESP,
    input  wire                     W_MEMORY_AXI_RVALID,
    output wire                     W_MEMORY_AXI_RREADY,

    output wire                     W_MEMORY_BREAK

);
/*****************功能函数******************/
function integer clogb2(input integer number);//计算以2为底的对数（向上取整）
begin
    for(clogb2 = 0; number > 0;clogb2 = clogb2 + 1)
        number =number >> 1; 
end
endfunction
// ========================= 参数计算 =========================
localparam SET_WORDS = SET_SIZE / (DATA_WIDTH / 8);                       //一个set可以储存的数据数量
localparam NUM_SETS = CACHE_SIZE / SET_SIZE;                              //set数量
localparam SET_INDEX_WIDTH = clogb2(NUM_SETS);                            //组索引位宽
localparam SET_OFFSET_WIDTH = clogb2(SET_WORDS / SET_ASSOCIATIVITY);      //块内偏移位宽
localparam TAG_WIDTH = ADDR_WIDTH - SET_INDEX_WIDTH - SET_OFFSET_WIDTH;   //tag标签索引
/**********************网表型变量*******************************/
wire                        w_system_rst;
wire [TAG_WIDTH-1:0]        req_tag;
wire [SET_INDEX_WIDTH-1:0]  req_set;
wire [SET_OFFSET_WIDTH-1:0] req_offset;
/*****************逻辑单元****************/
assign                   w_system_rst         = ~M_AXI_ARESETN;

assign                   W_CPU_AXI_ARREADY    = r_cpu_arready;

assign                   W_CPU_AXI_RDATA      = r_cpu_rdata;
assign                   W_CPU_AXI_RRESP      = r_cpu_rresp;

assign                   W_CPU_AXI_RVALID     = r_cpu_rvalid; 
assign                   W_MEMORY_AXI_ARADDR1 = r_memory_araddr1;
assign                   W_MEMORY_AXI_ARADDR2 = r_memory_araddr2;
assign                   W_MEMORY_AXI_ARVALID = r_memory_arvalid;
assign                   W_MEMORY_AXI_RREADY  = r_memory_rready;
assign                   W_MEMORY_BREAK       = r_memory_break;

assign req_tag    = W_CPU_AXI_ARADDR[ADDR_WIDTH-1 : SET_INDEX_WIDTH + SET_OFFSET_WIDTH + 2];
assign req_set    = W_CPU_AXI_ARADDR[SET_INDEX_WIDTH + SET_OFFSET_WIDTH + 2 : SET_OFFSET_WIDTH + 2];
assign req_offset = W_CPU_AXI_ARADDR[SET_OFFSET_WIDTH + 2];//以字为偏移单位                                 ;
/*********************寄存器***************************/
reg [TAG_WIDTH-1:0]        tag_ram [0:NUM_SETS-1][0:SET_ASSOCIATIVITY-1];
reg [DATA_WIDTH-1:0]       data_ram [0:NUM_SETS-1][0:SET_ASSOCIATIVITY-1][0:(SET_WORDS/SET_ASSOCIATIVITY)-1];
reg                        valid_ram [0:NUM_SETS-1][0:SET_ASSOCIATIVITY-1];
reg [1:0]                  lru_counter [0:NUM_SETS-1][0:SET_ASSOCIATIVITY-1];//  1024/32/4=8,每一组有四路，每一路有8个字节
reg                        r_cpu_arready;        
reg [DATA_WIDTH -1 : 0]    r_cpu_rdata;         
reg [1:0]                  r_cpu_rresp;                                 
reg                        r_cpu_rvalid;              
reg [ADDR_WIDTH -1:0]      r_memory_araddr1;
reg [ADDR_WIDTH -1:0]      r_memory_araddr2;        
reg                        r_memory_arvalid; 
reg                        r_memory_rready;   
reg [SET_INDEX_WIDTH-1:0]  saved_set;
reg [TAG_WIDTH-1:0]        saved_tag;
reg [SET_OFFSET_WIDTH-1:0] saved_offset;
reg [1:0]                  hit_way;
reg                        cache_hit;
reg [1:0]                  replace_way; 
reg [1:0]                  r_memory_break;
reg [31:0]                 min_val;
/**********************************进程*************************/
/********************************逻辑进程***********************/
initial begin
    r_cpu_arready    = 1;
    r_cpu_rvalid     = 0;
    r_memory_arvalid = 0;
    r_memory_rready  = 0;
    r_cpu_rresp      = 2'b00;
    hit_way          = 2'b00;
    r_memory_araddr1 = 32'b0;
    r_memory_araddr2 = 32'b0;
    
    saved_set    = {SET_INDEX_WIDTH{1'b0}};
    saved_tag    = {TAG_WIDTH{1'b0}};
    saved_offset = {SET_OFFSET_WIDTH{1'b0}};//存储
    r_memory_break = 2'b0;

    for (int i = 0; i < NUM_SETS; i++) begin
        for (int j = 0; j < SET_ASSOCIATIVITY; j++) begin
            tag_ram[i][j]     = 0;
            valid_ram[i][j]   = 0;
            lru_counter[i][j] = 0;
            for(int k = 0; k < SET_WORDS/SET_ASSOCIATIVITY; k++) begin
                data_ram[i][j][k] = {DATA_WIDTH{1'b0}};
            end
        end
    end
end
always @(posedge M_AXI_ACLK) begin
    if (w_system_rst) begin
        r_cpu_arready    <= 1;
        r_cpu_rvalid     <= 0;
        r_memory_arvalid <= 0;
        r_memory_rready  <= 0;
        r_memory_break   <= 2'b00;
        hit_way          <= 2'b00;

        for (int i = 0; i < NUM_SETS; i++) begin
            for (int j = 0; j < SET_ASSOCIATIVITY; j++) begin
                valid_ram[i][j]   <= 0;
                lru_counter[i][j] <= 0;
            end
        end
    end else begin
        if(W_CPU_AXI_ARVALID && r_cpu_arready && r_memory_break == 2'b00) begin
            saved_tag    <= req_tag;
            saved_set    <= req_set;
            saved_offset <= req_offset;//存储

            r_memory_arvalid <= 1;
            r_memory_araddr1 <= {W_CPU_AXI_ARADDR[31:3], 3'b000}; //对齐地址
            r_memory_araddr2 <= {W_CPU_AXI_ARADDR[31:3], 3'b100}; //下一个字地址
            
            r_cpu_arready <= 0;

            if (cache_hit) begin
                r_cpu_rdata      <= data_ram[req_set][hit_way][req_offset];
                r_cpu_rresp      <= 2'b00;
                r_cpu_rvalid     <= 1;
                r_memory_break   <= 2'b11;//设置命中状态
                r_memory_arvalid <= 0;    //取消内存请求
                for (int i = 0; i < SET_ASSOCIATIVITY; i++) begin
                        lru_counter[req_set][i] <= (i == hit_way) ? 2'b11 :  (lru_counter[req_set][i] > 0) ? lru_counter[req_set][i] - 1 : 0;
                    end
                end
            else begin
                r_memory_break  <= 2'b01; //设置未命中状态
                r_memory_rready <= 1;     //准备接受内存数据
            end
        end
    end

    if(W_MEMORY_AXI_ARREADY && r_memory_arvalid )begin
        r_memory_arvalid <= 0;
    end
    //缓存未命中处理
    if(r_cpu_arready == 0 && hit_way == 0 && r_memory_break == 2'b01 ) begin
        if(W_MEMORY_AXI_RVALID && r_memory_rready) begin
            r_memory_rready <= 0;
            //写入缓存
            data_ram[saved_set][replace_way][0] <= W_MEMORY_AXI_RDATA1;
            data_ram[saved_set][replace_way][1] <= W_MEMORY_AXI_RDATA2;
            //更新缓存状态
            valid_ram[saved_set][replace_way] <= 1;
            tag_ram[saved_set][replace_way]   <= saved_tag;
            for (int i = 0; i < SET_ASSOCIATIVITY; i++) begin
                lru_counter[saved_set][i] <= (i == replace_way) ? 2'b11 :  (lru_counter[saved_set][i] > 0) ? lru_counter[saved_set][i] - 1 : 0;
            end
            r_cpu_rdata    <= data_ram[saved_set][replace_way][saved_offset];
            r_cpu_rvalid   <= 1;
            r_cpu_rresp    <= 2'b00;
            r_memory_break <= 2'b00;
        end
    end
    if(r_cpu_rvalid && W_CPU_AXI_RREADY) begin
        r_cpu_rvalid<=0; 
        r_cpu_arready<=1;
        //重置命中状态
        hit_way  <=2'b00;
        cache_hit<=0;
        r_memory_arvalid<=0;
    end
end
//***********************lru替换策略以及命中检查*****************************//
always @(*) begin
    replace_way = 0;
    min_val = 30; 
    //遍历所有路，找到LRU计数器最小的路
    for (int i = 0; i < SET_ASSOCIATIVITY; i++) begin
        if (lru_counter[saved_set][i] < min_val) begin
            min_val = lru_counter[saved_set][i];
            replace_way = i;
        end
    end
end
//缓存命中检测
always @(*) begin
    cache_hit = 0;
    hit_way = 0;
    //遍历所有的路，检查是否命中
    for (int i = 0; i < SET_ASSOCIATIVITY; i++) begin
        if (valid_ram[req_set][i] && (tag_ram[req_set][i] == req_tag)) begin
            cache_hit = 1;
            hit_way = i;
        end
    end
end
endmodule



