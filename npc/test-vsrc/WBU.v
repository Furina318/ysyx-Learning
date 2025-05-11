module ysyx_23060336_WBU #(
    parameter DATA_WIDTH = 64,
    parameter ADDR_WIDTH = 32,
    parameter RD_WIDTH = 5,
    parameter CSR_ADDR_WIDTH = 12,
    parameter WSTRB_WIDTH = 8
) (
    input  wire        clk,
    input  wire        reset,
    // LSU_WBU_DATA interface
    input  wire        lsu_wbu_valid,
    output reg         lsu_wbu_ready,
    input  wire [DATA_WIDTH-1:0] regdata,
    input  wire [DATA_WIDTH-1:0] csrdata,
    input  wire [RD_WIDTH-1:0]   rd,
    input  wire                  rden,
    input  wire                  RegWr,
    input  wire                  CsrWr,
    input  wire [CSR_ADDR_WIDTH-1:0] csr,
    input  wire                  ecall,
    input  wire                  ebreak,
    input  wire [31:0]           inst,
    input  wire                  isRAW_data,
    input  wire [ADDR_WIDTH-1:0] pc,
    input  wire [ADDR_WIDTH-1:0] dnpc,
    input  wire [WSTRB_WIDTH-1:0] wbu_wstrb,
    input  wire [ADDR_WIDTH-1:0]  wbu_araddr,
    input  wire [ADDR_WIDTH-1:0]  wbu_awaddr,
    input  wire [DATA_WIDTH-1:0] wbu_wdata,
    input  wire [2:0]            wbu_arsize,
    input  wire                  wbu_arvalid,
    input  wire                  wbu_awvalid,
    // WBU_REG_DATA interface
    output reg                   wbu_reg_wen,
    output reg  [RD_WIDTH-1:0]   wbu_reg_waddr,
    output reg  [DATA_WIDTH-1:0] wbu_reg_wdata,
    // WBU_CSR_DATA interface
    output reg                   wbu_csr_wen,
    output reg  [CSR_ADDR_WIDTH-1:0] wbu_csr_waddr,
    output reg                   wbu_csr_ecall,
    output reg  [DATA_WIDTH-1:0] wbu_csr_wdata,
    output reg  [ADDR_WIDTH-1:0] wbu_csr_mepc,
    // WBU_IDU_RAW interface
    output reg  [RD_WIDTH-1:0]   wbu_idu_rd,
    output reg                   wbu_idu_rden,
    output reg  [DATA_WIDTH-1:0] wbu_idu_regdata
);
    localparam S_IDLE = 1'b0, S_REG = 1'b1;
    reg state;

    // State machine
    always @(posedge clk or posedge reset) begin
        if (reset)
            state <= S_IDLE;
        else begin
            case (state)
                S_IDLE: state <= lsu_wbu_valid ? S_REG : S_IDLE;
                S_REG:  state <= S_IDLE;
                default: state <= S_IDLE;
            endcase
        end
    end

    // LSU ready signal
    always @(*) begin
        lsu_wbu_ready = (state == S_IDLE);
    end

    // EBREAK module instantiation
    ysyx_23060336_EBREAK ebreak (
        .clock(clk),
        .ebreak(ebreak)
    );

    // Conditional WBU_COUNTER instantiation
    `ifdef USE_COUNTER
    WBU_COUNTER wbu_counter (
        .clock(clk),
        .state(state)
    );
    `endif

    // Conditional SEEPC instantiation
    `ifdef USE_DIFF
    SEEPC seepc (
        .clock(clk),
        .pc(pc),
        .dnpc(dnpc),
        .valid((state == S_REG) && !isRAW_data)
    );
    `endif

    // Conditional SRAM_READ instantiation
    `ifdef USE_SRAM
    SRAM_READ sram_read (
        .clock(clk),
        .inst(inst),
        .wbu_sram_wstrb(wbu_wstrb),
        .wbu_sram_araddr(wbu_araddr),
        .wbu_sram_awaddr(wbu_awaddr),
        .wbu_sram_wdata(wbu_wdata),
        .wbu_sram_arsize(wbu_arsize),
        .wbu_sram_arvalid(wbu_arvalid),
        .wbu_sram_awvalid(wbu_awvalid)
    );
    `endif

    // WBU to REG interface
    always @(*) begin
        wbu_reg_wen = RegWr && (state == S_REG);
        wbu_reg_waddr = rd;
        wbu_reg_wdata = regdata;
    end

    // WBU to CSR interface
    always @(*) begin
        wbu_csr_wen = CsrWr && (state == S_REG);
        wbu_csr_waddr = csr;
        wbu_csr_ecall = ecall;
        wbu_csr_wdata = csrdata;
        wbu_csr_mepc = pc;
    end

    // WBU to IDU interface
    always @(*) begin
        wbu_idu_rd = rd;
        wbu_idu_rden = rden;
        wbu_idu_regdata = regdata;
    end
endmodule