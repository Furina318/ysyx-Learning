module Branch_Cond(
    // input clk,
    input rst,
    input [2:0] Branch,
    input Less,
    input zero,
    output reg PCAsrc,
    output reg PCBsrc
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    always @(*) begin
        if(rst) begin
            PCAsrc=1'b0;
            PCBsrc=1'b0;
        end
        else begin
            case(Branch)
                `Branch_None: begin
                    PCAsrc=1'b0;
                    PCBsrc=1'b0;
                end
                `Branch_PC: begin
                    PCAsrc=1'b1;
                    PCBsrc=1'b0;
                end
                `Branch_Reg: begin
                    PCAsrc=1'b1;
                    PCBsrc=1'b1;
                end
                `Branch_EQ: begin
                    case(zero)
                        1'b0:begin
                            PCAsrc=1'b0;
                            PCBsrc=1'b0;
                        end
                        1'b1:begin
                            PCAsrc=1'b1;
                            PCBsrc=1'b0;
                        end
                    endcase
                end
                `Branch_NE: begin
                    case(zero)
                        1'b0: begin
                            PCAsrc=1'b1;
                            PCBsrc=1'b0;
                        end
                        1'b1: begin
                            PCAsrc=1'b0;
                            PCBsrc=1'b0;
                        end
                    endcase
                end
                `Branch_LT: begin
                    case(Less)
                        1'b0: begin
                            PCAsrc=1'b0;
                            PCBsrc=1'b0;
                        end
                        1'b1: begin
                            PCAsrc=1'b1;
                            PCBsrc=1'b0;
                        end
                    endcase
                end
                `Branch_GE: begin
                    case(Less)
                        1'b0: begin
                            PCAsrc=1'b1;
                            PCBsrc=1'b0;
                        end
                        1'b1: begin
                            PCAsrc=1'b0;
                            PCBsrc=1'b0;
                        end
                    endcase
                end
                default: begin
                    ebreak(`ABORT, 32'hdeafbeaf);
                    $display("Something wrong in Branch_Cond");
                end
            endcase
        end
    end
endmodule
