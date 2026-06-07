`include "defines.vh"

module ibuffer #(
    parameter BUFFER_DEPTH = 8,
    parameter PTR_WIDTH    = 3
)(
    input  wire                    clk            ,
    input  wire                    rst            ,
    input  wire                    exu_flush_en   ,
    input  wire                    idu_ready      ,
    input  wire                    ifu_valid      ,
    input  wire [`IF_TO_ID_WD-1:0] if_to_ib_bus   ,
    
    // to ifu
    output wire                    ibuffer_ready  , // 非满即有效
    // to idu
    output wire                    ibuffer_valid  , 
    output wire [`IF_TO_ID_WD-1:0] ib_to_id_bus
);

    reg [`IF_TO_ID_WD-1:0] buffer [0:BUFFER_DEPTH-1];
    
    reg [  PTR_WIDTH:0] count; // 记录当前buffer内的指令数量（多一位防溢出）
    reg [PTR_WIDTH-1:0] wptr;  // 写指针 (指向IFU写入位置)
    reg [PTR_WIDTH-1:0] rptr;  // 读指针 (指向IDU读取位置)

    wire push = ifu_valid & ibuffer_ready; // 成功压入
    wire pop  = idu_ready & ibuffer_valid; // 成功弹出

    always @(posedge clk) begin
        if (rst | exu_flush_en) begin
            // 完全清空指令队列
            wptr  <= {PTR_WIDTH{1'b0}};
            rptr  <= {PTR_WIDTH{1'b0}};
            count <= {(PTR_WIDTH+1){1'b0}};
        end 
        else begin
            // 更新数量计数器
            case ({push, pop})
                2'b10: count <= count + 1'b1; // 只写不读
                2'b01: count <= count - 1'b1; // 只读不写
                default: count <= count;      // 既读又写，或不读不写，数量不变
            endcase
            
            // 写入
            if (push) begin
                buffer[wptr] <= if_to_ib_bus;
                wptr         <= wptr + 1'b1;
            end
            
            // 读取 
            if (pop) begin
                rptr <= rptr + 1'b1;
            end
        end
    end

    // 只要没满，就准备好接收新指令
    assign ibuffer_ready = (count < BUFFER_DEPTH);

    // 只要里面有指令（>0），就对下游输出有效
    assign ibuffer_valid = (count > 0);

    // 数据直接透传当前读指针位置的内容
    assign ib_to_id_bus  = buffer[rptr];

endmodule
