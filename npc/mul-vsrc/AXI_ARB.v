module AXI_ARB (
    input wire clk,
    input wire reset,

    // IFU master (read-only)
    input wire [31:0] ifu_araddr,
    input wire        ifu_arvalid,
    output wire       ifu_arready,
    output wire [31:0] ifu_rdata,
    output wire [1:0]  ifu_rresp,
    output wire        ifu_rvalid,
    input wire         ifu_rready,

    // MEM master (read and write)
    input wire [31:0] mem_araddr,
    input wire        mem_arvalid,
    output wire       mem_arready,
    output wire [31:0] mem_rdata,
    output wire [1:0]  mem_rresp,
    output wire        mem_rvalid,
    input wire         mem_rready,

    input wire [31:0] mem_awaddr,
    input wire        mem_awvalid,
    output wire       mem_awready,
    input wire [31:0] mem_wdata,
    input wire [3:0]  mem_wstrb,
    input wire        mem_wvalid,
    output wire       mem_wready,
    output wire [1:0]  mem_bresp,
    output wire        mem_bvalid,
    input wire         mem_bready,

    // SRAM slave (read and write)
    output wire [31:0] sram_araddr,
    output wire        sram_arvalid,
    input wire         sram_arready,
    input wire [31:0]  sram_rdata,
    input wire [1:0]   sram_rresp,
    input wire         sram_rvalid,
    output wire        sram_rready,

    output wire [31:0] sram_awaddr,
    output wire        sram_awvalid,
    input wire         sram_awready,
    output wire [31:0] sram_wdata,
    output wire [3:0]  sram_wstrb,
    output wire        sram_wvalid,
    input wire         sram_wready,
    input wire [1:0]   sram_bresp,
    input wire         sram_bvalid,
    output wire        sram_bready
);

    // Write channel
    assign sram_awaddr  = mem_awaddr;
    assign sram_awvalid = mem_awvalid;
    assign mem_awready  = sram_awready;

    assign sram_wdata   = mem_wdata;
    assign sram_wstrb   = mem_wstrb;
    assign sram_wvalid  = mem_wvalid;
    assign mem_wready   = sram_wready;

    assign mem_bresp    = sram_bresp;
    assign mem_bvalid   = sram_bvalid;
    assign sram_bready  = mem_bready;

    // Read channel arbitration
    parameter IDLE = 0;
    parameter ADDR = 1;
    parameter DATA = 2;

    parameter IFU = 0;
    parameter MEM = 1;
    reg [1:0] read_state; // 0: IDLE, 1: ADDR, 2: DATA
    reg       read_master; // 0: IFU, 1: MEM

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            read_state  <= IDLE; 
            read_master <= IFU;
        end else begin
            case (read_state)
                IDLE:
                    if (ifu_arvalid) begin
                        read_master <= IFU; 
                        read_state  <= ADDR; 
                    end else if (mem_arvalid) begin
                        read_master <= MEM;
                        read_state  <= ADDR; 
                    end
                ADDR:
                    if (sram_arvalid && sram_arready) begin
                        read_state <= DATA;
                    end
                DATA:
                    if (sram_rvalid && sram_rready) begin
                        read_state <= IDLE; 
                    end
            endcase
        end
    end


    assign sram_araddr  = (read_state == ADDR) ? (read_master ? mem_araddr : ifu_araddr) : 32'h0;
    assign sram_arvalid = (read_state == ADDR) ? (read_master ? mem_arvalid : ifu_arvalid) : 1'b0;
    assign ifu_arready  = (read_state == ADDR && read_master == IFU) ? sram_arready : 1'b0;
    assign mem_arready  = (read_state == ADDR && read_master == MEM) ? sram_arready : 1'b0;


    assign ifu_rdata    = (read_state == DATA && read_master == IFU) ? sram_rdata : 32'h0;
    assign ifu_rresp    = (read_state == DATA && read_master == IFU) ? sram_rresp : 2'b00;
    assign ifu_rvalid   = (read_state == DATA && read_master == IFU) ? sram_rvalid : 1'b0;
    assign mem_rdata    = (read_state == DATA && read_master == MEM) ? sram_rdata : 32'h0;
    assign mem_rresp    = (read_state == DATA && read_master == MEM) ? sram_rresp : 2'b00;
    assign mem_rvalid   = (read_state == DATA && read_master == MEM) ? sram_rvalid : 1'b0;
    assign sram_rready  = (read_state == DATA) ? (read_master ? mem_rready : ifu_rready) : 1'b0;

endmodule