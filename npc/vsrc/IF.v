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
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    
    typedef enum {IDLE, BUSY, STALL} state_t;
    state_t state, next_state;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc = 32'h8000_0000;
            if_valid = 1'b0;
            if_ready = 1'b1;
            instr = 32'b0;
            state = IDLE;
        end 
        else begin
            state = next_state;
            if(state == IDLE &&  id_ready) begin
                if_ready = 1'b1;
                instr = pmem_read(pc, 4);
                if_valid = 1'b1;//准备向下游id模块发送数据
            end
            if(state == BUSY && if_ready && wb_valid) begin//握手成功,更新pc
                pc = pc_src ? branch_target : pc + 4; 
                if_valid = 1'b0; // 等待 ID 模块的 ready 信号
            end
        end
    end


    //状态机逻辑控制
    always @(*) begin
        case(state)
            IDLE: begin
                if_ready = 1'b1;
                if_valid = 1'b0;
                next_state = wb_valid ? BUSY : IDLE;
            end
            BUSY: begin
                if_ready = 1'b0;
                if_valid = 1'b1;
                next_state = id_ready ? STALL : BUSY;
            end
            STALL: begin
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
        //调试信息输出
        $display("IF: PC=0x%08x | instr=0x%08x | if_valid=%b | id_ready=%b | pc_src=%b | branch_target=0x%08x", 
                 pc, instr, if_valid, id_ready, pc_src, branch_target);
    end
endmodule