// ====== IFU专用SRAM模块 ======
module ifu_sram #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input         clk,
    input         reset,
    // // 读接口
    // input  wire                  ren,      // 读使能
    // input  wire [ADDR_WIDTH-1:0] raddr,    // 读地址
    // output reg  [1:0]            rresp,    // 读响应
    // output reg  [DATA_WIDTH-1:0] rdata   // 读数据（延迟1周期）

    //AR channel
    input wire [ADDR_WIDTH-1:0]  araddr,
    input wire                   arvalid,
    output reg                   arready,
    //R channel
    output reg [DATA_WIDTH-1:0]  rdata,
    output reg                   rvalid,
    input  wire                  rready,
    output reg [1:0]             rresp, // 读响应信号
    //AW and W channel(not used)仅声明
    input wire [ADDR_WIDTH-1:0]  awaddr,
    input wire                   awvalid,
    output reg                   awready,
    input wire [DATA_WIDTH-1:0]  wdata,
    input wire [3:0]             wstrb,
    input wire                   wvalid,
    output reg                   wready,
    output reg [1:0]             bresp, // 写响应信号
    output reg                   bvalid,
    input wire                   bready
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    
    //确保写通道恒为0
    assign awready = 1'b0;
    assign wready = 1'b0;
    assign bvalid = 1'b0;
    assign bresp = `OKAY;
    //写通道检查
    always @(*) begin
        assert(awvalid == 1'b0) else $error("Write channel should not be used in IFU SRAM");
        assert(wvalid  == 1'b0) else $error("Write channel should not be used in IFU SRAM");
        // assert(bvalid  == 1'b0) else $error("Write channel should not be used in IFU SRAM");
        assert(bresp   == 2'b0) else $error("Write channel should not be used in IFU SRAM");
    end

    typedef enum {IDLE,READ_ADDR,READ_DATA} state_t;
    state_t sram_state, next_sram_state;

    reg [ADDR_WIDTH-1:0]  araddr_reg;
    reg [DATA_WIDTH-1:0]  rdata_reg;
    reg                   addr_valid;
    reg [1:0]             delay_counter;
    
    always @(*) begin
        addr_valid = (araddr >= 32'h8000_0000 && araddr <= 32'h8fff_ffff) ? 1'b1 : 1'b0;
    end
    // // 读处理（延迟1周期）
    // always @(posedge clk) begin
    //     read_pending <= ren;
    //     raddr_reg <= raddr;
    //     if(read_pending) begin
    //         if(addr_valid) begin
    //             rdata <= pmem_read(raddr_reg, 4);
    //             rresp <= 2'b00; //OKAY
    //         end
    //         else begin
    //             rdata <= 32'h0;
    //             rresp <= 2'b10; //SLVERR
    //         end
    //     end
    //     else begin
    //         rdata <= 32'h0;
    //         rresp <= 2'b00; //没有响应
    //     end
    // end
    always @(posedge clk or posedge reset) begin
        if(reset) begin
            sram_state = IDLE;
            arready <= 1'b1;
            rvalid <= 1'b0;
            rdata <= 32'h0;
            delay_counter <= 2'b00;
            araddr_reg <= 32'h0;
            rdata_reg <= 32'h0;
            rresp <= `OKAY;
        end
        else begin
            sram_state = next_sram_state;
            case(sram_state)
                IDLE:begin
                    arready <= 1'b1;//初始化时准备好接受读地址
                    rvalid  <= 1'b0;
                    delay_counter <= 2'b10;
                    if(arvalid && arready) begin//读握手
                        // rvalid <= 1'b0;
                        araddr_reg <= araddr;
                        // arready <= 1'b0;//接收地址后不再准备
                        next_sram_state = READ_ADDR;
                    end
                    else begin
                        next_sram_state = IDLE;
                    end
                end
                READ_ADDR:begin
                    if(delay_counter > 0) begin
                        delay_counter <= delay_counter - 1;
                        next_sram_state = READ_ADDR;
                    end
                    else begin
                        if(addr_valid) begin
                            arready <= 1'b0;
                            rdata_reg <= pmem_read(araddr_reg, 4);
                            rresp <= `OKAY;
                        end
                        else begin
                            rdata_reg <= 32'h0;
                            rresp <= `SLVERR;
                        end
                        next_sram_state = READ_DATA;
                    end
                end
                READ_DATA:begin
                    rvalid <= 1'b1;
                    arready <= 1'b0;
                    rdata <= rdata_reg;
                    if(rready && rvalid) begin
                        // rdata <= rdata_reg;
                        rresp <= `OKAY; //OKAY
                        next_sram_state = IDLE;
                    end
                    else begin
                        next_sram_state = READ_DATA;
                    end
                end
                default: begin
                    arready <= 1'b1;
                    // rvalid <= 1'b0;
                    araddr_reg <= 32'h0;
                    rdata_reg <= 32'h0;
                    next_sram_state = IDLE;
                end
            endcase
        end
    end
    

    // // 调试日志
    // always @(posedge clk) begin
    //     $display("[ifu_sram] state=%d, arvalid=%b, arready=%b, rvalid=%b, rready=%b, araddr=0x%h, rdata=0x%h, rresp=0x%b",
    //              sram_state, arvalid, arready, rvalid, rready, araddr_reg, rdata, rresp);
    //     $display("[ifu_sram] rdata_reg=0x%h, rdata=0x%h",rdata_reg,rdata);
    // end

    // 协议断言
    always @(posedge clk) begin
        assert(!(arvalid && arready && sram_state != IDLE)) else $error("[ifu_sram] AR channel handshake in wrong state");
        assert(!(rvalid && rready && sram_state != READ_DATA)) else $error("[ifu_sram] R channel handshake in wrong state");
    end
endmodule