`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/Npipeline-vsrc/defines/defines.v"

// 取指模块
module IF_AXI (
    input             clk,
    input             reset,

    input             EX_flush,
    input      [31:0] EX_flush_pc,

    input             ID_ready,
    output reg        IF_valid,

    output reg [31:0] IF_ID_pc,
    output reg [31:0] IF_ID_inst,

    // AXI4-Lite 接口信号（与 SRAM 连接）
    output reg        if_sram_arvalid,       // 读地址有效
    input             sram_if_arready,       // 读地址就绪
    output reg [31:0] if_sram_araddr,        // 读地址
    input      [31:0] sram_if_rdata,         // 读数据
    input             sram_if_rvalid,        // 读数据有效
    output reg        if_sram_rready,        // 读数据就绪
    input      [1:0]  sram_if_rresp         // 读响应
);

    import "DPI-C" function void ebreak(input int station, input int inst);

    parameter OKAY = 2'b00;

    // 内部寄存器
    reg        read_pending;      // 读请求等待标志
    reg        read_valid;        // 读事务完成标志

    // 程序计数器更新逻辑
    // always @(posedge clk) begin
    //     if (reset) begin
    //         IF_ID_pc   <= 32'h8000_0000;
    //     end
    //     else if (EX_flush) begin
    //         IF_ID_pc   <= EX_flush_pc;
    //     end 
    //     else if (IF_valid && ID_ready) begin
    //         IF_ID_pc  <= IF_ID_pc + 4;
    //     end 
    //     // else begin
    //     //     IF_ID_pc   <= IF_ID_pc;
    //     // end
    // end

    // 读通道控制
    reg [31:0] next_pc;
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            if_sram_arvalid <= 0;
            if_sram_araddr  <= 32'h0;
            if_sram_rready  <= 0;
            IF_ID_inst      <= 32'h0;
            IF_valid        <= 0;
            read_pending    <= 0;
            read_valid      <= 0;

            IF_ID_pc <= 32'h8000_0000;
            next_pc <= 32'h8000_0000;
        end 
        else begin
            if (EX_flush) begin
                // IF_valid        <= ID_ready && EX_flush;
                // IF_ID_inst      <= 32'h0;
                if_sram_araddr  <= EX_flush_pc;
                if_sram_arvalid <= 1;
                // if_sram_rready  <= 0;
                read_pending    <= 1;
                read_valid      <= 0;
                // IF_valid        <= ID_ready;

                next_pc <= EX_flush_pc;
            end
            
            // 发起读请求
            if (!EX_flush && !read_pending) begin
                if_sram_arvalid <= 1;
                if_sram_araddr  <= next_pc;
                if_sram_rready  <= 0;
                read_pending    <= 1;
                read_valid      <= 0;
                IF_valid        <= 0;
            end
            // 接受读地址响应
            if (if_sram_arvalid && sram_if_arready) begin
                if_sram_arvalid <= 0;
                if_sram_rready  <= 1;
            end
            // 接受读数据
            if (sram_if_rvalid && if_sram_rready) begin
                if_sram_rready  <= 0;
                read_pending    <= 0;
                read_valid      <= 1;
                IF_ID_inst      <= sram_if_rdata;
                IF_valid        <= 1;

                next_pc <= next_pc + 4;
                IF_ID_pc <= next_pc;
                if (sram_if_rresp != OKAY) begin
                    ebreak(`ABORT, 32'hdead_beef);
                    $display("\033[31mIF_AXI: Read access fault at address %h, rresp %b\033[0m", IF_ID_pc, sram_if_rresp);
                end
            end  
            else if (!read_valid && !EX_flush) begin
                IF_valid <= 0;
            end
                // IF_ID_inst      <= IF_ID_inst;
                // if_sram_arvalid <= if_sram_arvalid;
                // if_sram_rready  <= if_sram_rready;
                // read_pending    <= read_pending;
                // read_valid      <= 0;
           
        end
    end

endmodule
