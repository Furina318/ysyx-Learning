`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module mem(
    input [31:0] addr,         // 实际是ALU的result输出
    input [31:0] inst_addr,    // 指令地址
    input [2:0] MemOp,         // 内存操作类型
    input [31:0] data_in,      // rs2，写入数据
    input clk,                 // 时钟
    input rst,
    input WrEn,                // 写使能
    input RdEn,                // 读使能

    output reg [31:0] inst_data,  // 指令数据输出
    output reg [31:0] data_out    // 数据输出
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    import "DPI-C" function void ebreak(input int station, input int inst);

    reg [31:0] read_data;
    reg [31:0] temp_data;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            data_out <= 32'b0;
            inst_data <= 32'h0;
        end else begin
            // 指令读取（立即可用）
            inst_data <= pmem_read(inst_addr, 4);
            

            // 写操作
            if (WrEn) begin
                case(MemOp)
                    3'b010: pmem_write(addr, data_in, 4);           // 4字节写 (SW)
                    3'b001: pmem_write(addr, data_in, 2);           // 2字节写 (SH)
                    3'b000: pmem_write(addr, data_in, 1);           // 1字节写 (SB)
                    3'b101: begin
                        temp_data <= {16'b0, data_in[15:0]};
                        pmem_write(addr, temp_data, 2);             // 2字节写无符号扩展 (LHU)
                    end 
                    3'b100: begin
                        temp_data <= {24'b0, data_in[7:0]};
                        pmem_write(addr, temp_data, 1);             // 1字节写无符号扩展 (LBU)
                    end 
                    default: begin
                        ebreak(`ABORT, 32'hdeafbeaf);
                        $display("Something wrong in mem write module");
                    end
                endcase
            end

            // 读操作
            if (RdEn) begin
                read_data <= pmem_read(addr, 4);
                case(MemOp)
                    3'b010: data_out <= read_data;                   // 4字节读 (LW)
                    3'b001: data_out <= {{16{read_data[15]}}, read_data[15:0]};  // 2字节读带符号扩展 (LH)
                    3'b000: data_out <= {{24{read_data[7]}}, read_data[7:0]};    // 1字节读带符号扩展 (LB)
                    3'b101: data_out <= {16'b0, read_data[15:0]};    // 2字节读无符号扩展 (LHU)
                    3'b100: data_out <= {24'b0, read_data[7:0]};     // 1字节读无符号扩展 (LBU)
                    default: begin
                        ebreak(`ABORT, 32'hdeafbeaf);
                        $display("Something wrong in mem read module");
                    end
                endcase
            end else begin
                data_out <= data_out;
            end
        end
    end
endmodule