
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
    input  [31:0] ex_lsu_pc,          
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
    output reg [ 3:0] lsu_axi_arid,
    output reg [ 7:0] lsu_axi_arlen,
    output reg [ 2:0] lsu_axi_arsize,
    output reg [ 1:0] lsu_axi_arburst,        
    input      [31:0] axi_lsu_rdata,         
    input             axi_lsu_rvalid,       
    output reg        lsu_axi_rready,       
    input      [ 1:0] axi_lsu_rresp,
    input      [ 3:0] axi_lsu_rid,
    input             axi_lsu_rlast,         

    output reg [31:0] lsu_axi_awaddr,        
    output reg        lsu_axi_awvalid,      
    input             axi_lsu_awready, 
    output reg [ 3:0] lsu_axi_awid,
    output reg [ 7:0] lsu_axi_awlen,
    output reg [ 2:0] lsu_axi_awsize,
    output reg [ 1:0] lsu_axi_awburst,     
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

    dCache data_cache (
        .clk        (clk                                                    ),
        .reset      (rst                                                    ),
                                                
        .we         (cache_we                                               ),
        // .addr       (cache_addr     ),                                        
        .addr       (addr                                                   ),
        .wdata      (align_write_data(ex_lsu_MemLen, addr[1:0], data_in)    ),
        .wstrb      (ex_lsu_MemLen[3:0] << addr[1:0]                        ),
        .rdata      (cache_rdata                                            ),
        .valid      (cache_valid                                            ),
        .busy       (cache_busy                                             ),
        .req_valid  (cache_req_valid                                        ),
        .rstrb      (l_MemLen                                               ),
                                
        .axi_arid   (lsu_axi_arid                                           ),
        .axi_araddr (lsu_axi_araddr                                         ),
        .axi_arvalid(lsu_axi_arvalid                                        ),
        .axi_arlen  (lsu_axi_arlen                                          ),
        .axi_arsize (lsu_axi_arsize                                         ),
        .axi_arburst(lsu_axi_arburst                                        ),
        .axi_arready(axi_lsu_arready                                        ),
        .axi_rvalid (axi_lsu_rvalid                                         ),
        .axi_rlast  (axi_lsu_rlast                                          ),
        .axi_rready (lsu_axi_rready                                         ),
        .axi_rdata  (axi_lsu_rdata                                          ),
        .axi_rresp  (axi_lsu_rresp                                          ),
        .axi_rid    (axi_lsu_rid                                            ),
                                
        .axi_awid   (lsu_axi_awid                                           ),
        .axi_awaddr (lsu_axi_awaddr                                         ),
        .axi_awvalid(lsu_axi_awvalid                                        ),
        .axi_awlen  (lsu_axi_awlen                                          ),
        .axi_awsize (lsu_axi_awsize                                         ),
        .axi_awburst(lsu_axi_awburst                                        ),
        .axi_awready(axi_lsu_awready                                        ),
        .axi_wdata  (lsu_axi_wdata                                          ),
        .axi_wstrb  (lsu_axi_wstrb                                          ),
        .axi_wvalid (lsu_axi_wvalid                                         ),
        .axi_wlast  (lsu_axi_wlast                                          ),
        .axi_wready (axi_lsu_wready                                         ),
        .axi_bid    (axi_lsu_bid                                            ),
        .axi_bresp  (axi_lsu_bresp                                          ),
        .axi_bvalid (axi_lsu_bvalid                                         ),
        .axi_bready (lsu_axi_bready                                         )
    );

    reg  [31:0] cache_addr;     // 缓存访问地址
    wire [31:0] cache_rdata;    // 缓存读数据
    wire        cache_valid;    // 缓存操作完成
    wire        cache_busy;     // 缓存忙标志

    wire       cache_req_valid;
    wire       cache_we;
    assign cache_we = (ex_lsu_valid & lsu_ex_ready & ~ex_lsu_MemRead & ex_lsu_MemWrite & ~write_pending);
    assign cache_req_valid = ((ex_lsu_valid & lsu_ex_ready) & ((~ex_lsu_MemRead & ex_lsu_MemWrite & ~write_pending) || (ex_lsu_MemRead & ~ex_lsu_MemWrite & ~read_pending)));

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

    reg        read_pending;      // 读请求等待标志
    reg        write_pending;     // 写请求等待标志
    reg [31:0] read_lsu_data;     // 从 SRAM 读取的数据
    reg        cache_op_complete; // 缓存操作完成

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
            l_load    <= l_load;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_MemLen  <= ex_lsu_MemLen;
        end 
        else begin
            l_load    <= l_load;
            l_rd_en   <= l_rd_en;
            l_rd_addr <= l_rd_addr;
            l_MemLen  <= l_MemLen;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            cache_addr        <= 0;
            read_pending      <= 0;
            write_pending     <= 0;
            cache_op_complete <= 0;
            read_lsu_data     <= 0;
        end else begin
            cache_op_complete <= 0;
            
            // 处理读请求：发送到缓存
            if (ex_lsu_valid & lsu_ex_ready & ex_lsu_MemRead & ~ex_lsu_MemWrite & ~read_pending) begin
                cache_addr      <= addr;
                read_pending    <= 1;
            end else if (read_pending & cache_valid) begin
                read_pending      <= 0;
                cache_op_complete <= 1;
                read_lsu_data     <= extract_read_data(l_MemLen, cache_addr[1:0], cache_rdata);
            // `ifdef VERILATOR
            //     counter(7, 0, 1, 0);
            // `endif
            end
            
            // 处理写请求：发送到缓存
            if (ex_lsu_valid & lsu_ex_ready & ~ex_lsu_MemRead & ex_lsu_MemWrite & ~write_pending) begin
                write_pending   <= 1;
            end else if (write_pending & cache_valid) begin
                write_pending     <= 0;
                cache_op_complete <= 1;
            // `ifdef VERILATOR
            //     counter(7, 0, 1, 0);
            // `endif
            end
        end
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
        else if (cache_op_complete) begin
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
        end else if (cache_op_complete) begin
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