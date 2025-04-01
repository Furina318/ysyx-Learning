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
    
    // import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    // import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    
    typedef enum {IDLE,BUSY,STALL} state_t;
    state_t state,next_state;
    reg [31:0] read_data;
    reg [1:0] delay;
    parameter DELAY_CYCLES = 1;//处理周期
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)

    //====SRAM读写接口====//
    reg [31:0] sram_raddr;
    reg [31:0] sram_rdata;
    reg        sram_ren;

    reg        sram_wen;
    reg [31:0] sram_waddr;
    reg [31:0] sram_wdata;
    reg [3:0]  sram_wmask;
    //===================//

    mem_sram mem_sram_inst(
        .clk(clk),
        .ren(sram_ren),
        .raddr(sram_raddr),
        .rdata(sram_rdata),
        .wen(sram_wen),
        .waddr(sram_waddr),
        .wdata(sram_wdata),
        .wmask(sram_wmask)
    );
    always @(posedge clk or posedge reset) begin
        if(reset) begin
            state = IDLE;
            delay = DELAY_CYCLES;
            mem_ready = 1'b1;
            mem_valid = 1'b0;
            data_out = 32'h0;


            sram_ren = 1'b0;
            sram_wen = 1'b0;
            sram_raddr = 32'h0;
            sram_waddr = 32'h0;
            sram_wdata = 32'h0;
            sram_wmask = 4'h0;
        end
        else begin
            state = next_state;
            case(state)
                IDLE: begin
                    mem_ready = 1'b1;
                    mem_valid = 1'b0;
                    delay = DELAY_CYCLES;
                    next_state = ex_valid ? BUSY : IDLE;
                end
                BUSY: begin
                    mem_ready = 1'b0;
                    mem_valid = 1'b0;
                    if(delay > 0) begin//握手成功
                        if(MemRead) begin
                            sram_ren = 1'b1;
                            sram_raddr = addr;
                            case(MemLen)
                                `Mem_Bit: begin
                                    case(sram_raddr[1:0])
                                        2'b00: data_out = {24'b0, sram_rdata[7:0]};
                                        2'b01: data_out = {24'b0, sram_rdata[15:8]};
                                        2'b10: data_out = {24'b0, sram_rdata[23:16]};
                                        2'b11: data_out = {24'b0, sram_rdata[31:24]};
                                        default: data_out = 32'b0;
                                    endcase
                                end
                                `Mem_UHalf: begin
                                    data_out = sram_raddr[1] ?
                                        {16'b0, sram_rdata[31:16]} : {16'b0, sram_rdata[15:0]};
                                end
                                `Mem_Half: begin
                                    data_out = sram_raddr[1] ?
                                        {16{sram_rdata[31]}, sram_rdata[31:16]} : //高半字
                                        {16{sram_rdata[15]}, sram_rdata[15:0]};//低半字
                                end
                                `Mem_Word: begin
                                    data_out = sram_rdata;
                                end
                                default: data_out = 32'b0;
                            endcase
                        end
                        else if(MemWrite) begin
                            sram_wen = 1'b1;
                            sram_waddr = addr;
                            sram_wdata = data_in;
                            case(MemLen)
                                `Mem_Bit: sram_wmask = 4'b0001 << (addr[1:0]);//sb
                                `Mem_Half: sram_wmask = addr[1] ? 4'b1100 : 4'b0011;//sh
                                `Mem_Word: sram_wmask = 4'b1111;//sw
                                default: sram_wmask = 4'b0000;
                            endcase
                        end 
                        else data_out=32'b0;

                        rd_mem = ex_rd;//传递变量rd
                        RegWrite_mem = ex_RegWrite;//传递变量RegWrite

                        $display("\033[31mMEM: re=%b we=%b\033[0m",MemRead,MemWrite);
                        delay = delay - 1;
                    end
                    next_state = (delay == 0) ? STALL : BUSY;
                end
                STALL: begin
                    mem_ready = 1'b0;
                    mem_valid = 1'b1;
                    next_state = wb_ready ? IDLE : STALL;
                end
                default: begin
                    mem_ready = 1'b0;
                    mem_valid = 1'b0;
                    next_state = IDLE;
                end
            endcase
        end
    end
    always @(*) begin
        $display(" ");
        $display("MEM: state = %d | mem_ready=%b | mem_valid=%b", state, mem_ready, mem_valid);
        $display(" ");
    end

endmodule