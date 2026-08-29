`include "defines.vh"

module wbu (
    input  wire                    clk          ,
    input  wire                    rst          ,

    // for difftest
    output reg                     wbu_valid    ,
    output reg  [            31:0] wbu_pc       ,
    output reg  [            31:0] wbu_inst     ,
    output reg  [            31:0] wbu_inst_2   ,
    output reg  [            31:0] wbu_addr     ,  // 提交流水 slot1 (较老) 指令的访存地址
    output reg  [            31:0] wbu_addr_2   ,  // 提交流水 slot2 (较新) 指令的访存地址
    output reg                     wbu_dual_cmt ,

    // CSR
    input  wire [            11:0] csr_raddr    ,
    input  wire                    ecall_en     ,
    input  wire                    mret_en      ,
    output wire [            31:0] csr_rdata    ,

    // ROB 双路提交
    input  wire                    rob_cmt_valid_1,
    input  wire [`RO_TO_WB_WD-1:0] ro_to_wu_bus_1 ,
    input  wire                    rob_cmt_valid_2,
    input  wire [`RO_TO_WB_WD-1:0] ro_to_wu_bus_2
);

    wire [31:0] pc_1, inst_1, result_1, addr_1;
    wire        ecall_op_1, mret_op_1, csr_wr_en_1, gpr_we_1;
    wire [11:0] csr_waddr_1;
    wire [31:0] csr_wdata_1;
    wire [ 4:0] rd_1;

    wire is_write_wb_1;
    wire [`STB_DEPTH_LOG2-1:0] stb_id_wb_1;
    assign {
        addr_1        ,
        pc_1          ,
        inst_1        ,
        ecall_op_1    ,
        mret_op_1     ,
        csr_wr_en_1   ,
        csr_waddr_1   ,
        csr_wdata_1   ,
        rd_1          ,
        gpr_we_1      ,
        result_1      ,
        is_write_wb_1 ,
        stb_id_wb_1
    } = ro_to_wu_bus_1;

    wire [31:0] pc_2, inst_2, result_2, addr_2;
    wire        ecall_op_2, mret_op_2, csr_wr_en_2, gpr_we_2;
    wire [11:0] csr_waddr_2;
    wire [31:0] csr_wdata_2;
    wire [ 4:0] rd_2;

    wire is_write_wb_2;
    wire [`STB_DEPTH_LOG2-1:0] stb_id_wb_2;
    assign {
        addr_2        ,
        pc_2          ,
        inst_2        ,
        ecall_op_2    ,
        mret_op_2     ,
        csr_wr_en_2   ,
        csr_waddr_2   ,
        csr_wdata_2   ,
        rd_2          ,
        gpr_we_2      ,
        result_2      ,
        is_write_wb_2 ,
        stb_id_wb_2
    } = ro_to_wu_bus_2;

    // for difftest
    reg [31:0] regs [0:31];
    integer i;

    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1) regs[i] <= 32'h0;
        end else begin
            // 双路提交写入
            if (rob_cmt_valid_1 && gpr_we_1 && (|rd_1))
                regs[rd_1] <= result_1;
            if (rob_cmt_valid_2 && gpr_we_2 && (|rd_2))
                regs[rd_2] <= result_2;
        end
    end

    reg [31:0] csr_wdata_r;
    reg [11:0] csr_waddr_r;
    reg        csr_wr_en_r;

    // CSR 从 ROB 提交路径收集写操作
    always @(posedge clk) begin
        if (rst) begin
            csr_wr_en_r  <= 1'b0;
            csr_waddr_r  <= 12'b0;
            csr_wdata_r  <= 32'b0;
        end else begin
            if (rob_cmt_valid_1 && csr_wr_en_1) begin
                csr_wr_en_r <= 1'b1;
                csr_waddr_r <= csr_waddr_1;
                csr_wdata_r <= csr_wdata_1;
            end else if (rob_cmt_valid_2 && csr_wr_en_2) begin
                csr_wr_en_r <= 1'b1;
                csr_waddr_r <= csr_waddr_2;
                csr_wdata_r <= csr_wdata_2;
            end else begin
                csr_wr_en_r <= 1'b0;
            end
        end
    end

    // 提交的 ecall/mret
    wire ecall_commit = (rob_cmt_valid_1 && ecall_op_1) || (rob_cmt_valid_2 && ecall_op_2);
    wire mret_commit  = (rob_cmt_valid_1 && mret_op_1)  || (rob_cmt_valid_2 && mret_op_2);

    csr u_csr (
        .clk      (clk         ),
        .rst      (rst         ),
        .csr_raddr(csr_raddr   ),
        .csr_rdata(csr_rdata   ),
        .ecall_en (ecall_en    ),
        .ecall_pc (rob_cmt_valid_1 ? pc_1 : pc_2),
        .mret_en  (mret_en     ),
        .ecall_op (ecall_commit),
        .mret_op  (mret_commit ),
        .csr_wr_en(csr_wr_en_r ),
        .csr_waddr(csr_waddr_r ),
        .csr_wdata(csr_wdata_r )
    );

`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
    wire inst_ebreak_1 = (inst_1 == `INST_EBREAK);
    wire inst_ebreak_2 = (inst_2 == `INST_EBREAK);
    always @(posedge clk) begin
        if (rob_cmt_valid_1 && inst_ebreak_1)
            ebreak(`HIT_TRAP, `INST_EBREAK);
        if (rob_cmt_valid_2 && inst_ebreak_2)
            ebreak(`HIT_TRAP, `INST_EBREAK);
    end
`endif

    // for difftest 
    always @(posedge clk) begin
        if (rst) begin
            wbu_valid    <= 1'b0;
            wbu_pc       <= 32'b0;
            wbu_inst     <= 32'b0;
            wbu_inst_2   <= 32'b0;
            wbu_addr     <= 32'b0;
            wbu_addr_2   <= 32'b0;
            wbu_dual_cmt <= 1'b0;
        end else begin
            wbu_valid    <= rob_cmt_valid_1;
            wbu_pc       <= pc_1;
            wbu_inst     <= inst_1;
            wbu_inst_2   <= inst_2;
            wbu_addr     <= addr_1;
            wbu_addr_2   <= addr_2;
            wbu_dual_cmt <= rob_cmt_valid_2;  // 与 wbu_valid 同一时刻捕获
        end
    end

endmodule
