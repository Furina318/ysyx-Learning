`include "/home/furina/ysyx-workbench/npc/pipeline-vsrc/defines/defines.v"
`timescale 1ns/1ns

// 取指模块
module IF_AXI (
    input             clk,
    input             reset,
    input             EX_flush,
    input      [31:0] EX_flush_pc,
    input             ID_ready,
    output reg        IF_valid,
    output reg [31:0] IF_ID_pc,
    output reg [31:0] IF_ID_pc2,
    output reg [31:0] IF_ID_inst,
    input             predict_taken,
    input      [31:0] predict_target
);
    localparam OKAY = 2'b00;

    // AXI4接口信号（仅使用读通道）
    reg        arvalid, rready;
    reg [31:0] araddr;
    wire       arready, rvalid;
    wire [31:0] rdata;
    wire [1:0] rresp;
    reg [31:0] pc_reg;
    reg        check;
    wire       is_jal    = (IF_ID_inst[6:0] == 7'b1101111);
    wire       is_branch = (IF_ID_inst[6:0] == 7'b1100011);
    wire       is_jalr   = (IF_ID_inst[6:0] == 7'b1100111) && (IF_ID_inst[14:12] == 3'b000);
    wire [31:0] immJ     = {{12{IF_ID_inst[31]}}, IF_ID_inst[19:12], IF_ID_inst[20], IF_ID_inst[30:21], 1'b0};

    always @(posedge clk) begin
        if (reset) begin
            IF_ID_pc   <= 32'h8000_0000;
            IF_ID_pc2  <= 32'h8000_0000;
            pc_reg     <= 32'h8000_0000;
            arvalid    <= 1;
            araddr     <= 32'h8000_0000;
            rready     <= 0;
            IF_ID_inst <= 32'h0;
            IF_valid   <= 0;
            check      <= 1'b1;
        end
        else if (check) begin
            IF_ID_pc   <= IF_ID_pc;
            IF_ID_pc2  <= IF_ID_pc2;
            pc_reg     <= pc_reg;
            IF_ID_inst <= 32'h0;
            check      <= 1'b0;
            arvalid    <= 1;
            araddr     <= IF_ID_pc;
            IF_valid   <= 0;
        end
        else if (EX_flush) begin
            // pc_reg     <= EX_flush_pc;
            // IF_ID_pc   <= EX_flush_pc;
            // IF_ID_pc2  <= EX_flush_pc;
            // arvalid    <= 1;
            // araddr     <= EX_flush_pc;
            // rready     <= 0;
            // IF_ID_inst <= 32'h0;
            IF_valid   <= 0;
            if(rvalid && rready) begin
                // IF_ID_inst <= rdata;
                IF_ID_inst <= 0;
                IF_ID_pc   <= pc_reg;
                IF_ID_pc2  <= pc_reg;
                arvalid    <= 1;
                araddr     <= EX_flush_pc;
                rready     <= 0;
            end
        end
        else if (arvalid && arready) begin
            arvalid <= 0;
            rready  <= 1;
            pc_reg  <= araddr;
        end
        else if (rvalid && rready && ID_ready) begin
            if (rresp == OKAY) begin
                IF_ID_inst <= rdata;
                IF_valid   <= 1;
            end
            else begin
                IF_ID_inst <= 32'h0;
                IF_valid   <= 0;
            end
            IF_ID_pc   <= pc_reg;
            IF_ID_pc2  <= pc_reg;
            arvalid    <= 1;
            araddr     <= is_jal ? araddr + immJ : (predict_taken && (is_branch || is_jalr)) ? predict_target : araddr + 4;
            rready     <= 0;
        end
    end

    SRAM isram (
        .clk     (clk),
        .rst     (reset),
        .araddr  (araddr),
        .arvalid (arvalid),
        .arready (arready),
        .rdata   (rdata),
        .rresp   (rresp),
        .rvalid  (rvalid),
        .rready  (rready),
        .awaddr  (32'b0),      // IF阶段不使用写通道
        .awvalid (1'b0),
        .awready (),
        .wdata   (32'b0),
        .wstrb   (4'b0),
        .wvalid  (1'b0),
        .wready  (),
        .bvalid  (),
        .bresp   (),
        .bready  (1'b0)
    );
endmodule
