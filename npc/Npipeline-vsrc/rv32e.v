`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/Npipeline-vsrc/defines/defines.v"

module rv32e (
    input clk,
    input reset
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    // 顶层信号声明
    wire [31:0] IF_ID_pc;         // IF 到 ID：程序计数器
    wire [31:0] IF_ID_inst;       // IF 到 ID：指令
    wire        IF_valid;         // IF 到 ID：有效信号
    wire        id_ready;         // ID 到 IF：就绪信号

    wire [31:0] id_ex_pc;         // ID 到 EX：程序计数器
    wire [31:0] id_ex_inst;       // ID 到 EX：指令
    wire        id_valid;         // ID 到 EX：有效信号
    wire        ex_ready;         // EX 到 ID：就绪信号
    wire        id_ex_RegWrite;   // ID 到 EX：寄存器写使能
    wire [4:0]  id_ex_rd;         // ID 到 EX：目标寄存器
    wire [4:0]  id_wb_rs1;        // ID 到 WB：源寄存器 1
    wire [4:0]  id_wb_rs2;        // ID 到 WB：源寄存器 2
    wire [4:0]  id_ex_zimm;       // ID 到 EX：CSR 立即数
    wire [31:0] id_ex_imm;        // ID 到 EX：立即数
    wire [5:0]  id_ex_shamt;      // ID 到 EX：移位量
    wire [3:0]  id_ex_alu_op;     // ID 到 EX：ALU 操作
    wire [2:0]  id_ex_MemLen;     // ID 到 EX：内存访问长度
    wire        id_ex_MemWrite;   // ID 到 EX：内存写使能
    wire        id_ex_MemRead;    // ID 到 EX：内存读使能
    wire [6:0]  id_ex_opcode;     // ID 到 EX：操作码
    wire [2:0]  id_ex_func3;      // ID 到 EX：功能码 3
    wire        id_ex_jal;        // ID 到 EX：JAL 信号
    wire        id_ex_jalr;       // ID 到 EX：JALR 信号
    wire        id_ex_csr;        // ID 到 EX：CSR 指令信号
    wire        id_ex_csr_wen1;   // ID 到 EX：CSR 写使能 1
    wire        id_ex_csr_wen2;   // ID 到 EX：CSR 写使能 2
    wire        id_ex_csr_ecall;  // ID 到 EX：ECALL 信号
    wire        id_ex_csr_mret;   // ID 到 EX：MRET 信号
    wire [1:0]  id_ex_csr_op;
    wire [11:0] id_ex_csr_wr_addr1; // ID 到 EX：CSR 写地址 1
    wire [11:0] id_ex_csr_wr_addr2; // ID 到 EX：CSR 写地址 2
    wire [11:0] id_wb_csr_addr1;  // ID 到 WB：CSR 读地址 1
    wire [11:0] id_wb_csr_addr2;  // ID 到 WB：CSR 读地址 2

    wire [31:0] ex_lsu_pc;        // EX 到 MEM：程序计数器
    wire [31:0] ex_lsu_inst;      // EX 到 MEM：指令
    wire        ex_lsu_valid;     // EX 到 MEM：有效信号
    wire        lsu_ex_ready;     // MEM 到 EX：就绪信号
    wire [31:0] ex_lsu_src2;      // EX 到 MEM：源操作数 2
    wire        ex_lsu_RegWrite;  // EX 到 MEM：寄存器写使能
    wire [4:0]  ex_lsu_rd;        // EX 到 MEM：目标寄存器
    wire        ex_lsu_MemRead;   // EX 到 MEM：内存读使能
    wire        ex_lsu_MemWrite;  // EX 到 MEM：内存写使能
    wire [2:0]  ex_lsu_MemLen;    // EX 到 MEM：内存访问长度
    wire [31:0] ex_lsu_process_result; // EX 到 MEM：ALU/内存地址结果
    wire        ex_flush;         // EX 到 IF：冲刷信号
    wire [31:0] ex_flush_pc;      // EX 到 IF：冲刷目标 PC
    wire        ex_lsu_csr;       // EX 到 MEM：CSR 指令信号
    wire        ex_lsu_csr_wen1;  // EX 到 MEM：CSR 写使能 1
    wire        ex_lsu_csr_wen2;  // EX 到 MEM：CSR 写使能 2
    wire [11:0] ex_lsu_csr_wr_addr1; // EX 到 MEM：CSR 写地址 1
    wire [11:0] ex_lsu_csr_wr_addr2; // EX 到 MEM：CSR 写地址 2
    wire [31:0] ex_lsu_csr_wr_data1; // EX 到 MEM：CSR 写数据 1
    wire [31:0] ex_lsu_csr_wr_data2; // EX 到 MEM：CSR 写数据 2
    wire [31:0] ex_lsu_csr_rdata; // EX 到 MEM：CSR 读数据
    wire        ex_lsu_csr_ecall; // EX 到 MEM：ECALL 信号
    wire        ex_lsu_csr_mret;  // EX 到 MEM：MRET 信号
    wire [31:0] ex_lsu_imm;     // EX 到 MEM：立即数
    wire [6:0]  ex_lsu_opcode; // EX 到 MEM：操作码

    wire [31:0] lsu_wb_pc;        // MEM 到 WB：程序计数器
    wire [31:0] lsu_wb_inst;      // MEM 到 WB：指令
    wire        lsu_wb_valid;     // MEM 到 WB：有效信号
    wire        wb_lsu_ready;     // WB 到 MEM：就绪信号
    wire        lsu_wb_RegWrite;  // MEM 到 WB：寄存器写使能
    wire [4:0]  lsu_wb_rd;        // MEM 到 WB：目标寄存器
    wire [31:0] lsu_wb_write_rd_data; // MEM 到 WB：写回数据
    wire [31:0] lsu_wb_csr_wr_data1;  // MEM 到 WB：CSR 写数据 1
    wire [31:0] lsu_wb_csr_wr_data2;  // MEM 到 WB：CSR 写数据 2
    wire [11:0] lsu_wb_csr_wr_addr1;  // MEM 到 WB：CSR 写地址 1
    wire [11:0] lsu_wb_csr_wr_addr2;  // MEM 到 WB：CSR 写地址 2
    wire        lsu_wb_csr_wen1;      // MEM 到 WB：CSR 写使能 1
    wire        lsu_wb_csr_wen2;      // MEM 到 WB：CSR 写使能 2
    wire        lsu_wb_flush;
    wire        wb_valid;         

    wire [31:0] wb_ex_src1;       // WB 到 EX：源操作数 1（前递）
    wire [31:0] wb_ex_src2;       // WB 到 EX：源操作数 2（前递）
    wire [31:0] wb_ex_csr_num1;   // WB 到 EX：CSR 读数据 1
    wire [31:0] wb_ex_csr_num2;   // WB 到 EX：CSR 读数据 2

    // 前递信号
    wire [4:0]  lsu_ex_forward_rd;        // MEM 到 EX：前递的目标寄存器
    wire        lsu_ex_forward_RegWrite;  // MEM 到 EX：前递写使能
    wire        lsu_ex_forward_MemRead;   // MEM 到 EX：前递读使能
    wire        ex_lsu_forward_las;       // EX 到 MEM：加载后存储前递标志

    // LSU - ARB 的 AXI4-Lite 接口信号
    wire        lsu_sram_arvalid;
    wire        sram_lsu_arready;
    wire [31:0] lsu_sram_araddr;
    wire [31:0] sram_lsu_rdata;
    wire        sram_lsu_rvalid;
    wire        lsu_sram_rready;
    wire [1:0]  sram_lsu_rresp;
    wire [31:0] lsu_sram_awaddr;
    wire        lsu_sram_awvalid;
    wire        sram_lsu_awready;
    wire [31:0] lsu_sram_wdata;
    wire [3:0]  lsu_sram_wstrb;
    wire        lsu_sram_wvalid;
    wire        sram_lsu_wready;
    wire [1:0]  sram_lsu_bresp;
    wire        sram_lsu_bvalid;
    wire        lsu_sram_bready;

    // IF - ARB 的 AXI4-Lite 接口信号
    wire        if_sram_arvalid;    
    wire        sram_if_arready;      
    wire [31:0] if_sram_araddr;      
    wire [31:0] sram_if_rdata;        
    wire        sram_if_rvalid;      
    wire        if_sram_rready;      
    wire [1:0]  sram_if_rresp;    

    // AXI_ARB - SRAM 信号
    wire        sram_arvalid;
    wire        sram_arready;
    wire [31:0] sram_araddr;
    wire [31:0] sram_rdata;
    wire        sram_rvalid;
    wire        sram_rready;
    wire [1:0]  sram_rresp;
    wire [31:0] sram_awaddr;
    wire        sram_awvalid;
    wire        sram_awready;
    wire [31:0] sram_wdata;
    wire [3:0]  sram_wstrb;
    wire        sram_wvalid;
    wire        sram_wready;
    wire [1:0]  sram_bresp;
    wire        sram_bvalid;
    wire        sram_bready;     

    // 模块例化

    // SRAM 模块
    SRAM msram (
        .clk(clk),
        .rst(reset),
        .sram_arvalid(lsu_sram_arvalid),
        .sram_arready(sram_lsu_arready),
        .sram_araddr(lsu_sram_araddr),
        .sram_rdata(sram_lsu_rdata),
        .sram_rvalid(sram_lsu_rvalid),
        .sram_rready(lsu_sram_rready),
        .sram_rresp(sram_lsu_rresp),
        .sram_awaddr(lsu_sram_awaddr),
        .sram_awvalid(lsu_sram_awvalid),
        .sram_awready(sram_lsu_awready),
        .sram_wdata(lsu_sram_wdata),
        .sram_wstrb(lsu_sram_wstrb),
        .sram_wvalid(lsu_sram_wvalid),
        .sram_wready(sram_lsu_wready),
        .sram_bresp(sram_lsu_bresp),
        .sram_bvalid(sram_lsu_bvalid),
        .sram_bready(lsu_sram_bready)
    );

    SRAM isram (
        .clk(clk),
        .rst(reset),
        .sram_arvalid(if_sram_arvalid),
        .sram_arready(sram_if_arready),
        .sram_araddr(if_sram_araddr),
        .sram_rdata(sram_if_rdata),
        .sram_rvalid(sram_if_rvalid),
        .sram_rready(if_sram_rready),
        .sram_rresp(sram_if_rresp),
        .sram_awaddr(32'h0),
        .sram_awvalid(1'b0),
        .sram_awready(),
        .sram_wdata(32'h0),
        .sram_wstrb(4'b0),
        .sram_wvalid(1'b0),
        .sram_wready(),
        .sram_bresp(),
        .sram_bvalid(),
        .sram_bready(1'b0)
    );

    // AXI_ARB axi_arb (
    //     .clk(clk),
    //     .rst(reset),

    //     // IFU Read
    //     .if_arvalid(if_sram_arvalid),
    //     .ar_if_ready(sram_if_arready),
    //     .if_araddr(if_sram_araddr),
    //     .if_rvalid(sram_if_rvalid),
    //     .r_if_ready(if_sram_rready),
    //     .if_rdata(sram_if_rdata),
    //     .if_rresp(sram_if_rresp),

    //     // LSU Read
    //     .lsu_arvalid(lsu_sram_arvalid),
    //     .ar_lsu_ready(sram_lsu_arready),
    //     .lsu_araddr(lsu_sram_araddr),
    //     .lsu_rvalid(sram_lsu_rvalid),
    //     .r_lsu_ready(lsu_sram_rready),
    //     .lsu_rdata(sram_lsu_rdata),
    //     .lsu_rresp(sram_lsu_rresp),

    //     // LSU Write
    //     .lsu_awvalid(lsu_sram_awvalid),
    //     .aw_lsu_ready(sram_lsu_awready),
    //     .lsu_awaddr(lsu_sram_awaddr),
    //     .lsu_wvalid(lsu_sram_wvalid),
    //     .w_lsu_ready(sram_lsu_wready),
    //     .lsu_wdata(lsu_sram_wdata),
    //     .lsu_wstrb(lsu_sram_wstrb),
    //     .lsu_bvalid(sram_lsu_bvalid),
    //     .b_lsu_ready(lsu_sram_bready),
    //     .lsu_bresp(sram_lsu_bresp),

    //     // SRAM AXI4-Lite Slave
    //     .s_arvalid(sram_arvalid),
    //     .s_arready(sram_arready),
    //     .s_araddr(sram_araddr),
    //     .s_rvalid(sram_rvalid),
    //     .s_rready(sram_rready),
    //     .s_rdata(sram_rdata),
    //     .s_rresp(sram_rresp),
    //     .s_awvalid(sram_awvalid),
    //     .s_awready(sram_awready),
    //     .s_awaddr(sram_awaddr),
    //     .s_wvalid(sram_wvalid),
    //     .s_wready(sram_wready),
    //     .s_wdata(sram_wdata),
    //     .s_wstrb(sram_wstrb),
    //     .s_bvalid(sram_bvalid),
    //     .s_bready(sram_bready),
    //     .s_bresp(sram_bresp)
    // );

    // SRAM sram (
    //     .clk(clk),
    //     .rst(reset),
    //     .sram_arvalid(sram_arvalid),
    //     .sram_arready(sram_arready),
    //     .sram_araddr(sram_araddr),
    //     .sram_rdata(sram_rdata),
    //     .sram_rvalid(sram_rvalid),
    //     .sram_rready(sram_rready),
    //     .sram_rresp(sram_rresp),
    //     .sram_awaddr(sram_awaddr),
    //     .sram_awvalid(sram_awvalid),
    //     .sram_awready(sram_awready),
    //     .sram_wdata(sram_wdata),
    //     .sram_wstrb(sram_wstrb),
    //     .sram_wvalid(sram_wvalid),
    //     .sram_wready(sram_wready),
    //     .sram_bresp(sram_bresp),
    //     .sram_bvalid(sram_bvalid),
    //     .sram_bready(sram_bready)
    // );

    // IF（指令获取）模块
    IF_AXI ifu (
        .clk(clk),
        .reset(reset),
        .EX_flush(ex_flush),
        .EX_flush_pc(ex_flush_pc),
        .ID_ready(id_ready),
        .IF_valid(IF_valid),
        .IF_ID_pc(IF_ID_pc),
        .if_sram_arvalid(if_sram_arvalid),
        .sram_if_arready(sram_if_arready),
        .if_sram_araddr(if_sram_araddr),
        .sram_if_rdata(sram_if_rdata),
        .sram_if_rvalid(sram_if_rvalid),
        .if_sram_rready(if_sram_rready),
        .sram_if_rresp(sram_if_rresp),
        .IF_ID_inst(IF_ID_inst)
    );

    // ID（指令解码）模块
    ID idu (
        .clk(clk),
        .reset(reset),
        .if_id_pc(IF_ID_pc),
        .if_id_inst(IF_ID_inst),
        .ex_flush(ex_flush),
        .if_valid(IF_valid),
        .id_ready(id_ready),
        .ex_ready(ex_ready),
        .id_valid(id_valid),
        .id_ex_pc(id_ex_pc),
        .id_ex_inst(id_ex_inst),
        .id_ex_RegWrite(id_ex_RegWrite),
        .id_ex_rd(id_ex_rd),
        .id_wb_rs1(id_wb_rs1),
        .id_wb_rs2(id_wb_rs2),
        .id_ex_zimm(id_ex_zimm),
        .id_ex_imm(id_ex_imm),
        .id_ex_shamt(id_ex_shamt),
        .id_ex_alu_op(id_ex_alu_op),
        .id_ex_MemLen(id_ex_MemLen),
        .id_ex_MemWrite(id_ex_MemWrite),
        .id_ex_MemRead(id_ex_MemRead),
        .id_ex_opcode(id_ex_opcode),
        .id_ex_func3(id_ex_func3),
        .id_ex_jal(id_ex_jal),
        .id_ex_jalr(id_ex_jalr),
        .id_ex_csr(id_ex_csr),
        .id_ex_csr_wen1(id_ex_csr_wen1),
        .id_ex_csr_wen2(id_ex_csr_wen2),
        .id_ex_csr_ecall(id_ex_csr_ecall),
        .id_ex_csr_mret(id_ex_csr_mret),
        .id_ex_csr_op(id_ex_csr_op),
        .id_ex_csr_wr_addr1(id_ex_csr_wr_addr1),
        .id_ex_csr_wr_addr2(id_ex_csr_wr_addr2),
        .id_wb_csr_addr1(id_wb_csr_addr1),
        .id_wb_csr_addr2(id_wb_csr_addr2)
    );

    // EX（执行）模块
    EX exu (
        .clk(clk),
        .reset(reset),
        .id_ready(id_ready),
        .id_valid(id_valid),
        .ex_ready(ex_ready),
        .lsu_ready(lsu_ex_ready),
        .ex_lsu_valid(ex_lsu_valid),
        .id_wb_rs1(id_wb_rs1),
        .id_wb_rs2(id_wb_rs2),
        .lsu_ex_forward_rd(lsu_ex_forward_rd),
        .lsu_ex_forward_RegWrite(lsu_ex_forward_RegWrite),
        .lsu_ex_forward_MemRead(lsu_ex_forward_MemRead),
        .lsu_wb_wdata(lsu_wb_write_rd_data),
        .lsu_wb_rd(lsu_wb_rd),
        .lsu_wb_RegWrite(lsu_wb_RegWrite),
        .lsu_wb_valid(lsu_wb_valid),
        .ex_lsu_forward_las(ex_lsu_forward_las),
        .id_ex_inst(id_ex_inst),
        .id_ex_pc(id_ex_pc),
        .id_ex_imm(id_ex_imm),
        .id_ex_zimm(id_ex_zimm),
        .id_ex_shamt(id_ex_shamt),
        .wb_ex_src1(wb_ex_src1),
        .wb_ex_src2(wb_ex_src2),
        .id_ex_RegWrite(id_ex_RegWrite),
        .id_ex_rd(id_ex_rd),
        .id_ex_opcode(id_ex_opcode),
        .id_ex_func3(id_ex_func3),
        .id_ex_alu_op(id_ex_alu_op),
        .id_ex_jal(id_ex_jal),
        .id_ex_jalr(id_ex_jalr),
        .id_ex_MemRead(id_ex_MemRead),
        .id_ex_MemWrite(id_ex_MemWrite),
        .id_ex_MemLen(id_ex_MemLen),
        .wb_ex_csr_num1(wb_ex_csr_num1),
        .wb_ex_csr_num2(wb_ex_csr_num2),
        .id_ex_csr(id_ex_csr),
        .id_ex_csr_wen1(id_ex_csr_wen1),
        .id_ex_csr_wen2(id_ex_csr_wen2),
        .id_ex_csr_wr_addr1(id_ex_csr_wr_addr1),
        .id_ex_csr_wr_addr2(id_ex_csr_wr_addr2),
        .id_ex_csr_ecall(id_ex_csr_ecall),
        .id_ex_csr_mret(id_ex_csr_mret),
        .id_ex_csr_op(id_ex_csr_op),
        .ex_flush(ex_flush),
        .ex_flush_pc(ex_flush_pc),
        .ex_lsu_inst(ex_lsu_inst),
        .ex_lsu_pc(ex_lsu_pc),
        .ex_lsu_src2(ex_lsu_src2),
        .ex_lsu_RegWrite(ex_lsu_RegWrite),
        .ex_lsu_rd(ex_lsu_rd),
        .ex_lsu_MemRead(ex_lsu_MemRead),
        .ex_lsu_MemWrite(ex_lsu_MemWrite),
        .ex_lsu_MemLen(ex_lsu_MemLen),
        .ex_lsu_opcode(ex_lsu_opcode),
        .ex_lsu_csr(ex_lsu_csr),
        .ex_lsu_csr_wen1(ex_lsu_csr_wen1),
        .ex_lsu_csr_wen2(ex_lsu_csr_wen2),
        .ex_lsu_csr_wr_addr1(ex_lsu_csr_wr_addr1),
        .ex_lsu_csr_wr_addr2(ex_lsu_csr_wr_addr2),
        .ex_lsu_csr_wr_data1(ex_lsu_csr_wr_data1),
        .ex_lsu_csr_wr_data2(ex_lsu_csr_wr_data2),
        .ex_lsu_csr_rdata(ex_lsu_csr_rdata),
        .ex_lsu_csr_ecall(ex_lsu_csr_ecall),
        .ex_lsu_csr_mret(ex_lsu_csr_mret),
        .ex_lsu_imm(ex_lsu_imm),
        .ex_lsu_process_result(ex_lsu_process_result)
    );

    // wire        MEM_LSU_write_ready;
    // wire        MEM_LSU_read_ready;
    // MEM（内存访问）模块
    LSU_AXI lsu (
        .clk(clk),
        .rst(reset),
        .ex_lsu_imm(ex_lsu_imm),
        // .MEM_LSU_write_ready(MEM_LSU_write_ready),
        // .MEM_LSU_read_ready(MEM_LSU_read_ready),
        .ex_lsu_valid(ex_lsu_valid),
        .lsu_ex_ready(lsu_ex_ready),
        .wb_lsu_ready(wb_lsu_ready),
        .lsu_wb_valid(lsu_wb_valid),
        .ex_lsu_forward_las(ex_lsu_forward_las),
        .ex_lsu_RegWrite(ex_lsu_RegWrite),
        .ex_lsu_rd(ex_lsu_rd),
        .ex_lsu_MemRead(ex_lsu_MemRead),
        .ex_lsu_MemWrite(ex_lsu_MemWrite),
        .ex_lsu_MemLen(ex_lsu_MemLen),
        .ex_lsu_inst(ex_lsu_inst),
        .ex_lsu_pc(ex_lsu_pc),
        .addr(ex_lsu_process_result), // 从 EX 传入的内存地址
        .data_in(ex_lsu_src2),        // 从 EX 传入的写数据
        .ex_lsu_opcode(ex_lsu_opcode),
        .lsu_ex_forward_rd(lsu_ex_forward_rd),
        .lsu_ex_forward_RegWrite(lsu_ex_forward_RegWrite),
        .lsu_ex_forward_MemRead(lsu_ex_forward_MemRead),
        .ex_lsu_csr(ex_lsu_csr),
        .ex_lsu_csr_wen1(ex_lsu_csr_wen1),
        .ex_lsu_csr_wen2(ex_lsu_csr_wen2),
        .ex_lsu_csr_wr_data1(ex_lsu_csr_wr_data1),
        .ex_lsu_csr_wr_data2(ex_lsu_csr_wr_data2),
        .ex_lsu_csr_wr_addr1(ex_lsu_csr_wr_addr1),
        .ex_lsu_csr_wr_addr2(ex_lsu_csr_wr_addr2),
        .ex_lsu_csr_rdata(ex_lsu_csr_rdata),
        .ex_lsu_csr_ecall(ex_lsu_csr_ecall),
        .ex_lsu_csr_mret(ex_lsu_csr_mret),
        .ex_lsu_process_result(ex_lsu_process_result),
        .lsu_wb_inst(lsu_wb_inst),
        .lsu_wb_pc(lsu_wb_pc),
        .ex_flush(ex_flush),
        .lsu_wb_flush(lsu_wb_flush),
        .lsu_wb_csr_wr_data1(lsu_wb_csr_wr_data1),
        .lsu_wb_csr_wr_data2(lsu_wb_csr_wr_data2),
        .lsu_wb_csr_wr_addr1(lsu_wb_csr_wr_addr1),
        .lsu_wb_csr_wr_addr2(lsu_wb_csr_wr_addr2),
        .lsu_wb_csr_wen1(lsu_wb_csr_wen1),
        .lsu_wb_csr_wen2(lsu_wb_csr_wen2),
        .lsu_wb_RegWrite(lsu_wb_RegWrite),
        .lsu_wb_rd(lsu_wb_rd),
        .lsu_sram_arvalid(lsu_sram_arvalid),
        .sram_lsu_arready(sram_lsu_arready),
        .lsu_sram_araddr(lsu_sram_araddr),
        .sram_lsu_rdata(sram_lsu_rdata),
        .sram_lsu_rvalid(sram_lsu_rvalid),
        .lsu_sram_rready(lsu_sram_rready),
        .sram_lsu_rresp(sram_lsu_rresp),
        .lsu_sram_awaddr(lsu_sram_awaddr),
        .lsu_sram_awvalid(lsu_sram_awvalid),
        .sram_lsu_awready(sram_lsu_awready),
        .lsu_sram_wdata(lsu_sram_wdata),
        .lsu_sram_wstrb(lsu_sram_wstrb),
        .lsu_sram_wvalid(lsu_sram_wvalid),
        .sram_lsu_wready(sram_lsu_wready),
        .sram_lsu_bresp(sram_lsu_bresp),
        .sram_lsu_bvalid(sram_lsu_bvalid),
        .lsu_sram_bready(lsu_sram_bready),
        .lsu_wb_write_rd_data(lsu_wb_write_rd_data)
    );

    // WBU（写回）模块
    WBU wbu (
        .clk(clk),
        .rst(reset),
        .wen(lsu_wb_RegWrite),
        .lsu_wb_valid(lsu_wb_valid),
        .wb_lsu_ready(wb_lsu_ready),
        .wdata(lsu_wb_write_rd_data),
        .waddr(lsu_wb_rd),
        .rs1(id_wb_rs1),
        .rs2(id_wb_rs2),
        .src1(wb_ex_src1),
        .src2(wb_ex_src2),
        .wb_valid(wb_valid),
        .lsu_wb_pc(lsu_wb_pc),
        .lsu_wb_flush(lsu_wb_flush),
        .raddr_csr1(id_wb_csr_addr1),
        .raddr_csr2(id_wb_csr_addr2),
        .wen_csr1(lsu_wb_csr_wen1),
        .wen_csr2(lsu_wb_csr_wen2),
        .wdata_csr1(lsu_wb_csr_wr_data1),
        .wdata_csr2(lsu_wb_csr_wr_data2),
        .waddr_csr1(lsu_wb_csr_wr_addr1),
        .waddr_csr2(lsu_wb_csr_wr_addr2),
        .rdata_csr1(wb_ex_csr_num1),
        .rdata_csr2(wb_ex_csr_num2)
    );
    // assign MEM_LSU_write_ready = 1;
    // assign MEM_LSU_read_ready = 1;
    // 内存接口赋值
    // assign addr = ex_lsu_process_result; // 从 EX 传入的内存地址
    // assign wdata = ex_lsu_src2;          // 从 EX 传入的内存写数据
    // assign wen = ex_lsu_MemWrite;        // 从 EX 传入的内存写使能
    // assign mask = (ex_lsu_MemLen == 3'b001) ? 2'b00 : // 字节
    //               (ex_lsu_MemLen == 3'b010) ? 2'b01 : // 半字
    //               (ex_lsu_MemLen == 3'b100) ? 2'b11 : // 字
    //               2'b00;                      // 默认

    reg [31:0] inst_cnt;
    reg [31:0] cycle_cnt;

    always @(posedge clk) begin
        if(reset) begin
            inst_cnt <= 0;
            cycle_cnt <= 0;
        end
        else begin
            cycle_cnt <= cycle_cnt + 1;
            if(wb_valid) begin
                inst_cnt <= inst_cnt + 1;
            end
        end
    end
    // EBREAK 处理
    always @(posedge clk) begin
        if (IF_ID_inst == 32'h00100073) begin
            real IPC = (cycle_cnt == 0) ? 0.0 : real'(inst_cnt) / real'(cycle_cnt);
            $display("\033[33mIPC = %f\033[0m", IPC);
            // $display("*-------------------*---------------------*---------------------*");
            // $display("| Total predictions | Correct predictions | Prediction accuracy |");
            // $display("| %10d        | %10d          | %10.2f%%         |", 
            //         total_predictions, correct_predictions, 
            //         (total_predictions == 0) ? 0.0 : (real'(correct_predictions) / real'(total_predictions) * 100.0));
            // $display("*-------------------*---------------------*---------------------*");
            ebreak(`HIT_TRAP, ex_lsu_inst);
        end
        // if(ex_flush) begin
        //     $display("       [EX] flush pc = %h", ex_flush_pc);
        // end
    end

endmodule