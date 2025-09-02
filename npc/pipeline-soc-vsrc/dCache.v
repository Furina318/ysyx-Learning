module dCache #(
    parameter NUM_BLOCKS  = 16,     
    parameter BLOCK_SIZE  = 16,     
    parameter BURST_LEN   = 4       
)(
    input             clk,           
    input             reset,         
    input             we,            
    input      [31:0] addr,          
    input      [31:0] wdata,        
    input      [ 3:0] wstrb,        
    output reg [31:0] rdata,        
    output reg        valid,        
    output reg        busy,
    input             req_valid,
    input      [ 4:0] rstrb,        

    // AXI读接口信号
    output reg [ 3:0] axi_arid,      
    output reg [31:0] axi_araddr,   
    output reg        axi_arvalid,   
    output reg [ 7:0] axi_arlen,    
    output reg [ 2:0] axi_arsize,    
    output reg [ 1:0] axi_arburst,   
    input             axi_arready,   
    input             axi_rvalid,    
    input             axi_rlast,     
    output reg        axi_rready,   
    input      [31:0] axi_rdata,     
    input      [ 1:0] axi_rresp,    
    input      [ 3:0] axi_rid, 

    // AXI写接口信号
    output reg [ 3:0] axi_awid,
    output reg [31:0] axi_awaddr,    
    output reg        axi_awvalid,  
    output reg [ 7:0] axi_awlen,   
    output reg [ 2:0] axi_awsize,  
    output reg [ 1:0] axi_awburst, 
    input             axi_awready,  
    output reg [31:0] axi_wdata,     
    output reg [ 3:0] axi_wstrb,     
    output reg        axi_wvalid,   
    output reg        axi_wlast,   
    input             axi_wready,   
    input      [ 3:0] axi_bid,
    input      [ 1:0] axi_bresp,     
    input             axi_bvalid,   
    output reg        axi_bready    
);
    // import "DPI-C" function void cache_counter(input bit ihit, input bit dhit);
    reg [31:0] addr_reg;

    localparam SDRAM_BASE        = 32'hA0000000;  
    localparam SDRAM_END         = 32'hBFFFFFFF;  
    // AXI突发类型定义
    localparam AXI_BURST_FIXED   = 2'b00;          // 非突发（单次传输）
    localparam AXI_BURST_INCR    = 2'b01;          // 突发（多拍传输）
    // 地址类型判断
    wire addr_in_sdram = (addr_reg >= SDRAM_BASE) && (addr_reg <= SDRAM_END);
    wire burst_en = addr_in_sdram;  // 仅sdram支持突发  

    // 地址锁存：IDLE状态且请求有效时锁存输入地址
    always @(posedge clk) begin
        if (reset) begin
            addr_reg <= 32'h0;  
        end else if (state == IDLE && !busy && req_valid) begin
            addr_reg <= addr;  
        end
    end

    // 地址划分 - 直接映射结构
    localparam AXI_ID             = 4'b1;
     localparam BLOCK_OFFSET_WIDTH = $clog2(BLOCK_SIZE);       // 偏移宽度：4位（16字节块）
    wire [BLOCK_OFFSET_WIDTH-1:0] req_offset  = addr[BLOCK_OFFSET_WIDTH - 1 : 0];  // 块内偏移（0-15）
    wire [                   1:0] word_offset = req_offset[3:2]; 

    reg [                   1:0] saved_word_offset;
    reg                          saved_we;     
    reg [                  31:0] saved_wdata;  
    reg [                   3:0] saved_wstrb; 
    reg [                   3:0] burst_cnt;   

    localparam IDLE    = 3'b000; 
    localparam RD      = 3'b010; 
    localparam WR      = 3'b011;  

    reg [2:0] state, next_state;

    reg        aw_done;  
    reg        w_done;   
    reg        b_done;   
    reg        ar_done;

    // AXI传输大小定义
    localparam AXI_SIZE_BYTE      = 3'h0;         
    localparam AXI_SIZE_HALF      = 3'h1;  
    localparam AXI_SIZE_WORD      = 3'h2;    


    always @(posedge clk) begin
        if (reset) begin
            saved_word_offset <= 0;
            saved_we          <= 0;
            saved_wdata       <= 0;
            saved_wstrb       <= 0;
        end else if (state == IDLE && !busy && req_valid) begin
            saved_word_offset <= word_offset;
            saved_we          <= we;
            saved_wdata       <= wdata;
            saved_wstrb       <= wstrb;
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

    // 突发传输计数器（仅用于读突发，写操作固定单拍）
    always @(posedge clk) begin
        if (reset || state != next_state) begin
            burst_cnt <= 0;
        end else if (state == RD && axi_rvalid && axi_rready) begin
            burst_cnt <= burst_cnt + 1;
        end
    end

    // 写通道握手跟踪（简化逻辑，仅在写状态有效）
    always @(posedge clk) begin
        if (reset) begin
            aw_done <= 1'b0;
            w_done  <= 1'b0;
            b_done  <= 1'b0;
        end else if (state == WR) begin
            // 地址通道握手完成
            if (axi_awvalid && axi_awready) aw_done <= 1'b1;
            // 数据通道握手完成（单拍）
            if (axi_wvalid && axi_wready && axi_wlast) w_done <= 1'b1;
            // 响应通道握手完成
            if (axi_bvalid && axi_bready) b_done <= 1'b1;
        end else begin
            // 非写相关状态复位
            aw_done <= 1'b0;
            w_done  <= 1'b0;
            b_done  <= 1'b0;
        end
    end

    always @(*) begin
        case (state)
            IDLE: begin
                if(req_valid && !busy) begin
                    if (we) begin 
                        next_state = WR;     
                    end else begin
                        next_state = RD;      
                    end
                end
                else begin
                    next_state = IDLE;
                end
            end

            RD: next_state = (axi_rvalid && axi_rready && axi_rlast) ? IDLE : RD;

            WR: next_state = (aw_done && w_done && b_done) ? IDLE : WR;

            default: next_state = IDLE;
        endcase
    end

    // AXI读通道控制（仅读操作使用，写操作不触发）
    always @(posedge clk) begin
        if (reset) begin
            axi_arvalid <= 1'b0;
            axi_araddr  <= 32'h0;
            axi_arlen   <= 8'h0;
            axi_arsize  <= 3'b010;  // 默认4字节
            axi_arburst <= AXI_BURST_FIXED;
            axi_arid    <= 0;
            ar_done     <= 0;
        end 
        else if (state == RD) begin
            if (!ar_done && !axi_arvalid) begin
                // 块对齐地址（仅非外设地址）
                axi_araddr  <= burst_en ? {addr_reg[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}} : addr_reg;
                axi_arvalid <= 1'b1;
                axi_arid    <= AXI_ID;
                axi_arlen   <= burst_en ? BURST_LEN - 1 : 8'h0;  // 突发长度（非外设4拍，外设1拍）
                axi_arburst <= burst_en ? AXI_BURST_INCR : AXI_BURST_FIXED;
                // 根据rstrb动态设置读大小
                axi_arsize  <= (rstrb == 5'b10001 || rstrb == 5'b00001) ? AXI_SIZE_BYTE : 
                            (rstrb == 5'b00011 || rstrb == 5'b10011) ? AXI_SIZE_HALF : 
                            (rstrb == 5'b11111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;
            end else if (axi_arready) begin
                axi_arvalid <= 1'b0;  // 地址握手完成后清零
                ar_done     <= 1;
            end
        end else begin
            axi_arvalid <= 1'b0; 
            ar_done     <= 1'b0;
        end
    end

    // AXI读数据接收（仅读填充使用，写操作不涉及）
    reg [BLOCK_SIZE*8-1:0] block_data;  // 临时存储块数据（仅读突发）
    always @(posedge clk) begin
        if (reset) begin
            block_data = 0;
            axi_rready <= 1'b0;
        end else begin
            axi_rready <= (state == RD);  // 仅读填充阶段准备接收
            
            if (state == RD && axi_rvalid && axi_rready) begin
                // 按突发顺序存储数据到块中（仅非外设地址）
                if (burst_en) begin
                    block_data[burst_cnt*32 +: 32] = axi_rdata;
                end
            end
        end
    end

    // AXI写通道控制（纯写直达，无写分配）
    always @(posedge clk) begin
        if (reset) begin
            axi_awvalid <= 1'b0;
            axi_awaddr  <= 32'h0;
            axi_awlen   <= 8'h0;     // 固定单拍写（无突发）
            axi_awsize  <= 3'b010;   // 默认4字节
            axi_awburst <= AXI_BURST_FIXED;  // 非突发
            axi_wvalid  <= 1'b0;
            axi_wdata   <= 32'h0;
            axi_wstrb   <= 4'h0;
            axi_wlast   <= 1'b0;
            axi_bready  <= 1'b0;
            axi_awid    <= 0;
        end else if (state == WR) begin
            // 写地址通道：未握手时发送地址（原始地址，无块对齐）
            if (!axi_awvalid && !aw_done) begin
                axi_awaddr  <= addr_reg;  // 写操作使用原始地址（含偏移）
                axi_awvalid <= 1'b1;
                axi_awid    <= AXI_ID;
                // 根据saved_wstrb动态设置写大小
                axi_awsize  <= (saved_wstrb == 4'b0001 || saved_wstrb == 4'b0010 || 
                               saved_wstrb == 4'b0100 || saved_wstrb == 4'b1000) ? AXI_SIZE_BYTE :
                              (saved_wstrb == 4'b0011 || saved_wstrb == 4'b1100) ? AXI_SIZE_HALF : 
                              (saved_wstrb == 4'b1111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;
            end else if (axi_awready) begin
                axi_awvalid <= 1'b0;  // 地址握手完成后清零
            end

            // 写数据通道：未握手时发送数据和掩码（单拍）
            if (!axi_wvalid && !w_done) begin
                axi_wdata  <= saved_wdata;  // 使用锁存的写数据
                axi_wstrb  <= saved_wstrb;  // 使用锁存的写掩码
                axi_wvalid <= 1'b1;
                axi_wlast  <= 1'b1;         // 单拍写，last恒为1
            end else if (axi_wready) begin
                axi_wvalid <= 1'b0;
                axi_wlast  <= 1'b0;
            end

            if (!b_done) axi_bready <= 1;
            else axi_bready <= 0;
            
        end 
    end

    // 缓存数据更新逻辑（仅读操作更新缓存，写操作不触发填充）
    integer s;
    always @(posedge clk) begin
        if (reset) begin
            rdata  <= 32'h0;
            valid  <= 1'b0;
            busy   <= 1'b0;
        end else begin
            busy <= (state != IDLE);  // 非空闲状态即为忙
            valid <= 1'b0;

            case (state)
                IDLE: begin end

                // 读未命中填充：仅非外设地址更新缓存
                RD: begin
                    if (axi_rvalid && axi_rready && axi_rlast) begin
                        // 输出读数据（区分突发/非突发）
                        rdata <= burst_en ? block_data[saved_word_offset*32 +: 32] : axi_rdata;
                        valid <= 1'b1;
                    end
                end

                WR: begin
                    if(aw_done && w_done && b_done) begin
                        valid <= 1'b1;
                    end
                end

                default: begin end
            endcase
        end
    end

endmodule
