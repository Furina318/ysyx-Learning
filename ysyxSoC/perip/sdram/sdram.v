module sdram(
  input        clk,
  input        cke, 
  input        cs,
  input        ras, 
  input        cas, 
  input        we,
  input [13:0] a,   
  input [ 1:0] ba,  
  input [ 3:0] dqm, 
  inout [31:0] dq
);

  // wire [2:0] cmd = {ras, cas, we};
  wire [12:0] addr = a[12:0];
  wire bank_sel = a[13];     //字拓展选择

  sdram_32 sdram_32_u0(
    .clk(            clk),
    .cke(            cke),
    .cs ( cs & ~bank_sel),
    .ras(            ras),
    .cas(            cas),
    .we (             we),
    .a  (           addr),
    .ba (             ba),
    .dqm(            dqm),
    .dq (             dq)
  );

  sdram_32 sdram_32_u1(
    .clk(           clk),
    .cke(           cke),
    .cs ( cs & bank_sel),
    .ras(           ras),
    .cas(           cas),
    .we (            we),
    .a  (          addr),
    .ba (            ba),
    .dqm(           dqm),
    .dq (            dq)
  );
endmodule
