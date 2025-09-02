module AXI_ARB_BURST #(
    parameter CLINT_ADDR_START = 32'h0200_0000,
    parameter CLINT_ADDR_END   = 32'h0200_0007
)(
    input wire clk,           // 时钟信号
    input wire reset,         // 复位信号

    output reg          ifu_arready,
    input  wire         ifu_arvalid,
    input  wire [31: 0] ifu_araddr,
    input  wire [ 3: 0] ifu_arid,
    input  wire [ 7: 0] ifu_arlen,
    input  wire [ 2: 0] ifu_arsize,
    input  wire [ 1: 0] ifu_arburst,
    input  wire         ifu_rready,
    output reg          ifu_rvalid,
    output reg  [ 1: 0] ifu_rresp,
    output reg  [31: 0] ifu_rdata,
    output reg          ifu_rlast,
    output reg  [ 3: 0] ifu_rid,

    output reg          lsu_awready,
    input  wire         lsu_awvalid,
    input  wire [31: 0] lsu_awaddr,
    input  wire [ 3: 0] lsu_awid,
    input  wire [ 7: 0] lsu_awlen,
    input  wire [ 2: 0] lsu_awsize,
    input  wire [ 1: 0] lsu_awburst,
    output reg          lsu_wready,
    input  wire         lsu_wvalid,
    input  wire [31: 0] lsu_wdata,
    input  wire [ 3: 0] lsu_wstrb,
    input  wire         lsu_wlast,
    input  wire         lsu_bready,
    output reg          lsu_bvalid,
    output reg  [ 1: 0] lsu_bresp,
    output reg  [ 3: 0] lsu_bid,

    output reg          lsu_arready,
    input  wire         lsu_arvalid,
    input  wire [31: 0] lsu_araddr,
    input  wire [ 3: 0] lsu_arid,
    input  wire [ 7: 0] lsu_arlen,
    input  wire [ 2: 0] lsu_arsize,
    input  wire [ 1: 0] lsu_arburst,
    input  wire         lsu_rready,
    output reg          lsu_rvalid,
    output reg  [ 1: 0] lsu_rresp,
    output reg  [31: 0] lsu_rdata,
    output reg          lsu_rlast,
    output reg  [ 3: 0] lsu_rid,

    input  wire         io_master_awready,
    output reg          io_master_awvalid,
    output reg  [31: 0] io_master_awaddr,
    output reg  [ 3: 0] io_master_awid,
    output reg  [ 7: 0] io_master_awlen,
    output reg  [ 2: 0] io_master_awsize,
    output reg  [ 1: 0] io_master_awburst,
    input  wire         io_master_wready,
    output reg          io_master_wvalid,
    output reg  [31: 0] io_master_wdata,
    output reg  [ 3: 0] io_master_wstrb,
    output reg          io_master_wlast,
    output reg          io_master_bready,
    input  wire         io_master_bvalid,
    input  wire [ 1: 0] io_master_bresp,
    input  wire [ 3: 0] io_master_bid,

    input  wire         io_master_arready,
    output reg          io_master_arvalid,
    output reg [31: 0]  io_master_araddr,
    output reg [ 3: 0]  io_master_arid,
    output reg [ 7: 0]  io_master_arlen,
    output reg [ 2: 0]  io_master_arsize,
    output reg [ 1: 0]  io_master_arburst,
    output reg          io_master_rready,
    input  wire         io_master_rvalid,
    input  wire [ 1: 0] io_master_rresp,
    input  wire [31: 0] io_master_rdata,
    input  wire         io_master_rlast,
    input  wire [ 3: 0] io_master_rid,

    // CLINT从设备（只读）
    output reg [31:0] clint_araddr,  
    output reg        clint_arvalid,  
    input wire        clint_arready,
    output reg [ 3:0] clint_arid,
    output reg [ 7:0] clint_arlen,
    output reg [ 2:0] clint_arsize,
    output reg [ 1:0] clint_arburst,  
    input wire [31:0] clint_rdata,   
    input wire [ 1:0] clint_rresp,   
    input wire        clint_rvalid,   
    output reg        clint_rready,
    input wire        clint_rlast,
    input wire [ 3:0] clint_rid,

    output reg [31:0] clint_awaddr,  
    output reg        clint_awvalid, 
    input wire        clint_awready, 
    output reg [ 3:0] clint_awid,    
    output reg [ 7:0] clint_awlen,   
    output reg [ 2:0] clint_awsize,  
    output reg [ 1:0] clint_awburst, 
    output reg [31:0] clint_wdata,   
    output reg [ 3:0] clint_wstrb,   
    output reg        clint_wvalid,  
    input wire        clint_wready,  
    output reg        clint_wlast,   
    input wire [ 1:0] clint_bresp,   
    input wire        clint_bvalid,  
    output reg        clint_bready,
    output reg [ 3:0] clint_bid   
);

    // 状态机定义
    localparam NONE      = 3'd0;
    localparam IFU       = 3'd1;
    localparam LSU_READ  = 3'd2;
    localparam LSU_WRITE = 3'd3;

    localparam CLINT = 2'd1;
    localparam MASTER = 2'd2;

    reg [2:0] current_master, next_master;

    parameter OKAY = 2'b00;
    parameter SLVERR = 2'b10;
    parameter DECERR = 2'b11;

    // 地址解码函数
    function [1:0] decode_address(input [31:0] addr);
        if (addr >= CLINT_ADDR_START && addr <= CLINT_ADDR_END) begin
            decode_address = CLINT;
        end
        else begin
            decode_address = MASTER;
        end
    endfunction

    // 状态转换
    always @(posedge clk) begin
        if (reset) begin
            current_master <= NONE;
        end else begin
            current_master <= next_master;
        end
    end

    // 下一状态逻辑
    always @(*) begin
        case (current_master)
            NONE: begin
                if (lsu_awvalid) begin
                    next_master = LSU_WRITE;
                end 
                else if (lsu_arvalid) begin
                    next_master = LSU_READ;
                end 
                else if (ifu_arvalid) begin
                    next_master = IFU;
                end 
                else begin
                    next_master = NONE;
                end
            end
            IFU: begin
                if ((io_master_rvalid && io_master_rready && io_master_rlast) || (clint_rvalid && clint_rready)) begin 
                    next_master = NONE;
                end else begin
                    next_master = IFU;
                end
            end
            LSU_READ: begin
                if ((io_master_rvalid && io_master_rready && io_master_rlast) || (clint_rvalid && clint_rready)) begin
                    next_master = NONE;
                end else begin
                    next_master = LSU_READ;
                end
            end
            LSU_WRITE: begin
                if ((io_master_bvalid && io_master_bready)) begin 
                    next_master = NONE;
                end else begin
                    next_master = LSU_WRITE;
                end
            end
            default: next_master = NONE;
        endcase
    end

    // 读地址通道处理
    always @(*) begin
        io_master_araddr  = 32'h0;
        io_master_arvalid = 1'b0;
        io_master_arid    = 4'h0;
        io_master_arlen   = 8'h0;
        io_master_arsize  = 3'h0;
        io_master_arburst = 2'h0;
        clint_araddr      = 32'h0; 
        clint_arvalid     = 1'b0;  
        clint_arid        = 4'h0;
        clint_arlen       = 8'h0;
        clint_arsize      = 3'h0;
        clint_arburst     = 2'h0;
        ifu_arready       = 1'b0;
        lsu_arready       = 1'b0;
        if(!reset) begin
            case (current_master)
                IFU: begin
                    case (decode_address(ifu_araddr))
                        CLINT: begin 
                            clint_araddr      = ifu_araddr;
                            clint_arvalid     = ifu_arvalid;
                            clint_arid        = ifu_arid;
                            clint_arlen       = ifu_arlen;
                            clint_arsize      = ifu_arsize;
                            clint_arburst     = ifu_arburst;
                            ifu_arready       = clint_arready; 
                            // 禁用其他通道
                            lsu_arready       = 1'b0;
                            io_master_araddr  = 32'h0;
                            io_master_arvalid = 1'b0;
                            io_master_arid    = 4'h0;
                            io_master_arlen   = 8'h0;
                            io_master_arsize  = 3'h0;
                            io_master_arburst = 2'h0;
                        end
                        default: begin
                            io_master_araddr  = ifu_araddr;
                            io_master_arvalid = ifu_arvalid;
                            io_master_arid    = ifu_arid;
                            io_master_arlen   = ifu_arlen;
                            io_master_arsize  = ifu_arsize;
                            io_master_arburst = ifu_arburst;
                            ifu_arready       = io_master_arready; 
                            // 禁用其他通道
                            clint_araddr      = 32'h0;
                            clint_arvalid     = 1'b0;
                            clint_arid        = 4'h0;
                            clint_arlen       = 8'h0;
                            clint_arsize      = 3'h0;
                            clint_arburst     = 2'h0;
                            lsu_arready       = 1'b0;
                        end 
                    endcase
                end
                LSU_READ: begin
                    case (decode_address(lsu_araddr))
                        CLINT: begin 
                            clint_araddr      = lsu_araddr;
                            clint_arvalid     = lsu_arvalid;
                            clint_arid        = lsu_arid;
                            clint_arlen       = lsu_arlen;
                            clint_arsize      = lsu_arsize;
                            clint_arburst     = lsu_arburst;
                            lsu_arready       = clint_arready;  
                            // 禁用其他通道
                            ifu_arready       = 1'b0;
                            io_master_araddr  = 32'h0;
                            io_master_arvalid = 1'b0;
                            io_master_arid    = 4'h0;
                            io_master_arlen   = 8'h0;
                            io_master_arsize  = 3'h0;
                            io_master_arburst = 2'h0;
                        end
                        default: begin
                            io_master_araddr  = lsu_araddr;
                            io_master_arvalid = lsu_arvalid;
                            io_master_arid    = lsu_arid;
                            io_master_arlen   = lsu_arlen;
                            io_master_arsize  = lsu_arsize;
                            io_master_arburst = lsu_arburst;
                            lsu_arready       = io_master_arready; 
                            // 禁用其他通道
                            clint_araddr      = 32'h0;
                            clint_arvalid     = 1'b0;
                            clint_arid        = 4'h0;
                            clint_arlen       = 8'h0;
                            clint_arsize      = 3'h0;
                            clint_arburst     = 2'h0;
                            ifu_arready       = 1'b0;
                        end
                    endcase
                end
                default: begin
                    io_master_araddr  = 32'h0;
                    io_master_arvalid = 1'b0;
                    io_master_arid    = 4'h0;
                    io_master_arlen   = 8'h0;
                    io_master_arsize  = 3'h0;
                    io_master_arburst = 2'h0;
                    clint_araddr      = 32'h0;
                    clint_arvalid     = 1'b0;
                    clint_arid        = 4'h0;
                    clint_arlen       = 8'h0;
                    clint_arsize      = 3'h0;
                    clint_arburst     = 2'h0;
                    ifu_arready       = 1'b0;
                    lsu_arready       = 1'b0;
                end
            endcase
        end
    end

    // 写地址通道处理
    always @(*) begin
        io_master_awaddr  = 32'h0;
        io_master_awvalid = 1'b0;
        io_master_awid    = 4'h0;
        io_master_awlen   = 8'h0;
        io_master_awsize  = 3'h0;
        io_master_awburst = 2'h0;
        lsu_awready       = 1'b0;

        clint_awaddr      = 32'h0;
        clint_awvalid     = 1'b0;
        clint_awid        = 4'h0;
        clint_awlen       = 8'h0;
        clint_awsize      = 3'h0;
        clint_awburst     = 2'h0;
        if(!reset) begin
            case (current_master)
                LSU_WRITE: begin
                    io_master_awaddr  = lsu_awaddr;
                    io_master_awvalid = lsu_awvalid;
                    io_master_awid    = lsu_awid;
                    io_master_awlen   = lsu_awlen;
                    io_master_awsize  = lsu_awsize;
                    io_master_awburst = lsu_awburst;
                    lsu_awready       = io_master_awready;
                end
                default: begin
                    io_master_awaddr  = 32'h0;
                    io_master_awvalid = 1'b0;
                    io_master_awid    = 4'h0;
                    io_master_awlen   = 8'h0;
                    io_master_awsize  = 3'h0;
                    io_master_awburst = 2'h0;
                    lsu_awready       = 1'b0;
                end
            endcase
        end
    end

    // 写数据通道处理
    always @(*) begin
        io_master_wdata  = 32'h0;
        io_master_wstrb  = 4'b0;
        io_master_wvalid = 1'b0;
        io_master_wlast  = 1'b0;
        lsu_wready       = 1'b0;
        clint_wdata      = 32'h0;
        clint_wstrb      = 4'b0;
        clint_wvalid     = 1'b0;
        clint_wlast      = 1'b0;
        if(!reset) begin
            case (current_master)
                LSU_WRITE: begin
                    io_master_wdata  = lsu_wdata;
                    io_master_wstrb  = lsu_wstrb;
                    io_master_wvalid = lsu_wvalid;
                    io_master_wlast  = lsu_wlast; 
                    lsu_wready       = io_master_wready; 
                end
                default: begin
                    io_master_wdata  = 32'h0;
                    io_master_wstrb  = 4'b0;
                    io_master_wvalid = 1'b0;
                    io_master_wlast  = 1'b0;
                    lsu_wready       = 1'b0;
                end
            endcase
        end
    end

    // 读数据通道处理
    always @(*) begin
        io_master_rready = 1'b0;
        clint_rready     = 1'b0;
        ifu_rdata        = 32'h0;
        ifu_rvalid       = 1'b0;
        ifu_rresp        = OKAY;
        ifu_rlast        = 1'b0;
        ifu_rid          = 4'h0;
        lsu_rdata        = 32'h0;
        lsu_rvalid       = 1'b0;
        lsu_rresp        = OKAY;
        lsu_rlast        = 1'b0;
        lsu_rid          = 4'h0;
        if(!reset) begin
            case (current_master)
                IFU: begin
                    case (decode_address(ifu_araddr))
                        CLINT: begin 
                             ifu_rdata        = clint_rdata;
                            ifu_rvalid       = clint_rvalid;
                            ifu_rresp        = clint_rresp;
                            ifu_rlast        = clint_rlast;
                            ifu_rid          = clint_rid;
                            clint_rready     = ifu_rready;  
                            io_master_rready = 1'b0;
                        end
                        default: begin
                           ifu_rdata        = io_master_rdata;
                            ifu_rvalid       = io_master_rvalid;
                            ifu_rresp        = io_master_rresp;
                            ifu_rlast        = io_master_rlast;
                            ifu_rid          = io_master_rid;
                            io_master_rready = ifu_rready; 
                            clint_rready     = 1'b0;
                        end
                    endcase
                end
                LSU_READ: begin
                    case (decode_address(lsu_araddr))
                        CLINT: begin 
                          lsu_rdata        = clint_rdata;
                            lsu_rvalid       = clint_rvalid;
                            lsu_rresp        = clint_rresp;
                            lsu_rlast        = clint_rlast;
                            lsu_rid          = clint_rid;
                            clint_rready     = lsu_rready; 
                            io_master_rready = 1'b0;
                        end
                        default: begin
                             lsu_rdata        = io_master_rdata;
                            lsu_rvalid       = io_master_rvalid;
                            lsu_rresp        = io_master_rresp;
                            lsu_rlast        = io_master_rlast;
                            lsu_rid          = io_master_rid;
                            io_master_rready = lsu_rready; 
                            clint_rready     = 1'b0;
                        end
                    endcase
                end
                default: begin
                    io_master_rready = 1'b0;
                    clint_rready     = 1'b0;
                    ifu_rdata    = 32'h0;
                    ifu_rvalid   = 1'b0;
                    ifu_rresp    = OKAY;
                    ifu_rlast    = 1'b0;
                    ifu_rid      = 4'h0;
                    lsu_rdata    = 32'h0;
                    lsu_rvalid   = 1'b0;
                    lsu_rresp    = OKAY;
                    lsu_rlast    = 1'b0;
                    lsu_rid      = 4'h0;
                end
            endcase
        end
    end

    // 写响应通道处理
    always @(*) begin
        io_master_bready = 1'b0;
        lsu_bresp        = OKAY;
        lsu_bvalid       = 1'b0;
        lsu_bid          = 4'h0;
        clint_bready     = 1'b0;
        clint_bid        = 4'h0;
        if(!reset) begin
            case (current_master)
                LSU_WRITE: begin
                    lsu_bresp        = io_master_bresp;
                    lsu_bvalid       = io_master_bvalid;
                    lsu_bid          = io_master_bid;
                    io_master_bready = lsu_bready; 
                end
                default: begin
                    io_master_bready = 1'b0;
                    lsu_bresp        = OKAY;
                    lsu_bvalid       = 1'b0;
                    lsu_bid          = 4'h0;
                end
            endcase
        end
    end

endmodule