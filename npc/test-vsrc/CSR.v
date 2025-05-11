module CSR (
    input         clock,
    input         reset,
    
    // CSR-IDU接口
    input  [11:0] csr_idu_csr,      // CSR地址
    output [31:0] csr_idu_mepc,     // MEPC值
    output [31:0] csr_idu_mtvec,    // MTVEC值
    output [31:0] csr_idu_csrdata,  // CSR读取数据
    
    // CSR-WBU接口
    input         csr_wbu_wen,      // 写使能
    input  [11:0] csr_wbu_waddr,    // 写地址
    input  [31:0] csr_wbu_wdata,    // 写数据
    input         csr_wbu_ecall,    // ECALL信号
    input  [31:0] csr_wbu_mepc      // 异常PC
);

// CSR地址定义
localparam MVENDORID = 12'hf11;
localparam MARCHID   = 12'hf12;
localparam MSTATUS   = 12'h300;
localparam MTVEC     = 12'h305;
localparam MEPC      = 12'h341;
localparam MCAUSE    = 12'h342;

// CSR寄存器定义
reg [31:0] mvendorid;
reg [31:0] marchid;
reg [31:0] mstatus;
reg [31:0] mtvec;
reg [31:0] mepc;
reg [31:0] mcause;

// 寄存器初始化
always @(posedge clock or posedge reset) begin
    if (reset) begin
        mvendorid <= 32'h79737978;  // "ysyx" ASCII
        marchid   <= 32'h015fdf70;  // 架构ID
        mstatus   <= 32'h00001800;  // 初始状态
        mtvec     <= 32'h0;
        mepc      <= 32'h0;
        mcause    <= 32'h0;
    end else begin
        // ECALL处理（优先级最高）
        if (csr_wbu_ecall) begin
            mcause <= 32'h0000000b;  // 环境调用异常码
            mepc   <= csr_wbu_mepc;
        end
        // 正常CSR写操作
        else if (csr_wbu_wen) begin
            case (csr_wbu_waddr)
                MTVEC:  mtvec   <= csr_wbu_wdata;
                MSTATUS: mstatus <= csr_wbu_wdata;
                MEPC:    mepc    <= csr_wbu_wdata;
                MCAUSE:  mcause  <= csr_wbu_wdata;
                // 只读寄存器不处理
                default: ; 
            endcase
        end
    end
end

// CSR读逻辑
assign csr_idu_mepc  = mepc;
assign csr_idu_mtvec = mtvec;

always @(*) begin
    case (csr_idu_csr)
        MEPC:      csr_idu_csrdata = mepc;
        MCAUSE:    csr_idu_csrdata = mcause;
        MSTATUS:   csr_idu_csrdata = mstatus;
        MTVEC:     csr_idu_csrdata = mtvec;
        MVENDORID: csr_idu_csrdata = mvendorid;
        MARCHID:   csr_idu_csrdata = marchid;
        default:   csr_idu_csrdata = 32'h0;  // 未实现CSR返回0
    endcase
end

endmodule