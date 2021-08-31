.include "BibliotecaMacros.asm"

.text
	addiu $s1, $zero 7
	move $s0, $s1			#pseudo
	
	addu $s0, $zero, $s1		#basica
	
	
	#printInt($s0)
	#printInt($s1)
	
	addiu $t1, $zero, 2
	addiu $t2, $zero, 10
	
	mul $t1, $t2, 42		#pseudo
	
	addiu $at, $zero, 42		#basico
	mul $t1, $t2, $at		#2/2
	
	
	la $s0, 0x10010000 		#basico
	
	lui $at, 0x00001001		#pseudo
	ori $s0, $at, 0x00000000	2/2
	
	
	
	
	return0