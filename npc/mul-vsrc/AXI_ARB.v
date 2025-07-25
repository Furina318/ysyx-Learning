module AXI_ARB (
    input wire clk,
    input wire reset,

    // IFU master (read-only)
    input wire [31:0] ifu_araddr,
    input wire        ifu_arvalid,
    output reg        ifu_arready,
    output reg  [31:0] ifu_rdata,
    output reg  [1:0]  ifu_rresp,
    output reg         ifu_rvalid,
    input wire         ifu_rready,

    // MEM master (read and write)
    input wire [31:0] mem_araddr,
    input wire        mem_arvalid,
    output reg        mem_arready,
    output reg  [31:0] mem_rdata,
    output reg  [1:0]  mem_rresp,
    output reg         mem_rvalid,
    input wire         mem_rready,

    input wire [31:0] mem_awaddr,
    input wire        mem_awvalid,
    output reg        mem_awready,
    input wire [31:0] mem_wdata,
    input wire [3:0]  mem_wstrb,
    input wire        mem_wvalid,
    output reg        mem_wready,
    output reg  [1:0]  mem_bresp,
    output reg         mem_bvalid,
    input wire         mem_bready,

    // SRAM slave (read and write)
    output reg  [31:0] sram_araddr,
    output reg         sram_arvalid,
    input wire         sram_arready,
    input wire [31:0]  sram_rdata,
    input wire [1:0]   sram_rresp,
    input wire         sram_rvalid,
    output reg         sram_rready,
    output reg  [31:0] sram_awaddr,
    output reg         sram_awvalid,
    input wire         sram_awready,
    output reg  [31:0] sram_wdata,
    output reg  [3:0]  sram_wstrb,
    output reg         sram_wvalid,
    input wire         sram_wready,
    input wire [1:0]   sram_bresp,
    input wire         sram_bvalid,
    output reg         sram_bready
);
    localparam NONE = 2'd0;
    localparam IFU  = 2'd1;
    localparam MEM  = 2'd2;

    reg [1:0] current_master, next_master;
    always @(posedge clk) begin
        if(reset) begin
            current_master <= NONE;
        end
        else begin
            current_master <= next_master;
        end
    end

    always @(*) begin
        case(current_master)
            NONE:    next_master = (mem_arvalid || mem_awvalid) ? MEM :
                                   (ifu_arvalid) ? IFU : NONE;
            IFU:     next_master = (sram_rvalid && sram_rready) ? NONE : IFU;
            MEM:     next_master = ((sram_rvalid && sram_rready) || (sram_bvalid && sram_bready)) ? NONE : MEM;
            default: next_master = NONE;
        endcase
    end

    //读地址通道处理
    always @(*) begin
        case(current_master)
            IFU: begin
                sram_araddr = ifu_araddr;
                sram_arvalid = ifu_arvalid;
                ifu_arready = sram_arready;
                mem_arready = 1'b0;
            end
            MEM: begin
                sram_araddr =  mem_araddr;
                sram_arvalid = mem_arvalid;
                mem_arready = sram_arready;
                ifu_arready = 1'b0;
            end
            default: begin
                sram_araddr = 32'h0;
                sram_arvalid = 1'b0;
                ifu_arready = 1'b0;
                mem_arready = 1'b0;
            end
        endcase
    end
    
    //写地址通道处理
    always @(*) begin
        if(current_master == MEM) begin
            sram_awaddr = mem_awaddr;
            sram_awvalid = mem_awvalid;
            mem_awready = sram_awready;
        end
        else begin
            sram_awaddr = 32'h0;
            sram_awvalid = 1'b0;
            mem_awready = 1'b0;
        end
    end

    //写数据通道处理
    always @(*) begin
        if(current_master == MEM) begin
            sram_wdata = mem_wdata;
            sram_wstrb = mem_wstrb;
            sram_wvalid = mem_wvalid;
            mem_wready = sram_wready;
        end
        else begin
            sram_wdata = 32'h0;
            sram_wstrb = 4'b0;
            sram_wvalid = 1'b0;
            mem_wready = 1'b0;
        end
    end

    //读数据通道处理
    always @(*) begin
        sram_rready = 1'b0;
        ifu_rdata = 32'h0;
        ifu_rvalid = 1'b0;
        ifu_rresp = 2'b0;
        mem_rdata = 32'h0;
        mem_rvalid = 1'b0;
        mem_rresp = 2'b0;
        case(current_master) 
            IFU: begin
                ifu_rdata = sram_rdata;
                ifu_rvalid = sram_rvalid;
                ifu_rresp = sram_rresp;
                sram_rready = ifu_rready;
            end 
            MEM: begin
                mem_rdata = sram_rdata;
                mem_rvalid = sram_rvalid;
                mem_rresp = sram_rresp;
                sram_rready = mem_rready;
            end
            NONE: begin
                
            end
            default: begin

            end
        endcase
    end

    //写响应通道处理
    always @(*) begin
        sram_bready = 1'b0;
        mem_bresp = 2'b00;
        mem_bvalid = 1'b0;

        if (current_master == MEM) begin
            mem_bresp = sram_bresp;
            mem_bvalid = sram_bvalid;
            sram_bready = mem_bready;
        end
    end
    
endmodule