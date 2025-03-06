`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module mem(
    input [31:0] addr,//实际是ALU的result输出
    input [31:0] inst_addr,
    input [2:0] MemOp,
    input [31:0] data_in, // rs2
    input clk,
    input WrEn,
    input MemtoReg,

    output wire [31:0] inst_data,
    output reg [31:0] data_out
);
    import "DPI-C" function int  pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int len);
    import "DPI-C" function void ebreak(input int station, input int inst);

    reg [31:0] mem[0:1023];
    wire [31:0] read_data;
    //读指令
    assign inst_data = pmem_read(inst_addr);  
    assign read_data = pmem_read(addr);

    always @(posedge clk) begin
        if(WrEn) begin//写使能
            case(MemOp)
                3'b010: pmem_write(addr,data_in,4); // 4字节写
                3'b001: pmem_write(addr,data_in,2);//mem[addr][15:0] <= data_in[15:0]; // 2字节写
                3'b000: pmem_write(addr,data_in,1);//mem[addr][7:0] <= data_in[7:0]; // 1字节写
                3'b101: data_in <= {16{1'b0},data_in[15:0]};pmem_write(addr,data_in,2);//mem[addr][15:0] <= data_in[15:0]; // 2字节写无符号拓展
                3'b100: data_in <= {24{1'b0},data_in[7:0]};pmem_write(addr,data_in,1);//mem[addr][7:0] <= data_in[7:0]; // 1字节写无符号拓展
                default: begin
                    ebreak(`ABORT, 32'hdeafbeaf); // 异常处理
                    $display("Something wrong in ram write module");
                end
            endcase
        end

        if(MemtoReg) begin
            data_out <= addr;//实际上就是输出ALU的result
        end
        else begin
            case(MemOp)
            3'b010: data_out <= read_data; // 4字节读
            3'b001: data_out <= {{16{read_data[15]}}, read_data[15:0]}; // 2字节读带符号扩展
            3'b000: data_out <= {{24{read_data[7]}}, read_data[7:0]}; // 1字节读带符号扩展
            3'b101: data_out <= {16'b0, read_data[15:0]}; // 2字节读无符号扩展
            3'b100: data_out <= {24'b0, read_data[7:0]}; // 1字节读无符号扩展
            default: begin
                ebreak(`ABORT, 32'hdeafbeaf); // 异常处理
                $display("Something wrong in ram  read module");
                end
            endcase
        end
    end

endmodule
