`timescale 1ns/1ns
module AXI_ARB (
    input clk, rst,

    // IFU Read
    input         if_arvalid,
    output        ar_if_ready,
    input  [31:0] if_araddr,
    output        if_rvalid,
    input         r_if_ready,
    output [31:0] if_rdata,
    output [1:0]  if_rresp,

    // LSU Read
    input         lsu_arvalid,
    output        ar_lsu_ready,
    input  [31:0] lsu_araddr,
    output        lsu_rvalid,
    input         r_lsu_ready,
    output [31:0] lsu_rdata,
    output [1:0]  lsu_rresp,

    // LSU Write
    input         lsu_awvalid,
    output        aw_lsu_ready,
    input  [31:0] lsu_awaddr,

    input         lsu_wvalid,
    output        w_lsu_ready,
    input  [31:0] lsu_wdata,
    input  [3:0]  lsu_wstrb,

    output        lsu_bvalid,
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

    // 全局控制
    reg [1:0] master;      // 0: NONE, 1: IFU, 2: LSU
    reg last_read_winner;  // 0: IFU 上次获胜, 1: LSU 上次获胜
    localparam NONE = 2'd0;
    localparam IFU  = 2'd1;
    localparam LSU  = 2'd2;

    // 轮询逻辑
    wire ifu_req = if_arvalid;
    wire lsu_req = lsu_arvalid;

    assign ar_if_ready  = (master == NONE && (ifu_req && (!lsu_req || last_read_winner)));
    assign ar_lsu_ready = (master == NONE && (lsu_req && (!ifu_req || !last_read_winner)));

    assign if_rvalid    = (master == IFU) && s_rvalid;
    assign if_rdata     = s_rdata;
    assign if_rresp     = s_rresp;

    assign lsu_rvalid   = (master == LSU) && s_rvalid;
    assign lsu_rdata    = s_rdata;
    assign lsu_rresp    = s_rresp;

    // 写仲裁 (LSU专用)
    reg [1:0] write_state;
    localparam WRITE_IDLE = 2'd0, WRITE_ADDR = 2'd1, WRITE_DATA = 2'd2, WRITE_RESP = 2'd3;

    // 写通道使能条件：master != IFU 且读通道未活跃
    wire write_enable = (master != IFU) && (s_arvalid == 0 && s_rready == 0);

    assign aw_lsu_ready = write_enable && (write_state == WRITE_IDLE) && lsu_awvalid;
    assign w_lsu_ready  = write_enable && (write_state == WRITE_ADDR) && lsu_wvalid;
    assign lsu_bvalid   = write_enable && (write_state == WRITE_RESP) && s_bvalid;
    assign lsu_bresp    = write_enable ? s_bresp : 2'b00;

    // 状态更新
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // 读通道
            s_arvalid  <= 0;
            s_araddr   <= 0;
            s_rready   <= 0;
            master     <= NONE;
            last_read_winner <= 0; // 默认优先 IFU

            // 写通道
            s_awvalid   <= 0;
            s_awaddr    <= 0;
            s_wvalid    <= 0;
            s_wdata     <= 0;
            s_wstrb     <= 0;
            s_bready    <= 0;
            write_state <= WRITE_IDLE;
        end else begin
            // 默认重置写通道信号
            s_awvalid <= 0;
            s_awaddr  <= 0;
            s_wvalid  <= 0;
            s_wdata   <= 0;
            s_wstrb   <= 0;
            s_bready  <= 0;

            // 读通道逻辑
            if (master == NONE) begin
                if (ifu_req && (!lsu_req || last_read_winner)) begin
                    s_arvalid <= 1;
                    s_araddr  <= if_araddr;
                    master    <= IFU;
                end else if (lsu_req) begin
                    s_arvalid <= 1;
                    s_araddr  <= lsu_araddr;
                    master    <= LSU;
                end
            end

            if (s_arvalid && s_arready) begin
                s_arvalid <= 0;
                s_rready  <= 1;
            end

            if (s_rvalid && s_rready && ((master == IFU && r_if_ready) || (master == LSU && r_lsu_ready))) begin
                s_rready         <= 0;
                last_read_winner <= (master == IFU);
                master           <= NONE;
            end

            // 写通道逻辑（仅当 write_enable 为真时执行）
            if (write_enable) begin
                case (write_state)
                    WRITE_IDLE: begin
                        if (lsu_awvalid) begin
                            s_awvalid   <= 1;
                            s_awaddr    <= lsu_awaddr;
                            write_state <= WRITE_ADDR;
                        end
                    end
                    WRITE_ADDR: begin
                        if (s_awvalid && s_awready) begin
                            s_awvalid <= 0;
                            if (lsu_wvalid) begin
                                s_wvalid    <= 1;
                                s_wdata     <= lsu_wdata;
                                s_wstrb     <= lsu_wstrb;
                                write_state <= WRITE_DATA;
                            end 
                            // else begin
                            //     write_state <= WRITE_DATA; // 等待数据有效
                            // end
                        end
                    end
                    WRITE_DATA: begin
                        if (s_wvalid && s_wready) begin
                            s_wvalid    <= 0;
                            if(b_lsu_ready) begin
                                s_bready    <= 1;
                                write_state <= WRITE_RESP;
                            end
                        end
                    end
                    WRITE_RESP: begin
                        if (s_bvalid && s_bready) begin
                            s_bready    <= 0;
                            write_state <= WRITE_IDLE;
                        end
                    end
                endcase
            end
        end
    end
endmodule