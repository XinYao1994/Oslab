.global __start
__start:
	jal init
main_loop:
		sw $zero, 0($t2)
		jal read_com_byte
		move $a1, $v0
		sw $a1, 0($t2)

		addiu $a0, $a1, 0
		jal write_com_byte

		#bgez $0, -24			
                b main_loop
		
init:
	li $t0,    0x9FD003F8
	li $t1,    0x9FD003FC 
	li $t2,     0x9FD00400
	li $t3, 0x9E000000
	li $t4,   0x80000000
	jr $ra
	
read_com_byte:
	move $v1, $a0
	move $sp, $a1

	read_com_byte_wait_loop:
		lw $a0, 0($t1)
		andi $a0, 0x2
		#beq $4, $0, -8		
                beqz $a0, read_com_byte_wait_loop

	lw $v0, 0($t0)
	
	move $a0, $v1
	move $a1, $sp
	jr $ra
	
write_com_byte:
	write_com_byte_wait_loop:
		lw $t5, 0($t1)
		andi $t5, 0x1
		#beq $13, $0, -8		
                beqz $t5, write_com_byte_wait_loop

	sw $a0, 0($t0)
	jr $ra	
	
	
