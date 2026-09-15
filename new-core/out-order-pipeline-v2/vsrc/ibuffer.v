`include "defines.vh"

module ibuffer #(
    parameter BUFFER_DEPTH = 32,
    parameter PTR_WIDTH    = 5
)(
    input  wire                   clk            ,
    input  wire                   rst            ,
    input  wire                   exu_flush_en   ,
    input  wire                   idu_ready      ,  // 下游可接收 (rename未满)
    input  wire                   ifu_valid1     ,
    input  wire                   ifu_valid2     ,
    input  wire [`IF_TO_ID_WD-1:0] if_to_ib_bus1  ,
    input  wire [`IF_TO_ID_WD-1:0] if_to_ib_bus2  ,

    output wire                   ibuffer_ready  ,  // 可接收写入
    output wire                   ibuffer_valid1 ,  // 读出通道1有效
    output wire                   ibuffer_valid2 ,  // 读出通道2有效
    output wire [`IF_TO_ID_WD-1:0] ib_to_id_bus1  ,
    output wire [`IF_TO_ID_WD-1:0] ib_to_id_bus2
);

    reg [`IF_TO_ID_WD-1:0] buffer [0:BUFFER_DEPTH-1];

    reg [  PTR_WIDTH:0] count;
    reg [PTR_WIDTH-1:0] wptr;
    reg [PTR_WIDTH-1:0] rptr;

    // 写入数量
    wire [1:0] push_num = (ifu_valid1 & ifu_valid2) ? 2'd2 :
                          (ifu_valid1 | ifu_valid2) ? 2'd1 : 2'd0;

    // 读出数量 (当下游就绪时, 最多读出2条)
    wire has_two  = (count >= 2);
    wire has_one  = (count == 1);
    wire [1:0] pop_num = idu_ready ? (has_two ? 2'd2 : (has_one ? 2'd1 : 2'd0)) : 2'd0;

    // 写入条件: 缓冲区有足够空间
    wire can_push = (count + {{PTR_WIDTH-2{1'b0}}, push_num} <= BUFFER_DEPTH);
    wire push     = can_push && (push_num > 0);
    wire pop      = (pop_num > 0);

    // 读数据 (组合逻辑)
    wire [PTR_WIDTH-1:0] rptr_plus1 = rptr + 1'b1;
    assign ib_to_id_bus1 = buffer[rptr];
    assign ib_to_id_bus2 = buffer[rptr_plus1];
    assign ibuffer_valid1 = (count > 0);
    assign ibuffer_valid2 = (count >= 2);
    assign ibuffer_ready  = (count <= BUFFER_DEPTH - 2);

    integer i;
    always @(posedge clk) begin
        if (rst | exu_flush_en) begin
            wptr  <= {PTR_WIDTH{1'b0}};
            rptr  <= {PTR_WIDTH{1'b0}};
            count <= {(PTR_WIDTH+1){1'b0}};
        end else begin
            // 更新计数
            count <= count + {{PTR_WIDTH-2{1'b0}}, push_num} - {{PTR_WIDTH-2{1'b0}}, pop_num};

            // 写入
            if (push) begin
                if (push_num == 2'd2) begin
                    buffer[wptr]        <= if_to_ib_bus1;
                    buffer[wptr + 1'b1] <= if_to_ib_bus2;
                    wptr <= wptr + 2;
                end
                else begin
                    buffer[wptr] <= ifu_valid1 ? if_to_ib_bus1 : if_to_ib_bus2;
                    wptr <= wptr + 1;
                end
            end

            // 读出
            if (pop) begin
                rptr <= rptr + {{PTR_WIDTH-2{1'b0}}, pop_num};
            end
        end
    end

endmodule
