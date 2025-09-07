
`include "/home/furina/ysyx-workbench/npc/pipeline-soc-vsrc/defines/defines.v"

module LSU_AXI (
    input         clk,
    input         rst,

    // 流水线握手信号
    input         ex_lsu_valid,       
    output reg    lsu_ex_ready,       
    input         wb_lsu_ready,       
    output reg    lsu_wb_valid,       

    // EX 阶段输入信号
    input         ex_lsu_forward_las,
    input         ex_lsu_RegWrite,    
    input  [ 3:0] ex_lsu_rd,          
    input         ex_lsu_MemRead,     
    input         ex_lsu_MemWrite,    
    input  [ 4:0] ex_lsu_MemLen,         
    // input  [31:0] ex_lsu_pc,          
    input  [31:0] addr,               
    input  [31:0] data_in,              

    // CSR 相关信号
    input         ex_lsu_csr,
    input         ex_lsu_csr_wen1,
    input         ex_lsu_csr_wen2,
    input  [31:0] ex_lsu_csr_wr_data1,
    input  [31:0] ex_lsu_csr_wr_data2,
    input  [11:0] ex_lsu_csr_wr_addr1,
    input  [11:0] ex_lsu_csr_wr_addr2,
    input  [31:0] ex_lsu_csr_rdata,
    input         ex_lsu_csr_ecall,
    input         ex_lsu_csr_mret,
    input  [31:0] ex_lsu_process_result,

    // 前递信号
    output [ 3:0] lsu_ex_forward_rd,         
    output        lsu_ex_forward_RegWrite,   
    output        lsu_ex_forward_MemRead,    

    // 传递到 WB 阶段的信号
    output reg [31:0] lsu_wb_csr_wr_data1,
    output reg [31:0] lsu_wb_csr_wr_data2,
    output reg [11:0] lsu_wb_csr_wr_addr1,
    output reg [11:0] lsu_wb_csr_wr_addr2,
    output reg        lsu_wb_csr_wen1,
    output reg        lsu_wb_csr_wen2,
    output reg        lsu_wb_RegWrite,        
    output reg [ 3:0] lsu_wb_rd,              
    output reg [31:0] lsu_wb_write_rd_data,   

    // AXI4-Lite 接口信号
    output reg        lsu_axi_arvalid,      
    input             axi_lsu_arready,      
    output reg [31:0] lsu_axi_araddr,
    output wire [ 3:0] lsu_axi_arid,
    output wire [ 7:0] lsu_axi_arlen,
    output wire [ 2:0] lsu_axi_arsize,
    output wire [ 1:0] lsu_axi_arburst,        
    input      [31:0] axi_lsu_rdata,         
    input             axi_lsu_rvalid,       
    output reg        lsu_axi_rready,       
    input      [ 1:0] axi_lsu_rresp,
    input      [ 3:0] axi_lsu_rid,
    input             axi_lsu_rlast,         

    output reg [31:0] lsu_axi_awaddr,        
    output reg        lsu_axi_awvalid,      
    input             axi_lsu_awready, 
    output wire [ 3:0] lsu_axi_awid,
    output wire [ 7:0] lsu_axi_awlen,
    output wire [ 2:0] lsu_axi_awsize,
    output wire [ 1:0] lsu_axi_awburst,     
    output reg [31:0] lsu_axi_wdata,         
    output reg [ 3:0] lsu_axi_wstrb,         
    output reg        lsu_axi_wvalid,       
    input             axi_lsu_wready,
    output reg        lsu_axi_wlast,       
    input      [ 1:0] axi_lsu_bresp,         
    input             axi_lsu_bvalid,       
    output reg        lsu_axi_bready,
    input      [ 3:0] axi_lsu_bid     

    // output reg [31:0] lsu_active_cycles
);
`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
    // import "DPI-C" function void counter(input int inst_type, input int ifu_inc, input int lsu_inc, input int exu_inc);
`endif 

    parameter OKAY = 2'b00;

    // dCache data_cache (
    //     .clk        (clk                                                    ),
    //     .reset      (rst                                                    ),
                                                
    //     .we         (cache_we                                               ),
    //     // .addr       (cache_addr     ),                                        
    //     .addr       (addr                                                   ),
    //     .wdata      (align_write_data(ex_lsu_MemLen, addr[1:0], data_in)    ),
    //     .wstrb      (ex_lsu_MemLen[3:0] << addr[1:0]                        ),
    //     .rdata      (cache_rdata                                            ),
    //     .valid      (cache_valid                                            ),
    //     .busy       (cache_busy                                             ),
    //     .req_valid  (cache_req_valid                                        ),
    //     .rstrb      (l_MemLen                                               ),
                                
    //     .axi_arid   (lsu_axi_arid                                           ),
    //     .axi_araddr (lsu_axi_araddr                                         ),
    //     .axi_arvalid(lsu_axi_arvalid                                        ),
    //     .axi_arlen  (lsu_axi_arlen                                          ),
    //     .axi_arsize (lsu_axi_arsize                                         ),
    //     .axi_arburst(lsu_axi_arburst                                        ),
    //     .axi_arready(axi_lsu_arready                                        ),
    //     .axi_rvalid (axi_lsu_rvalid                                         ),
    //     .axi_rlast  (axi_lsu_rlast                                          ),
    //     .axi_rready (lsu_axi_rready                                         ),
    //     .axi_rdata  (axi_lsu_rdata                                          ),
    //     .axi_rresp  (axi_lsu_rresp                                          ),
    //     .axi_rid    (axi_lsu_rid                                            ),
                                
    //     .axi_awid   (lsu_axi_awid                                           ),
    //     .axi_awaddr (lsu_axi_awaddr                                         ),
    //     .axi_awvalid(lsu_axi_awvalid                                        ),
    //     .axi_awlen  (lsu_axi_awlen                                          ),
    //     .axi_awsize (lsu_axi_awsize                                         ),
    //     .axi_awburst(lsu_axi_awburst                                        ),
    //     .axi_awready(axi_lsu_awready                                        ),
    //     .axi_wdata  (lsu_axi_wdata                                          ),
    //     .axi_wstrb  (lsu_axi_wstrb                                          ),
    //     .axi_wvalid (lsu_axi_wvalid                                         ),
    //     .axi_wlast  (lsu_axi_wlast                                          ),
    //     .axi_wready (axi_lsu_wready                                         ),
    //     .axi_bid    (axi_lsu_bid                                            ),
    //     .axi_bresp  (axi_lsu_bresp                                          ),
    //     .axi_bvalid (axi_lsu_bvalid                                         ),
    //     .axi_bready (lsu_axi_bready                                         )
    // );

    localparam SDRAM_BASE        = 32'hA0000000;  
    localparam SDRAM_END         = 32'hBFFFFFFF;  
    localparam AXI_BURST_FIXED   = 2'b00;       
    localparam AXI_BURST_INCR    = 2'b01;   
    localparam AXI_SIZE_BYTE     = 3'h0;         
    localparam AXI_SIZE_HALF     = 3'h1;  
    localparam AXI_SIZE_WORD     = 3'h2;
    localparam AXI_ID            = 4'h1;  
    localparam BURST_LEN         = 4; 
    localparam BLOCK_SIZE        = 16;
    wire addr_in_sdram = (addr_reg >= SDRAM_BASE) && (addr_reg <= SDRAM_END);
    wire burst_en = addr_in_sdram;  

    localparam BLOCK_OFFSET_WIDTH = $clog2(16); 
    wire [BLOCK_OFFSET_WIDTH-1:0] req_offset  = addr[BLOCK_OFFSET_WIDTH - 1 : 0];  // 块内偏移（0-15）
    wire [                   1:0] word_offset = req_offset[3:2]; 

    reg [                   1:0] saved_word_offset;
    reg [                  31:0] saved_wdata;  
    reg [                   3:0] saved_wstrb; 
    reg [                   3:0] burst_cnt; 

    reg  [31:0] cache_addr;    
    reg  [31:0] rdata;  
    reg         valid;   
    reg         busy; 
    reg  [31:0] addr_reg; 

    localparam IDLE = 2'b00; 
    localparam RD   = 2'b10; 
    localparam WR   = 2'b11; 
    reg [1:0] state, next_state;

    reg        aw_done;  
    reg        w_done;   
    reg        b_done;   
    reg        ar_done;

    wire we = (ex_lsu_valid & lsu_ex_ready & ex_lsu_MemWrite);
    wire req_valid = ((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemRead | ex_lsu_MemWrite));

    always @(posedge clk) begin
        // if (rst) begin
        //     addr_reg <= 32'h0;  
        // end
        if (state == IDLE && !busy && req_valid) begin
            addr_reg <= addr;  
        end        
    end

    always @(posedge clk) begin
        // if (rst) begin
        //     saved_word_offset <= 0;
        //     saved_wdata       <= 0;
        //     saved_wstrb       <= 0;
        // end
        if (state == IDLE && !busy && req_valid) begin
            saved_word_offset <= word_offset;
            saved_wdata       <= align_write_data(ex_lsu_MemLen, addr[1:0], data_in);
            saved_wstrb       <= ex_lsu_MemLen[3:0] << addr[1:0];
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    always @(posedge clk) begin
        if (state != next_state) begin
            burst_cnt <= 0;
        end else if (state == RD && axi_lsu_rvalid && lsu_axi_rready) begin
            burst_cnt <= burst_cnt + 1;
        end
    end

    always @(posedge clk) begin
        if (state == WR) begin
            if (lsu_axi_awvalid && axi_lsu_awready) aw_done <= 1'b1;
            if (lsu_axi_wvalid && axi_lsu_wready && lsu_axi_wlast) w_done <= 1'b1;
            if (axi_lsu_bvalid && lsu_axi_bready) b_done <= 1'b1;
        end else begin
            aw_done <= 1'b0;
            w_done  <= 1'b0;
            b_done  <= 1'b0;
        end 
    end

    always @(*) begin
        case (state)
            IDLE: begin
                if(req_valid && !busy) begin
                    // if (we) begin 
                    //     next_state = WR;     
                    // end else begin
                    //     next_state = RD;      
                    // end
                    next_state = we ? WR : RD;
                end
                else begin
                    next_state = IDLE;
                end
            end

            RD: next_state = (axi_lsu_rvalid && lsu_axi_rready && axi_lsu_rlast) ? IDLE : RD;

            WR: next_state = (aw_done && w_done && b_done) ? IDLE : WR;

            default: next_state = IDLE;
        endcase
    end

    reg [BLOCK_SIZE*8-1:0] block_data;

    assign lsu_axi_arid    = AXI_ID;
    assign lsu_axi_arburst = burst_en ? AXI_BURST_INCR : AXI_BURST_FIXED;
    assign lsu_axi_arlen   = burst_en ? BURST_LEN - 1 : 8'h0;
    assign lsu_axi_arsize  = (ex_lsu_MemLen == 5'b10001 || ex_lsu_MemLen == 5'b00001) ? AXI_SIZE_BYTE : 
                             (ex_lsu_MemLen == 5'b00011 || ex_lsu_MemLen == 5'b10011) ? AXI_SIZE_HALF : 
                             (ex_lsu_MemLen == 5'b11111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;

    always @(posedge clk) begin
        // if (rst) begin
        //     lsu_axi_arvalid <= 1'b0;
        //     lsu_axi_araddr  <= 32'h0;
        //     // lsu_axi_arlen   <= 8'h0;
        //     // lsu_axi_arsize  <= 3'b010;  
        //     // lsu_axi_arburst <= AXI_BURST_FIXED;
        //     // lsu_axi_arid    <= 0;
        //     ar_done         <= 0;
        // end 
        // else 
        if (state == RD) begin
            if (!ar_done && !lsu_axi_arvalid) begin
                lsu_axi_araddr  <= burst_en ? {addr_reg[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}} : addr_reg;
                lsu_axi_arvalid <= 1'b1;
                // lsu_axi_arid    <= AXI_ID;
                // lsu_axi_arlen   <= burst_en ? BURST_LEN - 1 : 8'h0;  
                // lsu_axi_arburst <= burst_en ? AXI_BURST_INCR : AXI_BURST_FIXED;
                // lsu_axi_arsize  <= (l_MemLen == 5'b10001 || l_MemLen == 5'b00001) ? AXI_SIZE_BYTE : 
                //             (l_MemLen == 5'b00011 || l_MemLen == 5'b10011) ? AXI_SIZE_HALF : 
                //             (l_MemLen == 5'b11111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;
            end else if (axi_lsu_arready) begin
                lsu_axi_arvalid <= 1'b0;  
                ar_done         <= 1;
            end
            lsu_axi_rready <= 1'b1;
            if(axi_lsu_rvalid && burst_en) begin
                block_data[burst_cnt*32 +: 32] = axi_lsu_rdata;
            end
        end else begin
            lsu_axi_arvalid <= 1'b0; 
            ar_done         <= 1'b0;
        end
    end

    // reg [BLOCK_SIZE*8-1:0] block_data; 
    // always @(posedge clk) begin
    //     // if (rst) begin
    //     //     block_data = 0;
    //     //     lsu_axi_rready <= 1'b0;
    //     // end else begin
    //         lsu_axi_rready <= (state == RD);
    //         if (state == RD && axi_lsu_rvalid && lsu_axi_rready) begin
    //             if (burst_en) begin
    //                 block_data[burst_cnt*32 +: 32] = axi_lsu_rdata;
    //             end
    //         end
    //     // end
    // end

    assign lsu_axi_awburst = AXI_BURST_FIXED;
    assign lsu_axi_awid    = AXI_ID;
    assign lsu_axi_awlen   = 8'h0;
    assign lsu_axi_awsize  = (saved_wstrb == 4'b0001 || saved_wstrb == 4'b0010 || 
                             saved_wstrb == 4'b0100 || saved_wstrb == 4'b1000) ? AXI_SIZE_BYTE :
                             (saved_wstrb == 4'b0011 || saved_wstrb == 4'b1100) ? AXI_SIZE_HALF : 
                             (saved_wstrb == 4'b1111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;

    always @(posedge clk) begin
        // if (rst) begin
        //     lsu_axi_awvalid <= 1'b0;
        //     lsu_axi_awaddr  <= 32'h0;
        //     // lsu_axi_awlen   <= 8'h0;     
        //     // lsu_axi_awsize  <= 3'b010;   
        //     // lsu_axi_awburst <= AXI_BURST_FIXED;  
        //     lsu_axi_wvalid  <= 1'b0;
        //     lsu_axi_wdata   <= 32'h0;
        //     lsu_axi_wstrb   <= 4'h0;
        //     lsu_axi_wlast   <= 1'b0;
        //     lsu_axi_bready  <= 1'b0;
        //     // lsu_axi_awid    <= 0;
        // end else 
        if (state == WR) begin
            if (!lsu_axi_awvalid && !aw_done) begin
                lsu_axi_awaddr  <= addr_reg;  
                lsu_axi_awvalid <= 1'b1;
                // lsu_axi_awid    <= AXI_ID;
                // lsu_axi_awsize  <= (saved_wstrb == 4'b0001 || saved_wstrb == 4'b0010 || 
                //                saved_wstrb == 4'b0100 || saved_wstrb == 4'b1000) ? AXI_SIZE_BYTE :
                //               (saved_wstrb == 4'b0011 || saved_wstrb == 4'b1100) ? AXI_SIZE_HALF : 
                //               (saved_wstrb == 4'b1111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;
            end else if (axi_lsu_awready) begin
                lsu_axi_awvalid <= 1'b0;  // 地址握手完成后清零
            end

            if (!lsu_axi_wvalid && !w_done) begin
                lsu_axi_wdata  <= saved_wdata;  
                lsu_axi_wstrb  <= saved_wstrb;  
                lsu_axi_wvalid <= 1'b1;
                lsu_axi_wlast  <= 1'b1;         
            end else if (axi_lsu_wready) begin
                lsu_axi_wvalid <= 1'b0;
                lsu_axi_wlast  <= 1'b0;
            end

            if (!b_done) lsu_axi_bready <= 1;
            else lsu_axi_bready <= 0;
            
        end 
    end

    always @(posedge clk) begin
        if (rst) begin
            rdata  <= 32'h0;
            valid  <= 1'b0;
            busy   <= 1'b0;
        end else begin
            busy <= (state != IDLE);  
            valid <= 1'b0;

            case (state)
                IDLE: begin end
                RD: begin
                    if (axi_lsu_rvalid && lsu_axi_rready && axi_lsu_rlast) begin
                        rdata <= burst_en ? block_data[saved_word_offset*32 +: 32] : axi_lsu_rdata;
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

    function [31:0] align_write_data;
        input [4:0] mem_len;
        input [1:0] addr_low;
        input [31:0] data_in;
        begin
            case (mem_len)
                `Mem_Bit: begin
                    // 字节访问：将数据移动到对应位置
                    case (addr_low)
                        2'b00: align_write_data = {24'b0, data_in[7:0]};
                        2'b01: align_write_data = {16'b0, data_in[7:0], 8'b0};
                        2'b10: align_write_data = {8'b0, data_in[7:0], 16'b0};
                        2'b11: align_write_data = {data_in[7:0], 24'b0};
                        default: align_write_data = data_in;
                    endcase
                end
                `Mem_Half, `Mem_UHalf: begin
                    // 半字访问：将数据移动到对应位置
                    case (addr_low)
                        2'b00: align_write_data = {16'b0, data_in[15:0]}; // 低16位
                        2'b10: align_write_data = {data_in[15:0], 16'b0};  // 高16位
                        default: align_write_data = data_in; // 非对齐访问保持原样
                    endcase
                end
                `Mem_Word: begin
                    // 字访问：数据不需要移动
                    align_write_data = data_in;
                end
                default: align_write_data = data_in;
            endcase
        end
    endfunction

    function [31:0] extract_read_data;
        input [4:0] mem_len;
        input [1:0] addr_low;
        input [31:0] rdata;
        begin
            case (mem_len)
                `Mem_Bit: begin
                    // 有符号字节：提取对应字节并进行符号扩展
                    case (addr_low)
                        2'b00: extract_read_data = {{24{rdata[7]}}, rdata[7:0]};
                        2'b01: extract_read_data = {{24{rdata[15]}}, rdata[15:8]};
                        2'b10: extract_read_data = {{24{rdata[23]}}, rdata[23:16]};
                        2'b11: extract_read_data = {{24{rdata[31]}}, rdata[31:24]};
                        default: extract_read_data = {{24{rdata[7]}}, rdata[7:0]};
                    endcase
                end
                `Mem_UBit: begin
                    // 无符号字节：提取对应字节并进行零扩展
                    case (addr_low)
                        2'b00: extract_read_data = {24'b0, rdata[7:0]};
                        2'b01: extract_read_data = {24'b0, rdata[15:8]};
                        2'b10: extract_read_data = {24'b0, rdata[23:16]};
                        2'b11: extract_read_data = {24'b0, rdata[31:24]};
                        default: extract_read_data = {24'b0, rdata[7:0]};
                    endcase
                end
                `Mem_Half: begin
                    // 有符号半字：提取对应半字并进行符号扩展
                    case (addr_low)
                        2'b00: extract_read_data = {{16{rdata[15]}}, rdata[15:0]};
                        2'b10: extract_read_data = {{16{rdata[31]}}, rdata[31:16]};
                        default: extract_read_data = {{16{rdata[15]}}, rdata[15:0]}; // 非对齐使用低半字
                    endcase
                end
                `Mem_UHalf: begin
                    // 无符号半字：提取对应半字并进行零扩展
                    case (addr_low)
                        2'b00: extract_read_data = {16'b0, rdata[15:0]};
                        2'b10: extract_read_data = {16'b0, rdata[31:16]};
                        default: extract_read_data = {16'b0, rdata[15:0]}; // 非对齐使用低半字
                    endcase
                end
                `Mem_Word: begin
                    // 字访问：直接使用全部数据
                    extract_read_data = rdata;
                end
                default: extract_read_data = rdata;
            endcase
        end
    endfunction

    reg        l_load;            
    reg        l_rd_en;           
    reg [3:0]  l_rd_addr;         
    reg [4:0]  l_MemLen;          

    // reg        read_pending;      // 读请求等待标志
    // reg        write_pending;     // 写请求等待标志
    reg [31:0] read_lsu_data;     // 从 SRAM 读取的数据
    reg        op_complete; // 缓存操作完成

    // 前递信号赋值
    assign lsu_ex_forward_rd        = l_rd_addr;
    assign lsu_ex_forward_RegWrite  = l_rd_en;
    assign lsu_ex_forward_MemRead   = l_load;

    // always @(posedge clk) begin
    //     if (rst) begin
    //         lsu_active_cycles <= 0;
    //     end else if (read_pending || write_pending) begin
    //         lsu_active_cycles <= lsu_active_cycles + 1;
    //     end
    // end

    // 寄存器更新逻辑
    always @(posedge clk) begin
        if (rst) begin
            l_load    <= 0;
            l_rd_en   <= 0;
            l_rd_addr <= 0;
            l_MemLen  <= 0;
        end 
        else if (ex_lsu_valid & lsu_ex_ready & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            l_load    <= ex_lsu_MemRead;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_MemLen  <= ex_lsu_MemLen;
        end 
        else if (lsu_wb_valid & wb_lsu_ready) begin
            l_load    <= 0;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_MemLen  <= ex_lsu_MemLen;
        end 
        else if (ex_lsu_valid & lsu_ex_ready & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin // 非访存指令
            l_load    <= 0;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_MemLen  <= ex_lsu_MemLen;
        end 
        // else begin
        //     l_load    <= l_load;
        //     l_rd_en   <= l_rd_en;
        //     l_rd_addr <= l_rd_addr;
        //     l_MemLen  <= l_MemLen;
        // end
    end

    always @(posedge clk) begin
        // if (rst) begin
        //     cache_addr    <= 0;
        //     read_pending  <= 0;
        //     write_pending <= 0;
        //     op_complete   <= 0;
        //     read_lsu_data <= 0;
        // end else begin
            op_complete   <= 0;
            
            // 处理读请求：发送到缓存
            if (ex_lsu_valid & lsu_ex_ready & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
                cache_addr     <= addr;
                // read_pending   <= 1;
            end else if (valid) begin
                // read_pending  <= 0;
                op_complete   <= 1;
                read_lsu_data <= extract_read_data(l_MemLen, cache_addr[1:0], rdata);
            // `ifdef VERILATOR
            //     counter(7, 0, 1, 0);
            // `endif
            end
            
            // // 处理写请求：发送到缓存
            // if (ex_lsu_valid & lsu_ex_ready & ~ex_lsu_MemRead) begin
            //     // write_pending <= 1;
            // end else if (valid) begin
            //     // write_pending <= 0;
            //     op_complete   <= 1;
            // // `ifdef VERILATOR
            // //     counter(7, 0, 1, 0);
            // // `endif
            // end
        // end
    end

    // 写回数据选择
    reg [31:0] rd_data;
    always @(*) begin
        if (l_load) begin
            rd_data = read_lsu_data;
        end 
        else if (ex_lsu_forward_las) begin
            rd_data = data_in;
        end 
        else if (ex_lsu_MemWrite) begin
            rd_data = 32'h0;
        end 
        else if (ex_lsu_csr & !ex_lsu_csr_ecall & !ex_lsu_csr_mret) begin
            rd_data = ex_lsu_csr_rdata;
        end 
        else begin
            rd_data = ex_lsu_process_result;
        end
    end

    // 流水线握手逻辑
    always @(posedge clk) begin
        if (rst) begin
            lsu_ex_ready <= 1;
        end 
        else if (ex_lsu_valid & lsu_ex_ready & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_ex_ready <= 0;
        end 
        else if (lsu_wb_valid & wb_lsu_ready) begin
            lsu_ex_ready <= 1;
        end 
    end

    always @(posedge clk) begin
        if (rst) begin
            lsu_wb_valid <= 0;
        end 
        else if (ex_lsu_valid & lsu_ex_ready & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_valid <= 1;
        end 
        else if (op_complete) begin
            lsu_wb_valid <= 1;
        end 
        else if (ex_lsu_valid & lsu_ex_ready & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_valid <= 0;
        end 
        else if ((~(ex_lsu_valid && lsu_ex_ready)) && lsu_wb_valid) begin
            lsu_wb_valid <= 0;
        end
    end

    // 输出到 WB 阶段
    always @(posedge clk) begin
        if (rst) begin
            lsu_wb_RegWrite      <= 0;
            lsu_wb_rd            <= 0;
            lsu_wb_write_rd_data <= 0;
            lsu_wb_csr_wen1      <= 0;
            lsu_wb_csr_wen2      <= 0;
            lsu_wb_csr_wr_addr1  <= 0;
            lsu_wb_csr_wr_addr2  <= 0;
            lsu_wb_csr_wr_data1  <= 0;
            lsu_wb_csr_wr_data2  <= 0;
        end else if (op_complete) begin
            lsu_wb_RegWrite      <= l_rd_en;
            lsu_wb_rd            <= l_rd_addr;
            lsu_wb_csr_wen1      <= ex_lsu_csr_wen1;
            lsu_wb_csr_wen2      <= ex_lsu_csr_wen2;
            lsu_wb_csr_wr_addr1  <= ex_lsu_csr_wr_addr1;
            lsu_wb_csr_wr_addr2  <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1  <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2  <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data <= rd_data;
        end else if (ex_lsu_valid & lsu_ex_ready & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_RegWrite      <= ex_lsu_RegWrite; // 非内存访问指令
            lsu_wb_rd            <= ex_lsu_rd;
            lsu_wb_csr_wen1      <= ex_lsu_csr_wen1;
            lsu_wb_csr_wen2      <= ex_lsu_csr_wen2;
            lsu_wb_csr_wr_addr1  <= ex_lsu_csr_wr_addr1;
            lsu_wb_csr_wr_addr2  <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1  <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2  <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data <= rd_data;
        end
    end


endmodule