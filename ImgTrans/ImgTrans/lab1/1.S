
uu:     file format elf32-tradbigmips


Disassembly of section .text:

7ffffe74 <__do_global_dtors_aux>:
7ffffe74:	d8ffbd27 	ldc2	$31,-17113(a3)
7ffffe78:	1400b0af 	bnez	zero,7ffec138 <init+0x7fbec08c>
7ffffe7c:	0180103c 	0x180103c
7ffffe80:	04010292 	b	800008cc <frame_dummy+0x97c>
7ffffe84:	2400bfaf 	li	zero,-16465
7ffffe88:	2000b3af 	addi	zero,zero,-19537
7ffffe8c:	1c00b2af 	bgtz	zero,7ffec94c <init+0x7fbec8a0>
7ffffe90:	28004014 	slti	zero,zero,16404
7ffffe94:	1800b1af 	blez	zero,7ffec554 <init+0x7fbec4a8>
7ffffe98:	0180123c 	0x180123c
7ffffe9c:	0180133c 	0x180133c
7ffffea0:	f4005226 	sdc1	$f0,21030(zero)
7ffffea4:	f8007326 	sdc2	$0,29478(zero)
7ffffea8:	23987202 	addi	t8,gp,29186
7ffffeac:	83981300 	lb	t8,4864(gp)
7ffffeb0:	ffff7326 	sdc3	$31,29478(ra)
7ffffeb4:	b5ffff0b 	0xb5ffff0b
7ffffeb8:	0180113c 	0x180113c
7ffffebc:	080122ae 	j	70048ab8 <init+0x6fc48a0c>
7ffffec0:	80100200 	lb	s0,512(zero)
7ffffec4:	21105200 	addi	s0,t0,20992
7ffffec8:	0000428c 	syscall	0x10a
7ffffecc:	09f84000 	j	77e10000 <init+0x77a0ff54>
7ffffed0:	00000000 	nop
7ffffed4:	0801228e 	j	70048a38 <init+0x6fc4898c>
7ffffed8:	2b185300 	slti	t8,t8,21248
7ffffedc:	f7ff6014 	sdc1	$f31,24596(ra)
7ffffee0:	01004224 	0x1004224
7ffffee4:	0000023c 	0x23c
7ffffee8:	00004224 	0x4224
7ffffeec:	08004010 	j	70010040 <init+0x6fc0ff94>
7ffffef0:	0000023c 	0x23c
7ffffef4:	00004424 	0x4424
7ffffef8:	06008050 	bltz	s0,7ffe003c <init+0x7fbdff90>
7ffffefc:	0000023c 	0x23c
7fffff00:	00004290 	0x4290
7fffff04:	0200422c 	0x200422c
7fffff08:	06004010 	bltz	s0,8000ff4c <frame_dummy+0xfffc>
7fffff0c:	00000000 	nop
7fffff10:	0000023c 	0x23c
7fffff14:	00004224 	0x4224
7fffff18:	04004010 	bltz	zero,8000ff5c <frame_dummy+0x1000c>
7fffff1c:	0080043c 	0x80043c
7fffff20:	e8008424 	swc2	$0,-31708(zero)
7fffff24:	0000000c 	syscall
7fffff28:	00000000 	nop
7fffff2c:	01000224 	0x1000224
7fffff30:	040102a2 	b	800009bc <frame_dummy+0xa6c>
7fffff34:	2400bf8f 	li	zero,-16497
7fffff38:	2000b38f 	addi	zero,zero,-19569
7fffff3c:	1c00b28f 	bgtz	zero,7ffec97c <init+0x7fbec8d0>
7fffff40:	1800b18f 	blez	zero,7ffec580 <init+0x7fbec4d4>
7fffff44:	1400b08f 	bnez	zero,7ffec184 <init+0x7fbec0d8>
7fffff48:	0800e003 	j	7003800c <init+0x6fc37f60>
7fffff4c:	2800bd27 	slti	zero,zero,-17113

7fffff50 <frame_dummy>:
7fffff50:	0000023c 	0x23c
7fffff54:	e8ffbd27 	swc2	$31,-17113(a3)
7fffff58:	00004224 	0x4224
7fffff5c:	10004010 	b	8000ffa0 <frame_dummy+0x10050>
7fffff60:	1400bfaf 	bnez	zero,7ffefe20 <init+0x7fbefd74>
7fffff64:	0000023c 	0x23c
7fffff68:	00004424 	0x4424
7fffff6c:	0d008050 	jal	74020140 <init+0x73c20094>
7fffff70:	0000023c 	0x23c
7fffff74:	00004290 	0x4290
7fffff78:	0200422c 	0x200422c
7fffff7c:	08004014 	j	70010050 <init+0x6fc0ffa4>
7fffff80:	0180053c 	0x180053c
7fffff84:	0280073c 	0x280073c
7fffff88:	0c01a524 	jal	70069490 <init+0x6fc693e4>
7fffff8c:	21300000 	addi	s0,t1,0
7fffff90:	0000000c 	syscall
7fffff94:	f080e724 	0xf080e724
7fffff98:	f4ffff0b 	sdc1	$f31,-245(a3)
7fffff9c:	0180043c 	0x180043c
7fffffa0:	0000023c 	0x23c
7fffffa4:	00004224 	0x4224
7fffffa8:	08004010 	j	70010040 <init+0x6fc0ff94>
7fffffac:	0080043c 	0x80043c
7fffffb0:	0180053c 	0x180053c
7fffffb4:	0280073c 	0x280073c
7fffffb8:	e8008424 	swc2	$0,-31708(zero)
7fffffbc:	0c01a524 	jal	70069490 <init+0x6fc693e4>
7fffffc0:	21300000 	addi	s0,t1,0
7fffffc4:	0000000c 	syscall
7fffffc8:	f080e724 	0xf080e724
7fffffcc:	0180043c 	0x180043c
7fffffd0:	fc00828c 	sdc3	$0,-32116(zero)
7fffffd4:	07004010 	bltz	t8,80010018 <frame_dummy+0x100c8>
7fffffd8:	0000193c 	0x193c
7fffffdc:	00003927 	0x3927
7fffffe0:	04002013 	bltz	zero,80008030 <frame_dummy+0x80e0>
7fffffe4:	1400bf8f 	bnez	zero,7ffefe24 <init+0x7fbefd78>
7fffffe8:	fc008424 	sdc3	$0,-31708(zero)
7fffffec:	08002003 	j	7000800c <init+0x6fc07f60>
7ffffff0:	1800bd27 	blez	zero,7ffef490 <init+0x7fbef3e4>
7ffffff4:	1400bf8f 	bnez	zero,7ffefe34 <init+0x7fbefd88>
7ffffff8:	0800e003 	j	7003800c <init+0x6fc37f60>
7ffffffc:	1800bd27 	blez	zero,7ffef49c <init+0x7fbef3f0>

80000000 <__start>:
80000000:	0900000c 00000000                       ........

80000008 <main_loop>:
80000008:	1200000c 	beqz	s0,8000003c <frame_dummy+0xec>
8000000c:	000040ad 	0x40ad
80000010:	21284000 	addi	t0,t1,16384
80000014:	1c00000c 	bgtz	zero,80000048 <frame_dummy+0xf8>
80000018:	000045ad 	0x45ad
8000001c:	faff0010 	sdc2	$31,16(s7)
80000020:	00000000 	nop

80000024 <init>:
80000024:	d09f083c 	0xd09f083c
80000028:	f8030835 	sdc2	$3,2101(zero)
8000002c:	d09f093c 	0xd09f093c
80000030:	fc032935 	sdc3	$3,10549(zero)
80000034:	d09f0a3c 	0xd09f0a3c
80000038:	00044a35 	0x44a35
8000003c:	009e0b3c 	0x9e0b3c
80000040:	0800e003 	j	8003800c <frame_dummy+0x380bc>
80000044:	00800c3c 	0x800c3c

80000048 <read_com_byte>:
80000048:	21188000 	addi	t8,t0,-32768
8000004c:	21e8a000 	addi	t0,t7,-24576

80000050 <read_com_byte_wait_loop>:
80000050:	0000248d 	break	0x0,0x92
80000054:	02008430 	tge	s0,zero,0x210
80000058:	fdff8010 	sdc3	$31,-32752(t7)
8000005c:	00000000 	nop
80000060:	0000028d 	break	0x0,0xa
80000064:	21206000 	addi	zero,t1,24576
80000068:	0800e003 	j	8003800c <frame_dummy+0x380bc>
8000006c:	2128a003 	addi	t0,t1,-24573

80000070 <write_com_byte>:
80000070:	00002d8d 	break	0x0,0xb6
80000074:	0100ad31 	tgeu	t0,zero,0x2b4
80000078:	fdffa011 	sdc3	$31,-24559(t7)
8000007c:	00000000 	nop
80000080:	0800e003 	j	8003800c <frame_dummy+0x380bc>
80000084:	000004ad 	0x4ad

80000088 <__do_global_ctors_aux>:
80000088:	e0ffbd27 	sc	ra,-17113(a3)
8000008c:	1400b0af 	bnez	zero,7ffec34c <init+0x7fbec2a0>
80000090:	0180103c 	0x180103c
80000094:	1800b1af 	blez	zero,7ffec754 <init+0x7fbec6a8>
80000098:	1c00bfaf 	bgtz	zero,7ffeff58 <init+0x7fbefeac>
8000009c:	ec001026 	swc3	$0,4134(zero)
800000a0:	2c000008 	sltiu	zero,zero,8
800000a4:	ffff1124 	sdc3	$31,4388(ra)
800000a8:	09f84000 	j	87e10000 <frame_dummy+0x7e100b0>
800000ac:	fcff1026 	sdc3	$31,4134(a3)
800000b0:	0000028e 	0x28e
800000b4:	fcff5114 	sdc3	$31,20756(a3)
800000b8:	1c00bf8f 	bgtz	zero,7ffefef8 <init+0x7fbefe4c>
800000bc:	1800b18f 	blez	zero,7ffec6fc <init+0x7fbec650>
800000c0:	1400b08f 	bnez	zero,7ffec300 <init+0x7fbec254>
800000c4:	0800e003 	j	8003800c <frame_dummy+0x380bc>
800000c8:	2000bd27 	addi	zero,zero,-17113

Disassembly of section .init:

00400094 <_init>:
  400094:	e0ffbd27 	sc	ra,-17113(a3)
  400098:	1400bfaf 	bnez	zero,3eff58 <_init-0x1013c>
  40009c:	d4ffff0f 	ldc1	$f31,-241(a3)
  4000a0:	00000000 	nop
  4000a4:	2200000c 	addi	zero,s0,12
  4000a8:	00000000 	nop

004000ac <init>:
  4000ac:	1400bf8f 	bnez	zero,3efeec <_init-0x101a8>
  4000b0:	0800e003 	j	3800c <_init-0x3c8088>
  4000b4:	2000bd27 	addi	zero,zero,-17113

Disassembly of section .fini:

800000cc <_fini>:
800000cc:	e0ffbd27 	sc	ra,-17113(a3)
800000d0:	1400bfaf 	bnez	zero,7ffeff90 <frame_dummy+0xffff0040>
800000d4:	9dffff0f 	0x9dffff0f
800000d8:	00000000 	nop

800000dc <fini>:
800000dc:	1400bf8f 	bnez	zero,7ffeff1c <frame_dummy+0xfffeffcc>
800000e0:	0800e003 	j	8003800c <_gp+0x1ff1c>
800000e4:	2000bd27 	addi	zero,zero,-17113
