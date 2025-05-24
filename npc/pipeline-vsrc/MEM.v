`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/pipeline-vsrc/defines/defines.v"

module MEM (
    input         clk,
    input         rst,
    // input         MEM_LSU_read_ready,   // 内存读就绪信号（假设外部提供）
    // input         MEM_LSU_write_ready,  // 内存写就绪信号（假设外部提供）
    // 流水线握手信号
    input         ex_mem_valid,       // 从 EX 阶段传入的有效信号
    output reg    mem_ex_ready,       // 返回给 EX 阶段的就绪信号
    input         wb_mem_ready,       // 从 WB 阶段传入的就绪信号
    output reg    mem_wb_valid,       // 传递给 WB 阶段的有效信号

    input         ex_mem_forward_las,
    input         ex_mem_RegWrite,     // 寄存器写使能
    input  [4:0]  ex_mem_rd,           // 目标寄存器地址
    input         ex_mem_MemRead,            // 内存读使能
    input         ex_mem_MemWrite,           // 内存写使能
    input  [2:0]  ex_mem_MemLen,             // 内存访问长度（字节、半字、字）
    input  [31:0] ex_mem_inst,               // 指令
    input  [31:0] ex_mem_pc,                 // 程序计数器

    input  [31:0] addr,               // 内存访问地址(传ex计算结果）
    input  [31:0] data_in,            // 写内存的数据
    input  [31:0] ex_mem_imm,         // 立即数（从 EX 阶段传入）
    input  [6:0]  ex_mem_opcode,      // 指令操作码

    // 前递信号
    output [4:0]  mem_ex_forward_rd,          // 前递的目标寄存器地址
    output        mem_ex_forward_RegWrite,    // 前递使能
    output        mem_ex_forward_MemRead,     // 前递加载标志

    input         ex_mem_csr,
    input         ex_mem_csr_wen1,
    input         ex_mem_csr_wen2,
    input [31:0]  ex_mem_csr_wr_data1,
    input [31:0]  ex_mem_csr_wr_data2,
    input [11:0]  ex_mem_csr_wr_addr1,
    input [11:0]  ex_mem_csr_wr_addr2,
    input [31:0]  ex_mem_csr_rdata,
    input         ex_mem_csr_ecall,
    input         ex_mem_csr_mret,
    input  [31:0] ex_mem_process_result,

    // 传递到 WB 阶段的信号
    output reg [31:0] mem_wb_inst,         // 指令
    output reg [31:0] mem_wb_pc,           // 程序计数器
    input             ex_flush,
    output reg        mem_wb_flush,

    output reg [31:0] mem_wb_csr_wr_data1,
    output reg [31:0] mem_wb_csr_wr_data2,
    output reg [11:0] mem_wb_csr_wr_addr1,
    output reg [11:0] mem_wb_csr_wr_addr2,
    output reg        mem_wb_csr_wen1,
    output reg        mem_wb_csr_wen2,
    output reg        mem_wb_RegWrite,        // 寄存器写使能
    output reg [4:0]  mem_wb_rd,              // 目标寄存器地址
    output reg [31:0] mem_wb_write_rd_data    // 写回寄存器的数据
);
    // DPI 函数声明
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    // 内部寄存器
    reg l_load;            // 加载标志
    reg l_rd_en;           // 寄存器写使能
    reg [4:0]  l_rd_addr;  // 目标寄存器地址
    reg [31:0] l_inst;     // 指令
    reg [31:0] l_pc;       // 程序计数器
    reg [2:0]  l_MemLen;   // 内存访问长度
    reg [6:0]  l_opcode;   // 指令操作码

    reg read_valid;// 内存读有效信号
    reg write_valid;// 内存写有效信号

    // 前递信号赋值
    assign mem_ex_forward_rd = l_rd_addr;
    assign mem_ex_forward_RegWrite   = l_rd_en;
    assign mem_ex_forward_MemRead    = l_load;

    // 内存读写数据
    reg [31:0] read_mem_data;  // 从内存读取的数据
    wire [31:0] wr_rd_data; // 处理后的写回数据

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
        else if (ex_mem_valid & mem_ex_ready & (ex_mem_MemRead | ex_mem_MemWrite)) begin
            l_load    <= ex_mem_MemRead;
            l_rd_en   <= ex_mem_RegWrite;
            l_rd_addr <= ex_mem_rd;    
            l_inst    <= ex_mem_inst;   
            l_pc      <= ex_mem_pc;   
            l_MemLen  <= ex_mem_MemLen;
            l_opcode  <= ex_mem_opcode;
        end
        else if (mem_wb_valid & wb_mem_ready) begin
            l_load    <= 0;
            l_rd_en   <= ex_mem_RegWrite;
            l_rd_addr <= ex_mem_rd;    
            l_inst    <= ex_mem_inst;   
            l_pc      <= ex_mem_pc;  
            l_MemLen  <= ex_mem_MemLen;
            l_opcode  <= l_inst[6:0]; // 从指令中提取 opcode
        end
        else if(ex_mem_valid && mem_ex_ready) begin//非访存指令
            l_load    <= l_load;
            l_rd_en   <= ex_mem_RegWrite;
            l_rd_addr <= ex_mem_rd;    
            l_inst    <= ex_mem_inst;   
            l_pc      <= ex_mem_pc;   
            l_MemLen  <= ex_mem_MemLen;
            l_opcode  <= l_inst[6:0]; // 从指令中提取 opcode
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

    // 内存读控制
    always @(posedge clk) begin 
        if (rst) begin
            read_valid <= 0;
            read_mem_data     = 0;
        end
        else if ((ex_mem_valid & mem_ex_ready) & (ex_mem_MemRead & ~ex_mem_MemWrite)) begin
            read_valid <= 1;
            // read_mem_data = pmem_read(addr, 4);
            case (l_MemLen)
                `Mem_UBit:  begin
                    read_mem_data = pmem_read(addr, 1);
                end
                `Mem_Bit:   begin
                    read_mem_data = pmem_read(addr, 1);
                end
                `Mem_UHalf: begin
                    read_mem_data = pmem_read(addr, 2);
                end
                `Mem_Half:  begin
                    read_mem_data = pmem_read(addr, 2);
                end
                `Mem_Word:  begin
                    read_mem_data = pmem_read(addr, 4);
                end
                default: read_mem_data = 32'h0;
            endcase
            $display("read addr: %h, data: %h, MemLen: %b, opcode: %b", addr, read_mem_data, l_MemLen, l_opcode);
        end
        // else if (LSU_MEM_read_valid & MEM_LSU_read_ready) begin
        //     LSU_MEM_read_valid <= 0;
        // end
        else begin
            read_valid <= 0;
            read_mem_data       = read_mem_data;
        end
    end

    assign wr_rd_data = (l_MemLen == `Mem_UBit) ? {{24{1'b0}}, read_mem_data[7:0]} :
                        (l_MemLen == `Mem_Bit)  ? {{24{read_mem_data[7]}}, read_mem_data[7:0]} :
                        (l_MemLen == `Mem_UHalf)? {{16{1'b0}}, read_mem_data[15:0]} :
                        (l_MemLen == `Mem_Half) ? {{16{read_mem_data[15]}}, read_mem_data[15:0]} :
                        (l_MemLen == `Mem_Word)? read_mem_data : 32'b0;
    // 内存写控制
    // reg [31:0] data_in;
    always @(posedge clk) begin
        if (rst) begin
            write_valid <= 0;
        end
        else if (ex_mem_valid & mem_ex_ready & ~ex_mem_MemRead & ex_mem_MemWrite) begin
            write_valid <= 1;
            case (ex_mem_MemLen)
                `Mem_Bit:  pmem_write(addr,data_in,1);//sb
                `Mem_Half: pmem_write(addr,data_in,2);//sh
                `Mem_Word: pmem_write(addr,data_in,4);//sw
                default:   pmem_write(addr,data_in,4);
            endcase
            $display("write addr: %h, data: %h", addr, data_in);
        end
        else begin
            write_valid <= 0;
        end
    end

    reg [31:0] rd_data;
    always @(*) begin
        if(l_load) begin
            rd_data = wr_rd_data;
        end
        else if(ex_mem_forward_las) begin
            rd_data = data_in;
        end
        else if(ex_mem_MemWrite) begin
            rd_data = 32'h0;
        end
        else if(ex_mem_csr & !ex_mem_csr_ecall & !ex_mem_csr_mret) begin
            rd_data = ex_mem_csr_rdata;
        end
        else begin
            rd_data = ex_mem_process_result;
        end
    end
    // assign rd_data = (ex_mem_forward_las) ? data_in :
    //                  (ex_mem_opcode == `INST_LW) ? wr_rd_data :
    //                 //  (ex_mem_opcode == `INST_LW) ? wr_rd_data :
    //                  (ex_mem_opcode == `INST_LUI) ? ex_mem_imm :
    //                 //  (ex_mem_opcode == `INST_AUIPC) ? ex_mem_process_result:
    //                  (ex_mem_opcode == `INST_AUIPC) ? ex_mem_pc + ex_mem_imm :
    //                  (ex_mem_opcode == `INST_JAL) ? ex_mem_pc + 4 :
    //                  (ex_mem_opcode == `INST_JALR) ? ex_mem_pc + 4 :
    //                  (ex_mem_opcode == `INST_CSR) ? ex_mem_csr_rdata :
    //                  (ex_mem_opcode == `INST_R) ? ex_mem_process_result :
    //                  (ex_mem_opcode == `INST_I) ? ex_mem_process_result : 32'b0;

    // 流水线握手逻辑
    always @(posedge clk) begin
        if (rst) begin
            mem_ex_ready <= 1;
        end
        else if (ex_mem_valid & mem_ex_ready & (ex_mem_MemRead | ex_mem_MemWrite)) begin
            mem_ex_ready <= 0;
        end
        else if (mem_wb_valid & wb_mem_ready) begin
            mem_ex_ready <= 1;
        end
        else begin
            mem_ex_ready <= mem_ex_ready;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            mem_wb_valid <= 0;
        end
        else if (ex_mem_valid & mem_ex_ready & ~(ex_mem_MemRead | ex_mem_MemWrite)) begin
            mem_wb_valid <= 1;
        end
        else if (read_valid || write_valid) begin
            mem_wb_valid <= 1;
        end
        else if (ex_mem_valid & mem_ex_ready & (ex_mem_MemRead | ex_mem_MemWrite)) begin
            mem_wb_valid <= 0;
        end
        else begin
            mem_wb_valid <= mem_wb_valid;
        end
    end

    // 输出到 WB 阶段
    always @(posedge clk) begin
        if (rst) begin
            mem_wb_RegWrite        <= 0;
            mem_wb_rd              <= 0;
            mem_wb_write_rd_data   <= 0;
            mem_wb_inst            <= 0;
            mem_wb_pc              <= 0;
            mem_wb_csr_wen1     <= 0;
            mem_wb_csr_wen2     <= 0;
            mem_wb_csr_wr_addr1 <= 0;
            mem_wb_csr_wr_addr2 <= 0;
            mem_wb_csr_wr_data1 <= 0;
            mem_wb_csr_wr_data2 <= 0;
            mem_wb_flush        <= 0;
        end
        else if (write_valid) begin
            mem_wb_RegWrite        <= l_rd_en;
            mem_wb_rd              <= l_rd_addr;
            mem_wb_csr_wen1     <= ex_mem_csr_wen1;
            mem_wb_csr_wen2     <= ex_mem_csr_wen2;
            mem_wb_csr_wr_addr1 <= ex_mem_csr_wr_addr1;
            mem_wb_csr_wr_addr2 <= ex_mem_csr_wr_addr2;
            mem_wb_csr_wr_data1 <= ex_mem_csr_wr_data1;
            mem_wb_csr_wr_data2 <= ex_mem_csr_wr_data2;
            mem_wb_write_rd_data  <= rd_data;
            mem_wb_inst           <= l_inst;
            mem_wb_pc             <= l_pc;
            mem_wb_flush          <= ex_flush;
        end
        else if (read_valid) begin
            mem_wb_RegWrite       <= l_rd_en;
            mem_wb_rd             <= l_rd_addr;
            mem_wb_csr_wen1     <= ex_mem_csr_wen1;
            mem_wb_csr_wen2     <= ex_mem_csr_wen2;
            mem_wb_csr_wr_addr1 <= ex_mem_csr_wr_addr1;
            mem_wb_csr_wr_addr2 <= ex_mem_csr_wr_addr2;
            mem_wb_csr_wr_data1 <= ex_mem_csr_wr_data1;
            mem_wb_csr_wr_data2 <= ex_mem_csr_wr_data2;
            mem_wb_write_rd_data  <= rd_data;
            mem_wb_inst           <= l_inst;
            mem_wb_pc             <= l_pc;
            mem_wb_flush          <= ex_flush;
        end
        else if (ex_mem_valid & mem_ex_ready & ~(ex_mem_MemRead | ex_mem_MemWrite)) begin
            mem_wb_RegWrite        <= ex_mem_RegWrite; // 非内存访问指令
            mem_wb_rd              <= ex_mem_rd;
            mem_wb_csr_wen1     <= ex_mem_csr_wen1;
            mem_wb_csr_wen2     <= ex_mem_csr_wen2;
            mem_wb_csr_wr_addr1 <= ex_mem_csr_wr_addr1;
            mem_wb_csr_wr_addr2 <= ex_mem_csr_wr_addr2;
            mem_wb_csr_wr_data1 <= ex_mem_csr_wr_data1;
            mem_wb_csr_wr_data2 <= ex_mem_csr_wr_data2;
            mem_wb_write_rd_data  <= rd_data;
            mem_wb_inst           <= ex_mem_inst;
            mem_wb_pc             <= ex_mem_pc;
            mem_wb_flush          <= ex_flush;
        end
        else begin
            mem_wb_RegWrite     <= mem_wb_RegWrite;
            mem_wb_rd           <= mem_wb_rd;
            mem_wb_write_rd_data<= mem_wb_write_rd_data;
            mem_wb_inst         <= mem_wb_inst;
            mem_wb_pc           <= mem_wb_pc;
            mem_wb_csr_wr_data1 <= mem_wb_csr_wr_data1;
            mem_wb_csr_wr_data2 <= mem_wb_csr_wr_data2;
            mem_wb_csr_wr_addr1 <= mem_wb_csr_wr_addr1;
            mem_wb_csr_wr_addr2 <= mem_wb_csr_wr_addr2;
            mem_wb_csr_wen1     <= mem_wb_csr_wen1;
            mem_wb_csr_wen2     <= mem_wb_csr_wen2;
            mem_wb_flush        <= ex_flush;
        end
    end

endmodule