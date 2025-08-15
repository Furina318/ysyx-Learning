module AXI_ARB #(
    parameter CLINT_ADDR_START = 32'h0200_0000,
    parameter CLINT_ADDR_END   = 32'h0200_0007
)(
    input wire clk,           // 时钟信号
    input wire reset,         // 复位信号

    // IFU主设备（只读）
    input wire [31:0] ifu_araddr,   // IFU读地址
    input wire        ifu_arvalid,  // IFU读地址有效
    output reg        ifu_arready,  // IFU读地址ready
    output reg [31:0] ifu_rdata,    // IFU读数据
    output reg [1:0]  ifu_rresp,    // IFU读响应
    output reg        ifu_rvalid,   // IFU读数据有效
    input wire        ifu_rready,   // IFU读数据ready

    // LSU主设备（读写）
    input wire [31:0] lsu_araddr,   // LSU读地址
    input wire        lsu_arvalid,  // LSU读地址有效
    output reg        lsu_arready,  // LSU读地址ready
    output reg [31:0] lsu_rdata,    // LSU读数据
    output reg [1:0]  lsu_rresp,    // LSU读响应
    output reg        lsu_rvalid,   // LSU读数据有效
    input wire        lsu_rready,   // LSU读数据ready

    input wire [31:0] lsu_awaddr,   // LSU写地址
    input wire        lsu_awvalid,  // LSU写地址有效
    output reg        lsu_awready,  // LSU写地址ready
    input wire [31:0] lsu_wdata,    // LSU写数据
    input wire [3:0]  lsu_wstrb,    // LSU写选通
    input wire        lsu_wvalid,   // LSU写数据有效
    output reg        lsu_wready,   // LSU写数据ready
    output reg [1:0]  lsu_bresp,    // LSU写响应
    output reg        lsu_bvalid,   // LSU写响应有效
    input wire        lsu_bready,   // LSU写响应ready

    output reg [31:0] io_master_araddr,
    output reg        io_master_arvalid,
    input wire        io_master_arready,
    input wire [31:0] io_master_rdata,
    input wire [1:0]  io_master_rresp,
    input wire        io_master_rvalid,
    output reg        io_master_rready,
    output reg [31:0] io_master_awaddr,
    output reg        io_master_awvalid,
    input wire        io_master_awready,
    output reg [31:0] io_master_wdata,
    output reg [3:0]  io_master_wstrb,
    output reg        io_master_wvalid,
    input wire        io_master_wready,
    input wire [1:0]  io_master_bresp,
    input wire        io_master_bvalid,
    output reg        io_master_bready,

    // CLINT从设备（只读） - 新增
    output reg [31:0] clint_araddr,   // CLINT读地址
    output reg        clint_arvalid,  // CLINT读地址有效
    input wire        clint_arready,  // CLINT读地址ready
    input wire [31:0] clint_rdata,    // CLINT读数据
    input wire [1:0]  clint_rresp,    // CLINT读响应
    input wire        clint_rvalid,   // CLINT读数据有效
    output reg        clint_rready,   // CLINT读数据ready
    output reg [31:0] clint_awaddr,   // CLINT写地址
    output reg        clint_awvalid,  // CLINT写地址有效
    input wire        clint_awready,  // CLINT写地址ready
    output reg [31:0] clint_wdata,    // CLINT写数据
    output reg [3:0]  clint_wstrb,    // CLINT写选通
    output reg        clint_wvalid,   // CLINT写数据有效
    input wire        clint_wready,   // CLINT写数据ready
    input wire [1:0]  clint_bresp,    // CLINT写响应
    input wire        clint_bvalid,   // CLINT写响应有效
    output reg        clint_bready    // CLINT写响应ready
);

    // 状态机定义
    localparam NONE      = 3'd0;
    localparam IFU       = 3'd1;
    localparam LSU_READ  = 3'd2;
    localparam LSU_WRITE = 3'd3;
    localparam ERROR     = 3'd4;

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
                if ((io_master_rvalid && io_master_rready) || (clint_rvalid && clint_rready)) begin 
                    next_master = NONE;
                end else begin
                    next_master = IFU;
                end
            end
            LSU_READ: begin
                if ((io_master_rvalid && io_master_rready) || (clint_rvalid && clint_rready)) begin
                    next_master = NONE;
                end else begin
                    next_master = LSU_READ;
                end
            end
            LSU_WRITE: begin
                if ((io_master_bvalid && io_master_bready) || (clint_bvalid && clint_bready)) begin 
                    next_master = NONE;
                end else begin
                    next_master = LSU_WRITE;
                end
            end
            ERROR: begin
                if ((ifu_rvalid && ifu_rready) || (lsu_rvalid && lsu_rready) || (lsu_bvalid && lsu_bready)) begin
                    next_master = NONE;
                end else begin
                    next_master = ERROR;
                end
            end
            default: next_master = NONE;
        endcase
    end

    // 读地址通道处理
    always @(*) begin
        if(reset) begin
            io_master_araddr  = 32'h0;
            io_master_arvalid = 1'b0;
            clint_araddr      = 32'h0; 
            clint_arvalid     = 1'b0;  
            ifu_arready       = 1'b0;
            lsu_arready       = 1'b0;
        end
        else begin
            case (current_master)
                IFU: begin
                    case (decode_address(ifu_araddr))
                        CLINT: begin 
                            clint_araddr      = ifu_araddr;
                            clint_arvalid     = ifu_arvalid;
                            ifu_arready       = clint_arready;
                            lsu_arready       = 1'b0;
                            io_master_araddr  = 32'h0;
                            io_master_arvalid = 1'b0;
                        end
                        default: begin
                            io_master_araddr  = ifu_araddr;
                            io_master_arvalid = ifu_arvalid;
                            ifu_arready       = io_master_arready;
                            clint_araddr      = 32'h0;
                            clint_arvalid     = 1'b0;
                            lsu_arready       = 1'b0;
                        end 
                    endcase
                end
                LSU_READ: begin
                    case (decode_address(lsu_araddr))
                        CLINT: begin 
                            clint_araddr      = lsu_araddr;
                            clint_arvalid     = lsu_arvalid;
                            lsu_arready       = clint_arready;
                            ifu_arready       = 1'b0;
                            io_master_araddr  = 32'h0;
                            io_master_arvalid = 1'b0;
                        end
                        default: begin
                            io_master_araddr  = lsu_araddr;
                            io_master_arvalid = lsu_arvalid;
                            lsu_arready       = io_master_arready;
                            clint_araddr      = 32'h0;
                            clint_arvalid     = 1'b0;
                            ifu_arready       = 1'b0;
                        end
                    endcase
                end
                ERROR: begin
                    ifu_arready       = ifu_arvalid;
                    lsu_arready       = lsu_arvalid;
                    io_master_araddr  = 32'h0;
                    io_master_arvalid = 1'b0;
                    clint_araddr      = 32'h0;
                    clint_arvalid     = 1'b0;
                end
                default: begin
                    io_master_araddr  = 32'h0;
                    io_master_arvalid = 1'b0;
                    clint_araddr      = 32'h0;
                    clint_arvalid     = 1'b0;
                    ifu_arready       = 1'b0;
                    lsu_arready       = 1'b0;
                end
            endcase
        end
    end

    // 写地址通道处理
    always @(*) begin
        if(reset) begin
            io_master_awaddr  = 32'h0;
            io_master_awvalid = 1'b0;
            clint_awaddr      = 32'h0; 
            clint_awvalid     = 1'b0;  
            lsu_awready       = 1'b0;
        end
        else begin
            case (current_master)
                LSU_WRITE: begin
                    case (decode_address(lsu_awaddr))
                        CLINT: begin 
                            clint_awaddr      = lsu_awaddr;
                            clint_awvalid     = lsu_awvalid;
                            lsu_awready       = clint_awready;
                            io_master_awaddr  = 32'h0;
                            io_master_awvalid = 1'b0;
                        end
                        default: begin
                            io_master_awaddr  = lsu_awaddr;
                            io_master_awvalid = lsu_awvalid;
                            lsu_awready       = io_master_arready;
                            clint_awaddr      = 32'h0;
                            clint_awvalid     = 1'b0;
                        end
                    endcase
                end
                ERROR: begin
                    lsu_awready       = lsu_awvalid;
                    io_master_awaddr  = 32'h0;
                    io_master_awvalid = 1'b0;
                    clint_awaddr      = 32'h0;
                    clint_awvalid     = 1'b0;
                end
                default: begin
                    io_master_awaddr  = 32'h0;
                    io_master_awvalid = 1'b0;
                    clint_awaddr      = 32'h0;
                    clint_awvalid     = 1'b0;
                    lsu_awready       = 1'b0;
                end
            endcase
        end
    end

    // 写数据通道处理
    always @(*) begin
        if(reset) begin
            io_master_wdata  = 32'h0;
            io_master_wstrb  = 4'b0;
            io_master_wvalid = 1'b0;
            clint_wdata      = 32'h0; 
            clint_wstrb      = 4'b0;  
            clint_wvalid     = 1'b0;   
            lsu_wready       = 1'b0;
        end
        else begin
            case (current_master)
                LSU_WRITE: begin
                    case (decode_address(lsu_awaddr))
                        CLINT: begin 
                            clint_wdata      = lsu_wdata;
                            clint_wstrb      = lsu_wstrb;
                            clint_wvalid     = lsu_wvalid;
                            lsu_wready       = clint_wready;
                            io_master_wdata  = 32'h0;
                            io_master_wstrb  = 4'b0;
                            io_master_wvalid = 1'b0;
                        end
                        default: begin
                            io_master_wdata  = lsu_wdata;
                            io_master_wstrb  = lsu_wstrb;
                            io_master_wvalid = lsu_wvalid;
                            lsu_wready       = io_master_wready;
                            clint_wdata      = 32'h0;
                            clint_wstrb      = 4'b0;
                            clint_wvalid     = 1'b0;
                        end
                    endcase
                end
                default: begin
                    io_master_wdata  = 32'h0;
                    io_master_wstrb  = 4'b0;
                    io_master_wvalid = 1'b0;
                    clint_wdata  = 32'h0;
                    clint_wstrb  = 4'b0;
                    clint_wvalid = 1'b0;
                    lsu_wready   = 1'b0;
                end
            endcase
        end
    end

    // 读数据通道处理
    always @(*) begin
        if(reset) begin
            io_master_rready = 1'b0;
            clint_rready     = 1'b0;
            ifu_rdata        = 32'h0;
            ifu_rvalid       = 1'b0;
            ifu_rresp        = OKAY;
            lsu_rdata        = 32'h0;
            lsu_rvalid       = 1'b0;
            lsu_rresp        = OKAY;
        end
        else begin
            case (current_master)
                IFU: begin
                    case (decode_address(ifu_araddr))
                        CLINT: begin 
                            ifu_rdata        = clint_rdata;
                            ifu_rvalid       = clint_rvalid;
                            ifu_rresp        = clint_rresp;
                            clint_rready     = ifu_rready;
                            io_master_rready = 1'b0;
                        end
                        default: begin
                            ifu_rdata        = io_master_rdata;
                            ifu_rvalid       = io_master_rvalid;
                            ifu_rresp        = io_master_rresp;
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
                            clint_rready     = lsu_rready;
                            io_master_rready = 1'b0;
                        end
                        default: begin
                            lsu_rdata        = io_master_rdata;
                            lsu_rvalid       = io_master_rvalid;
                            lsu_rresp        = io_master_rresp;
                            io_master_rready = lsu_rready;
                            clint_rready     = 1'b0;
                        end
                    endcase
                end
                ERROR: begin
                    if (ifu_arvalid) begin
                        ifu_rdata    = 32'h0;
                        ifu_rvalid   = 1'b1;
                        ifu_rresp    = DECERR; // DECERR
                    end else if (lsu_arvalid) begin
                        lsu_rdata    = 32'h0;
                        lsu_rvalid   = 1'b1;
                        lsu_rresp    = DECERR; // DECERR
                    end
                    io_master_rready = 1'b0;
                    clint_rready = 1'b0;
                end
                default: begin
                    io_master_rready = 1'b0;
                    clint_rready = 1'b0;
                    ifu_rdata    = 32'h0;
                    ifu_rvalid   = 1'b0;
                    ifu_rresp    = OKAY;
                    lsu_rdata    = 32'h0;
                    lsu_rvalid   = 1'b0;
                    lsu_rresp    = OKAY;
                end
            endcase
        end
    end

    // 写响应通道处理
    always @(*) begin
        if(reset) begin
            io_master_bready = 1'b0;
            clint_bready     = 1'b0; 
            lsu_bresp        = OKAY;
            lsu_bvalid       = 1'b0;
        end
        else begin
            case (current_master)
                LSU_WRITE: begin
                    case (decode_address(lsu_awaddr))
                        CLINT: begin 
                            lsu_bresp        = clint_bresp;
                            lsu_bvalid       = clint_bvalid;
                            clint_bready     = lsu_bready;
                            io_master_bready = 1'b0;
                        end
                        default: begin
                            lsu_bresp        = io_master_bresp;
                            lsu_bvalid       = io_master_bvalid;
                            io_master_bready = lsu_bready;
                            clint_bready     = 1'b0;
                        end
                    endcase
                end
                ERROR: begin
                    if (lsu_awvalid) begin
                        lsu_bresp    = DECERR; // DECERR
                        lsu_bvalid   = 1'b1;
                    end
                    io_master_bready = 1'b0;
                    clint_bready     = 1'b0;
                end
                default: begin
                    io_master_bready = 1'b0;
                    clint_bready     = 1'b0;
                    lsu_bresp        = OKAY;
                    lsu_bvalid       = 1'b0;
                end
            endcase
        end
    end

endmodule