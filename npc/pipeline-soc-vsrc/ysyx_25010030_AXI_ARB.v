module ysyx_25010030_AXI_ARB (
    input wire clk,           // 时钟信号
    input wire reset,         // 复位信号

    // IFU 接口
    output reg         ifu_arready,
    input  wire        ifu_arvalid,
    input  wire [31:0] ifu_araddr,
    input  wire [ 3:0] ifu_arid,
    input  wire [ 7:0] ifu_arlen,
    input  wire [ 2:0] ifu_arsize,
    input  wire [ 1:0] ifu_arburst,
    input  wire        ifu_rready,
    output reg         ifu_rvalid,
    output reg  [ 1:0] ifu_rresp,
    output reg  [31:0] ifu_rdata,
    output reg         ifu_rlast,
    output reg  [ 3:0] ifu_rid,

    // LSU 写接口
    output reg         lsu_awready,
    input  wire        lsu_awvalid,
    input  wire [31:0] lsu_awaddr,
    input  wire [ 3:0] lsu_awid,
    input  wire [ 7:0] lsu_awlen,
    input  wire [ 2:0] lsu_awsize,
    input  wire [ 1:0] lsu_awburst,
    output reg         lsu_wready,
    input  wire        lsu_wvalid,
    input  wire [31:0] lsu_wdata,
    input  wire [ 3:0] lsu_wstrb,
    input  wire        lsu_wlast,
    input  wire        lsu_bready,
    output reg         lsu_bvalid,
    output reg  [ 1:0] lsu_bresp,
    output reg  [ 3:0] lsu_bid,

    // LSU 读接口
    output reg         lsu_arready,
    input  wire        lsu_arvalid,
    input  wire [31:0] lsu_araddr,
    input  wire [ 3:0] lsu_arid,
    input  wire [ 7:0] lsu_arlen,
    input  wire [ 2:0] lsu_arsize,
    input  wire [ 1:0] lsu_arburst,
    input  wire        lsu_rready,
    output reg         lsu_rvalid,
    output reg  [ 1:0] lsu_rresp,
    output reg  [31:0] lsu_rdata,
    output reg         lsu_rlast,
    output reg  [ 3:0] lsu_rid,

    // 主设备接口
    input  wire        io_master_awready,
    output reg         io_master_awvalid,
    output reg  [31:0] io_master_awaddr,
    output reg  [ 3:0] io_master_awid,
    output reg  [ 7:0] io_master_awlen,
    output reg  [ 2:0] io_master_awsize,
    output reg  [ 1:0] io_master_awburst,
    input  wire        io_master_wready,
    output reg         io_master_wvalid,
    output reg  [31:0] io_master_wdata,
    output reg  [ 3:0] io_master_wstrb,
    output reg         io_master_wlast,
    output reg         io_master_bready,
    input  wire        io_master_bvalid,
    input  wire [ 1:0] io_master_bresp,
    input  wire [ 3:0] io_master_bid,

    input  wire        io_master_arready,
    output reg         io_master_arvalid,
    output reg  [31:0] io_master_araddr,
    output reg  [ 3:0] io_master_arid,
    output reg  [ 7:0] io_master_arlen,
    output reg  [ 2:0] io_master_arsize,
    output reg  [ 1:0] io_master_arburst,
    output reg         io_master_rready,
    input  wire        io_master_rvalid,
    input  wire [ 1:0] io_master_rresp,
    input  wire [31:0] io_master_rdata,
    input  wire        io_master_rlast,
    input  wire [ 3:0] io_master_rid,

    // CLINT 接口
    output reg  [31:0] clint_araddr,  
    output reg         clint_arvalid,  
    input  wire        clint_arready,
    // output reg  [ 3:0] clint_arid,
    // output reg  [ 7:0] clint_arlen,
    // output reg  [ 2:0] clint_arsize,
    // output reg  [ 1:0] clint_arburst,  
    input  wire [31:0] clint_rdata,   
    input  wire [ 1:0] clint_rresp,   
    input  wire        clint_rvalid,   
    output reg         clint_rready,
    input  wire        clint_rlast
    // input  wire [ 3:0] clint_rid
);

    // 状态机定义
    localparam NONE = 2'b00;
    localparam IFU  = 2'b01;
    localparam LSU  = 2'b10;

    // CLINT 地址判断
    localparam CLINT_BASE = 16'h0200;
    wire lsu_is_clint = (lsu_araddr[31:16] == CLINT_BASE);

    reg [1:0] current_master, next_master;

    // AXI 响应类型
    parameter OKAY   = 2'b00;
    // parameter SLVERR = 2'b10;
    // parameter DECERR = 2'b11;

    // 状态寄存器
    always @(posedge clk) begin
        if (reset) current_master <= NONE;
        else current_master       <= next_master;
    end

    // 下一状态逻辑
    always @(*) begin
        next_master = current_master;
        case (current_master)
            NONE: begin
                if (lsu_awvalid || lsu_arvalid) next_master = LSU;
                else if (ifu_arvalid) next_master = IFU;
            end
            IFU: begin
                if ((io_master_rvalid && io_master_rready && io_master_rlast) || 
                    (clint_rvalid && clint_rready)) next_master = NONE;
            end
            LSU: begin
                if (((io_master_rvalid && io_master_rready && io_master_rlast) || 
                     (clint_rvalid && clint_rready)) || 
                    (io_master_bvalid && io_master_bready)) next_master = NONE;
            end
            default: begin 
                next_master = NONE;
            end
        endcase
    end

    // 读通道处理 - 修复 LATCH 警告
    always @(*) begin
        // 设置所有输出信号的默认值
        io_master_araddr  = 32'h0;
        io_master_arvalid = 1'b0;
        io_master_arid    = 4'h0;
        io_master_arlen   = 8'h0;
        io_master_arsize  = 3'h0;
        io_master_arburst = 2'h0;
        clint_araddr      = 32'h0;
        clint_arvalid     = 1'b0;
        // clint_arid        = 4'h0;
        // clint_arlen       = 8'h0;
        // clint_arsize      = 3'h0;
        // clint_arburst     = 2'h0;
        ifu_arready       = 1'b0;
        lsu_arready       = 1'b0;
        io_master_rready  = 1'b0;
        clint_rready      = 1'b0;
        ifu_rdata         = 32'h0;
        ifu_rvalid        = 1'b0;
        ifu_rresp         = OKAY;
        ifu_rlast         = 1'b0;
        ifu_rid           = 4'h0;
        lsu_rdata         = 32'h0;
        lsu_rvalid        = 1'b0;
        lsu_rresp         = OKAY;
        lsu_rlast         = 1'b0;
        lsu_rid           = 4'h0;

        if (!reset) begin
            case (current_master)
                IFU: begin
                    io_master_araddr  = ifu_araddr;
                    io_master_arvalid = ifu_arvalid;
                    io_master_arid    = ifu_arid;
                    io_master_arlen   = ifu_arlen;
                    io_master_arsize  = ifu_arsize;
                    io_master_arburst = ifu_arburst;
                    ifu_arready       = io_master_arready;

                    ifu_rdata        = io_master_rdata;
                    ifu_rvalid       = io_master_rvalid;
                    ifu_rresp        = io_master_rresp;
                    ifu_rlast        = io_master_rlast;
                    ifu_rid          = io_master_rid;
                    io_master_rready = ifu_rready;
                end
                LSU: begin
                    if (lsu_is_clint) begin
                        clint_araddr  = lsu_araddr;
                        clint_arvalid = lsu_arvalid;
                        // clint_arid    = lsu_arid;
                        // clint_arlen   = lsu_arlen;
                        // clint_arsize  = lsu_arsize;
                        // clint_arburst = lsu_arburst;
                        lsu_arready  = clint_arready;

                        lsu_rdata    = clint_rdata;
                        lsu_rvalid   = clint_rvalid;
                        lsu_rresp    = clint_rresp;
                        lsu_rlast    = clint_rlast;
                        // lsu_rid      = clint_rid;
                        clint_rready = lsu_rready;
                    end else begin
                        io_master_araddr  = lsu_araddr;
                        io_master_arvalid = lsu_arvalid;
                        io_master_arid    = lsu_arid;
                        io_master_arlen   = lsu_arlen;
                        io_master_arsize  = lsu_arsize;
                        io_master_arburst = lsu_arburst;
                        lsu_arready       = io_master_arready;

                        lsu_rdata        = io_master_rdata;
                        lsu_rvalid       = io_master_rvalid;
                        lsu_rresp        = io_master_rresp;
                        lsu_rlast        = io_master_rlast;
                        lsu_rid          = io_master_rid;
                        io_master_rready = lsu_rready;
                    end
                end
                default: begin
                    // 保持默认值
                end
            endcase
        end
    end

    // 写通道处理
    always @(*) begin
        // 设置所有输出信号的默认值
        io_master_awaddr  = 32'h0;
        io_master_awvalid = 1'b0;
        io_master_awid    = 4'h0;
        io_master_awlen   = 8'h0;
        io_master_awsize  = 3'h0;
        io_master_awburst = 2'h0;
        lsu_awready       = 1'b0;
        io_master_wdata   = 32'h0;
        io_master_wstrb   = 4'b0;
        io_master_wvalid  = 1'b0;
        io_master_wlast   = 1'b0;
        lsu_wready        = 1'b0;
        io_master_bready  = 1'b0;
        lsu_bresp         = OKAY;
        lsu_bvalid        = 1'b0;
        lsu_bid           = 4'h0;

        if (!reset && current_master == LSU) begin
            io_master_awaddr  = lsu_awaddr;
            io_master_awvalid = lsu_awvalid;
            io_master_awid    = lsu_awid;
            io_master_awlen   = lsu_awlen;
            io_master_awsize  = lsu_awsize;
            io_master_awburst = lsu_awburst;
            lsu_awready       = io_master_awready;

            io_master_wdata  = lsu_wdata;
            io_master_wstrb  = lsu_wstrb;
            io_master_wvalid = lsu_wvalid;
            io_master_wlast  = lsu_wlast;
            lsu_wready       = io_master_wready;

            lsu_bresp        = io_master_bresp;
            lsu_bvalid       = io_master_bvalid;
            lsu_bid          = io_master_bid;
            io_master_bready = lsu_bready;
        end
    end

endmodule
