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

    // 内部寄存器声明
    reg [1:0] master;      // 0: NONE, 1: IFU, 2: MEM
    reg last_read_winner;  // 0: IFU 上次获胜, 1: MEM 上次获胜
    reg [1:0] write_state; // 写通道状态机
    reg [31:0] sram_araddr_reg;
    reg        sram_arvalid_reg;
    reg        sram_rready_reg;
    reg [31:0] sram_awaddr_reg;
    reg        sram_awvalid_reg;
    reg [31:0] sram_wdata_reg;
    reg [3:0]  sram_wstrb_reg;
    reg        sram_wvalid_reg;
    reg        sram_bready_reg;

    // 本地参数
    localparam NONE = 2'd0;
    localparam IFU  = 2'd1;
    localparam MEM  = 2'd2;
    localparam WRITE_IDLE = 2'd0, WRITE_ADDR = 2'd1, WRITE_DATA = 2'd2, WRITE_RESP = 2'd3;

    // 读通道分配
    assign ifu_arready = (master == NONE && (ifu_arvalid && (!mem_arvalid || last_read_winner)));
    assign mem_arready = (master == NONE && (mem_arvalid && (!ifu_arvalid || !last_read_winner)));

    assign ifu_rvalid  = (master == IFU) && sram_rvalid;
    assign ifu_rdata   = sram_rdata;
    assign ifu_rresp   = sram_rresp;

    assign mem_rvalid  = (master == MEM) && sram_rvalid;
    assign mem_rdata   = sram_rdata;
    assign mem_rresp   = sram_rresp;

    // 写通道分配
    wire write_enable = (master != IFU) && (sram_arvalid_reg == 0 && sram_rready_reg == 0);

    assign mem_awready = write_enable && (write_state == WRITE_IDLE) && mem_awvalid;
    assign mem_wready  = write_enable && (write_state == WRITE_ADDR) && mem_wvalid;
    assign mem_bvalid  = write_enable && (write_state == WRITE_RESP) && sram_bvalid;
    assign mem_bresp   = write_enable ? sram_bresp : 2'b00;

    // SRAM 输出信号
    assign sram_araddr  = sram_araddr_reg;
    assign sram_arvalid = sram_arvalid_reg;
    assign sram_rready  = sram_rready_reg;
    assign sram_awaddr  = sram_awaddr_reg;
    assign sram_awvalid = sram_awvalid_reg;
    assign sram_wdata   = sram_wdata_reg;
    assign sram_wstrb   = sram_wstrb_reg;
    assign sram_wvalid  = sram_wvalid_reg;
    assign sram_bready  = sram_bready_reg;

    // 状态更新
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // 读通道
            sram_arvalid_reg  <= 0;
            sram_araddr_reg   <= 0;
            sram_rready_reg   <= 0;
            master            <= NONE;
            last_read_winner  <= 0; // 默认优先 IFU

            // 写通道
            sram_awvalid_reg  <= 0;
            sram_awaddr_reg   <= 0;
            sram_wvalid_reg   <= 0;
            sram_wdata_reg    <= 0;
            sram_wstrb_reg    <= 0;
            sram_bready_reg   <= 0;
            write_state       <= WRITE_IDLE;
        end else begin
            // 默认重置写通道信号
            sram_awvalid_reg <= 0;
            sram_awaddr_reg  <= 0;
            sram_wvalid_reg  <= 0;
            sram_wdata_reg   <= 0;
            sram_wstrb_reg   <= 0;
            sram_bready_reg  <= 0;

            // 读通道逻辑
            if (master == NONE) begin
                if (ifu_arvalid && (!mem_arvalid || last_read_winner)) begin
                    sram_arvalid_reg <= 1;
                    sram_araddr_reg  <= ifu_araddr;
                    master           <= IFU;
                end else if (mem_arvalid) begin
                    sram_arvalid_reg <= 1;
                    sram_araddr_reg  <= mem_araddr;
                    master           <= MEM;
                end
            end

            if (sram_arvalid_reg && sram_arready) begin
                sram_arvalid_reg <= 0;
                sram_rready_reg  <= 1;
            end

            if (sram_rvalid && sram_rready_reg && ((master == IFU && ifu_rready) || (master == MEM && mem_rready))) begin
                sram_rready_reg  <= 0;
                last_read_winner <= (master == IFU);
                master           <= NONE;
            end

            // 写通道逻辑（仅当 write_enable 为真时执行）
            if (write_enable) begin
                case (write_state)
                    WRITE_IDLE: begin
                        if (mem_awvalid) begin
                            sram_awvalid_reg <= 1;
                            sram_awaddr_reg  <= mem_awaddr;
                            write_state      <= WRITE_ADDR;
                        end
                    end
                    WRITE_ADDR: begin
                        if (sram_awvalid_reg && sram_awready) begin
                            sram_awvalid_reg <= 0;
                            if (mem_wvalid) begin
                                sram_wvalid_reg <= 1;
                                sram_wdata_reg  <= mem_wdata;
                                sram_wstrb_reg  <= mem_wstrb;
                                write_state     <= WRITE_DATA;
                            end else begin
                                write_state <= WRITE_DATA; // 等待数据有效
                            end
                        end
                    end
                    WRITE_DATA: begin
                        if (mem_wvalid && !sram_wvalid_reg) begin
                            sram_wvalid_reg <= 1;
                            sram_wdata_reg  <= mem_wdata;
                            sram_wstrb_reg  <= mem_wstrb;
                        end
                        if (sram_wvalid_reg && sram_wready) begin
                            sram_wvalid_reg <= 0;
                            sram_bready_reg <= 1;
                            write_state     <= WRITE_RESP;
                        end
                    end
                    WRITE_RESP: begin
                        if (sram_bvalid && sram_bready_reg) begin
                            sram_bready_reg <= 0;
                            write_state     <= WRITE_IDLE;
                        end
                    end
                endcase
            end
        end
    end
endmodule