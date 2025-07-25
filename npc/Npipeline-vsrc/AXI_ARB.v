`timescale 1ns/1ns
module AXI_ARB (
    input clk, 
    input rst,

    // IFU Read
    input         if_arvalid,
    output reg    ar_if_ready,
    input  [31:0] if_araddr,
    output reg    if_rvalid,
    input         r_if_ready,
    output [31:0] if_rdata,
    output [1:0]  if_rresp,

    // LSU Read
    input         lsu_arvalid,
    output reg    ar_lsu_ready,
    input  [31:0] lsu_araddr,
    output reg    lsu_rvalid,
    input         r_lsu_ready,
    output [31:0] lsu_rdata,
    output [1:0]  lsu_rresp,

    // LSU Write
    input         lsu_awvalid,
    output reg    aw_lsu_ready,
    input  [31:0] lsu_awaddr,

    input         lsu_wvalid,
    output reg    w_lsu_ready,
    input  [31:0] lsu_wdata,
    input  [3:0]  lsu_wstrb,

    output reg    lsu_bvalid,
    input         b_lsu_ready,
    output [1:0]  lsu_bresp,

    // SRAM AXI4-Lite Slave
    output reg        s_arvalid,
    input             s_arready,
    output reg [31:0] s_araddr,

    input             s_rvalid,
    output reg        s_rready,
    input      [31:0] s_rdata,
    input      [1:0]  s_rresp,

    output reg        s_awvalid,
    input             s_awready,
    output reg [31:0] s_awaddr,

    output reg        s_wvalid,
    input             s_wready,
    output reg [31:0] s_wdata,
    output reg [3:0]  s_wstrb,

    input             s_bvalid,
    output reg        s_bready,
    input      [1:0]  s_bresp
);

    localparam NONE = 2'd0;
    localparam IFU  = 2'd1;
    localparam LSU_READ = 2'd2;
    localparam LSU_WRITE = 2'd3;

    reg [1:0] current_master, next_master;
    reg priority_flag; // 0: IFU 优先, 1: LSU 优先

    // 状态机更新
    always @(posedge clk) begin
        if(rst) begin
            current_master <= NONE;
            priority_flag <= 0;
        end
        else begin
            current_master <= next_master;
            if(((current_master == IFU) && s_rvalid && s_rready) ||
               ((current_master == LSU_READ) && s_rvalid && s_rready) ||
               ((current_master == LSU_WRITE) && s_bvalid && s_bready)) begin
                priority_flag <= ~priority_flag;
            end
        end
    end

    // 下一主设备选择逻辑
    always @(*) begin
        next_master = current_master;
        case(current_master)
            NONE: begin
                if(priority_flag == 0) begin
                    if(if_arvalid) begin
                        next_master = IFU;
                    end
                    else if(lsu_awvalid) begin
                        next_master = LSU_WRITE;
                    end
                    else if(lsu_arvalid) begin
                        next_master = LSU_READ;
                    end
                end
                else begin
                    if(lsu_awvalid) begin
                        next_master = LSU_WRITE;
                    end
                    else if(lsu_arvalid) begin
                        next_master = LSU_READ;
                    end
                    else if(if_arvalid) begin
                        next_master = IFU;
                    end
                end
            end
            IFU: begin
                if(s_rvalid && s_rready) begin
                    next_master = NONE;
                end
            end
            LSU_READ: begin
                if(s_rvalid && s_rready) begin
                    next_master = NONE;
                end
            end
            LSU_WRITE: begin
                if(s_bvalid && s_bready) begin
                    next_master = NONE;
                end
            end
        endcase
    end

    // 读地址通道
    always @(*) begin
        s_araddr = 32'h0;
        s_arvalid = 1'b0;
        ar_if_ready = 1'b0;
        ar_lsu_ready = 1'b0;
        case(current_master)
            IFU: begin
                s_araddr = if_araddr;
                s_arvalid = if_arvalid;
                ar_if_ready = s_arready;
            end
            LSU_READ: begin
                s_araddr = lsu_araddr;
                s_arvalid = lsu_arvalid;
                ar_lsu_ready = s_arready;
            end
            default: begin

            end
        endcase
    end

    // 写地址通道
    always @(*) begin
        s_awaddr = 32'h0;
        s_awvalid = 1'b0;
        aw_lsu_ready = 1'b0;
        if(current_master == LSU_WRITE) begin
            s_awaddr = lsu_awaddr;
            s_awvalid = lsu_awvalid;
            aw_lsu_ready = s_awready;
        end
    end

    // 写数据通道
    always @(*) begin
        s_wdata = 32'h0;
        s_wstrb = 4'b0;
        s_wvalid = 1'b0;
        w_lsu_ready = 1'b0;
        if(current_master == LSU_WRITE) begin
            s_wdata = lsu_wdata;
            s_wstrb = lsu_wstrb;
            s_wvalid = lsu_wvalid;
            w_lsu_ready = s_wready;
        end
    end

    // 读数据通道
    always @(*) begin
        s_rready = 1'b0;
        if_rdata = 32'h0;
        if_rvalid = 1'b0;
        if_rresp = 2'b0;
        lsu_rdata = 32'h0;
        lsu_rvalid = 1'b0;
        lsu_rresp = 2'b0;
        case(current_master)
            IFU: begin
                if_rdata = s_rdata;
                if_rvalid = s_rvalid;
                if_rresp = s_rresp;
                s_rready = r_if_ready;
            end
            LSU_READ: begin
                lsu_rdata = s_rdata;
                lsu_rvalid = s_rvalid;
                lsu_rresp = s_rresp;
                s_rready = r_lsu_ready;
            end
            default: begin
                
            end
        endcase
    end

    // 写响应通道
    always @(*) begin
        s_bready = 1'b0;
        lsu_bresp = 2'b00;
        lsu_bvalid = 1'b0;
        if(current_master == LSU_WRITE) begin
            lsu_bresp = s_bresp;
            lsu_bvalid = s_bvalid;
            s_bready = b_lsu_ready;
        end
    end

endmodule