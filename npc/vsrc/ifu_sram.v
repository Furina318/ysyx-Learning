// ====== IFU专用SRAM模块 ======
module ifu_sram #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input         clk,
    // 读接口
    input  wire                  ren,      // 读使能
    input  wire [ADDR_WIDTH-1:0] raddr,    // 读地址
    output reg  [DATA_WIDTH-1:0] rdata   // 读数据（延迟1周期）
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    
    reg                   read_pending;
    reg [ADDR_WIDTH-1:0]  raddr_reg;
    
    // 读处理（延迟1周期）
    always @(posedge clk) begin
        read_pending <= ren;
        raddr_reg <= raddr;
    end

    // 组合逻辑输出读数据
    assign rdata = read_pending ? pmem_read(raddr_reg, 4) : 32'h0;

endmodule