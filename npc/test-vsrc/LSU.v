module LSU #(
    parameter DATA_WIDTH = 64,
    parameter ADDR_WIDTH = 32,
    parameter WSTRB_WIDTH = 8,
    parameter RD_WIDTH = 5
) (
    input  wire        clk,
    input  wire        reset,
    // EXU_LSU_DATA interface
    input  wire        exu_lsu_valid,
    output reg         exu_lsu_ready,
    input  wire [DATA_WIDTH-1:0] result,
    input  wire [DATA_WIDTH-1:0] src2,
    input  wire [DATA_WIDTH-1:0] csrdata,
    input  wire [2:0]            arsize,
    input  wire [2:0]            awsize,
    input  wire [WSTRB_WIDTH-1:0] wstrb,
    input  wire [RD_WIDTH-1:0]   rd,
    input  wire                  rden,
    input  wire                  MemtoReg,
    input  wire                  MemWr,
    input  wire [2:0]            RegNum,
    input  wire                  CsrWr,
    input  wire [31:0]           lsu_pc,
    input  wire [31:0]           dnpc,
    // LSU_WBU_DATA interface
    output reg         lsu_wbu_valid,
    input  wire        lsu_wbu_ready,
    output reg  [DATA_WIDTH-1:0] regdata,
    output reg  [DATA_WIDTH-1:0] wbu_csrdata,
    output reg  [RD_WIDTH-1:0]   wbu_rd,
    output reg                   wbu_rden,
    output reg  [WSTRB_WIDTH-1:0] wbu_wstrb,
    output reg  [ADDR_WIDTH-1:0]  wbu_araddr,
    output reg  [ADDR_WIDTH-1:0]  wbu_awaddr,
    output reg  [DATA_WIDTH-1:0] wbu_wdata,
    output reg  [2:0]            wbu_arsize,
    output reg                   wbu_arvalid,
    output reg                   wbu_awvalid,
    output reg  [31:0]           wbu_pc,
    output reg  [31:0]           wbu_dnpc,
    // LSU_IDU_RAW interface
    output reg         lsu_idu_valid,
    output reg  [DATA_WIDTH-1:0] lsu_idu_regdata,
    output reg  [RD_WIDTH-1:0]   lsu_idu_rd,
    output reg                   lsu_idu_rden,
    output reg                   lsu_idu_MemtoReg,
    // AXI4 Master interface
    input  wire        axi_awready,
    output reg         axi_awvalid,
    output reg  [ADDR_WIDTH-1:0] axi_awaddr,
    output reg  [3:0]  axi_awid,
    output reg  [7:0]  axi_awlen,
    output reg  [2:0]  axi_awsize,
    output reg  [1:0]  axi_awburst,
    input  wire        axi_wready,
    output reg         axi_wvalid,
    output reg  [DATA_WIDTH-1:0] axi_wdata,
    output reg  [WSTRB_WIDTH-1:0] axi_wstrb,
    output reg         axi_wlast,
    output reg         axi_bready,
    input  wire        axi_bvalid,
    input  wire [1:0]  axi_bresp,
    input  wire [3:0]  axi_bid,
    input  wire        axi_arready,
    output reg         axi_arvalid,
    output reg  [ADDR_WIDTH-1:0] axi_araddr,
    output reg  [3:0]  axi_arid,
    output reg  [7:0]  axi_arlen,
    output reg  [2:0]  axi_arsize,
    output reg  [1:0]  axi_arburst,
    output reg         axi_rready,
    input  wire        axi_rvalid,
    input  wire [1:0]  axi_rresp,
    input  wire [DATA_WIDTH-1:0] axi_rdata,
    input  wire        axi_rlast,
    input  wire [3:0]  axi_rid
);
    localparam S_IDLE = 3'd0, S_WAIT_RSLAVE = 3'd1, S_WAIT_WSLAVE = 3'd2, S_WAIT_READY = 3'd3, S_WAIT_PREPARE = 3'd4, S_WAIT_SIGN = 3'd5;
    reg [2:0] state;
    reg [DATA_WIDTH-1:0] regdata_reg;
    wire [DATA_WIDTH-1:0] rdata, rdata_b, rdata_h, wdata_b, wdata_h, DataOut;
    wire [WSTRB_WIDTH-1:0] wstrb_b, wstrb_h;
    wire prepare;

    // Data alignment for reads
    assign rdata_h = (result[1:0] == 2'd2) ? (axi_rdata >> 16) :
                     (result[1:0] == 2'd0) ? axi_rdata : {DATA_WIDTH{1'b0}};
    assign rdata_b = (result[1:0] == 2'd3) ? (axi_rdata >> 24) :
                     (result[1:0] == 2'd2) ? (axi_rdata >> 16) :
                     (result[1:0] == 2'd1) ? (axi_rdata >> 8) : axi_rdata;

    // Data alignment for writes
    assign wdata_h = (result[1:0] == 2'd2) ? (src2 << 16) :
                     (result[1:0] == 2'd0) ? src2 : {DATA_WIDTH{1'b0}};
    assign wdata_b = (result[1:0] == 2'd3) ? {src2[7:0], {24{1'b0}}} :
                     (result[1:0] == 2'd2) ? {{8{1'b0}}, src2[7:0], {16{1'b0}}} :
                     (result[1:0] == 2'd1) ? {{16{1'b0}}, src2[7:0], {8{1'b0}}} :
                     {{24{1'b0}}, src2[7:0]};

    // Write strobe alignment
    assign wstrb_h = (result[1:0] == 2'd2) ? (wstrb << 2) :
                     (result[1:0] == 2'd0) ? wstrb : {WSTRB_WIDTH{1'b0}};
    assign wstrb_b = (result[1:0] == 2'd3) ? (wstrb << 3) :
                     (result[1:0] == 2'd2) ? (wstrb << 2) :
                     (result[1:0] == 2'd1) ? (wstrb << 1) : wstrb;

    // Prepare signal
    assign prepare = (MemtoReg && axi_rvalid && axi_rlast) || (MemWr && axi_bvalid);

    // Data output selection
    assign DataOut = MemtoReg ? (arsize == 3'd0 ? rdata_b : (arsize == 3'd1 ? rdata_h : axi_rdata)) : result;

    // Register data update
    always @(posedge clk) begin
        if (axi_rvalid && axi_rready)
            regdata_reg <= DataOut;
    end

    // State machine
    always @(posedge clk or posedge reset) begin
        if (reset)
            state <= S_IDLE;
        else begin
            case (state)
                S_IDLE: state <= exu_lsu_valid ? S_WAIT_SIGN : S_IDLE;
                S_WAIT_SIGN: state <= MemtoReg ? S_WAIT_RSLAVE : (MemWr ? S_WAIT_WSLAVE : S_WAIT_READY);
                S_WAIT_RSLAVE: state <= axi_arready ? (axi_rvalid && axi_rlast ? (lsu_wbu_ready ? S_IDLE : S_WAIT_READY) : S_WAIT_PREPARE) : S_WAIT_RSLAVE;
                S_WAIT_WSLAVE: state <= axi_wready ? S_WAIT_PREPARE : S_WAIT_WSLAVE;
                S_WAIT_PREPARE: state <= prepare ? (lsu_wbu_ready ? S_IDLE : S_WAIT_READY) : S_WAIT_PREPARE;
                S_WAIT_READY: state <= lsu_wbu_ready ? S_IDLE : S_WAIT_READY;
                default: state <= S_IDLE;
            endcase
        end
    end

    // AXI4 signals
    always @(*) begin
        axi_awvalid = reset ? 1'b0 : (MemWr && (state == S_WAIT_WSLAVE));
        axi_awaddr = result[ADDR_WIDTH-1:0];
        axi_awid = 4'h2;
        axi_awlen = 8'h0;
        axi_awsize = awsize;
        axi_awburst = 2'b01;
        axi_wvalid = reset ? 1'b0 : (MemWr && (state == S_WAIT_WSLAVE));
        axi_wdata = (awsize == 3'd0) ? wdata_b : (awsize == 3'd1 ? wdata_h : src2);
        axi_wstrb = (awsize == 3'd0) ? wstrb_b : (awsize == 3'd1 ? wstrb_h : wstrb);
        axi_wlast = MemWr && (state == S_WAIT_WSLAVE);
        axi_bready = 1'b1;
        axi_arvalid = reset ? 1'b0 : ((state == S_WAIT_RSLAVE) && MemtoReg);
        axi_araddr = result[ADDR_WIDTH-1:0];
        axi_arid = 4'h2;
        axi_arlen = 8'h0;
        axi_arsize = arsize;
        axi_arburst = 2'b01;
        axi_rready = (state == S_IDLE || state == S_WAIT_RSLAVE || state == S_WAIT_PREPARE);
    end

    // Output assignments
    always @(*) begin
        exu_lsu_ready = (state == S_IDLE);
        lsu_wbu_valid = (state == S_WAIT_READY) || ((state == S_WAIT_PREPARE && prepare) || (state == S_WAIT_RSLAVE && axi_arready && axi_rvalid && axi_rlast && lsu_wbu_ready));
        regdata = (state == S_WAIT_RSLAVE || state == S_WAIT_PREPARE || (!MemtoReg && !MemWr)) ? DataOut : regdata_reg;
        wbu_csrdata = result;
        wbu_rd = rd;
        wbu_rden = rden;
        wbu_wstrb = wstrb;
        wbu_araddr = axi_araddr;
        wbu_awaddr = axi_awaddr;
        wbu_wdata = src2;
        wbu_arsize = arsize;
        wbu_arvalid = MemtoReg;
        wbu_awvalid = MemWr;
        wbu_pc = lsu_pc;
        wbu_dnpc = dnpc;
        lsu_idu_valid = (state == S_WAIT_READY) || axi_rvalid;
        lsu_idu_regdata = regdata;
        lsu_idu_rd = rd;
        lsu_idu_rden = rden;
        lsu_idu_MemtoReg = MemtoReg;
    end

    // Data formatting based on RegNum
    always @(*) begin
        if (CsrWr)
            regdata = csrdata;
        else begin
            case (RegNum)
                3'b010: regdata = DataOut;
                3'b101: regdata = DataOut;
                3'b011: regdata = {{24{1'b0}}, DataOut[7:0]};
                3'b100: regdata = {{16{1'b0}}, DataOut[15:0]};
                3'b000: regdata = {{24{DataOut[7]}}, DataOut[7:0]};
                3'b001: regdata = {{16{DataOut[15]}}, DataOut[15:0]};
                default: regdata = DataOut;
            endcase
        end
    end

    `ifdef USE_COUNTER
    LSU_COUNTER lsu_counter (
        .clock(clk),
        .state(state)
    );
    `endif
endmodule