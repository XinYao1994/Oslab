
uart:     file format elf32-tradlittlemips


Disassembly of section .text:

7ffffe74 <__do_global_dtors_aux>:
7ffffe74:	27bdffd8 	addiu	sp,sp,-40
7ffffe78:	afb00014 	sw	s0,20(sp)
7ffffe7c:	3c108001 	lui	s0,0x8001
7ffffe80:	92020108 	lbu	v0,264(s0)
7ffffe84:	afbf0024 	sw	ra,36(sp)
7ffffe88:	afb30020 	sw	s3,32(sp)
7ffffe8c:	afb2001c 	sw	s2,28(sp)
7ffffe90:	14400028 	bnez	v0,7fffff34 <__do_global_dtors_aux+0xc0>
7ffffe94:	afb10018 	sw	s1,24(sp)
7ffffe98:	3c128001 	lui	s2,0x8001
7ffffe9c:	3c138001 	lui	s3,0x8001
7ffffea0:	265200f8 	addiu	s2,s2,248
7ffffea4:	267300fc 	addiu	s3,s3,252
7ffffea8:	02729823 	subu	s3,s3,s2
7ffffeac:	00139883 	sra	s3,s3,0x2
7ffffeb0:	2673ffff 	addiu	s3,s3,-1
7ffffeb4:	0bffffb5 	j	7ffffed4 <__do_global_dtors_aux+0x60>
7ffffeb8:	3c118001 	lui	s1,0x8001
7ffffebc:	ae22010c 	sw	v0,268(s1)
7ffffec0:	00021080 	sll	v0,v0,0x2
7ffffec4:	00521021 	addu	v0,v0,s2
7ffffec8:	8c420000 	lw	v0,0(v0)
7ffffecc:	0040f809 	jalr	v0
7ffffed0:	00000000 	nop
7ffffed4:	8e22010c 	lw	v0,268(s1)
7ffffed8:	0053182b 	sltu	v1,v0,s3
7ffffedc:	1460fff7 	bnez	v1,7ffffebc <__do_global_dtors_aux+0x48>
7ffffee0:	24420001 	addiu	v0,v0,1
7ffffee4:	3c020000 	lui	v0,0x0
7ffffee8:	24420000 	addiu	v0,v0,0
7ffffeec:	10400008 	beqz	v0,7fffff10 <__do_global_dtors_aux+0x9c>
7ffffef0:	3c020000 	lui	v0,0x0
7ffffef4:	24440000 	addiu	a0,v0,0
7ffffef8:	50800006 	beqzl	a0,7fffff14 <__do_global_dtors_aux+0xa0>
7ffffefc:	3c020000 	lui	v0,0x0
7fffff00:	90420000 	lbu	v0,0(v0)
7fffff04:	2c420002 	sltiu	v0,v0,2
7fffff08:	10400006 	beqz	v0,7fffff24 <__do_global_dtors_aux+0xb0>
7fffff0c:	00000000 	nop
7fffff10:	3c020000 	lui	v0,0x0
7fffff14:	24420000 	addiu	v0,v0,0
7fffff18:	10400004 	beqz	v0,7fffff2c <__do_global_dtors_aux+0xb8>
7fffff1c:	3c048000 	lui	a0,0x8000
7fffff20:	248400ec 	addiu	a0,a0,236
7fffff24:	0c000000 	jal	70000000 <init+0x6fbfff54>
7fffff28:	00000000 	nop
7fffff2c:	24020001 	li	v0,1
7fffff30:	a2020108 	sb	v0,264(s0)
7fffff34:	8fbf0024 	lw	ra,36(sp)
7fffff38:	8fb30020 	lw	s3,32(sp)
7fffff3c:	8fb2001c 	lw	s2,28(sp)
7fffff40:	8fb10018 	lw	s1,24(sp)
7fffff44:	8fb00014 	lw	s0,20(sp)
7fffff48:	03e00008 	jr	ra
7fffff4c:	27bd0028 	addiu	sp,sp,40

7fffff50 <frame_dummy>:
7fffff50:	3c020000 	lui	v0,0x0
7fffff54:	27bdffe8 	addiu	sp,sp,-24
7fffff58:	24420000 	addiu	v0,v0,0
7fffff5c:	10400010 	beqz	v0,7fffffa0 <frame_dummy+0x50>
7fffff60:	afbf0014 	sw	ra,20(sp)
7fffff64:	3c020000 	lui	v0,0x0
7fffff68:	24440000 	addiu	a0,v0,0
7fffff6c:	5080000d 	beqzl	a0,7fffffa4 <frame_dummy+0x54>
7fffff70:	3c020000 	lui	v0,0x0
7fffff74:	90420000 	lbu	v0,0(v0)
7fffff78:	2c420002 	sltiu	v0,v0,2
7fffff7c:	14400008 	bnez	v0,7fffffa0 <frame_dummy+0x50>
7fffff80:	3c058001 	lui	a1,0x8001
7fffff84:	3c078002 	lui	a3,0x8002
7fffff88:	24a50110 	addiu	a1,a1,272
7fffff8c:	00003021 	move	a2,zero
7fffff90:	0c000000 	jal	70000000 <init+0x6fbfff54>
7fffff94:	24e78100 	addiu	a3,a3,-32512
7fffff98:	0bfffff4 	j	7fffffd0 <frame_dummy+0x80>
7fffff9c:	3c048001 	lui	a0,0x8001
7fffffa0:	3c020000 	lui	v0,0x0
7fffffa4:	24420000 	addiu	v0,v0,0
7fffffa8:	10400008 	beqz	v0,7fffffcc <frame_dummy+0x7c>
7fffffac:	3c048000 	lui	a0,0x8000
7fffffb0:	3c058001 	lui	a1,0x8001
7fffffb4:	3c078002 	lui	a3,0x8002
7fffffb8:	248400ec 	addiu	a0,a0,236
7fffffbc:	24a50110 	addiu	a1,a1,272
7fffffc0:	00003021 	move	a2,zero
7fffffc4:	0c000000 	jal	70000000 <init+0x6fbfff54>
7fffffc8:	24e78100 	addiu	a3,a3,-32512
7fffffcc:	3c048001 	lui	a0,0x8001
7fffffd0:	8c820100 	lw	v0,256(a0)
7fffffd4:	10400007 	beqz	v0,7ffffff4 <frame_dummy+0xa4>
7fffffd8:	3c190000 	lui	t9,0x0
7fffffdc:	27390000 	addiu	t9,t9,0
7fffffe0:	13200004 	beqz	t9,7ffffff4 <frame_dummy+0xa4>
7fffffe4:	8fbf0014 	lw	ra,20(sp)
7fffffe8:	24840100 	addiu	a0,a0,256
7fffffec:	03200008 	jr	t9
7ffffff0:	27bd0018 	addiu	sp,sp,24
7ffffff4:	8fbf0014 	lw	ra,20(sp)
7ffffff8:	03e00008 	jr	ra
7ffffffc:	27bd0018 	addiu	sp,sp,24

80000000 <__start>:
80000000:	0c00000a 00000000                       ........

80000008 <main_loop>:
80000008:	0c000013 	jal	8000004c <frame_dummy+0xfc>
8000000c:	ad400000 	sw	zero,0(t2)
80000010:	00402821 	move	a1,v0
80000014:	ad450000 	sw	a1,0(t2)
80000018:	0c00001d 	jal	80000074 <frame_dummy+0x124>
8000001c:	24a40002 	addiu	a0,a1,2
80000020:	1000fff9 	b	80000008 <frame_dummy+0xb8>
80000024:	00000000 	nop

80000028 <init>:
80000028:	3c089fd0 	lui	t0,0x9fd0
8000002c:	350803f8 	ori	t0,t0,0x3f8
80000030:	3c099fd0 	lui	t1,0x9fd0
80000034:	352903fc 	ori	t1,t1,0x3fc
80000038:	3c0a9fd0 	lui	t2,0x9fd0
8000003c:	354a0400 	ori	t2,t2,0x400
80000040:	3c0b9e00 	lui	t3,0x9e00
80000044:	03e00008 	jr	ra
80000048:	3c0c8000 	lui	t4,0x8000

8000004c <read_com_byte>:
8000004c:	00801821 	move	v1,a0
80000050:	00a0e821 	move	sp,a1

80000054 <read_com_byte_wait_loop>:
80000054:	8d240000 	lw	a0,0(t1)
80000058:	30840002 	andi	a0,a0,0x2
8000005c:	1080fffd 	beqz	a0,80000054 <frame_dummy+0x104>
80000060:	00000000 	nop
80000064:	8d020000 	lw	v0,0(t0)
80000068:	00602021 	move	a0,v1
8000006c:	03e00008 	jr	ra
80000070:	03a02821 	move	a1,sp

80000074 <write_com_byte>:
80000074:	8d2d0000 	lw	t5,0(t1)
80000078:	31ad0001 	andi	t5,t5,0x1
8000007c:	11a0fffd 	beqz	t5,80000074 <frame_dummy+0x124>
80000080:	00000000 	nop
80000084:	03e00008 	jr	ra
80000088:	ad040000 	sw	a0,0(t0)

8000008c <__do_global_ctors_aux>:
8000008c:	27bdffe0 	addiu	sp,sp,-32
80000090:	afb00014 	sw	s0,20(sp)
80000094:	3c108001 	lui	s0,0x8001
80000098:	afb10018 	sw	s1,24(sp)
8000009c:	afbf001c 	sw	ra,28(sp)
800000a0:	261000f0 	addiu	s0,s0,240
800000a4:	0800002d 	j	800000b4 <frame_dummy+0x164>
800000a8:	2411ffff 	li	s1,-1
800000ac:	0040f809 	jalr	v0
800000b0:	2610fffc 	addiu	s0,s0,-4
800000b4:	8e020000 	lw	v0,0(s0)
800000b8:	1451fffc 	bne	v0,s1,800000ac <frame_dummy+0x15c>
800000bc:	8fbf001c 	lw	ra,28(sp)
800000c0:	8fb10018 	lw	s1,24(sp)
800000c4:	8fb00014 	lw	s0,20(sp)
800000c8:	03e00008 	jr	ra
800000cc:	27bd0020 	addiu	sp,sp,32

Disassembly of section .init:

00400094 <_init>:
  400094:	27bdffe0 	addiu	sp,sp,-32
  400098:	afbf0014 	sw	ra,20(sp)
  40009c:	0fffffd4 	jal	fffff50 <init+0xfbffea4>
  4000a0:	00000000 	nop
  4000a4:	0c000023 	jal	8c <_init-0x400008>
  4000a8:	00000000 	nop

004000ac <init>:
  4000ac:	8fbf0014 	lw	ra,20(sp)
  4000b0:	03e00008 	jr	ra
  4000b4:	27bd0020 	addiu	sp,sp,32

Disassembly of section .fini:

800000d0 <_fini>:
800000d0:	27bdffe0 	addiu	sp,sp,-32
800000d4:	afbf0014 	sw	ra,20(sp)
800000d8:	0fffff9d 	jal	8ffffe74 <_gp+0xffe7d74>
800000dc:	00000000 	nop

800000e0 <fini>:
800000e0:	8fbf0014 	lw	ra,20(sp)
800000e4:	03e00008 	jr	ra
800000e8:	27bd0020 	addiu	sp,sp,32
