`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 内存模块
module MEM (
    input         clk,
    input         reset,
    input         ex_valid,//上游ex输出是否有效
    output reg     mem_ready,//mem就绪状态
    input         wb_ready,//下游wb写回是否就绪
    output reg    mem_valid,//mem模块输出是否有效
    input         MemRead,
    input         MemWrite,
    input  [31:0] addr,
    input  [31:0] data_in,
    input  [1:0]  MemLen,
    output reg [31:0] data_out
);
    
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    
    typedef enum {IDLE,BUSY} state_t;
    state_t state,next_state;
    reg [31:0] read_data;

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            state = IDLE;
            mem_ready = 1'b1;
            mem_valid = 1'b0;
            data_out = 32'h0;
        end
        else begin
            state = next_state;
            if(ex_valid && wb_ready) begin//握手成功
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
                    mem_valid = 1'b1;
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
            end
            if(state == BUSY && wb_ready) begin
                mem_valid = 1'b0;
            end
        end
    end

    //状态机逻辑控制
    always @(*) begin
        case(state)
            IDLE: begin
                mem_ready = 1'b1;
                mem_valid = 1'b0;
                next_state = ex_valid ? BUSY : IDLE;
            end
            BUSY: begin
                mem_ready = 1'b0;
                mem_valid = 1'b1;
                next_state = wb_ready ? IDLE : BUSY;
            end
            default: begin
                mem_ready = 1'b0;
                mem_valid = 1'b0;
                next_state = IDLE;
            end
        endcase
    end

endmodule