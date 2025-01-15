module barrel_shifter(
    input [7:0] din,
    input [2:0] shamt,
    input L_R,
    input A_L,
    output reg [7:0] dout
);
alwasys @(*) begin
    dout = din; // Default assignment: no shift (output equals input) 

    case (L_R)           
        1'b1: begin       
            dout = din << shamt; 
        end

        1'b0: begin       
            if (A_L) begin 
                dout = {{5{din[7]}}, din[7:0]} >> shamt;
            end else begin 
                dout = din >> shamt; 
            end
        end
    endcase
end

endmodule