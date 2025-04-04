// ====== SRAM接口定义 ======
module mem_sram #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input  logic                  clk,
    input  logic                  reset,

    //读地址通道
    input  logic [ADDR_WIDTH-1:0] araddr,
    input  logic                  arvalid,
    output reg                    arready,
    //读数据通道
    output reg   [DATA_WIDTH-1:0] rdata,
    output reg                    rvalid,
    input  logic                  rready,
    
    //写端口
    input  logic [ADDR_WIDTH-1:0] waddr,
    input  logic [DATA_WIDTH-1:0] wdata,
    input  logic [3:0]            wmask,
    input  logic                  wvalid,
    output reg                    wready
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);

    //状态机定义
    typedef enum {IDLE, READ_ADDR, READ_DATA, WRITE} state_t;
    state_t sram_state, next_sram_state;
    reg [1:0] delay_counter;//模拟读延迟计数器
    parameter DELAY_CYCLES = 2;//处理周期

    reg [ADDR_WIDTH-1:0] araddr_reg;
    reg [DATA_WIDTH-1:0] rdata_reg;
    
    always @(posedge clk or posedge reset) begin
        if(reset) begin
            sram_state <= IDLE;
            arready <= 1'b0;
            rvalid <= 1'b0;
            wready <= 1'b0;
            rdata <= 32'h0;
            delay_counter <= 2'b0;
            araddr_reg <= 32'h0;
            rdata_reg <= 32'h0;
        end
        else begin
            sram_state <= next_sram_state;
            case(sram_state)
                IDLE:begin
                    arready <= 1'b1;//初始化时准备好接受读地址
                    wready  <= 1'b1;//初始化时准备好接受写地址
                    rvalid  <= 1'b0;
                    if(arvalid && arready) begin//读握手
                        araddr_reg <= araddr;
                        arready <= 1'b0;//接收地址后不再准备
                        delay_counter <= DELAY_CYCLES - 1;
                        next_sram_state <= READ_ADDR;
                    end
                    else if(wvalid && wready) begin//写握手
                        wready <= 1'b0;//接收地址后不再准备
                        case(wmask)
                            4'b0001: pmem_write(waddr,wdata,1);//sb
                            4'b0011: pmem_write(waddr,wdata,2);//sh
                            4'b1111: pmem_write(waddr,wdata,4);//sw
                            default: pmem_write(waddr,wdata,4);
                        endcase
                        next_sram_state <= WRITE;
                    end
                    else begin
                        next_sram_state <= IDLE;
                    end
                end
                READ_ADDR:begin
                    if(delay_counter > 0) begin
                        delay_counter <= delay_counter - 1;
                    end
                    else begin
                        rdata_reg <= pmem_read(araddr_reg,4);
                        rvalid <= 1'b1;//读取数据有效
                        next_sram_state <= READ_DATA;
                    end
                end
                READ_DATA: begin
                    if(rready && rvalid) begin
                        rdata <= rdata_reg;
                        rvalid <= 1'b0;//数据被接受后关闭rvalid
                        next_sram_state <= IDLE;
                    end
                end
                WRITE: begin
                    if(!wvalid) begin//等待master撤销wvalid信号
                        wready <= 1'b1;//写数据完成后准备好接收下一个写地址
                        next_sram_state <= IDLE;
                    end
                end
                default: begin
                    next_sram_state <= IDLE;
                end
            endcase
        end
    end

    //调试输出
    always @(*) begin
        $display("\033[1m[mem_sram]: state=%d | araddr=%h | arvalid=%b | arready=%b | rdata=%h | rvalid=%b | waddr=%h | wdata=%h | wmask=%b | wvalid=%b | wready=%b\033[0m",
            sram_state, araddr, arvalid, arready, rdata, rvalid, waddr, wdata, wmask, wvalid, wready);
    end
endmodule