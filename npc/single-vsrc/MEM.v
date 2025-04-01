`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 内存模块
module MEM (
    input         clk,
    input         reset,
    input         ex_valid,//上游ex输出是否有效
    output reg    mem_ready,//mem就绪状态
    input         wb_ready,//下游wb写回是否就绪
    output reg    mem_valid,//mem模块输出是否有效
    input         MemRead,
    input         MemWrite,
    input  [4:0]  ex_rd,//EX阶段传入的rd
    input         ex_RegWrite,//EX阶段传入的RegWrite
    input  [31:0] addr,
    input  [31:0] data_in,
    input  [1:0]  MemLen,
    output reg [31:0] data_out,
    output reg [4:0] rd_mem,//MEM阶段传入的rd
    output reg       RegWrite_mem//MEM阶段传入的RegWrite
);
    
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    
    typedef enum {IDLE,BUSY,STALL} state_t;
    state_t state,next_state;
    reg [31:0] read_data;
    reg [1:0] delay;
    parameter DELAY_CYCLES = 1;//处理周期
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            state = IDLE;
            delay = DELAY_CYCLES;
            mem_ready = 1'b1;
            mem_valid = 1'b0;
            data_out = 32'h0;
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
                            case(MemLen)
                                // `Mem_Bit:   data_out = {24'b0,pmem_read(addr,1)[7:0]};//lbu
                                `Mem_Bit: begin
                                    read_data = pmem_read(addr,1);
                                    data_out  = {24'b0,read_data[7:0]};//无符号扩展
                                end
                                `Mem_Half: begin
                                    read_data = pmem_read(addr,2);
                                    data_out  = {{16{read_data[15]}},read_data[15:0]};//符号扩展，支持lh
                                end
                                `Mem_UHalf: begin
                                    read_data = pmem_read(addr,2);
                                    data_out  = {16'b0,read_data[15:0]};//无符号扩展，支持lhu
                                end
                                `Mem_Word:  data_out = pmem_read(addr,4);//lw
                                default: data_out = 32'b0;
                            endcase
                        end
                        else if(MemWrite) begin
                            case(MemLen)
                                `Mem_Bit:  pmem_write(addr,data_in,1);//sb
                                `Mem_Half: pmem_write(addr,data_in,2);//sh
                                `Mem_Word: pmem_write(addr,data_in,4);//sw
                                default: pmem_write(addr,data_in,4);
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