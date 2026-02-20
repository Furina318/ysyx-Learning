Disassembly of section .text:

00000000 <_start>:
       0:	00000413          	addi	s0,zero,0
       4:	00052137          	lui	sp,0x52
       8:	00010113          	addi	sp,sp,0 # 52000 <_end>
       c:	000010b7          	lui	ra,0x1
      10:	22408093          	addi	ra,ra,548 # 1224 <_trm_init>
      14:	000080e7          	jalr	ra,0(ra)

00000018 <check>:
      18:	fea12823          	sw	a0,-16(sp)
      1c:	fe812e23          	sw	s0,-4(sp)
      20:	00001437          	lui	s0,0x1
      24:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
      28:	ff014183          	lbu	gp,-16(sp)
      2c:	003401b3          	add	gp,s0,gp
      30:	0001c183          	lbu	gp,0(gp)
      34:	ff114203          	lbu	tp,-15(sp)
      38:	00440233          	add	tp,s0,tp
      3c:	00024203          	lbu	tp,0(tp) # 0 <_start>
      40:	004181b3          	add	gp,gp,tp
      44:	ff214203          	lbu	tp,-14(sp)
      48:	00440233          	add	tp,s0,tp
      4c:	00024203          	lbu	tp,0(tp) # 0 <_start>
      50:	004181b3          	add	gp,gp,tp
      54:	ff314203          	lbu	tp,-13(sp)
      58:	00440233          	add	tp,s0,tp
      5c:	00024203          	lbu	tp,0(tp) # 0 <_start>
      60:	004181b3          	add	gp,gp,tp
      64:	00001237          	lui	tp,0x1
      68:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
      6c:	00320233          	add	tp,tp,gp
      70:	00024203          	lbu	tp,0(tp) # 0 <_start>
      74:	ffc12403          	lw	s0,-4(sp)

00000078 <slli_9>:
      78:	00420233          	add	tp,tp,tp
      7c:	00420233          	add	tp,tp,tp
      80:	00410233          	add	tp,sp,tp
      84:	0a000193          	addi	gp,zero,160
      88:	fe312823          	sw	gp,-16(sp)
      8c:	09c00193          	addi	gp,zero,156
      90:	fe312623          	sw	gp,-20(sp)
      94:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffadfec>
      98:	00020067          	jalr	zero,0(tp) # 0 <_start>

0000009c <non_taken_0.L7>:
      9c:	00008067          	jalr	zero,0(ra)
      a0:	ff410113          	addi	sp,sp,-12
      a4:	00100513          	addi	a0,zero,1
      a8:	00112423          	sw	ra,8(sp)
      ac:	000010b7          	lui	ra,0x1
      b0:	21808093          	addi	ra,ra,536 # 1218 <halt>
      b4:	000080e7          	jalr	ra,0(ra)

000000b8 <main>:
      b8:	fec10113          	addi	sp,sp,-20
      bc:	00912423          	sw	s1,8(sp)
      c0:	000494b7          	lui	s1,0x49
      c4:	6b048493          	addi	s1,s1,1712 # 496b0 <mem>
      c8:	00812623          	sw	s0,12(sp)
      cc:	00112823          	sw	ra,16(sp)
      d0:	000496b7          	lui	a3,0x49
      d4:	69068693          	addi	a3,a3,1680 # 49690 <lh_ans>
      d8:	00048413          	addi	s0,s1,0
      dc:	00048713          	addi	a4,s1,0
      e0:	fe012823          	sw	zero,-16(sp)
      e4:	00174183          	lbu	gp,1(a4)
      e8:	fe3109a3          	sb	gp,-13(sp)
      ec:	ff012183          	lw	gp,-16(sp)

000000f0 <srai_20>:
      f0:	fe812e23          	sw	s0,-4(sp)
      f4:	fe312823          	sw	gp,-16(sp)
      f8:	0003d437          	lui	s0,0x3d
      fc:	60040413          	addi	s0,s0,1536 # 3d600 <_logic_shift_table+0x3c000>
     100:	ff214203          	lbu	tp,-14(sp)

00000104 <slli_24>:
     104:	00420233          	add	tp,tp,tp
     108:	00420233          	add	tp,tp,tp
     10c:	00440233          	add	tp,s0,tp
     110:	00022203          	lw	tp,0(tp) # 0 <_start>
     114:	fe412623          	sw	tp,-20(sp)
     118:	ff114203          	lbu	tp,-15(sp)

0000011c <slli_26>:
     11c:	00420233          	add	tp,tp,tp
     120:	00420233          	add	tp,tp,tp
     124:	00440233          	add	tp,s0,tp
     128:	00022203          	lw	tp,0(tp) # 0 <_start>
     12c:	fe412423          	sw	tp,-24(sp)
     130:	ff014203          	lbu	tp,-16(sp)

00000134 <slli_28>:
     134:	00420233          	add	tp,tp,tp
     138:	00420233          	add	tp,tp,tp
     13c:	00440233          	add	tp,s0,tp
     140:	00022203          	lw	tp,0(tp) # 0 <_start>
     144:	fe412223          	sw	tp,-28(sp)
     148:	fed14183          	lbu	gp,-19(sp)
     14c:	fea14203          	lbu	tp,-22(sp)
     150:	004181b3          	add	gp,gp,tp
     154:	fe714203          	lbu	tp,-25(sp)
     158:	004181b3          	add	gp,gp,tp
     15c:	fe312223          	sw	gp,-28(sp)
     160:	fee14183          	lbu	gp,-18(sp)
     164:	feb14203          	lbu	tp,-21(sp)
     168:	004181b3          	add	gp,gp,tp
     16c:	fe3102a3          	sb	gp,-27(sp)
     170:	fef14183          	lbu	gp,-17(sp)
     174:	fe310323          	sb	gp,-26(sp)
     178:	fe412183          	lw	gp,-28(sp)
     17c:	00008237          	lui	tp,0x8
     180:	00020213          	addi	tp,tp,0 # 8000 <_logic_shift_table+0x6a00>
     184:	00440433          	add	s0,s0,tp
     188:	ff314203          	lbu	tp,-13(sp)

0000018c <slli_31>:
     18c:	00420233          	add	tp,tp,tp
     190:	00420233          	add	tp,tp,tp
     194:	00440233          	add	tp,s0,tp
     198:	00022203          	lw	tp,0(tp) # 0 <_start>
     19c:	ffc12403          	lw	s0,-4(sp)
     1a0:	004181b3          	add	gp,gp,tp
     1a4:	00074503          	lbu	a0,0(a4)
     1a8:	00350533          	add	a0,a0,gp
     1ac:	0006a603          	lw	a2,0(a3)
     1b0:	00270713          	addi	a4,a4,2
     1b4:	00468693          	addi	a3,a3,4

000001b8 <sub_32>:
     1b8:	fe312a23          	sw	gp,-12(sp)
     1bc:	fec12423          	sw	a2,-24(sp)
     1c0:	00031237          	lui	tp,0x31
     1c4:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     1c8:	feb14183          	lbu	gp,-21(sp)
     1cc:	004181b3          	add	gp,gp,tp
     1d0:	0001c183          	lbu	gp,0(gp)
     1d4:	fe3103a3          	sb	gp,-25(sp)
     1d8:	fea14183          	lbu	gp,-22(sp)
     1dc:	004181b3          	add	gp,gp,tp
     1e0:	0001c183          	lbu	gp,0(gp)
     1e4:	fe310323          	sb	gp,-26(sp)
     1e8:	fe914183          	lbu	gp,-23(sp)
     1ec:	004181b3          	add	gp,gp,tp
     1f0:	0001c183          	lbu	gp,0(gp)
     1f4:	fe3102a3          	sb	gp,-27(sp)
     1f8:	fe814183          	lbu	gp,-24(sp)
     1fc:	004181b3          	add	gp,gp,tp
     200:	0001c183          	lbu	gp,0(gp)
     204:	fe310223          	sb	gp,-28(sp)
     208:	ff412183          	lw	gp,-12(sp)
     20c:	fe412203          	lw	tp,-28(sp)
     210:	00450533          	add	a0,a0,tp
     214:	00150513          	addi	a0,a0,1
     218:	fea12823          	sw	a0,-16(sp)
     21c:	fe812e23          	sw	s0,-4(sp)
     220:	00001437          	lui	s0,0x1
     224:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
     228:	ff014183          	lbu	gp,-16(sp)
     22c:	003401b3          	add	gp,s0,gp
     230:	0001c183          	lbu	gp,0(gp)
     234:	ff114203          	lbu	tp,-15(sp)
     238:	00440233          	add	tp,s0,tp
     23c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     240:	004181b3          	add	gp,gp,tp
     244:	ff214203          	lbu	tp,-14(sp)
     248:	00440233          	add	tp,s0,tp
     24c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     250:	004181b3          	add	gp,gp,tp
     254:	ff314203          	lbu	tp,-13(sp)
     258:	00440233          	add	tp,s0,tp
     25c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     260:	004181b3          	add	gp,gp,tp
     264:	00001237          	lui	tp,0x1
     268:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     26c:	00320233          	add	tp,tp,gp
     270:	00024503          	lbu	a0,0(tp) # 0 <_start>
     274:	ffc12403          	lw	s0,-4(sp)
     278:	00e12223          	sw	a4,4(sp)
     27c:	00d12023          	sw	a3,0(sp)
     280:	01800093          	addi	ra,zero,24
     284:	000080e7          	jalr	ra,0(ra)
     288:	00412703          	lw	a4,4(sp)
     28c:	000497b7          	lui	a5,0x49
     290:	6c078793          	addi	a5,a5,1728 # 496c0 <_bss_start>
     294:	00012683          	lw	a3,0(sp)

00000298 <bne_47.L9>:
     298:	fee12823          	sw	a4,-16(sp)
     29c:	fef12623          	sw	a5,-20(sp)
     2a0:	fe812e23          	sw	s0,-4(sp)
     2a4:	fe912c23          	sw	s1,-8(sp)
     2a8:	00001437          	lui	s0,0x1
     2ac:	30040413          	addi	s0,s0,768 # 1300 <_check_same_array>
     2b0:	ff014183          	lbu	gp,-16(sp)
     2b4:	00340233          	add	tp,s0,gp
     2b8:	00100193          	addi	gp,zero,1
     2bc:	00320023          	sb	gp,0(tp) # 0 <_start>
     2c0:	fec14183          	lbu	gp,-20(sp)
     2c4:	003401b3          	add	gp,s0,gp
     2c8:	00018023          	sb	zero,0(gp)
     2cc:	00024183          	lbu	gp,0(tp) # 0 <_start>
     2d0:	ff114483          	lbu	s1,-15(sp)
     2d4:	00940233          	add	tp,s0,s1
     2d8:	00100493          	addi	s1,zero,1
     2dc:	00920023          	sb	s1,0(tp) # 0 <_start>
     2e0:	fed14483          	lbu	s1,-19(sp)
     2e4:	009404b3          	add	s1,s0,s1
     2e8:	00048023          	sb	zero,0(s1)
     2ec:	00024483          	lbu	s1,0(tp) # 0 <_start>
     2f0:	009181b3          	add	gp,gp,s1
     2f4:	ff214483          	lbu	s1,-14(sp)
     2f8:	00940233          	add	tp,s0,s1
     2fc:	00100493          	addi	s1,zero,1
     300:	00920023          	sb	s1,0(tp) # 0 <_start>
     304:	fee14483          	lbu	s1,-18(sp)
     308:	009404b3          	add	s1,s0,s1
     30c:	00048023          	sb	zero,0(s1)
     310:	00024483          	lbu	s1,0(tp) # 0 <_start>
     314:	009181b3          	add	gp,gp,s1
     318:	ff314483          	lbu	s1,-13(sp)
     31c:	00940233          	add	tp,s0,s1
     320:	00100493          	addi	s1,zero,1
     324:	00920023          	sb	s1,0(tp) # 0 <_start>
     328:	fef14483          	lbu	s1,-17(sp)
     32c:	009404b3          	add	s1,s0,s1
     330:	00048023          	sb	zero,0(s1)
     334:	00024483          	lbu	s1,0(tp) # 0 <_start>
     338:	009181b3          	add	gp,gp,s1
     33c:	00001237          	lui	tp,0x1
     340:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     344:	00320233          	add	tp,tp,gp
     348:	00024203          	lbu	tp,0(tp) # 0 <_start>
     34c:	ff812483          	lw	s1,-8(sp)
     350:	ffc12403          	lw	s0,-4(sp)

00000354 <slli_56>:
     354:	00420233          	add	tp,tp,tp
     358:	00420233          	add	tp,tp,tp
     35c:	00410233          	add	tp,sp,tp
     360:	37800193          	addi	gp,zero,888
     364:	fe312823          	sw	gp,-16(sp)
     368:	0e000193          	addi	gp,zero,224
     36c:	fe312623          	sw	gp,-20(sp)
     370:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffadfec>
     374:	00020067          	jalr	zero,0(tp) # 0 <_start>

00000378 <non_taken_47.L9>:
     378:	00049737          	lui	a4,0x49
     37c:	67070713          	addi	a4,a4,1648 # 49670 <lhu_ans>
     380:	00072683          	lw	a3,0(a4)
     384:	fe012823          	sw	zero,-16(sp)
     388:	0014c203          	lbu	tp,1(s1)
     38c:	fe4108a3          	sb	tp,-15(sp)
     390:	ff012203          	lw	tp,-16(sp)
     394:	0004c503          	lbu	a0,0(s1)
     398:	00450533          	add	a0,a0,tp
     39c:	00470713          	addi	a4,a4,4
     3a0:	00e12023          	sw	a4,0(sp)

000003a4 <sub_62>:
     3a4:	fe312a23          	sw	gp,-12(sp)
     3a8:	fed12423          	sw	a3,-24(sp)
     3ac:	00031237          	lui	tp,0x31
     3b0:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     3b4:	feb14183          	lbu	gp,-21(sp)
     3b8:	004181b3          	add	gp,gp,tp
     3bc:	0001c183          	lbu	gp,0(gp)
     3c0:	fe3103a3          	sb	gp,-25(sp)
     3c4:	fea14183          	lbu	gp,-22(sp)
     3c8:	004181b3          	add	gp,gp,tp
     3cc:	0001c183          	lbu	gp,0(gp)
     3d0:	fe310323          	sb	gp,-26(sp)
     3d4:	fe914183          	lbu	gp,-23(sp)
     3d8:	004181b3          	add	gp,gp,tp
     3dc:	0001c183          	lbu	gp,0(gp)
     3e0:	fe3102a3          	sb	gp,-27(sp)
     3e4:	fe814183          	lbu	gp,-24(sp)
     3e8:	004181b3          	add	gp,gp,tp
     3ec:	0001c183          	lbu	gp,0(gp)
     3f0:	fe310223          	sb	gp,-28(sp)
     3f4:	ff412183          	lw	gp,-12(sp)
     3f8:	fe412203          	lw	tp,-28(sp)
     3fc:	00450533          	add	a0,a0,tp
     400:	00150513          	addi	a0,a0,1
     404:	fea12823          	sw	a0,-16(sp)
     408:	fe812e23          	sw	s0,-4(sp)
     40c:	00001437          	lui	s0,0x1
     410:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
     414:	ff014183          	lbu	gp,-16(sp)
     418:	003401b3          	add	gp,s0,gp
     41c:	0001c183          	lbu	gp,0(gp)
     420:	ff114203          	lbu	tp,-15(sp)
     424:	00440233          	add	tp,s0,tp
     428:	00024203          	lbu	tp,0(tp) # 0 <_start>
     42c:	004181b3          	add	gp,gp,tp
     430:	ff214203          	lbu	tp,-14(sp)
     434:	00440233          	add	tp,s0,tp
     438:	00024203          	lbu	tp,0(tp) # 0 <_start>
     43c:	004181b3          	add	gp,gp,tp
     440:	ff314203          	lbu	tp,-13(sp)
     444:	00440233          	add	tp,s0,tp
     448:	00024203          	lbu	tp,0(tp) # 0 <_start>
     44c:	004181b3          	add	gp,gp,tp
     450:	00001237          	lui	tp,0x1
     454:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     458:	00320233          	add	tp,tp,gp
     45c:	00024503          	lbu	a0,0(tp) # 0 <_start>
     460:	ffc12403          	lw	s0,-4(sp)
     464:	01800093          	addi	ra,zero,24
     468:	000080e7          	jalr	ra,0(ra)
     46c:	00248493          	addi	s1,s1,2
     470:	000497b7          	lui	a5,0x49
     474:	6c078793          	addi	a5,a5,1728 # 496c0 <_bss_start>
     478:	00012703          	lw	a4,0(sp)

0000047c <bne_77.L10>:
     47c:	fe912823          	sw	s1,-16(sp)
     480:	fef12623          	sw	a5,-20(sp)
     484:	fe812e23          	sw	s0,-4(sp)
     488:	fe912c23          	sw	s1,-8(sp)
     48c:	00001437          	lui	s0,0x1
     490:	30040413          	addi	s0,s0,768 # 1300 <_check_same_array>
     494:	ff014183          	lbu	gp,-16(sp)
     498:	00340233          	add	tp,s0,gp
     49c:	00100193          	addi	gp,zero,1
     4a0:	00320023          	sb	gp,0(tp) # 0 <_start>
     4a4:	fec14183          	lbu	gp,-20(sp)
     4a8:	003401b3          	add	gp,s0,gp
     4ac:	00018023          	sb	zero,0(gp)
     4b0:	00024183          	lbu	gp,0(tp) # 0 <_start>
     4b4:	ff114483          	lbu	s1,-15(sp)
     4b8:	00940233          	add	tp,s0,s1
     4bc:	00100493          	addi	s1,zero,1
     4c0:	00920023          	sb	s1,0(tp) # 0 <_start>
     4c4:	fed14483          	lbu	s1,-19(sp)
     4c8:	009404b3          	add	s1,s0,s1
     4cc:	00048023          	sb	zero,0(s1)
     4d0:	00024483          	lbu	s1,0(tp) # 0 <_start>
     4d4:	009181b3          	add	gp,gp,s1
     4d8:	ff214483          	lbu	s1,-14(sp)
     4dc:	00940233          	add	tp,s0,s1
     4e0:	00100493          	addi	s1,zero,1
     4e4:	00920023          	sb	s1,0(tp) # 0 <_start>
     4e8:	fee14483          	lbu	s1,-18(sp)
     4ec:	009404b3          	add	s1,s0,s1
     4f0:	00048023          	sb	zero,0(s1)
     4f4:	00024483          	lbu	s1,0(tp) # 0 <_start>
     4f8:	009181b3          	add	gp,gp,s1
     4fc:	ff314483          	lbu	s1,-13(sp)
     500:	00940233          	add	tp,s0,s1
     504:	00100493          	addi	s1,zero,1
     508:	00920023          	sb	s1,0(tp) # 0 <_start>
     50c:	fef14483          	lbu	s1,-17(sp)
     510:	009404b3          	add	s1,s0,s1
     514:	00048023          	sb	zero,0(s1)
     518:	00024483          	lbu	s1,0(tp) # 0 <_start>
     51c:	009181b3          	add	gp,gp,s1
     520:	00001237          	lui	tp,0x1
     524:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     528:	00320233          	add	tp,tp,gp
     52c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     530:	ff812483          	lw	s1,-8(sp)
     534:	ffc12403          	lw	s0,-4(sp)

00000538 <slli_86>:
     538:	00420233          	add	tp,tp,tp
     53c:	00420233          	add	tp,tp,tp
     540:	00410233          	add	tp,sp,tp
     544:	55c00193          	addi	gp,zero,1372
     548:	fe312823          	sw	gp,-16(sp)
     54c:	38000193          	addi	gp,zero,896
     550:	fe312623          	sw	gp,-20(sp)
     554:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffadfec>
     558:	00020067          	jalr	zero,0(tp) # 0 <_start>

0000055c <non_taken_77.L10>:
     55c:	00244683          	lbu	a3,2(s0)
     560:	00144603          	lbu	a2,1(s0)
     564:	00344703          	lbu	a4,3(s0)
     568:	00444783          	lbu	a5,4(s0)
     56c:	000494b7          	lui	s1,0x49
     570:	64048493          	addi	s1,s1,1600 # 49640 <lwlr_ans>

00000574 <slli_91>:
     574:	00d686b3          	add	a3,a3,a3
     578:	00d686b3          	add	a3,a3,a3
     57c:	00d686b3          	add	a3,a3,a3
     580:	00d686b3          	add	a3,a3,a3
     584:	00d686b3          	add	a3,a3,a3
     588:	00d686b3          	add	a3,a3,a3
     58c:	00d686b3          	add	a3,a3,a3
     590:	00d686b3          	add	a3,a3,a3

00000594 <or_92>:
     594:	fed12823          	sw	a3,-16(sp)
     598:	fec12623          	sw	a2,-20(sp)
     59c:	000116b7          	lui	a3,0x11
     5a0:	60068693          	addi	a3,a3,1536 # 11600 <_logic_shift_table+0x10000>
     5a4:	fe012223          	sw	zero,-28(sp)
     5a8:	ff314203          	lbu	tp,-13(sp)
     5ac:	fe4102a3          	sb	tp,-27(sp)
     5b0:	fef14203          	lbu	tp,-17(sp)
     5b4:	fe410223          	sb	tp,-28(sp)
     5b8:	fe412203          	lw	tp,-28(sp)
     5bc:	00468233          	add	tp,a3,tp
     5c0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     5c4:	fe4105a3          	sb	tp,-21(sp)
     5c8:	ff214203          	lbu	tp,-14(sp)
     5cc:	fe4102a3          	sb	tp,-27(sp)
     5d0:	fee14203          	lbu	tp,-18(sp)
     5d4:	fe410223          	sb	tp,-28(sp)
     5d8:	fe412203          	lw	tp,-28(sp)
     5dc:	00468233          	add	tp,a3,tp
     5e0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     5e4:	fe410523          	sb	tp,-22(sp)
     5e8:	ff114203          	lbu	tp,-15(sp)
     5ec:	fe4102a3          	sb	tp,-27(sp)
     5f0:	fed14203          	lbu	tp,-19(sp)
     5f4:	fe410223          	sb	tp,-28(sp)
     5f8:	fe412203          	lw	tp,-28(sp)
     5fc:	00468233          	add	tp,a3,tp
     600:	00024203          	lbu	tp,0(tp) # 0 <_start>
     604:	fe4104a3          	sb	tp,-23(sp)
     608:	ff014203          	lbu	tp,-16(sp)
     60c:	fe4102a3          	sb	tp,-27(sp)
     610:	fec14203          	lbu	tp,-20(sp)
     614:	fe410223          	sb	tp,-28(sp)
     618:	fe412203          	lw	tp,-28(sp)
     61c:	00468233          	add	tp,a3,tp
     620:	00024203          	lbu	tp,0(tp) # 0 <_start>
     624:	fe410423          	sb	tp,-24(sp)
     628:	fe812683          	lw	a3,-24(sp)
     62c:	0004a503          	lw	a0,0(s1)
     630:	fe012823          	sw	zero,-16(sp)
     634:	fee10923          	sb	a4,-14(sp)
     638:	fee12423          	sw	a4,-24(sp)
     63c:	fe914203          	lbu	tp,-23(sp)
     640:	fe4109a3          	sb	tp,-13(sp)
     644:	ff012703          	lw	a4,-16(sp)

00000648 <or_103>:
     648:	fee12823          	sw	a4,-16(sp)
     64c:	fed12623          	sw	a3,-20(sp)
     650:	00011737          	lui	a4,0x11
     654:	60070713          	addi	a4,a4,1536 # 11600 <_logic_shift_table+0x10000>
     658:	fe012223          	sw	zero,-28(sp)
     65c:	ff314203          	lbu	tp,-13(sp)
     660:	fe4102a3          	sb	tp,-27(sp)
     664:	fef14203          	lbu	tp,-17(sp)
     668:	fe410223          	sb	tp,-28(sp)
     66c:	fe412203          	lw	tp,-28(sp)
     670:	00470233          	add	tp,a4,tp
     674:	00024203          	lbu	tp,0(tp) # 0 <_start>
     678:	fe4105a3          	sb	tp,-21(sp)
     67c:	ff214203          	lbu	tp,-14(sp)
     680:	fe4102a3          	sb	tp,-27(sp)
     684:	fee14203          	lbu	tp,-18(sp)
     688:	fe410223          	sb	tp,-28(sp)
     68c:	fe412203          	lw	tp,-28(sp)
     690:	00470233          	add	tp,a4,tp
     694:	00024203          	lbu	tp,0(tp) # 0 <_start>
     698:	fe410523          	sb	tp,-22(sp)
     69c:	ff114203          	lbu	tp,-15(sp)
     6a0:	fe4102a3          	sb	tp,-27(sp)
     6a4:	fed14203          	lbu	tp,-19(sp)
     6a8:	fe410223          	sb	tp,-28(sp)
     6ac:	fe412203          	lw	tp,-28(sp)
     6b0:	00470233          	add	tp,a4,tp
     6b4:	00024203          	lbu	tp,0(tp) # 0 <_start>
     6b8:	fe4104a3          	sb	tp,-23(sp)
     6bc:	ff014203          	lbu	tp,-16(sp)
     6c0:	fe4102a3          	sb	tp,-27(sp)
     6c4:	fec14203          	lbu	tp,-20(sp)
     6c8:	fe410223          	sb	tp,-28(sp)
     6cc:	fe412203          	lw	tp,-28(sp)
     6d0:	00470233          	add	tp,a4,tp
     6d4:	00024203          	lbu	tp,0(tp) # 0 <_start>
     6d8:	fe410423          	sb	tp,-24(sp)
     6dc:	fe812703          	lw	a4,-24(sp)
     6e0:	fe012823          	sw	zero,-16(sp)
     6e4:	fef109a3          	sb	a5,-13(sp)
     6e8:	ff012783          	lw	a5,-16(sp)

000006ec <or_112>:
     6ec:	fef12823          	sw	a5,-16(sp)
     6f0:	fee12623          	sw	a4,-20(sp)
     6f4:	000117b7          	lui	a5,0x11
     6f8:	60078793          	addi	a5,a5,1536 # 11600 <_logic_shift_table+0x10000>
     6fc:	fe012223          	sw	zero,-28(sp)
     700:	ff314203          	lbu	tp,-13(sp)
     704:	fe4102a3          	sb	tp,-27(sp)
     708:	fef14203          	lbu	tp,-17(sp)
     70c:	fe410223          	sb	tp,-28(sp)
     710:	fe412203          	lw	tp,-28(sp)
     714:	00478233          	add	tp,a5,tp
     718:	00024203          	lbu	tp,0(tp) # 0 <_start>
     71c:	fe4105a3          	sb	tp,-21(sp)
     720:	ff214203          	lbu	tp,-14(sp)
     724:	fe4102a3          	sb	tp,-27(sp)
     728:	fee14203          	lbu	tp,-18(sp)
     72c:	fe410223          	sb	tp,-28(sp)
     730:	fe412203          	lw	tp,-28(sp)
     734:	00478233          	add	tp,a5,tp
     738:	00024203          	lbu	tp,0(tp) # 0 <_start>
     73c:	fe410523          	sb	tp,-22(sp)
     740:	ff114203          	lbu	tp,-15(sp)
     744:	fe4102a3          	sb	tp,-27(sp)
     748:	fed14203          	lbu	tp,-19(sp)
     74c:	fe410223          	sb	tp,-28(sp)
     750:	fe412203          	lw	tp,-28(sp)
     754:	00478233          	add	tp,a5,tp
     758:	00024203          	lbu	tp,0(tp) # 0 <_start>
     75c:	fe4104a3          	sb	tp,-23(sp)
     760:	ff014203          	lbu	tp,-16(sp)
     764:	fe4102a3          	sb	tp,-27(sp)
     768:	fec14203          	lbu	tp,-20(sp)
     76c:	fe410223          	sb	tp,-28(sp)
     770:	fe412203          	lw	tp,-28(sp)
     774:	00478233          	add	tp,a5,tp
     778:	00024203          	lbu	tp,0(tp) # 0 <_start>
     77c:	fe410423          	sb	tp,-24(sp)
     780:	fe812783          	lw	a5,-24(sp)

00000784 <sub_119>:
     784:	fe312a23          	sw	gp,-12(sp)
     788:	fef12423          	sw	a5,-24(sp)
     78c:	00031237          	lui	tp,0x31
     790:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     794:	feb14183          	lbu	gp,-21(sp)
     798:	004181b3          	add	gp,gp,tp
     79c:	0001c183          	lbu	gp,0(gp)
     7a0:	fe3103a3          	sb	gp,-25(sp)
     7a4:	fea14183          	lbu	gp,-22(sp)
     7a8:	004181b3          	add	gp,gp,tp
     7ac:	0001c183          	lbu	gp,0(gp)
     7b0:	fe310323          	sb	gp,-26(sp)
     7b4:	fe914183          	lbu	gp,-23(sp)
     7b8:	004181b3          	add	gp,gp,tp
     7bc:	0001c183          	lbu	gp,0(gp)
     7c0:	fe3102a3          	sb	gp,-27(sp)
     7c4:	fe814183          	lbu	gp,-24(sp)
     7c8:	004181b3          	add	gp,gp,tp
     7cc:	0001c183          	lbu	gp,0(gp)
     7d0:	fe310223          	sb	gp,-28(sp)
     7d4:	ff412183          	lw	gp,-12(sp)
     7d8:	fe412203          	lw	tp,-28(sp)
     7dc:	00450533          	add	a0,a0,tp
     7e0:	00150513          	addi	a0,a0,1
     7e4:	fea12823          	sw	a0,-16(sp)
     7e8:	fe812e23          	sw	s0,-4(sp)
     7ec:	00001437          	lui	s0,0x1
     7f0:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
     7f4:	ff014183          	lbu	gp,-16(sp)
     7f8:	003401b3          	add	gp,s0,gp
     7fc:	0001c183          	lbu	gp,0(gp)
     800:	ff114203          	lbu	tp,-15(sp)
     804:	00440233          	add	tp,s0,tp
     808:	00024203          	lbu	tp,0(tp) # 0 <_start>
     80c:	004181b3          	add	gp,gp,tp
     810:	ff214203          	lbu	tp,-14(sp)
     814:	00440233          	add	tp,s0,tp
     818:	00024203          	lbu	tp,0(tp) # 0 <_start>
     81c:	004181b3          	add	gp,gp,tp
     820:	ff314203          	lbu	tp,-13(sp)
     824:	00440233          	add	tp,s0,tp
     828:	00024203          	lbu	tp,0(tp) # 0 <_start>
     82c:	004181b3          	add	gp,gp,tp
     830:	00001237          	lui	tp,0x1
     834:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     838:	00320233          	add	tp,tp,gp
     83c:	00024503          	lbu	a0,0(tp) # 0 <_start>
     840:	ffc12403          	lw	s0,-4(sp)
     844:	01800093          	addi	ra,zero,24
     848:	000080e7          	jalr	ra,0(ra)
     84c:	00644683          	lbu	a3,6(s0)
     850:	00544603          	lbu	a2,5(s0)
     854:	00744703          	lbu	a4,7(s0)
     858:	00844783          	lbu	a5,8(s0)

0000085c <slli_132>:
     85c:	00d686b3          	add	a3,a3,a3
     860:	00d686b3          	add	a3,a3,a3
     864:	00d686b3          	add	a3,a3,a3
     868:	00d686b3          	add	a3,a3,a3
     86c:	00d686b3          	add	a3,a3,a3
     870:	00d686b3          	add	a3,a3,a3
     874:	00d686b3          	add	a3,a3,a3
     878:	00d686b3          	add	a3,a3,a3

0000087c <or_133>:
     87c:	fed12823          	sw	a3,-16(sp)
     880:	fec12623          	sw	a2,-20(sp)
     884:	000116b7          	lui	a3,0x11
     888:	60068693          	addi	a3,a3,1536 # 11600 <_logic_shift_table+0x10000>
     88c:	fe012223          	sw	zero,-28(sp)
     890:	ff314203          	lbu	tp,-13(sp)
     894:	fe4102a3          	sb	tp,-27(sp)
     898:	fef14203          	lbu	tp,-17(sp)
     89c:	fe410223          	sb	tp,-28(sp)
     8a0:	fe412203          	lw	tp,-28(sp)
     8a4:	00468233          	add	tp,a3,tp
     8a8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     8ac:	fe4105a3          	sb	tp,-21(sp)
     8b0:	ff214203          	lbu	tp,-14(sp)
     8b4:	fe4102a3          	sb	tp,-27(sp)
     8b8:	fee14203          	lbu	tp,-18(sp)
     8bc:	fe410223          	sb	tp,-28(sp)
     8c0:	fe412203          	lw	tp,-28(sp)
     8c4:	00468233          	add	tp,a3,tp
     8c8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     8cc:	fe410523          	sb	tp,-22(sp)
     8d0:	ff114203          	lbu	tp,-15(sp)
     8d4:	fe4102a3          	sb	tp,-27(sp)
     8d8:	fed14203          	lbu	tp,-19(sp)
     8dc:	fe410223          	sb	tp,-28(sp)
     8e0:	fe412203          	lw	tp,-28(sp)
     8e4:	00468233          	add	tp,a3,tp
     8e8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     8ec:	fe4104a3          	sb	tp,-23(sp)
     8f0:	ff014203          	lbu	tp,-16(sp)
     8f4:	fe4102a3          	sb	tp,-27(sp)
     8f8:	fec14203          	lbu	tp,-20(sp)
     8fc:	fe410223          	sb	tp,-28(sp)
     900:	fe412203          	lw	tp,-28(sp)
     904:	00468233          	add	tp,a3,tp
     908:	00024203          	lbu	tp,0(tp) # 0 <_start>
     90c:	fe410423          	sb	tp,-24(sp)
     910:	fe812683          	lw	a3,-24(sp)
     914:	0044a503          	lw	a0,4(s1)
     918:	fe012823          	sw	zero,-16(sp)
     91c:	fee10923          	sb	a4,-14(sp)
     920:	fee12423          	sw	a4,-24(sp)
     924:	fe914203          	lbu	tp,-23(sp)
     928:	fe4109a3          	sb	tp,-13(sp)
     92c:	ff012703          	lw	a4,-16(sp)

00000930 <or_144>:
     930:	fee12823          	sw	a4,-16(sp)
     934:	fed12623          	sw	a3,-20(sp)
     938:	00011737          	lui	a4,0x11
     93c:	60070713          	addi	a4,a4,1536 # 11600 <_logic_shift_table+0x10000>
     940:	fe012223          	sw	zero,-28(sp)
     944:	ff314203          	lbu	tp,-13(sp)
     948:	fe4102a3          	sb	tp,-27(sp)
     94c:	fef14203          	lbu	tp,-17(sp)
     950:	fe410223          	sb	tp,-28(sp)
     954:	fe412203          	lw	tp,-28(sp)
     958:	00470233          	add	tp,a4,tp
     95c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     960:	fe4105a3          	sb	tp,-21(sp)
     964:	ff214203          	lbu	tp,-14(sp)
     968:	fe4102a3          	sb	tp,-27(sp)
     96c:	fee14203          	lbu	tp,-18(sp)
     970:	fe410223          	sb	tp,-28(sp)
     974:	fe412203          	lw	tp,-28(sp)
     978:	00470233          	add	tp,a4,tp
     97c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     980:	fe410523          	sb	tp,-22(sp)
     984:	ff114203          	lbu	tp,-15(sp)
     988:	fe4102a3          	sb	tp,-27(sp)
     98c:	fed14203          	lbu	tp,-19(sp)
     990:	fe410223          	sb	tp,-28(sp)
     994:	fe412203          	lw	tp,-28(sp)
     998:	00470233          	add	tp,a4,tp
     99c:	00024203          	lbu	tp,0(tp) # 0 <_start>
     9a0:	fe4104a3          	sb	tp,-23(sp)
     9a4:	ff014203          	lbu	tp,-16(sp)
     9a8:	fe4102a3          	sb	tp,-27(sp)
     9ac:	fec14203          	lbu	tp,-20(sp)
     9b0:	fe410223          	sb	tp,-28(sp)
     9b4:	fe412203          	lw	tp,-28(sp)
     9b8:	00470233          	add	tp,a4,tp
     9bc:	00024203          	lbu	tp,0(tp) # 0 <_start>
     9c0:	fe410423          	sb	tp,-24(sp)
     9c4:	fe812703          	lw	a4,-24(sp)
     9c8:	fe012823          	sw	zero,-16(sp)
     9cc:	fef109a3          	sb	a5,-13(sp)
     9d0:	ff012783          	lw	a5,-16(sp)

000009d4 <or_153>:
     9d4:	fef12823          	sw	a5,-16(sp)
     9d8:	fee12623          	sw	a4,-20(sp)
     9dc:	000117b7          	lui	a5,0x11
     9e0:	60078793          	addi	a5,a5,1536 # 11600 <_logic_shift_table+0x10000>
     9e4:	fe012223          	sw	zero,-28(sp)
     9e8:	ff314203          	lbu	tp,-13(sp)
     9ec:	fe4102a3          	sb	tp,-27(sp)
     9f0:	fef14203          	lbu	tp,-17(sp)
     9f4:	fe410223          	sb	tp,-28(sp)
     9f8:	fe412203          	lw	tp,-28(sp)
     9fc:	00478233          	add	tp,a5,tp
     a00:	00024203          	lbu	tp,0(tp) # 0 <_start>
     a04:	fe4105a3          	sb	tp,-21(sp)
     a08:	ff214203          	lbu	tp,-14(sp)
     a0c:	fe4102a3          	sb	tp,-27(sp)
     a10:	fee14203          	lbu	tp,-18(sp)
     a14:	fe410223          	sb	tp,-28(sp)
     a18:	fe412203          	lw	tp,-28(sp)
     a1c:	00478233          	add	tp,a5,tp
     a20:	00024203          	lbu	tp,0(tp) # 0 <_start>
     a24:	fe410523          	sb	tp,-22(sp)
     a28:	ff114203          	lbu	tp,-15(sp)
     a2c:	fe4102a3          	sb	tp,-27(sp)
     a30:	fed14203          	lbu	tp,-19(sp)
     a34:	fe410223          	sb	tp,-28(sp)
     a38:	fe412203          	lw	tp,-28(sp)
     a3c:	00478233          	add	tp,a5,tp
     a40:	00024203          	lbu	tp,0(tp) # 0 <_start>
     a44:	fe4104a3          	sb	tp,-23(sp)
     a48:	ff014203          	lbu	tp,-16(sp)
     a4c:	fe4102a3          	sb	tp,-27(sp)
     a50:	fec14203          	lbu	tp,-20(sp)
     a54:	fe410223          	sb	tp,-28(sp)
     a58:	fe412203          	lw	tp,-28(sp)
     a5c:	00478233          	add	tp,a5,tp
     a60:	00024203          	lbu	tp,0(tp) # 0 <_start>
     a64:	fe410423          	sb	tp,-24(sp)
     a68:	fe812783          	lw	a5,-24(sp)

00000a6c <sub_160>:
     a6c:	fe312a23          	sw	gp,-12(sp)
     a70:	fef12423          	sw	a5,-24(sp)
     a74:	00031237          	lui	tp,0x31
     a78:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     a7c:	feb14183          	lbu	gp,-21(sp)
     a80:	004181b3          	add	gp,gp,tp
     a84:	0001c183          	lbu	gp,0(gp)
     a88:	fe3103a3          	sb	gp,-25(sp)
     a8c:	fea14183          	lbu	gp,-22(sp)
     a90:	004181b3          	add	gp,gp,tp
     a94:	0001c183          	lbu	gp,0(gp)
     a98:	fe310323          	sb	gp,-26(sp)
     a9c:	fe914183          	lbu	gp,-23(sp)
     aa0:	004181b3          	add	gp,gp,tp
     aa4:	0001c183          	lbu	gp,0(gp)
     aa8:	fe3102a3          	sb	gp,-27(sp)
     aac:	fe814183          	lbu	gp,-24(sp)
     ab0:	004181b3          	add	gp,gp,tp
     ab4:	0001c183          	lbu	gp,0(gp)
     ab8:	fe310223          	sb	gp,-28(sp)
     abc:	ff412183          	lw	gp,-12(sp)
     ac0:	fe412203          	lw	tp,-28(sp)
     ac4:	00450533          	add	a0,a0,tp
     ac8:	00150513          	addi	a0,a0,1
     acc:	fea12823          	sw	a0,-16(sp)
     ad0:	fe812e23          	sw	s0,-4(sp)
     ad4:	00001437          	lui	s0,0x1
     ad8:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
     adc:	ff014183          	lbu	gp,-16(sp)
     ae0:	003401b3          	add	gp,s0,gp
     ae4:	0001c183          	lbu	gp,0(gp)
     ae8:	ff114203          	lbu	tp,-15(sp)
     aec:	00440233          	add	tp,s0,tp
     af0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     af4:	004181b3          	add	gp,gp,tp
     af8:	ff214203          	lbu	tp,-14(sp)
     afc:	00440233          	add	tp,s0,tp
     b00:	00024203          	lbu	tp,0(tp) # 0 <_start>
     b04:	004181b3          	add	gp,gp,tp
     b08:	ff314203          	lbu	tp,-13(sp)
     b0c:	00440233          	add	tp,s0,tp
     b10:	00024203          	lbu	tp,0(tp) # 0 <_start>
     b14:	004181b3          	add	gp,gp,tp
     b18:	00001237          	lui	tp,0x1
     b1c:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     b20:	00320233          	add	tp,tp,gp
     b24:	00024503          	lbu	a0,0(tp) # 0 <_start>
     b28:	ffc12403          	lw	s0,-4(sp)
     b2c:	01800093          	addi	ra,zero,24
     b30:	000080e7          	jalr	ra,0(ra)
     b34:	00a44683          	lbu	a3,10(s0)
     b38:	00944603          	lbu	a2,9(s0)
     b3c:	00b44703          	lbu	a4,11(s0)
     b40:	00c44783          	lbu	a5,12(s0)

00000b44 <slli_173>:
     b44:	00d686b3          	add	a3,a3,a3
     b48:	00d686b3          	add	a3,a3,a3
     b4c:	00d686b3          	add	a3,a3,a3
     b50:	00d686b3          	add	a3,a3,a3
     b54:	00d686b3          	add	a3,a3,a3
     b58:	00d686b3          	add	a3,a3,a3
     b5c:	00d686b3          	add	a3,a3,a3
     b60:	00d686b3          	add	a3,a3,a3

00000b64 <or_174>:
     b64:	fed12823          	sw	a3,-16(sp)
     b68:	fec12623          	sw	a2,-20(sp)
     b6c:	000116b7          	lui	a3,0x11
     b70:	60068693          	addi	a3,a3,1536 # 11600 <_logic_shift_table+0x10000>
     b74:	fe012223          	sw	zero,-28(sp)
     b78:	ff314203          	lbu	tp,-13(sp)
     b7c:	fe4102a3          	sb	tp,-27(sp)
     b80:	fef14203          	lbu	tp,-17(sp)
     b84:	fe410223          	sb	tp,-28(sp)
     b88:	fe412203          	lw	tp,-28(sp)
     b8c:	00468233          	add	tp,a3,tp
     b90:	00024203          	lbu	tp,0(tp) # 0 <_start>
     b94:	fe4105a3          	sb	tp,-21(sp)
     b98:	ff214203          	lbu	tp,-14(sp)
     b9c:	fe4102a3          	sb	tp,-27(sp)
     ba0:	fee14203          	lbu	tp,-18(sp)
     ba4:	fe410223          	sb	tp,-28(sp)
     ba8:	fe412203          	lw	tp,-28(sp)
     bac:	00468233          	add	tp,a3,tp
     bb0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     bb4:	fe410523          	sb	tp,-22(sp)
     bb8:	ff114203          	lbu	tp,-15(sp)
     bbc:	fe4102a3          	sb	tp,-27(sp)
     bc0:	fed14203          	lbu	tp,-19(sp)
     bc4:	fe410223          	sb	tp,-28(sp)
     bc8:	fe412203          	lw	tp,-28(sp)
     bcc:	00468233          	add	tp,a3,tp
     bd0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     bd4:	fe4104a3          	sb	tp,-23(sp)
     bd8:	ff014203          	lbu	tp,-16(sp)
     bdc:	fe4102a3          	sb	tp,-27(sp)
     be0:	fec14203          	lbu	tp,-20(sp)
     be4:	fe410223          	sb	tp,-28(sp)
     be8:	fe412203          	lw	tp,-28(sp)
     bec:	00468233          	add	tp,a3,tp
     bf0:	00024203          	lbu	tp,0(tp) # 0 <_start>
     bf4:	fe410423          	sb	tp,-24(sp)
     bf8:	fe812683          	lw	a3,-24(sp)
     bfc:	0084a503          	lw	a0,8(s1)
     c00:	fe012823          	sw	zero,-16(sp)
     c04:	fee10923          	sb	a4,-14(sp)
     c08:	fee12423          	sw	a4,-24(sp)
     c0c:	fe914203          	lbu	tp,-23(sp)
     c10:	fe4109a3          	sb	tp,-13(sp)
     c14:	ff012703          	lw	a4,-16(sp)

00000c18 <or_185>:
     c18:	fee12823          	sw	a4,-16(sp)
     c1c:	fed12623          	sw	a3,-20(sp)
     c20:	00011737          	lui	a4,0x11
     c24:	60070713          	addi	a4,a4,1536 # 11600 <_logic_shift_table+0x10000>
     c28:	fe012223          	sw	zero,-28(sp)
     c2c:	ff314203          	lbu	tp,-13(sp)
     c30:	fe4102a3          	sb	tp,-27(sp)
     c34:	fef14203          	lbu	tp,-17(sp)
     c38:	fe410223          	sb	tp,-28(sp)
     c3c:	fe412203          	lw	tp,-28(sp)
     c40:	00470233          	add	tp,a4,tp
     c44:	00024203          	lbu	tp,0(tp) # 0 <_start>
     c48:	fe4105a3          	sb	tp,-21(sp)
     c4c:	ff214203          	lbu	tp,-14(sp)
     c50:	fe4102a3          	sb	tp,-27(sp)
     c54:	fee14203          	lbu	tp,-18(sp)
     c58:	fe410223          	sb	tp,-28(sp)
     c5c:	fe412203          	lw	tp,-28(sp)
     c60:	00470233          	add	tp,a4,tp
     c64:	00024203          	lbu	tp,0(tp) # 0 <_start>
     c68:	fe410523          	sb	tp,-22(sp)
     c6c:	ff114203          	lbu	tp,-15(sp)
     c70:	fe4102a3          	sb	tp,-27(sp)
     c74:	fed14203          	lbu	tp,-19(sp)
     c78:	fe410223          	sb	tp,-28(sp)
     c7c:	fe412203          	lw	tp,-28(sp)
     c80:	00470233          	add	tp,a4,tp
     c84:	00024203          	lbu	tp,0(tp) # 0 <_start>
     c88:	fe4104a3          	sb	tp,-23(sp)
     c8c:	ff014203          	lbu	tp,-16(sp)
     c90:	fe4102a3          	sb	tp,-27(sp)
     c94:	fec14203          	lbu	tp,-20(sp)
     c98:	fe410223          	sb	tp,-28(sp)
     c9c:	fe412203          	lw	tp,-28(sp)
     ca0:	00470233          	add	tp,a4,tp
     ca4:	00024203          	lbu	tp,0(tp) # 0 <_start>
     ca8:	fe410423          	sb	tp,-24(sp)
     cac:	fe812703          	lw	a4,-24(sp)
     cb0:	fe012823          	sw	zero,-16(sp)
     cb4:	fef109a3          	sb	a5,-13(sp)
     cb8:	ff012783          	lw	a5,-16(sp)

00000cbc <or_194>:
     cbc:	fef12823          	sw	a5,-16(sp)
     cc0:	fee12623          	sw	a4,-20(sp)
     cc4:	000117b7          	lui	a5,0x11
     cc8:	60078793          	addi	a5,a5,1536 # 11600 <_logic_shift_table+0x10000>
     ccc:	fe012223          	sw	zero,-28(sp)
     cd0:	ff314203          	lbu	tp,-13(sp)
     cd4:	fe4102a3          	sb	tp,-27(sp)
     cd8:	fef14203          	lbu	tp,-17(sp)
     cdc:	fe410223          	sb	tp,-28(sp)
     ce0:	fe412203          	lw	tp,-28(sp)
     ce4:	00478233          	add	tp,a5,tp
     ce8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     cec:	fe4105a3          	sb	tp,-21(sp)
     cf0:	ff214203          	lbu	tp,-14(sp)
     cf4:	fe4102a3          	sb	tp,-27(sp)
     cf8:	fee14203          	lbu	tp,-18(sp)
     cfc:	fe410223          	sb	tp,-28(sp)
     d00:	fe412203          	lw	tp,-28(sp)
     d04:	00478233          	add	tp,a5,tp
     d08:	00024203          	lbu	tp,0(tp) # 0 <_start>
     d0c:	fe410523          	sb	tp,-22(sp)
     d10:	ff114203          	lbu	tp,-15(sp)
     d14:	fe4102a3          	sb	tp,-27(sp)
     d18:	fed14203          	lbu	tp,-19(sp)
     d1c:	fe410223          	sb	tp,-28(sp)
     d20:	fe412203          	lw	tp,-28(sp)
     d24:	00478233          	add	tp,a5,tp
     d28:	00024203          	lbu	tp,0(tp) # 0 <_start>
     d2c:	fe4104a3          	sb	tp,-23(sp)
     d30:	ff014203          	lbu	tp,-16(sp)
     d34:	fe4102a3          	sb	tp,-27(sp)
     d38:	fec14203          	lbu	tp,-20(sp)
     d3c:	fe410223          	sb	tp,-28(sp)
     d40:	fe412203          	lw	tp,-28(sp)
     d44:	00478233          	add	tp,a5,tp
     d48:	00024203          	lbu	tp,0(tp) # 0 <_start>
     d4c:	fe410423          	sb	tp,-24(sp)
     d50:	fe812783          	lw	a5,-24(sp)

00000d54 <sub_201>:
     d54:	fe312a23          	sw	gp,-12(sp)
     d58:	fef12423          	sw	a5,-24(sp)
     d5c:	00031237          	lui	tp,0x31
     d60:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     d64:	feb14183          	lbu	gp,-21(sp)
     d68:	004181b3          	add	gp,gp,tp
     d6c:	0001c183          	lbu	gp,0(gp)
     d70:	fe3103a3          	sb	gp,-25(sp)
     d74:	fea14183          	lbu	gp,-22(sp)
     d78:	004181b3          	add	gp,gp,tp
     d7c:	0001c183          	lbu	gp,0(gp)
     d80:	fe310323          	sb	gp,-26(sp)
     d84:	fe914183          	lbu	gp,-23(sp)
     d88:	004181b3          	add	gp,gp,tp
     d8c:	0001c183          	lbu	gp,0(gp)
     d90:	fe3102a3          	sb	gp,-27(sp)
     d94:	fe814183          	lbu	gp,-24(sp)
     d98:	004181b3          	add	gp,gp,tp
     d9c:	0001c183          	lbu	gp,0(gp)
     da0:	fe310223          	sb	gp,-28(sp)
     da4:	ff412183          	lw	gp,-12(sp)
     da8:	fe412203          	lw	tp,-28(sp)
     dac:	00450533          	add	a0,a0,tp
     db0:	00150513          	addi	a0,a0,1
     db4:	fea12823          	sw	a0,-16(sp)
     db8:	fe812e23          	sw	s0,-4(sp)
     dbc:	00001437          	lui	s0,0x1
     dc0:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
     dc4:	ff014183          	lbu	gp,-16(sp)
     dc8:	003401b3          	add	gp,s0,gp
     dcc:	0001c183          	lbu	gp,0(gp)
     dd0:	ff114203          	lbu	tp,-15(sp)
     dd4:	00440233          	add	tp,s0,tp
     dd8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     ddc:	004181b3          	add	gp,gp,tp
     de0:	ff214203          	lbu	tp,-14(sp)
     de4:	00440233          	add	tp,s0,tp
     de8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     dec:	004181b3          	add	gp,gp,tp
     df0:	ff314203          	lbu	tp,-13(sp)
     df4:	00440233          	add	tp,s0,tp
     df8:	00024203          	lbu	tp,0(tp) # 0 <_start>
     dfc:	004181b3          	add	gp,gp,tp
     e00:	00001237          	lui	tp,0x1
     e04:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
     e08:	00320233          	add	tp,tp,gp
     e0c:	00024503          	lbu	a0,0(tp) # 0 <_start>
     e10:	ffc12403          	lw	s0,-4(sp)
     e14:	01800093          	addi	ra,zero,24
     e18:	000080e7          	jalr	ra,0(ra)
     e1c:	000496b7          	lui	a3,0x49
     e20:	65068693          	addi	a3,a3,1616 # 49650 <sh_ans>
     e24:	00100493          	addi	s1,zero,1
     e28:	00100793          	addi	a5,zero,1

00000e2c <sll_216>:
     e2c:	fe812e23          	sw	s0,-4(sp)
     e30:	fef12823          	sw	a5,-16(sp)
     e34:	fe910623          	sb	s1,-20(sp)
     e38:	fec14403          	lbu	s0,-20(sp)
     e3c:	00003237          	lui	tp,0x3
     e40:	50020213          	addi	tp,tp,1280 # 3500 <_logic_shift_table+0x1f00>
     e44:	00440433          	add	s0,s0,tp
     e48:	00044403          	lbu	s0,0(s0)
     e4c:	fe012623          	sw	zero,-20(sp)
     e50:	fe8106a3          	sb	s0,-19(sp)
     e54:	fec12403          	lw	s0,-20(sp)

00000e58 <slli_219>:
     e58:	00840433          	add	s0,s0,s0
     e5c:	00840433          	add	s0,s0,s0
     e60:	00031237          	lui	tp,0x31
     e64:	60020213          	addi	tp,tp,1536 # 31600 <_logic_shift_table+0x30000>
     e68:	00440433          	add	s0,s0,tp
     e6c:	fe012623          	sw	zero,-20(sp)
     e70:	ff314203          	lbu	tp,-13(sp)

00000e74 <slli_222>:
     e74:	00420233          	add	tp,tp,tp
     e78:	00420233          	add	tp,tp,tp
     e7c:	00440233          	add	tp,s0,tp
     e80:	00022203          	lw	tp,0(tp) # 0 <_start>
     e84:	fe4107a3          	sb	tp,-17(sp)
     e88:	fec12183          	lw	gp,-20(sp)
     e8c:	ff214203          	lbu	tp,-14(sp)

00000e90 <slli_224>:
     e90:	00420233          	add	tp,tp,tp
     e94:	00420233          	add	tp,tp,tp
     e98:	00440233          	add	tp,s0,tp
     e9c:	00022203          	lw	tp,0(tp) # 0 <_start>
     ea0:	fe410723          	sb	tp,-18(sp)
     ea4:	fe412423          	sw	tp,-24(sp)
     ea8:	fe914203          	lbu	tp,-23(sp)
     eac:	fe4107a3          	sb	tp,-17(sp)
     eb0:	fec12203          	lw	tp,-20(sp)
     eb4:	004181b3          	add	gp,gp,tp
     eb8:	ff114203          	lbu	tp,-15(sp)

00000ebc <slli_228>:
     ebc:	00420233          	add	tp,tp,tp
     ec0:	00420233          	add	tp,tp,tp
     ec4:	00440233          	add	tp,s0,tp
     ec8:	00022203          	lw	tp,0(tp) # 0 <_start>

00000ecc <slli_229>:
     ecc:	00420233          	add	tp,tp,tp
     ed0:	00420233          	add	tp,tp,tp
     ed4:	00420233          	add	tp,tp,tp
     ed8:	00420233          	add	tp,tp,tp
     edc:	00420233          	add	tp,tp,tp
     ee0:	00420233          	add	tp,tp,tp
     ee4:	00420233          	add	tp,tp,tp
     ee8:	00420233          	add	tp,tp,tp
     eec:	004181b3          	add	gp,gp,tp
     ef0:	ff014203          	lbu	tp,-16(sp)

00000ef4 <slli_231>:
     ef4:	00420233          	add	tp,tp,tp
     ef8:	00420233          	add	tp,tp,tp
     efc:	00440233          	add	tp,s0,tp
     f00:	00022203          	lw	tp,0(tp) # 0 <_start>
     f04:	ffc12403          	lw	s0,-4(sp)
     f08:	004187b3          	add	a5,gp,tp
     f0c:	0006a503          	lw	a0,0(a3)
     f10:	fe312a23          	sw	gp,-12(sp)
     f14:	fef12423          	sw	a5,-24(sp)
     f18:	00031237          	lui	tp,0x31
     f1c:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
     f20:	feb14183          	lbu	gp,-21(sp)
     f24:	004181b3          	add	gp,gp,tp
     f28:	0001c183          	lbu	gp,0(gp)
     f2c:	fe3103a3          	sb	gp,-25(sp)
     f30:	fea14183          	lbu	gp,-22(sp)
     f34:	004181b3          	add	gp,gp,tp
     f38:	0001c183          	lbu	gp,0(gp)
     f3c:	fe310323          	sb	gp,-26(sp)
     f40:	fe914183          	lbu	gp,-23(sp)
     f44:	004181b3          	add	gp,gp,tp
     f48:	0001c183          	lbu	gp,0(gp)
     f4c:	fe3102a3          	sb	gp,-27(sp)
     f50:	fe814183          	lbu	gp,-24(sp)
     f54:	004181b3          	add	gp,gp,tp
     f58:	0001c183          	lbu	gp,0(gp)
     f5c:	fe310223          	sb	gp,-28(sp)
     f60:	ff412183          	lw	gp,-12(sp)
     f64:	fe412783          	lw	a5,-28(sp)
     f68:	fe012823          	sw	zero,-16(sp)
     f6c:	fef10923          	sb	a5,-14(sp)
     f70:	fef12423          	sw	a5,-24(sp)
     f74:	fe914203          	lbu	tp,-23(sp)
     f78:	fe4109a3          	sb	tp,-13(sp)
     f7c:	ff012783          	lw	a5,-16(sp)

00000f80 <srli_238>:
     f80:	fe812e23          	sw	s0,-4(sp)
     f84:	fef12823          	sw	a5,-16(sp)
     f88:	0003d437          	lui	s0,0x3d
     f8c:	60040413          	addi	s0,s0,1536 # 3d600 <_logic_shift_table+0x3c000>
     f90:	ff214203          	lbu	tp,-14(sp)

00000f94 <slli_242>:
     f94:	00420233          	add	tp,tp,tp
     f98:	00420233          	add	tp,tp,tp
     f9c:	00440233          	add	tp,s0,tp
     fa0:	00022203          	lw	tp,0(tp) # 0 <_start>
     fa4:	fe412623          	sw	tp,-20(sp)
     fa8:	ff114203          	lbu	tp,-15(sp)

00000fac <slli_244>:
     fac:	00420233          	add	tp,tp,tp
     fb0:	00420233          	add	tp,tp,tp
     fb4:	00440233          	add	tp,s0,tp
     fb8:	00022203          	lw	tp,0(tp) # 0 <_start>
     fbc:	fe412423          	sw	tp,-24(sp)
     fc0:	ff014203          	lbu	tp,-16(sp)

00000fc4 <slli_246>:
     fc4:	00420233          	add	tp,tp,tp
     fc8:	00420233          	add	tp,tp,tp
     fcc:	00440233          	add	tp,s0,tp
     fd0:	00022203          	lw	tp,0(tp) # 0 <_start>
     fd4:	fe412223          	sw	tp,-28(sp)
     fd8:	fed14183          	lbu	gp,-19(sp)
     fdc:	fea14203          	lbu	tp,-22(sp)
     fe0:	004181b3          	add	gp,gp,tp
     fe4:	fe714203          	lbu	tp,-25(sp)
     fe8:	004181b3          	add	gp,gp,tp
     fec:	fe312223          	sw	gp,-28(sp)
     ff0:	fee14183          	lbu	gp,-18(sp)
     ff4:	feb14203          	lbu	tp,-21(sp)
     ff8:	004181b3          	add	gp,gp,tp
     ffc:	fe3102a3          	sb	gp,-27(sp)
    1000:	fef14183          	lbu	gp,-17(sp)
    1004:	fe310323          	sb	gp,-26(sp)
    1008:	fe412183          	lw	gp,-28(sp)
    100c:	ff314203          	lbu	tp,-13(sp)

00001010 <slli_248>:
    1010:	00420233          	add	tp,tp,tp
    1014:	00420233          	add	tp,tp,tp
    1018:	00440233          	add	tp,s0,tp
    101c:	00022203          	lw	tp,0(tp) # 0 <_start>
    1020:	ffc12403          	lw	s0,-4(sp)
    1024:	004187b3          	add	a5,gp,tp

00001028 <sub_249>:
    1028:	fe312a23          	sw	gp,-12(sp)
    102c:	fef12423          	sw	a5,-24(sp)
    1030:	00031237          	lui	tp,0x31
    1034:	50020213          	addi	tp,tp,1280 # 31500 <_logic_shift_table+0x2ff00>
    1038:	feb14183          	lbu	gp,-21(sp)
    103c:	004181b3          	add	gp,gp,tp
    1040:	0001c183          	lbu	gp,0(gp)
    1044:	fe3103a3          	sb	gp,-25(sp)
    1048:	fea14183          	lbu	gp,-22(sp)
    104c:	004181b3          	add	gp,gp,tp
    1050:	0001c183          	lbu	gp,0(gp)
    1054:	fe310323          	sb	gp,-26(sp)
    1058:	fe914183          	lbu	gp,-23(sp)
    105c:	004181b3          	add	gp,gp,tp
    1060:	0001c183          	lbu	gp,0(gp)
    1064:	fe3102a3          	sb	gp,-27(sp)
    1068:	fe814183          	lbu	gp,-24(sp)
    106c:	004181b3          	add	gp,gp,tp
    1070:	0001c183          	lbu	gp,0(gp)
    1074:	fe310223          	sb	gp,-28(sp)
    1078:	ff412183          	lw	gp,-12(sp)
    107c:	fe412203          	lw	tp,-28(sp)
    1080:	00450533          	add	a0,a0,tp
    1084:	00150513          	addi	a0,a0,1
    1088:	00940633          	add	a2,s0,s1
    108c:	fef60fa3          	sb	a5,-1(a2)
    1090:	fef12423          	sw	a5,-24(sp)
    1094:	fe914203          	lbu	tp,-23(sp)
    1098:	00460023          	sb	tp,0(a2)
    109c:	fea12823          	sw	a0,-16(sp)
    10a0:	fe812e23          	sw	s0,-4(sp)
    10a4:	00001437          	lui	s0,0x1
    10a8:	40840413          	addi	s0,s0,1032 # 1408 <_check_8bit_0_table>
    10ac:	ff014183          	lbu	gp,-16(sp)
    10b0:	003401b3          	add	gp,s0,gp
    10b4:	0001c183          	lbu	gp,0(gp)
    10b8:	ff114203          	lbu	tp,-15(sp)
    10bc:	00440233          	add	tp,s0,tp
    10c0:	00024203          	lbu	tp,0(tp) # 0 <_start>
    10c4:	004181b3          	add	gp,gp,tp
    10c8:	ff214203          	lbu	tp,-14(sp)
    10cc:	00440233          	add	tp,s0,tp
    10d0:	00024203          	lbu	tp,0(tp) # 0 <_start>
    10d4:	004181b3          	add	gp,gp,tp
    10d8:	ff314203          	lbu	tp,-13(sp)
    10dc:	00440233          	add	tp,s0,tp
    10e0:	00024203          	lbu	tp,0(tp) # 0 <_start>
    10e4:	004181b3          	add	gp,gp,tp
    10e8:	00001237          	lui	tp,0x1
    10ec:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
    10f0:	00320233          	add	tp,tp,gp
    10f4:	00024503          	lbu	a0,0(tp) # 0 <_start>
    10f8:	ffc12403          	lw	s0,-4(sp)
    10fc:	00d12023          	sw	a3,0(sp)
    1100:	01800093          	addi	ra,zero,24
    1104:	000080e7          	jalr	ra,0(ra)
    1108:	00012683          	lw	a3,0(sp)
    110c:	00248493          	addi	s1,s1,2
    1110:	01100793          	addi	a5,zero,17
    1114:	00468693          	addi	a3,a3,4

00001118 <bne_264.L11>:
    1118:	fe912823          	sw	s1,-16(sp)
    111c:	fef12623          	sw	a5,-20(sp)
    1120:	fe812e23          	sw	s0,-4(sp)
    1124:	fe912c23          	sw	s1,-8(sp)
    1128:	00001437          	lui	s0,0x1
    112c:	30040413          	addi	s0,s0,768 # 1300 <_check_same_array>
    1130:	ff014183          	lbu	gp,-16(sp)
    1134:	00340233          	add	tp,s0,gp
    1138:	00100193          	addi	gp,zero,1
    113c:	00320023          	sb	gp,0(tp) # 0 <_start>
    1140:	fec14183          	lbu	gp,-20(sp)
    1144:	003401b3          	add	gp,s0,gp
    1148:	00018023          	sb	zero,0(gp)
    114c:	00024183          	lbu	gp,0(tp) # 0 <_start>
    1150:	ff114483          	lbu	s1,-15(sp)
    1154:	00940233          	add	tp,s0,s1
    1158:	00100493          	addi	s1,zero,1
    115c:	00920023          	sb	s1,0(tp) # 0 <_start>
    1160:	fed14483          	lbu	s1,-19(sp)
    1164:	009404b3          	add	s1,s0,s1
    1168:	00048023          	sb	zero,0(s1)
    116c:	00024483          	lbu	s1,0(tp) # 0 <_start>
    1170:	009181b3          	add	gp,gp,s1
    1174:	ff214483          	lbu	s1,-14(sp)
    1178:	00940233          	add	tp,s0,s1
    117c:	00100493          	addi	s1,zero,1
    1180:	00920023          	sb	s1,0(tp) # 0 <_start>
    1184:	fee14483          	lbu	s1,-18(sp)
    1188:	009404b3          	add	s1,s0,s1
    118c:	00048023          	sb	zero,0(s1)
    1190:	00024483          	lbu	s1,0(tp) # 0 <_start>
    1194:	009181b3          	add	gp,gp,s1
    1198:	ff314483          	lbu	s1,-13(sp)
    119c:	00940233          	add	tp,s0,s1
    11a0:	00100493          	addi	s1,zero,1
    11a4:	00920023          	sb	s1,0(tp) # 0 <_start>
    11a8:	fef14483          	lbu	s1,-17(sp)
    11ac:	009404b3          	add	s1,s0,s1
    11b0:	00048023          	sb	zero,0(s1)
    11b4:	00024483          	lbu	s1,0(tp) # 0 <_start>
    11b8:	009181b3          	add	gp,gp,s1
    11bc:	00001237          	lui	tp,0x1
    11c0:	40020213          	addi	tp,tp,1024 # 1400 <_same_result_table>
    11c4:	00320233          	add	tp,tp,gp
    11c8:	00024203          	lbu	tp,0(tp) # 0 <_start>
    11cc:	ff812483          	lw	s1,-8(sp)
    11d0:	ffc12403          	lw	s0,-4(sp)

000011d4 <slli_273>:
    11d4:	00420233          	add	tp,tp,tp
    11d8:	00420233          	add	tp,tp,tp
    11dc:	00410233          	add	tp,sp,tp
    11e0:	000011b7          	lui	gp,0x1
    11e4:	20018193          	addi	gp,gp,512 # 1200 <non_taken_264.L11>
    11e8:	fe312823          	sw	gp,-16(sp)
    11ec:	000011b7          	lui	gp,0x1
    11f0:	e2818193          	addi	gp,gp,-472 # e28 <sub_201+0xd4>
    11f4:	fe312623          	sw	gp,-20(sp)
    11f8:	fec22203          	lw	tp,-20(tp) # ffffffec <_end+0xfffadfec>
    11fc:	00020067          	jalr	zero,0(tp) # 0 <_start>

00001200 <non_taken_264.L11>:
    1200:	01012083          	lw	ra,16(sp)
    1204:	00c12403          	lw	s0,12(sp)
    1208:	00812483          	lw	s1,8(sp)
    120c:	00000513          	addi	a0,zero,0
    1210:	01410113          	addi	sp,sp,20
    1214:	00008067          	jalr	zero,0(ra)

00001218 <halt>:
    1218:	00001237          	lui	tp,0x1
    121c:	21820213          	addi	tp,tp,536 # 1218 <halt>
    1220:	00020067          	jalr	zero,0(tp) # 0 <_start>

00001224 <_trm_init>:
    1224:	ff410113          	addi	sp,sp,-12
    1228:	00049537          	lui	a0,0x49
    122c:	60050513          	addi	a0,a0,1536 # 49600 <mainargs>
    1230:	00112423          	sw	ra,8(sp)
    1234:	0b800093          	addi	ra,zero,184
    1238:	000080e7          	jalr	ra,0(ra)
    123c:	000010b7          	lui	ra,0x1
    1240:	21808093          	addi	ra,ra,536 # 1218 <halt>
    1244:	000080e7          	jalr	ra,0(ra)
