// ====== SRAM接口定义 ======
module mem_sram #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input  wire                  clk,
    input  wire                  ren,
    input  wire [ADDR_WIDTH-1:0] raddr,
    output reg  [DATA_WIDTH-1:0] rdata,
    
    input  wire                  wen,
    input  wire [ADDR_WIDTH-1:0] waddr,
    input  wire [DATA_WIDTH-1:0] wdata,
    input  wire [3:0]            wmask
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);

    // 读请求寄存器
    reg read_pending;
    reg [ADDR_WIDTH-1:0] raddr_reg;
    
    // 写处理
    always @(posedge clk) begin
        if (wen) begin
            // 根据掩码处理字节写入
            if (wmask[0]) pmem_write(waddr + 0, wdata[7:0],   1);
            if (wmask[1]) pmem_write(waddr + 1, wdata[15:8],  1);
            if (wmask[2]) pmem_write(waddr + 2, wdata[23:16], 1);
            if (wmask[3]) pmem_write(waddr + 3, wdata[31:24], 1);
        end
    end

    // 读处理（带1周期延迟）
    always @(posedge clk) begin
        read_pending <= ren;
        raddr_reg <= raddr;
    end

    always @(*) begin
        if (read_pending) begin
            rdata = pmem_read(raddr_reg, 4); // 总是读取完整字
        end else begin
            rdata = 32'h0;
        end
    end
endmodule