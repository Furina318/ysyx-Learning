Disassembly of section .text:

00000000 <_start>:
   0:	00000413          	addi	s0,zero,0
   4:	00051137          	lui	sp,0x51
   8:	00010113          	addi	sp,sp,0 # 51000 <_end>
   c:	22c00093          	addi	ra,zero,556
  10:	000080e7          	jalr	ra,0(ra)

00000014 <check>:
  14:	fea12823          	sw	a0,-16(sp)
  18:	fe812e23          	sw	s0,-4(sp)
  1c:	40800413          	addi	s0,zero,1032
  20:	ff014183          	lbu	gp,-16(sp)
  24:	003401b3          	add	gp,s0,gp
  28:	0001c183          	lbu	gp,0(gp)
  2c:	ff114203          	lbu	tp,-15(sp)
  30:	00440233          	add	tp,s0,tp
  34:	00024203          	lbu	tp,0(tp) # 0 <_start>
  38:	004181b3          	add	gp,gp,tp
  3c:	ff214203          	lbu	tp,-14(sp)
  40:	00440233          	add	tp,s0,tp
  44:	00024203          	lbu	tp,0(tp) # 0 <_start>
  48:	004181b3          	add	gp,gp,tp
  4c:	ff314203          	lbu	tp,-13(sp)
  50:	00440233          	add	tp,s0,tp
  54:	00024203          	lbu	tp,0(tp) # 0 <_start>
  58:	004181b3          	add	gp,gp,tp
  5c:	40000213          	addi	tp,zero,1024
  60:	00320233          	add	tp,tp,gp
  64:	00024203          	lbu	tp,0(tp) # 0 <_start>
  68:	ffc12403          	lw	s0,-4(sp)

0000006c <slli_9>:
  6c:	00420233          	add	tp,tp,tp
  70:	00420233          	add	tp,tp,tp
  74:	00410233          	add	tp,sp,tp
  78:	09400193          	addi	gp,zero,148
  7c:	fe312823          	sw	gp,-16(sp)
  80:	09000193          	addi	gp,zero,144
  84:	fe312623          	sw	gp,-20(sp)
  88:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffaefec>
  8c:	00020067          	jalr	zero,0(tp) # 0 <_start>

00000090 <non_taken_0.L7>:
  90:	00008067          	jalr	zero,0(ra)
  94:	ff410113          	addi	sp,sp,-12
  98:	00100513          	addi	a0,zero,1
  9c:	00112423          	sw	ra,8(sp)
  a0:	22400093          	addi	ra,zero,548
  a4:	000080e7          	jalr	ra,0(ra)

000000a8 <main>:
  a8:	ff010113          	addi	sp,sp,-16
  ac:	00112623          	sw	ra,12(sp)
  b0:	00012023          	sw	zero,0(sp)
  b4:	00100793          	addi	a5,zero,1
  b8:	06500693          	addi	a3,zero,101
  bc:	00012703          	lw	a4,0(sp)
  c0:	00f70733          	add	a4,a4,a5
  c4:	00e12023          	sw	a4,0(sp)
  c8:	00178793          	addi	a5,a5,1

000000cc <bne_15.L9>:
  cc:	fef12823          	sw	a5,-16(sp)
  d0:	fed12623          	sw	a3,-20(sp)
  d4:	fe812e23          	sw	s0,-4(sp)
  d8:	fe912c23          	sw	s1,-8(sp)
  dc:	30000413          	addi	s0,zero,768
  e0:	ff014183          	lbu	gp,-16(sp)
  e4:	00340233          	add	tp,s0,gp
  e8:	00100193          	addi	gp,zero,1
  ec:	00320023          	sb	gp,0(tp) # 0 <_start>
  f0:	fec14183          	lbu	gp,-20(sp)
  f4:	003401b3          	add	gp,s0,gp
  f8:	00018023          	sb	zero,0(gp)
  fc:	00024183          	lbu	gp,0(tp) # 0 <_start>
 100:	ff114483          	lbu	s1,-15(sp)
 104:	00940233          	add	tp,s0,s1
 108:	00100493          	addi	s1,zero,1
 10c:	00920023          	sb	s1,0(tp) # 0 <_start>
 110:	fed14483          	lbu	s1,-19(sp)
 114:	009404b3          	add	s1,s0,s1
 118:	00048023          	sb	zero,0(s1)
 11c:	00024483          	lbu	s1,0(tp) # 0 <_start>
 120:	009181b3          	add	gp,gp,s1
 124:	ff214483          	lbu	s1,-14(sp)
 128:	00940233          	add	tp,s0,s1
 12c:	00100493          	addi	s1,zero,1
 130:	00920023          	sb	s1,0(tp) # 0 <_start>
 134:	fee14483          	lbu	s1,-18(sp)
 138:	009404b3          	add	s1,s0,s1
 13c:	00048023          	sb	zero,0(s1)
 140:	00024483          	lbu	s1,0(tp) # 0 <_start>
 144:	009181b3          	add	gp,gp,s1
 148:	ff314483          	lbu	s1,-13(sp)
 14c:	00940233          	add	tp,s0,s1
 150:	00100493          	addi	s1,zero,1
 154:	00920023          	sb	s1,0(tp) # 0 <_start>
 158:	fef14483          	lbu	s1,-17(sp)
 15c:	009404b3          	add	s1,s0,s1
 160:	00048023          	sb	zero,0(s1)
 164:	00024483          	lbu	s1,0(tp) # 0 <_start>
 168:	009181b3          	add	gp,gp,s1
 16c:	40000213          	addi	tp,zero,1024
 170:	00320233          	add	tp,tp,gp
 174:	00024203          	lbu	tp,0(tp) # 0 <_start>
 178:	ff812483          	lw	s1,-8(sp)
 17c:	ffc12403          	lw	s0,-4(sp)

00000180 <slli_24>:
 180:	00420233          	add	tp,tp,tp
 184:	00420233          	add	tp,tp,tp
 188:	00410233          	add	tp,sp,tp
 18c:	1a400193          	addi	gp,zero,420
 190:	fe312823          	sw	gp,-16(sp)
 194:	0bc00193          	addi	gp,zero,188
 198:	fe312623          	sw	gp,-20(sp)
 19c:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffaefec>
 1a0:	00020067          	jalr	zero,0(tp) # 0 <_start>

000001a4 <non_taken_15.L9>:
 1a4:	00012503          	lw	a0,0(sp)
 1a8:	fffff7b7          	lui	a5,0xfffff
 1ac:	c4678793          	addi	a5,a5,-954 # ffffec46 <_end+0xfffadc46>
 1b0:	00f50533          	add	a0,a0,a5
 1b4:	fea12823          	sw	a0,-16(sp)
 1b8:	fe812e23          	sw	s0,-4(sp)
 1bc:	40800413          	addi	s0,zero,1032
 1c0:	ff014183          	lbu	gp,-16(sp)
 1c4:	003401b3          	add	gp,s0,gp
 1c8:	0001c183          	lbu	gp,0(gp)
 1cc:	ff114203          	lbu	tp,-15(sp)
 1d0:	00440233          	add	tp,s0,tp
 1d4:	00024203          	lbu	tp,0(tp) # 0 <_start>
 1d8:	004181b3          	add	gp,gp,tp
 1dc:	ff214203          	lbu	tp,-14(sp)
 1e0:	00440233          	add	tp,s0,tp
 1e4:	00024203          	lbu	tp,0(tp) # 0 <_start>
 1e8:	004181b3          	add	gp,gp,tp
 1ec:	ff314203          	lbu	tp,-13(sp)
 1f0:	00440233          	add	tp,s0,tp
 1f4:	00024203          	lbu	tp,0(tp) # 0 <_start>
 1f8:	004181b3          	add	gp,gp,tp
 1fc:	40000213          	addi	tp,zero,1024
 200:	00320233          	add	tp,tp,gp
 204:	00024503          	lbu	a0,0(tp) # 0 <_start>
 208:	ffc12403          	lw	s0,-4(sp)
 20c:	01400093          	addi	ra,zero,20
 210:	000080e7          	jalr	ra,0(ra)
 214:	00c12083          	lw	ra,12(sp)
 218:	00000513          	addi	a0,zero,0
 21c:	01010113          	addi	sp,sp,16
 220:	00008067          	jalr	zero,0(ra)

00000224 <halt>:
 224:	22400213          	addi	tp,zero,548
 228:	00020067          	jalr	zero,0(tp) # 0 <_start>

0000022c <_trm_init>:
 22c:	ff410113          	addi	sp,sp,-12
 230:	00048537          	lui	a0,0x48
 234:	60050513          	addi	a0,a0,1536 # 48600 <mainargs>
 238:	00112423          	sw	ra,8(sp)
 23c:	0a800093          	addi	ra,zero,168
 240:	000080e7          	jalr	ra,0(ra)
 244:	22400093          	addi	ra,zero,548
 248:	000080e7          	jalr	ra,0(ra)
