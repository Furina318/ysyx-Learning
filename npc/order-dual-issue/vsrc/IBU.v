/* ******************
    * IBU指令缓冲单元（双发射适配）
    * 替代IF, ID之间的流水线寄存器
    * TODO
****************** */
module IBU (
    input             clk,       
    input             rst,              
    input             is_full,          // ID级反馈：缓冲满（背压）

    input             is_flush1,        
    input      [31:0] pc_in1,           
    input      [31:0] inst_in1,         
    input             receive_flag1,    // IF级有效：接收指令1

    input             is_flush2,        
    input      [31:0] pc_in2,           
    input      [31:0] inst_in2,         
    input             receive_flag2,    // IF级有效：接收指令2

    output reg [31:0] pc_out1,          
    output reg [31:0] inst_out1,        
    output reg        send_flag1,       // 输出有效：发送指令1
    input             launch_flag1,     // ID级确认：发射指令1

    output reg [31:0] pc_out2,         
    output reg [31:0] inst_out2,       
    output reg        send_flag2,       // 输出有效：发送指令2
    input             launch_flag2,     // ID级确认：发射指令2

    output reg        ibu_full          // IBU缓冲满（反馈给IF级）
);

// ---------------------- 内部参数与信号定义 ----------------------
localparam BUF_DEPTH = 2;
localparam BUF_ADDR_WIDTH = $clog2(BUF_DEPTH);

// 缓冲项结构体（32位指令适配）
typedef struct {
    reg [31:0] pc;       // 指令PC
    reg [31:0] inst;     // 32位指令
    reg        valid;    // 缓冲项有效标志
} buf_entry_t;

buf_entry_t ibuf1 [0:BUF_DEPTH-1];  // 指令1缓冲
buf_entry_t ibuf2 [0:BUF_DEPTH-1];  // 指令2缓冲

// 环形缓冲读写指针
reg [BUF_ADDR_WIDTH-1:0] wr_ptr1, rd_ptr1;  // 通道1读写指针
reg [BUF_ADDR_WIDTH-1:0] wr_ptr2, rd_ptr2;  // 通道2读写指针

// 缓冲状态判断（环形缓冲空/满）
wire ibuf1_full  = ((wr_ptr1 + 1'b1) == rd_ptr1) && ibuf1[wr_ptr1].valid;
wire ibuf1_empty = (wr_ptr1 == rd_ptr1) && !ibuf1[rd_ptr1].valid;

wire ibuf2_full  = ((wr_ptr2 + 1'b1) == rd_ptr2) && ibuf2[wr_ptr2].valid;
wire ibuf2_empty = (wr_ptr2 == rd_ptr2) && !ibuf2[rd_ptr2].valid;

// 任意一路缓冲满 或 ID级反馈满，均判定为IBU满
always @(*) begin
    ibu_full = ibuf1_full || ibuf2_full || is_full;
end


integer i;
always @(posedge clk or posedge rst) begin
    if (rst) begin
        for (i = 0; i < BUF_DEPTH; i = i + 1) begin
            ibuf1[i] <= '{pc: 32'h0, inst: 32'h0, valid: 1'b0};
            ibuf2[i] <= '{pc: 32'h0, inst: 32'h0, valid: 1'b0};
        end

        wr_ptr1 <= '0;  rd_ptr1 <= '0;
        wr_ptr2 <= '0;  rd_ptr2 <= '0;

        pc_out1    <= 32'h0;
        inst_out1  <= 32'h0;
        send_flag1 <= 1'b0;
        pc_out2    <= 32'h0;
        inst_out2  <= 32'h0;
        send_flag2 <= 1'b0;

    end else begin
        // ---------------------- 通道1：指令接收（IF → IBU） ----------------------
        if (is_flush1) begin
            // Flush1触发：清空通道1所有缓冲
            for (i = 0; i < BUF_DEPTH; i = i + 1) begin
                ibuf1[i].valid <= 1'b0;
            end
            wr_ptr1    <= '0;
            rd_ptr1    <= '0;
            send_flag1 <= 1'b0;  // 立即停止输出
        end else if (receive_flag1 && !ibuf1_full) begin
            // IF级有效且缓冲未满：写入指令1
            ibuf1[wr_ptr1].pc    <= pc_in1;
            ibuf1[wr_ptr1].inst  <= inst_in1;
            ibuf1[wr_ptr1].valid <= 1'b1;
            wr_ptr1              <= wr_ptr1 + 1'b1;  // 写指针自增
        end

        // ---------------------- 通道1：指令发送（IBU → ID） ----------------------
        if (launch_flag1) begin
            // ID级确认发射：清空当前输出，更新读指针
            send_flag1           <= 1'b0;
            ibuf1[rd_ptr1].valid <= 1'b0;
            rd_ptr1              <= rd_ptr1 + 1'b1;
        end else if (!ibuf1_empty && !send_flag1 && !is_full) begin
            // 缓冲非空、未发送且ID级不忙：输出指令1
            pc_out1    <= ibuf1[rd_ptr1].pc;
            inst_out1  <= ibuf1[rd_ptr1].inst;
            send_flag1 <= 1'b1;
        end else if (is_full) begin
            // ID级满：暂停发送
            send_flag1 <= 1'b0;
        end

        // ---------------------- 通道2：指令接收（IF → IBU） ----------------------
        if (is_flush2) begin
            // Flush2触发：清空通道2所有缓冲
            for (i = 0; i < BUF_DEPTH; i = i + 1) begin
                ibuf2[i].valid <= 1'b0;
            end
            wr_ptr2    <= '0;
            rd_ptr2    <= '0;
            send_flag2 <= 1'b0;  // 立即停止输出
        end else if (receive_flag2 && !ibuf2_full) begin
            // IF级有效且缓冲未满：写入指令2
            ibuf2[wr_ptr2].pc    <= pc_in2;
            ibuf2[wr_ptr2].inst  <= inst_in2;
            ibuf2[wr_ptr2].valid <= 1'b1;
            wr_ptr2              <= wr_ptr2 + 1'b1;  // 写指针自增
        end

        // ---------------------- 通道2：指令发送（IBU → ID） ----------------------
        if (launch_flag2) begin
            // ID级确认发射：清空当前输出，更新读指针
            send_flag2           <= 1'b0;
            ibuf2[rd_ptr2].valid <= 1'b0;
            rd_ptr2              <= rd_ptr2 + 1'b1;
        end else if (!ibuf2_empty && !send_flag2 && !is_full) begin
            // 缓冲非空、未发送且ID级不忙：输出指令2
            pc_out2    <= ibuf2[rd_ptr2].pc;
            inst_out2  <= ibuf2[rd_ptr2].inst;
            send_flag2 <= 1'b1;
        end else if (is_full) begin
            // ID级满：暂停发送
            send_flag2 <= 1'b0;
        end
    end
end

endmodule