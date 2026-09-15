// radix-4 SRT 开方选位表 (自动生成)
// 输入: t_h[6:0] 有符号 (4P 高7位), w_h[4:0] (W=2R 高5位)
// 判定: q=-2 if t_h<b0; -1 elif t_h<b1; 0 elif t_h<b2; 1 elif t_h<b3; else 2
`ifndef SQRT_SRT_TABLE_VH
`define SQRT_SRT_TABLE_VH
  5'd00 : begin
    if (t_h < 7'sd0)      qn = -4'sd2;
    else if (t_h < 7'sd0) qn = -4'sd1;
    else if (t_h < 7'sd0) qn = 4'sd0;
    else if (t_h < 7'sd0) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd01 : begin
    if (t_h < -7'sd1)      qn = -4'sd2;
    else if (t_h < 7'sd0) qn = -4'sd1;
    else if (t_h < 7'sd0) qn = 4'sd0;
    else if (t_h < 7'sd1) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd02 : begin
    if (t_h < -7'sd2)      qn = -4'sd2;
    else if (t_h < -7'sd1) qn = -4'sd1;
    else if (t_h < 7'sd1) qn = 4'sd0;
    else if (t_h < 7'sd2) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd03 : begin
    if (t_h < -7'sd3)      qn = -4'sd2;
    else if (t_h < -7'sd1) qn = -4'sd1;
    else if (t_h < 7'sd1) qn = 4'sd0;
    else if (t_h < 7'sd3) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd04 : begin
    if (t_h < -7'sd3)      qn = -4'sd2;
    else if (t_h < -7'sd1) qn = -4'sd1;
    else if (t_h < 7'sd1) qn = 4'sd0;
    else if (t_h < 7'sd3) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd05 : begin
    if (t_h < -7'sd4)      qn = -4'sd2;
    else if (t_h < -7'sd1) qn = -4'sd1;
    else if (t_h < 7'sd1) qn = 4'sd0;
    else if (t_h < 7'sd4) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd06 : begin
    if (t_h < -7'sd5)      qn = -4'sd2;
    else if (t_h < -7'sd2) qn = -4'sd1;
    else if (t_h < 7'sd2) qn = 4'sd0;
    else if (t_h < 7'sd5) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd07 : begin
    if (t_h < -7'sd6)      qn = -4'sd2;
    else if (t_h < -7'sd2) qn = -4'sd1;
    else if (t_h < 7'sd2) qn = 4'sd0;
    else if (t_h < 7'sd6) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd08 : begin
    if (t_h < -7'sd6)      qn = -4'sd2;
    else if (t_h < -7'sd2) qn = -4'sd1;
    else if (t_h < 7'sd2) qn = 4'sd0;
    else if (t_h < 7'sd6) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd09 : begin
    if (t_h < -7'sd7)      qn = -4'sd2;
    else if (t_h < -7'sd2) qn = -4'sd1;
    else if (t_h < 7'sd2) qn = 4'sd0;
    else if (t_h < 7'sd7) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd10 : begin
    if (t_h < -7'sd8)      qn = -4'sd2;
    else if (t_h < -7'sd3) qn = -4'sd1;
    else if (t_h < 7'sd3) qn = 4'sd0;
    else if (t_h < 7'sd8) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd11 : begin
    if (t_h < -7'sd9)      qn = -4'sd2;
    else if (t_h < -7'sd3) qn = -4'sd1;
    else if (t_h < 7'sd3) qn = 4'sd0;
    else if (t_h < 7'sd9) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd12 : begin
    if (t_h < -7'sd9)      qn = -4'sd2;
    else if (t_h < -7'sd3) qn = -4'sd1;
    else if (t_h < 7'sd3) qn = 4'sd0;
    else if (t_h < 7'sd9) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd13 : begin
    if (t_h < -7'sd10)      qn = -4'sd2;
    else if (t_h < -7'sd3) qn = -4'sd1;
    else if (t_h < 7'sd3) qn = 4'sd0;
    else if (t_h < 7'sd10) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd14 : begin
    if (t_h < -7'sd11)      qn = -4'sd2;
    else if (t_h < -7'sd4) qn = -4'sd1;
    else if (t_h < 7'sd4) qn = 4'sd0;
    else if (t_h < 7'sd11) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd15 : begin
    if (t_h < -7'sd12)      qn = -4'sd2;
    else if (t_h < -7'sd4) qn = -4'sd1;
    else if (t_h < 7'sd4) qn = 4'sd0;
    else if (t_h < 7'sd12) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd16 : begin
    if (t_h < -7'sd12)      qn = -4'sd2;
    else if (t_h < -7'sd4) qn = -4'sd1;
    else if (t_h < 7'sd4) qn = 4'sd0;
    else if (t_h < 7'sd12) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd17 : begin
    if (t_h < -7'sd13)      qn = -4'sd2;
    else if (t_h < -7'sd4) qn = -4'sd1;
    else if (t_h < 7'sd4) qn = 4'sd0;
    else if (t_h < 7'sd13) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd18 : begin
    if (t_h < -7'sd14)      qn = -4'sd2;
    else if (t_h < -7'sd5) qn = -4'sd1;
    else if (t_h < 7'sd5) qn = 4'sd0;
    else if (t_h < 7'sd14) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd19 : begin
    if (t_h < -7'sd15)      qn = -4'sd2;
    else if (t_h < -7'sd5) qn = -4'sd1;
    else if (t_h < 7'sd5) qn = 4'sd0;
    else if (t_h < 7'sd15) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd20 : begin
    if (t_h < -7'sd15)      qn = -4'sd2;
    else if (t_h < -7'sd5) qn = -4'sd1;
    else if (t_h < 7'sd5) qn = 4'sd0;
    else if (t_h < 7'sd15) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd21 : begin
    if (t_h < -7'sd16)      qn = -4'sd2;
    else if (t_h < -7'sd5) qn = -4'sd1;
    else if (t_h < 7'sd5) qn = 4'sd0;
    else if (t_h < 7'sd16) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd22 : begin
    if (t_h < -7'sd17)      qn = -4'sd2;
    else if (t_h < -7'sd6) qn = -4'sd1;
    else if (t_h < 7'sd6) qn = 4'sd0;
    else if (t_h < 7'sd17) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd23 : begin
    if (t_h < -7'sd18)      qn = -4'sd2;
    else if (t_h < -7'sd6) qn = -4'sd1;
    else if (t_h < 7'sd6) qn = 4'sd0;
    else if (t_h < 7'sd18) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd24 : begin
    if (t_h < -7'sd18)      qn = -4'sd2;
    else if (t_h < -7'sd6) qn = -4'sd1;
    else if (t_h < 7'sd6) qn = 4'sd0;
    else if (t_h < 7'sd18) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd25 : begin
    if (t_h < -7'sd19)      qn = -4'sd2;
    else if (t_h < -7'sd6) qn = -4'sd1;
    else if (t_h < 7'sd6) qn = 4'sd0;
    else if (t_h < 7'sd19) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd26 : begin
    if (t_h < -7'sd20)      qn = -4'sd2;
    else if (t_h < -7'sd7) qn = -4'sd1;
    else if (t_h < 7'sd7) qn = 4'sd0;
    else if (t_h < 7'sd20) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd27 : begin
    if (t_h < -7'sd21)      qn = -4'sd2;
    else if (t_h < -7'sd7) qn = -4'sd1;
    else if (t_h < 7'sd7) qn = 4'sd0;
    else if (t_h < 7'sd21) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd28 : begin
    if (t_h < -7'sd21)      qn = -4'sd2;
    else if (t_h < -7'sd7) qn = -4'sd1;
    else if (t_h < 7'sd7) qn = 4'sd0;
    else if (t_h < 7'sd21) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd29 : begin
    if (t_h < -7'sd22)      qn = -4'sd2;
    else if (t_h < -7'sd7) qn = -4'sd1;
    else if (t_h < 7'sd7) qn = 4'sd0;
    else if (t_h < 7'sd22) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd30 : begin
    if (t_h < -7'sd23)      qn = -4'sd2;
    else if (t_h < -7'sd8) qn = -4'sd1;
    else if (t_h < 7'sd8) qn = 4'sd0;
    else if (t_h < 7'sd23) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
  5'd31 : begin
    if (t_h < -7'sd24)      qn = -4'sd2;
    else if (t_h < -7'sd8) qn = -4'sd1;
    else if (t_h < 7'sd8) qn = 4'sd0;
    else if (t_h < 7'sd24) qn = 4'sd1;
    else                  qn = 4'sd2;
  end
`endif
