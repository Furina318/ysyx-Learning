`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 内存模块
module MEM (
    input             clk,
    input             reset,
    input             ex_valid,//上游ex输出是否有效
    output reg        mem_ready,//mem就绪状态
    input             wb_ready,//下游wb写回是否就绪
    output reg        mem_valid,//mem模块输出是否有效
    input             MemRead,
    input             MemWrite,
    input      [31:0] addr,
    input      [31:0] data_in,
    input      [1:0]  MemLen,
    output reg [31:0] data_out,
    //====数据传递到下游====//
    input      [4:0]  ex_rd,//EX阶段传入的rd
    input             ex_RegWrite,//EX阶段传入的RegWrite
    output reg [4:0]  rd_mem,//MEM阶段传入的rd
    output reg        RegWrite_mem//MEM阶段传入的RegWrite
);
    //====状态机定义====//  
    typedef enum {IDLE,READ_ADDR,READ_DATA,WRITE,STALL} state_t;//将之前的BUSY状态分为READ_ADDR、READ_DATA、WRITE
    state_t state,next_state;
    
    reg [1:0] delay;
    parameter DELAY_CYCLES = 3;//处理周期
    
    //====SRAM读写接口====//
    reg [31:0]  sram_araddr;//读地址
    reg         sram_arvalid;//读地址有效
    wire        sram_arready;//sram读地址准备好
    wire [31:0] sram_rdata;//读数据
    wire        sram_rvalid;//读数据有效
    reg         sram_rready;//CPU读数据准备好
    reg [31:0]  sram_waddr;//写地址
    reg [31:0]  sram_wdata;//写数据
    reg [3:0]   sram_wmask;//写掩码
    reg         sram_wvalid;//写请求有效
    wire        sram_wready;//sram写请求准备好
    //===================//

    mem_sram mem_sram_inst(
        .clk(clk),
        .reset(reset),
        .araddr(sram_araddr),
        .arvalid(sram_arvalid),
        .arready(sram_arready),
        .rdata(sram_rdata),
        .rvalid(sram_rvalid),
        .rready(sram_rready),
        .waddr(sram_waddr),
        .wdata(sram_wdata),
        .wmask(sram_wmask),
        .wvalid(sram_wvalid),
        .wready(sram_wready)
    );

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            state = IDLE;
            delay <= DELAY_CYCLES;
            mem_ready <= 1'b1;
            mem_valid <= 1'b0;
            data_out <= 32'h0;
            next_state = IDLE;

            sram_arvalid <= 1'b0;
            sram_rready <= 1'b0;
            sram_wvalid <= 1'b0;
            sram_araddr <= 32'h0;
            sram_waddr <= 32'h0;
            sram_wdata <= 32'h0;
            sram_wmask <= 4'b1111;
        end
        else begin
            state = next_state;
            case(state)
                IDLE: begin
                    mem_ready <= 1'b1;
                    mem_valid <= 1'b0;
                    sram_arvalid <= 1'b0;
                    sram_rready <= 1'b0;
                    sram_wvalid <= 1'b0;
                    if(ex_valid && mem_ready) begin//mem和上游ex握手
                        if(MemRead) begin
                            sram_araddr <= addr;
                            sram_arvalid <= 1'b1;//发送sram读请求
                        end
                        else if(MemWrite) begin
                            sram_waddr <= addr;
                            sram_wdata <= data_in;
                            case(MemLen)
                                `Mem_Bit:  sram_wmask <= 4'b0001;//sb
                                `Mem_Half: sram_wmask <= 4'b0011;//sh
                                `Mem_Word: sram_wmask <= 4'b1111;//sw
                                default:   sram_wmask <= 4'b1111;
                            endcase
                            sram_wvalid <= 1'b1;//发送写请求
                        end
                        else begin
                            rd_mem <= ex_rd;
                            RegWrite_mem <= ex_RegWrite;
                        end
                    end
                end

                READ_ADDR: begin
                    mem_ready <= 1'b0;
                    mem_valid <= 1'b0;
                    if(sram_arready && sram_arvalid) begin//读地址有效且sram准备好读取数据
                        // sram_arvalid <= 1'b0;//地址被接受，撤销读地址请求
                         $display("\033[31m[MEM]: READ_ADDR状态握手成功\033[0m");
                        sram_rready  <= 1'b1;//准备接受数据
                    end
                end

                READ_DATA: begin
                    mem_ready <= 1'b0;
                    mem_valid <= 1'b0;
                    if(sram_rvalid && sram_rready) begin//当读数据有效且cpu准备接受读数据
                        // sram_rready <= 1'b0;//数据被接受，撤销rready接受读数据信号
                        $display("\033[31m[MEM]: READ_DATA状态握手成功\033[0m");
                        case(MemLen)
                            `Mem_Bit:   data_out <= {24'b0,sram_rdata[7:0]};
                            `Mem_UHalf: data_out <= {16'b0,sram_rdata[15:0]};
                            `Mem_Half:  data_out <= {{16{sram_rdata[15]}},sram_rdata[15:0]};
                            `Mem_Word:  data_out <= sram_rdata;
                            default:    data_out <= 32'h0;
                        endcase
                        rd_mem <= ex_rd;
                        RegWrite_mem <= ex_RegWrite;
                    end
                end

                WRITE: begin
                    mem_ready <= 1'b0;
                    mem_valid <= 1'b0;
                    if(sram_wready && sram_wvalid) begin
                        // sram_wvalid <= 1'b0;//写请求被接受，撤销wvalid信号
                        rd_mem <= ex_rd;
                        RegWrite_mem <= ex_RegWrite;
                        // mem_valid <= 1'b1;
                        $display("\033[31m[MEM]: WRITE状态握手成功\033[0m");
                    end
                end

                STALL: begin
                    mem_ready <= 1'b0;
                    mem_valid <= 1'b1;
                    sram_wvalid <= 1'b0;
                    // sram_rready <= 1'b0;
                    sram_arvalid <= 1'b0;
                    // rd_mem <= ex_rd;
                    // RegWrite_mem <= ex_RegWrite;
                    // next_state <= wb_ready ? IDLE : STALL;
                end

                default: begin
                    mem_ready <= 1'b0;
                    mem_valid <= 1'b0;
                    // next_state <= IDLE;
                end
            endcase
        end
    end

    //====状态机转移====//
    always @(*) begin
        case(state)
            IDLE: begin
                if(ex_valid && mem_ready) begin
                    if(MemRead) begin
                        next_state = READ_ADDR;
                    end
                    else if(MemWrite) begin
                        next_state = WRITE;
                    end
                    else begin
                        next_state = STALL;
                    end
                end
                else begin
                    next_state = IDLE;
                end
            end
            READ_ADDR: begin
                if(sram_arready && sram_arvalid) begin
                    next_state = READ_DATA;
                end
                else begin
                    next_state = READ_ADDR;
                end
            end
            READ_DATA: begin
                if(sram_rvalid && sram_rready) begin
                    next_state = STALL;
                end
                else begin
                    next_state = READ_DATA;
                end
            end
            WRITE: begin
                if(sram_wready && sram_wvalid) begin
                    next_state = STALL;
                end
                else begin
                    next_state = WRITE;
                end
            end
            STALL: begin
                if(wb_ready) begin
                    next_state = IDLE;
                end
                else begin
                    next_state = STALL;
                end
            end
            default: begin
                next_state = IDLE;
            end
        endcase
    end
    always @(*) begin
        $display("\033[36m[MEM]:state = %d | mem_ready=%b| mem_valid=%b\033[0m", state, mem_ready, mem_valid);
        $display(" ");
    end
endmodule