module Branch_Cond(
    input [2:0] Branch,
    input Less,
    input zero,
    output PCAsrc,
    output PCBsrc.
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    assign PCAsrc=1'b0;
    assign PCBsrc=1'b0;
    always @(*) begin
        case(Branch)
            `Bracnh_None:begin
                PCAsrc=1'b0;
                PCBsrc=1'b0;
            end
            `Branch_PC:begin
                PCAsrc=1'b1;
                PCBsrc=1'b0;
            end
            `Branch_Reg:begin
                PCAsrc=1'b1;
                PCBsrc=1'b1;
            end
            `Branch_EQ:begin
                case(Zero)
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
            `Branch_NE:begin
                case(Zero)
                    1'b0:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                endcase
            end
            `Branch_LT:begin
                case(Less)
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
            `Branch_GE:begin
                case(Less)
                    1'b0:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                endcase
            end
            default:begin
                ebreak(`ABORT, 32'hdeafbeaf);
                $display("Something wrong in Branch_Cond");
            end
        endcase
    end
endmodule
