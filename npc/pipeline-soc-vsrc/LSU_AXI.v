
`include "define.vh"

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
    // input         ex_lsu_csr_wen2,
    input  [31:0] ex_lsu_csr_wr_data1,
    input  [31:0] ex_lsu_csr_wr_data2,
    input  [11:0] ex_lsu_csr_wr_addr1,
    // input  [11:0] ex_lsu_csr_wr_addr2,
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
    // output reg [11:0] lsu_wb_csr_wr_addr2,
    output reg        lsu_wb_csr_wen1,
    output reg        lsu_wb_csr_ecall,
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
    output wire       lsu_axi_bready,
    input      [ 3:0] axi_lsu_bid     

    // output reg [31:0] lsu_active_cycles
);
`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
    // import "DPI-C" function void counter(input int inst_type, input int ifu_inc, input int lsu_inc, input int exu_inc);
`endif 

    parameter OKAY = 2'b00;

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
    wire in_sdram = (addr_reg >= SDRAM_BASE) && (addr_reg <= SDRAM_END);

    localparam BLOCK_OFFSET_WIDTH = 4; 
    wire [BLOCK_OFFSET_WIDTH-1:0] req_offset  = addr[BLOCK_OFFSET_WIDTH - 1 : 0];  // 块内偏移（0-15）
    // wire [                   1:0] word_offset = req_offset[3:2]; 
    wire [                      1:0] word_offset = addr[3:2];

    reg [                   1:0] saved_word_offset;
    reg [                  31:0] saved_wdata;  
    reg [                   3:0] saved_wstrb; 
    reg [                   3:0] burst_cnt; 

    reg  [31:0] cache_addr;   
    reg  [31:0] rdata;  
    reg         valid;   
    reg  [31:0] addr_reg; 

    localparam IDLE = 2'b00; 
    localparam RD   = 2'b10; 
    localparam WR   = 2'b01; 
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
        if (state == IDLE & req_valid) begin
            addr_reg <= addr;  
        end        
    end

    always @(posedge clk) begin
        // if (rst) begin
        //     saved_word_offset <= 0;
        //     saved_wdata       <= 0;
        //     saved_wstrb       <= 0;
        // end
        if (state == IDLE & req_valid) begin
            saved_word_offset <= word_offset;
            // saved_wdata       <= align_write_data(ex_lsu_MemLen, addr[1:0], data_in);
            saved_wdata       <= (ex_lsu_MemLen == `Mem_Bit) ? ({24'b0, data_in[7:0]} << (addr[1:0] * 8)) :
                                 (ex_lsu_MemLen[3:0] == 4'b0011) ? (addr[1:0] == 2'b00 ? {16'b0, data_in[15:0]} :
                                                                    addr[1:0] == 2'b10 ? {data_in[15:0], 16'b0} :
                                                                    data_in) : data_in;
            // saved_wdata       <= data_in << addr[1:0]*8;
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

    // always @(posedge clk) begin
    //     if (state != RD) begin
    //         burst_cnt <= 0;
    //     end else if (axi_lsu_rvalid && lsu_axi_rready) begin
    //         burst_cnt <= burst_cnt + 1;
    //     end
    // end

    // always @(posedge clk) begin
    //     if (state == WR) begin
    //         if (lsu_axi_awvalid && axi_lsu_awready) aw_done <= 1'b1;
    //         if (lsu_axi_wvalid && axi_lsu_wready && lsu_axi_wlast) w_done <= 1'b1;
    //         if (axi_lsu_bvalid && lsu_axi_bready) b_done <= 1'b1;
    //     end else begin
    //         aw_done <= 1'b0;
    //         w_done  <= 1'b0;
    //         b_done  <= 1'b0;
    //     end 
    // end

    always @(*) begin
        case (state)
            // IDLE: begin
            //     if(req_valid) begin
            //         next_state = we ? WR : RD;
            //     end
            //     else begin
            //         next_state = IDLE;
            //     end
            // end
            IDLE: next_state = req_valid ? (we ? WR : RD) : IDLE;
            RD: next_state = (axi_lsu_rvalid && lsu_axi_rready && axi_lsu_rlast) ? IDLE : RD;
            WR: next_state = (aw_done && w_done && b_done) ? IDLE : WR;
            default: next_state = IDLE;
        endcase
    end
    
    always @(posedge clk) begin
        if(rst) begin
            state <= IDLE;
        end
        else begin
            case(state)
                IDLE: begin
                    aw_done <= 0;
                    w_done  <= 0;
                    b_done  <= 0;
                    burst_cnt <= 0;
                    // state <= req_valid ? (we ? WR : RD) : IDLE;
                end
                RD: begin
                    if(axi_lsu_rvalid && lsu_axi_rready) begin
                        burst_cnt <= burst_cnt + 1;
                    end
                    // state <= (axi_lsu_rvalid && lsu_axi_rready && axi_lsu_rlast) ? IDLE : RD;
                end
                WR: begin
                    if (lsu_axi_awvalid && axi_lsu_awready) aw_done <= 1'b1;
                    if (lsu_axi_wvalid && axi_lsu_wready && lsu_axi_wlast) w_done <= 1'b1;
                    if (axi_lsu_bvalid && lsu_axi_bready) b_done <= 1'b1;
                    // state <= (aw_done && w_done && b_done) ? IDLE : WR;
                end
                default: begin end
            endcase
        end
    end

    reg [BLOCK_SIZE*8-1:0] block_data;

    assign lsu_axi_arid    = AXI_ID;
    assign lsu_axi_arburst = in_sdram ? AXI_BURST_INCR : AXI_BURST_FIXED;
    assign lsu_axi_arlen   = in_sdram ? BURST_LEN - 1 : 8'h0;
    assign lsu_axi_arsize  = (ex_lsu_MemLen[3:0] == 4'b0001 ) ? AXI_SIZE_BYTE : 
                             (ex_lsu_MemLen[3:0] == 4'b0011 ) ? AXI_SIZE_HALF : 
                             AXI_SIZE_WORD;
    
    assign lsu_axi_awburst = AXI_BURST_FIXED;
    assign lsu_axi_awid    = AXI_ID;
    assign lsu_axi_awlen   = 8'h0;
    assign lsu_axi_awsize  = (saved_wstrb == 4'b0001 || saved_wstrb == 4'b0010 || 
                             saved_wstrb == 4'b0100 || saved_wstrb == 4'b1000) ? AXI_SIZE_BYTE :
                             (saved_wstrb == 4'b0011 || saved_wstrb == 4'b1100) ? AXI_SIZE_HALF : 
                             AXI_SIZE_WORD;
    assign lsu_axi_bready = 1'b1;

    always @(posedge clk) begin
        // if (rst) begin
        //     lsu_axi_arvalid <= 1'b0;
        //     lsu_axi_araddr  <= 32'h0;
        //     ar_done         <= 0;
        // end 
        // else 
        if (state == RD) begin
            if (!ar_done && !lsu_axi_arvalid) begin
                lsu_axi_araddr  <= in_sdram ? {addr_reg[31:BLOCK_OFFSET_WIDTH], {BLOCK_OFFSET_WIDTH{1'b0}}} : addr_reg;
                lsu_axi_arvalid <= 1'b1;
            end else if (axi_lsu_arready) begin
                lsu_axi_arvalid <= 1'b0;  
                ar_done         <= 1;
            end
            lsu_axi_rready <= 1'b1;
            if(axi_lsu_rvalid && in_sdram) begin
                block_data[burst_cnt*32 +: 32] = axi_lsu_rdata;
            end
        end else begin
            lsu_axi_arvalid <= 1'b0; 
            ar_done         <= 1'b0;
        end

        if (state == WR) begin
            if (!lsu_axi_awvalid && !aw_done) begin
                lsu_axi_awaddr  <= addr_reg;  
                lsu_axi_awvalid <= 1'b1;
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
        end
    end
    
    // always @(posedge clk) begin
    //     // if (rst) begin
    //     //     lsu_axi_awvalid <= 1'b0;
    //     //     lsu_axi_awaddr  <= 32'h0;
    //     //     // lsu_axi_awlen   <= 8'h0;     
    //     //     // lsu_axi_awsize  <= 3'b010;   
    //     //     // lsu_axi_awburst <= AXI_BURST_FIXED;  
    //     //     lsu_axi_wvalid  <= 1'b0;
    //     //     lsu_axi_wdata   <= 32'h0;
    //     //     lsu_axi_wstrb   <= 4'h0;
    //     //     lsu_axi_wlast   <= 1'b0;
    //     //     lsu_axi_bready  <= 1'b0;
    //     //     // lsu_axi_awid    <= 0;
    //     // end else 
    //     if (state == WR) begin
    //         if (!lsu_axi_awvalid && !aw_done) begin
    //             lsu_axi_awaddr  <= addr_reg;  
    //             lsu_axi_awvalid <= 1'b1;
    //             // lsu_axi_awid    <= AXI_ID;
    //             // lsu_axi_awsize  <= (saved_wstrb == 4'b0001 || saved_wstrb == 4'b0010 || 
    //             //                saved_wstrb == 4'b0100 || saved_wstrb == 4'b1000) ? AXI_SIZE_BYTE :
    //             //               (saved_wstrb == 4'b0011 || saved_wstrb == 4'b1100) ? AXI_SIZE_HALF : 
    //             //               (saved_wstrb == 4'b1111) ? AXI_SIZE_WORD : AXI_SIZE_WORD;
    //         end else if (axi_lsu_awready) begin
    //             lsu_axi_awvalid <= 1'b0;  // 地址握手完成后清零
    //         end

    //         if (!lsu_axi_wvalid && !w_done) begin
    //             lsu_axi_wdata  <= saved_wdata;  
    //             lsu_axi_wstrb  <= saved_wstrb;  
    //             lsu_axi_wvalid <= 1'b1;
    //             lsu_axi_wlast  <= 1'b1;         
    //         end else if (axi_lsu_wready) begin
    //             lsu_axi_wvalid <= 1'b0;
    //             lsu_axi_wlast  <= 1'b0;
    //         end

    //         // if (!b_done) lsu_axi_bready <= 1;
    //         // else lsu_axi_bready <= 0;
            
    //     end 
    // end

    always @(posedge clk) begin
        if (rst) begin
            rdata  <= 32'h0;
            valid  <= 1'b0;
        end else begin  
            valid <= 1'b0;

            case (state)
                // IDLE: begin end
                RD: begin
                    if (axi_lsu_rvalid && lsu_axi_rready && axi_lsu_rlast) begin
                        rdata <= in_sdram ? block_data[saved_word_offset*32 +: 32] : axi_lsu_rdata;
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

    reg        l_load;            
    reg        l_rd_en;           
    reg [3:0]  l_rd_addr;         
    reg [4:0]  l_MemLen;          

    reg        op_complete; // 缓存操作完成

    // 前递信号赋值
    assign lsu_ex_forward_rd        = l_rd_addr;
    assign lsu_ex_forward_RegWrite  = l_rd_en;
    assign lsu_ex_forward_MemRead   = l_load;

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
    end

    wire [31:0] byte_data1 = (rdata >> (cache_addr[1:0]*8));
    wire [ 7:0] byte_data = byte_data1[7:0];
    wire [15:0] half_data = (cache_addr[1:0] == 2'b00) ? (rdata[15:0]) :
                            (cache_addr[1:0] == 2'b10) ? (rdata[31:16]) : rdata[15:0];
    wire [31:0] read_lsu_data = (l_MemLen == `Mem_Bit) ? {{24{byte_data[7]}}, byte_data} :
                                (l_MemLen == `Mem_UBit) ? {24'b0, byte_data} :
                                (l_MemLen == `Mem_Half) ? {{16{half_data[15]}}, half_data} :
                                (l_MemLen == `Mem_UHalf) ? {16'b0, half_data} :
                                rdata;
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
            end else if (valid) begin
                // read_pending  <= 0;
                op_complete   <= 1;
                // read_lsu_data <= extract_read_data(l_MemLen, cache_addr[1:0], rdata);
                // read_lsu_data <= (l_MemLen == `Mem_Bit || l_MemLen == `Mem_UBit) ? 
                //                  ( (rdata >> (cache_addr[1:0]*8)) & 32'h000000FF ) : 
                //                  (l_MemLen == `Mem_Half || l_MemLen == `Mem_UHalf) ? 
                //                  ( (rdata >> (cache_addr[1:0]*8)) & 32'h0000FFFF ) : 
                //                  rdata;
            // `ifdef VERILATOR
            //     counter(7, 0, 1, 0);
            // `endif
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
        // if (rst) begin
        //     lsu_wb_RegWrite      <= 0;
        //     lsu_wb_rd            <= 0;
        //     lsu_wb_write_rd_data <= 0;
        //     lsu_wb_csr_wen1      <= 0;
        //     lsu_wb_csr_wen2      <= 0;
        //     lsu_wb_csr_wr_addr1  <= 0;
        //     lsu_wb_csr_wr_addr2  <= 0;
        //     lsu_wb_csr_wr_data1  <= 0;
        //     lsu_wb_csr_wr_data2  <= 0;
        // end else 
        if (op_complete) begin
            lsu_wb_RegWrite      <= l_rd_en;
            lsu_wb_rd            <= l_rd_addr;
            lsu_wb_csr_wen1      <= ex_lsu_csr_wen1;
            lsu_wb_csr_ecall      <= ex_lsu_csr_ecall;
            lsu_wb_csr_wr_addr1  <= ex_lsu_csr_wr_addr1;
            // lsu_wb_csr_wr_addr2  <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1  <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2  <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data <= rd_data;
        end else if (ex_lsu_valid & lsu_ex_ready & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_RegWrite      <= ex_lsu_RegWrite; // 非内存访问指令
            lsu_wb_rd            <= ex_lsu_rd;
            lsu_wb_csr_wen1      <= ex_lsu_csr_wen1;
            lsu_wb_csr_ecall      <= ex_lsu_csr_ecall;
            lsu_wb_csr_wr_addr1  <= ex_lsu_csr_wr_addr1;
            // lsu_wb_csr_wr_addr2  <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1  <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2  <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data <= rd_data;
        end
    end


endmodule
