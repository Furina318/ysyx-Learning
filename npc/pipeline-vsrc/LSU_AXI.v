`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/pipeline-vsrc/defines/defines.v"

module LSU_AXI (
    input         clk,
    input         rst,
    // 流水线握手信号
    input         ex_lsu_valid,       // 从 EX 阶段传入的有效信号
    output reg    lsu_ex_ready,       // 返回给 EX 阶段的就绪信号
    input         wb_lsu_ready,       // 从 WB 阶段传入的就绪信号
    output reg    lsu_wb_valid,       // 传递给 WB 阶段的有效信号

    input         ex_lsu_forward_las,
    input         ex_lsu_RegWrite,    // 寄存器写使能
    input  [4:0]  ex_lsu_rd,          // 目标寄存器地址
    input         ex_lsu_MemRead,     // 内存读使能
    input         ex_lsu_MemWrite,    // 内存写使能
    input  [2:0]  ex_lsu_MemLen,      // 内存访问长度（字节、半字、字）
    input  [31:0] ex_lsu_inst,        // 指令
    input  [31:0] ex_lsu_pc,          // 程序计数器

    input  [31:0] addr,               // 内存访问地址
    input  [31:0] data_in,            // 写内存的数据
    input  [31:0] ex_lsu_imm,         // 立即数
    input  [6:0]  ex_lsu_opcode,      // 指令操作码

    // 前递信号
    output [4:0]  lsu_ex_forward_rd,
    output        lsu_ex_forward_RegWrite,
    output        lsu_ex_forward_MemRead,

    input         ex_lsu_csr,
    input         ex_lsu_csr_wen1,
    input         ex_lsu_csr_wen2,
    input [31:0]  ex_lsu_csr_wr_data1,
    input [31:0]  ex_lsu_csr_wr_data2,
    input [11:0]  ex_lsu_csr_wr_addr1,
    input [11:0]  ex_lsu_csr_wr_addr2,
    input [31:0]  ex_lsu_csr_rdata,
    input         ex_lsu_csr_ecall,
    input         ex_lsu_csr_mret,
    input  [31:0] ex_lsu_process_result,

    // 传递到 WB 阶段的信号
    output reg [31:0] lsu_wb_inst,
    output reg [31:0] lsu_wb_pc,
    input             ex_flush,
    output reg        lsu_wb_flush,
    output reg [31:0] lsu_wb_csr_wr_data1,
    output reg [31:0] lsu_wb_csr_wr_data2,
    output reg [11:0] lsu_wb_csr_wr_addr1,
    output reg [11:0] lsu_wb_csr_wr_addr2,
    output reg        lsu_wb_csr_wen1,
    output reg        lsu_wb_csr_wen2,
    output reg        lsu_wb_RegWrite,
    output reg [4:0]  lsu_wb_rd,
    output reg [31:0] lsu_wb_write_rd_data
);
    // 内部寄存器
    reg l_load;            // 加载标志
    reg l_rd_en;           // 寄存器写使能
    reg [4:0]  l_rd_addr;  // 目标寄存器地址
    reg [31:0] l_inst;     // 指令
    reg [31:0] l_pc;       // 程序计数器
    reg [2:0]  l_MemLen;   // 内存访问长度
    reg [6:0]  l_opcode;   // 指令操作码

    // 前递信号赋值
    assign lsu_ex_forward_rd         = l_rd_addr;
    assign lsu_ex_forward_RegWrite   = l_rd_en;
    assign lsu_ex_forward_MemRead    = l_load;

    // 内存读写数据
    reg [31:0] read_lsu_data;  // 从内存读取的数据

    // 状态机定义
    // typedef enum {IDLE, READ_ADDR, READ_DATA, WRITE_ADDR, WRITE_DATA, WRITE_RESP, STALL} state_t;
    // state_t state, next_state;

    // // AXI4 接口信号
    // //AR channel
    // reg  [31:0] araddr;        // 读地址
    // reg         arvalid;       // 读地址有效
    // wire        arready;       // SRAM 读地址就绪
    // //R channel
    // wire [31:0] rdata;        // 读数据
    // wire [1:0]  rresp;        // 读响应
    // wire        rvalid;       // 读数据有效
    // reg         rready;       // CPU 读数据就绪
    // //AW channel
    // reg  [31:0] awaddr;        // 写地址
    // reg         awvalid;       // 写地址有效
    // wire        awready;       // SRAM 写地址就绪
    // //W channel
    // reg  [31:0] wdata;         // 写数据
    // reg  [3:0]  wstrb;         // 写掩码
    // reg         wvalid;        // 写数据有效
    // wire        wready;        // SRAM 写数据就绪
    // //B channel
    // wire [1:0]  bresp;        // 写响应
    // wire        bvalid;       // 写响应有效
    // reg         bready;       // CPU 写响应就绪

    // 寄存器更新逻辑
    always @(posedge clk) begin
        if (rst) begin
            l_load    <= 0;
            l_rd_en   <= 0;
            l_rd_addr <= 0;
            l_inst    <= 0;
            l_pc      <= 0;
            l_MemLen  <= 0;
            l_opcode  <= 0;
        end
        else if (ex_lsu_valid & lsu_ex_ready & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            l_load    <= ex_lsu_MemRead;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_inst    <= ex_lsu_inst;
            l_pc      <= ex_lsu_pc;
            l_MemLen  <= ex_lsu_MemLen;
            l_opcode  <= ex_lsu_opcode;
        end
        else if (lsu_wb_valid & wb_lsu_ready) begin
            l_load    <= 0;
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_inst    <= ex_lsu_inst;
            l_pc      <= ex_lsu_pc;
            l_MemLen  <= ex_lsu_MemLen;
            l_opcode  <= l_inst[6:0];
        end
        else if (ex_lsu_valid && lsu_ex_ready) begin // 非访存指令
            l_load    <= l_load;
 
            l_rd_en   <= ex_lsu_RegWrite;
            l_rd_addr <= ex_lsu_rd;
            l_inst    <= ex_lsu_inst;
            l_pc      <= ex_lsu_pc;
            l_MemLen  <= ex_lsu_MemLen;
            l_opcode  <= l_inst[6:0];
        end
        else begin
            l_load    <= l_load;
            l_rd_en   <= l_rd_en;
            l_rd_addr <= l_rd_addr;
            l_inst    <= l_inst;
            l_pc      <= l_pc;
            l_MemLen  <= l_MemLen;
            l_opcode  <= l_opcode;
        end
    end

    // AXI4 接口信号
    //AR channel
    reg  [31:0] lsu_sram_araddr;        // 读地址
    reg         lsu_sram_arvalid;       // 读地址有效
    wire        sram_lsu_arready;       // SRAM 读地址就绪
    //R channel
    wire [31:0] sram_lsu_rdata;        // 读数据
    wire [1:0]  sram_lsu_rresp;        // 读响应
    wire        sram_lsu_rvalid;       // 读数据有效
    reg         lsu_sram_rready;       // CPU 读数据就绪
    //AW channel
    reg  [31:0] lsu_sram_awaddr;        // 写地址
    reg         lsu_sram_awvalid;       // 写地址有效
    wire        sram_lsu_awready;       // SRAM 写地址就绪
    //W channel
    reg  [31:0] lsu_sram_wdata;         // 写数据
    reg  [3:0]  lsu_sram_wstrb;         // 写掩码
    reg         lsu_sram_wvalid;        // 写数据有效
    wire        sram_lsu_wready;        // SRAM 写数据就绪
    //B channel
    wire [1:0]  sram_lsu_bresp;        // 写响应
    wire        sram_lsu_bvalid;       // 写响应有效
    reg         lsu_sram_bready;       // CPU 写响应就绪

    reg axi_handshake;
    reg read_done, write_done;

    // 实例化 SRAM 模块
    SRAM mem_sram (
        .clk(clk),
        .rst(rst),
        .araddr(lsu_sram_araddr),
        .arvalid(lsu_sram_arvalid),
        .arready(sram_lsu_arready),
        .rdata(sram_lsu_rdata),
        .rresp(sram_lsu_rresp),
        .rvalid(sram_lsu_rvalid),
        .rready(lsu_sram_rready),
        .awaddr(lsu_sram_awaddr),
        .awvalid(lsu_sram_awvalid),
        .awready(sram_lsu_awready),
        .wdata(lsu_sram_wdata),
        .wstrb(lsu_sram_wstrb),
        .wvalid(lsu_sram_wvalid),
        .wready(sram_lsu_wready),
        .bresp(sram_lsu_bresp),
        .bvalid(sram_lsu_bvalid),
        .bready(lsu_sram_bready)
    );


    //AR channel
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            lsu_sram_arvalid <= 1'b0;
            lsu_sram_araddr  <= 32'b0;
        end
        else if ((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemRead & ~ex_lsu_MemWrite)) begin
            lsu_sram_arvalid <= 1'b1;
            lsu_sram_araddr  <= addr;
        end
        else if(lsu_sram_arvalid & sram_lsu_arready) begin
            lsu_sram_arvalid <= 1'b0;
            lsu_sram_araddr  <= 32'b0;
        end
        else begin
            lsu_sram_arvalid <= lsu_sram_arvalid;
            lsu_sram_araddr  <= lsu_sram_araddr;
        end
    end
    //R channel
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            read_lsu_data   <= 32'b0;
            lsu_sram_rready <= 1'b0;
            read_done       <= 1'b0;
            axi_handshake   <= 1'b0; // 初始化握手信号
        end
        else if((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemRead & ~ex_lsu_MemWrite)) begin
            lsu_sram_rready <= 1'b1;
            read_lsu_data   <= 32'b0;
            read_done       <= 1'b0; // 读操作开始，重置读完成标志
            axi_handshake   <= 1'b1; // 开始握手
        end
        else if(lsu_sram_rready & sram_lsu_rvalid) begin
            lsu_sram_rready <= 1'b0;
            read_done       <= 1'b1; // 读操作完成，设置读完成标志
            axi_handshake   <= 1'b0; // 完成握手
            case (l_MemLen)
                `Mem_Bit:   read_lsu_data <= {{24{sram_lsu_rdata[7]}}, sram_lsu_rdata[7:0]};
                `Mem_UBit:  read_lsu_data <= {24'b0, sram_lsu_rdata[7:0]};
                `Mem_UHalf: read_lsu_data <= {16'b0, sram_lsu_rdata[15:0]};
                `Mem_Half:  read_lsu_data <= {{16{sram_lsu_rdata[15]}}, sram_lsu_rdata[15:0]};
                `Mem_Word:  read_lsu_data <= sram_lsu_rdata;
                default:    read_lsu_data <= 32'h0;
            endcase
        end
        else begin
            read_done <= 1'b0;
        end
    end 
    //AW channel
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            lsu_sram_awvalid <= 1'b0;
            lsu_sram_awaddr  <= 32'b0;
        end
        else if((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemWrite & ~ex_lsu_MemRead)) begin
            lsu_sram_awvalid <= 1'b1;
            lsu_sram_awaddr  <= addr;
        end
        else if(lsu_sram_awvalid & sram_lsu_awready) begin
            lsu_sram_awvalid <= 1'b0;
            lsu_sram_awaddr  <= 32'b0;
        end
        else begin
            lsu_sram_awvalid <= lsu_sram_awvalid;
            lsu_sram_awaddr  <= lsu_sram_awaddr;
        end
    end
    //W channel
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            lsu_sram_wvalid <= 1'b0;
            lsu_sram_wdata  <= 32'b0;
            lsu_sram_wstrb  <= 4'b1111;
            write_done      <= 1'b0; // 初始化写完成标志
            axi_handshake   <= 1'b0; // 初始化握手信号
        end
        else if((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemWrite & ~ex_lsu_MemRead)) begin
            lsu_sram_wvalid <= 1'b1;
            lsu_sram_wdata  <= data_in;
            write_done      <= 1'b0; // 写操作开始，重置写完成标志
            axi_handshake   <= 1'b1; // 开始握手
            case (l_MemLen)
                `Mem_Bit:  lsu_sram_wstrb <= 4'b0001;
                `Mem_Half: lsu_sram_wstrb <= 4'b0011;
                `Mem_Word: lsu_sram_wstrb <= 4'b1111;
                default:   lsu_sram_wstrb <= 4'b1111;
            endcase
        end
        else if(lsu_sram_wvalid & sram_lsu_wready) begin
            lsu_sram_wvalid <= 1'b0;
            lsu_sram_wdata  <= 32'b0;
            lsu_sram_wstrb  <= 4'b1111;
            write_done      <= 1'b1; // 写操作完成，设置写完成标志
            axi_handshake   <= 1'b0; // 完成握手
        end
        else begin
            write_done      <= 1'b0;
        end
    end
    //B channel
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            lsu_sram_bready <= 1'b0;
        end
        else if((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemWrite & ~ex_lsu_MemRead)) begin
            lsu_sram_bready <= 1'b1;
        end
        else if(lsu_sram_bready & sram_lsu_bvalid) begin
            lsu_sram_bready <= 1'b0;
        end
        else begin
            lsu_sram_bready <= lsu_sram_bready;
        end
    end 

    // 写回数据选择
    reg [31:0] rd_data;
    always @(*) begin
        if (l_load) rd_data = read_lsu_data;
        else if (ex_lsu_forward_las) rd_data = data_in;
        else if (ex_lsu_MemWrite) rd_data = 32'h0;
        else if (ex_lsu_csr & !ex_lsu_csr_ecall & !ex_lsu_csr_mret) rd_data = ex_lsu_csr_rdata;
        else rd_data = ex_lsu_process_result;
    end

    always @(posedge clk) begin
        if(rst) begin
            lsu_ex_ready <= 1'b1;
        end
        else if((ex_lsu_valid & lsu_ex_ready) & (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_ex_ready <= 1'b0; // EX 阶段等待 LSU 完成
        end
        else if(wb_lsu_ready & lsu_wb_valid) begin
            lsu_ex_ready <= 1'b1;
        end
        // else if(ex_lsu_valid && lsu_ex_ready) begin
        //     lsu_ex_ready <= 1'b0;
        // end
        else begin
            lsu_ex_ready <= lsu_ex_ready; // 保持当前状态
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            lsu_wb_valid <= 1'b0;
        end
        else if((ex_lsu_valid && lsu_ex_ready) & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_valid <= 1'b1;
        end
        else if(write_done | read_done) begin
            lsu_wb_valid <= 1'b1;
        end
        else if(ex_lsu_valid && lsu_ex_ready && (ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_valid <= 1'b0;
        end
        else if(~(ex_lsu_valid && lsu_ex_ready) & lsu_wb_valid) begin
            lsu_wb_valid <= 1'b0;
        end
        else if(axi_handshake) begin
            lsu_wb_valid <= 1'b0;
        end
        else begin
            lsu_wb_valid <= lsu_wb_valid;
        end
    end
    
    // 输出到 WB 阶段
    always @(posedge clk) begin
        if (rst) begin
            lsu_wb_RegWrite <= 0;
            lsu_wb_rd <= 0;
            lsu_wb_write_rd_data <= 0;
            lsu_wb_inst <= 0;
            lsu_wb_pc <= 0;
            lsu_wb_csr_wen1 <= 0;
            lsu_wb_csr_wen2 <= 0;
            lsu_wb_csr_wr_addr1 <= 0;
            lsu_wb_csr_wr_addr2 <= 0;
            lsu_wb_csr_wr_data1 <= 0;
            lsu_wb_csr_wr_data2 <= 0;
            lsu_wb_flush <= 0;
        end
        else if (read_done | write_done) begin
            lsu_wb_RegWrite <= l_rd_en;
            lsu_wb_rd <= l_rd_addr;
            lsu_wb_write_rd_data <= rd_data;
            lsu_wb_inst <= l_inst;
            lsu_wb_pc <= l_pc;
            lsu_wb_csr_wen1 <= ex_lsu_csr_wen1;
            lsu_wb_csr_wen2 <= ex_lsu_csr_wen2;
            lsu_wb_csr_wr_addr1 <= ex_lsu_csr_wr_addr1;
            lsu_wb_csr_wr_addr2 <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1 <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2 <= ex_lsu_csr_wr_data2;
            lsu_wb_flush <= ex_flush;
        end
        else if(axi_handshake) begin
            lsu_wb_RegWrite <= l_rd_en;
            lsu_wb_rd <= l_rd_addr;
            lsu_wb_csr_wen1 <= ex_lsu_csr_wen1;
            lsu_wb_csr_wen2 <= ex_lsu_csr_wen2;
            lsu_wb_csr_wr_addr1 <= ex_lsu_csr_wr_addr1;
            lsu_wb_csr_wr_addr2 <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1 <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2 <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data <= rd_data;
            lsu_wb_inst <= l_inst;
            lsu_wb_pc <= l_pc;
            lsu_wb_flush <= ex_flush;
        end
        else if (ex_lsu_valid & lsu_ex_ready & ~(ex_lsu_MemRead | ex_lsu_MemWrite)) begin
            lsu_wb_RegWrite        <= ex_lsu_RegWrite; // 非内存访问指令
            lsu_wb_rd              <= ex_lsu_rd;
            lsu_wb_csr_wen1     <= ex_lsu_csr_wen1;
            lsu_wb_csr_wen2     <= ex_lsu_csr_wen2;
            lsu_wb_csr_wr_addr1 <= ex_lsu_csr_wr_addr1;
            lsu_wb_csr_wr_addr2 <= ex_lsu_csr_wr_addr2;
            lsu_wb_csr_wr_data1 <= ex_lsu_csr_wr_data1;
            lsu_wb_csr_wr_data2 <= ex_lsu_csr_wr_data2;
            lsu_wb_write_rd_data  <= rd_data;
            lsu_wb_inst           <= ex_lsu_inst;
            lsu_wb_pc             <= ex_lsu_pc;
            lsu_wb_flush          <= ex_flush;
        end
        else begin
            lsu_wb_RegWrite     <= lsu_wb_RegWrite;
            lsu_wb_rd           <= lsu_wb_rd;
            lsu_wb_write_rd_data<= lsu_wb_write_rd_data;
            lsu_wb_inst         <= lsu_wb_inst;
            lsu_wb_pc           <= lsu_wb_pc;
            lsu_wb_csr_wr_data1 <= lsu_wb_csr_wr_data1;
            lsu_wb_csr_wr_data2 <= lsu_wb_csr_wr_data2;
            lsu_wb_csr_wr_addr1 <= lsu_wb_csr_wr_addr1;
            lsu_wb_csr_wr_addr2 <= lsu_wb_csr_wr_addr2;
            lsu_wb_csr_wen1     <= lsu_wb_csr_wen1;
            lsu_wb_csr_wen2     <= lsu_wb_csr_wen2;
            lsu_wb_flush        <= ex_flush;
        end
    end
endmodule