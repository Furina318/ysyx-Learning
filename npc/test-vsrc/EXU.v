module EXU #(
    parameter DATA_WIDTH = 64,
    parameter PC_WIDTH = 32,
    parameter ALU_MUX_WIDTH = 4,
    parameter PCMUX_WIDTH = 4,
    parameter RD_WIDTH = 5
) (
    input  wire        clk,
    input  wire        reset,
    // IDU_EXU_DATA interface
    input  wire        idu_exu_valid,
    output reg         idu_exu_ready,
    input  wire [DATA_WIDTH-1:0] src1,
    input  wire [DATA_WIDTH-1:0] src2,
    input  wire [DATA_WIDTH-1:0] imm,
    input  wire [DATA_WIDTH-1:0] rers1,
    input  wire [DATA_WIDTH-1:0] rezimm,
    input  wire [DATA_WIDTH-1:0] csrdata,
    input  wire [PC_WIDTH-1:0]   pc,
    input  wire [PC_WIDTH-1:0]   mtvec,
    input  wire [PC_WIDTH-1:0]   mepc,
    input  wire [3:0]            AluSel,
    input  wire [ALU_MUX_WIDTH-1:0] AluMux,
    input  wire                  branch,
    input  wire [PCMUX_WIDTH-1:0] pcmux,
    input  wire [RD_WIDTH-1:0]   rd,
    input  wire                  rden,
    input  wire                  MemtoReg,
    input  wire                  MemWr,
    input  wire                  ecall,
    input  wire                  mret,
    // EXU_LSU_DATA interface
    output reg         exu_lsu_valid,
    input  wire        exu_lsu_ready,
    output reg  [DATA_WIDTH-1:0] result,
    output reg  [PC_WIDTH-1:0]   lsu_pc,
    output reg  [PC_WIDTH-1:0]   dnpc,
    output reg  [DATA_WIDTH-1:0] lsu_src2,
    output reg  [RD_WIDTH-1:0]   lsu_rd,
    output reg                   lsu_rden,
    output reg                   lsu_MemtoReg,
    output reg                   lsu_MemWr,
    output reg  [DATA_WIDTH-1:0] lsu_csrdata,
    // EXU_IFU_RAW interface
    output reg         exu_ifu_valid,
    output reg         isRAW_control,
    output reg  [PC_WIDTH-1:0] exu_ifu_dnpc,
    // EXU_IDU_RAW interface
    output reg  [DATA_WIDTH-1:0] exu_idu_regdata,
    output reg  [RD_WIDTH-1:0]   exu_idu_rd,
    output reg                   exu_idu_rden,
    output reg                   exu_idu_MemtoReg
);
    localparam S_IDLE = 2'b00, S_WAIT_READY = 2'b01, S_WAIT_READY_CONTROL = 2'b10;
    reg [1:0] state;
    wire [DATA_WIDTH-1:0] ina, inb;
    wire [PC_WIDTH-1:0] pca, pcb, pcadd;
    wire [PCMUX_WIDTH-1:0] PCMux;

    ysyx_23060336_ALU #(DATA_WIDTH) alu (
        .sel(AluSel),
        .ina(ina),
        .inb(inb),
        .result(result)
    );

    // ALU input muxes
    always @(*) begin
        case (AluMux)
            4'b0111: ina = src1;
            4'b0001: ina = src1;
            4'b0010: ina = {{(DATA_WIDTH-PC_WIDTH){1'b0}}, pc};
            4'b0011: ina = {DATA_WIDTH{1'b0}};
            4'b0100: ina = {{(DATA_WIDTH-PC_WIDTH){1'b0}}, pc};
            4'b0101: ina = rers1;
            4'b1000: ina = rers1;
            4'b1001: ina = rezimm;
            4'b0110: ina = rezimm;
            default: ina = {DATA_WIDTH{1'b0}};
        endcase
    end

    always @(*) begin
        case (AluMux)
            4'b0111: inb = src2;
            4'b0001: inb = imm;
            4'b0010: inb = 64'd4;
            4'b0011: inb = imm;
            4'b0100: inb = imm;
            4'b0101: inb = csrdata;
            4'b0110: inb = csrdata;
            default: inb = {DATA_WIDTH{1'b0}};
        endcase
    end

    // PC calculation
    assign PCMux = {branch, result[0], pcmux};
    always @(*) begin
        case (PCMux)
            4'b0010: pca = src1[PC_WIDTH-1:0];
            4'b0110: pca = src1[PC_WIDTH-1:0];
            default: pca = pc;
        endcase
    end

    always @(*) begin
        case (PCMux)
            4'b0010: pcb = imm[PC_WIDTH-1:0];
            4'b0110: pcb = imm[PC_WIDTH-1:0];
            4'b0001: pcb = imm[PC_WIDTH-1:0];
            4'b0101: pcb = imm[PC_WIDTH-1:0];
            4'b1101: pcb = imm[PC_WIDTH-1:0];
            default: pcb = 32'd4;
        endcase
    end

    assign pcadd = pca + pcb;

    always @(*) begin
        if (reset)
            dnpc = 32'h80000000;
        else if (ecall)
            dnpc = mtvec;
        else if (mret)
            dnpc = mepc;
        else
            dnpc = pcadd;
    end

    // State machine
    always @(posedge clk or posedge reset) begin
        if (reset)
            state <= S_IDLE;
        else begin
            case (state)
                S_IDLE: state <= idu_exu_valid ? (isRAW_control ? S_WAIT_READY_CONTROL : S_WAIT_READY) : S_IDLE;
                S_WAIT_READY: state <= exu_lsu_ready ? S_IDLE : S_WAIT_READY;
                S_WAIT_READY_CONTROL: state <= exu_lsu_ready ? S_IDLE : S_WAIT_READY_CONTROL;
                default: state <= S_IDLE;
            endcase
        end
    end

    // Control signals
    always @(*) begin
        isRAW_control = (pc + 32'd4) != dnpc;
        exu_lsu_valid = (state == S_WAIT_READY || state == S_WAIT_READY_CONTROL);
        idu_exu_ready = (state == S_IDLE);
        exu_ifu_valid = (state == S_WAIT_READY && !isRAW_control) || (state == S_WAIT_READY_CONTROL);
    end

    // Output assignments
    always @(*) begin
        lsu_pc = pc;
        lsu_src2 = src2;
        lsu_rd = rd;
        lsu_rden = rden;
        lsu_MemtoReg = MemtoReg;
        lsu_MemWr = MemWr;
        lsu_csrdata = csrdata;
        exu_ifu_dnpc = dnpc;
        exu_idu_regdata = result;
        exu_idu_rd = rd;
        exu_idu_rden = rden;
        exu_idu_MemtoReg = MemtoReg;
    end

    `ifdef USE_COUNTER
    EXU_COUNTER exu_counter (
        .clock(clk),
        .state(state),
        .isRAW_control(isRAW_control)
    );
    `endif
endmodule