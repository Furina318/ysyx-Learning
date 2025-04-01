module IF (
    input         clk,
    input         reset,
    input  [31:0] branch_target,
    input         pc_src,
    input         id_ready,  // 来自 ID 的 ready
    input         wb_valid,//wb写回信号有效
    output reg    if_ready,//if就绪
    output reg    if_valid,  // 指令是否有效
    output reg [31:0] pc,
    output reg [31:0] instr
);
    // import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)
    typedef enum {IDLE, BUSY, STALL} state_t;
    state_t state, next_state;
    parameter DELAY_CYCLES = 1;//处理周期
    reg [1:0] delay;
    reg       ren;
    reg [31:0] get_instr;

    ifu_sram ifu_sram_inst(
                .clk(clk),
                .ren(ren),
                .raddr(pc),
                .rdata(get_instr)
            );

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc = 32'h8000_0000;
            if_valid = 1'b0;
            if_ready = 1'b1;
            state = BUSY;
            next_state = BUSY;
            delay = DELAY_CYCLES;
            ren = 1'b0;//ifu_sram读使能
        end 
        else begin
            state = next_state;
            case(state)
            IDLE: begin
                if_ready = 1'b1;
                if_valid = 1'b0;
                delay = DELAY_CYCLES;
                if(wb_valid) pc = pc_src ? branch_target : pc + 4; //更新pc
                next_state = wb_valid ? BUSY : IDLE;
            end
            BUSY: begin
                if_ready = 1'b0;
                if_valid = 1'b0;
                ren = 1'b1;//ifu_sram读使能
                // instr = pmem_read(pc, 4); //读取指令
                instr = get_instr;
                if(delay > 0) delay = delay - 1;
                else if(instr != 32'h0)next_state = STALL;
            end
            STALL: begin
                // if(id_ready) instr = pmem_read(pc, 4); //读取指令
                if_ready = 1'b0;
                if_valid = 1'b1;
                next_state = id_ready ? IDLE : STALL;
            end
            default: begin
                if_ready = 1'b0;
                if_valid = 1'b0;
                next_state = IDLE;
            end
        endcase
            // if(state == STALL &&  id_ready) begin
            //     instr = pmem_read(pc, 4);
            //     if_valid = 1'b1;//准备向下游id模块发送数据
            // end
            // if(state == IDLE && if_ready && wb_valid) begin//握手成功,更新pc
            //     pc = pc_src ? branch_target : pc + 4; 
            // end
        end
    end

    always @(*) begin
        //调试信息输出
        $display(" ");
        $display("IF: state = %d | PC=0x%08x | get_instr=0x%08x | instr=0x%08x | if_ready=%b | if_valid=%b", 
                state, pc, get_instr, instr, if_ready, if_valid);
        $display(" ");
    end
endmodule