.include "BibliotecaMacros.asm"


.data
	.align 2
	array: .space 4000
	strOrd: .asciiz "Ordenacao do Array"
	strDig: .asciiz "Digite um numero: "
	strT: .asciiz "TESTE"


.text
	addu	$s0, $zero, $zero #contador

	la	$s7, array	  #ponteiro pro primeiro elem do array
	
	printStr(strOrd)
	printNL
	
FOR1:	slti	$t0, $s0, 5	  #s0 <1000 -> t0 = 1	
	beq	$t0, $zero, SAI1
	
	printStr(strDig)
	readInt($s1)
	sw	$s1, 0($s7)       # MEM[$s7+0] <- $s1
	
	addiu	$s7,$s7, 4        # apontar pro prox elemento de array
	addiu	$s0, $s0, 1
	j	FOR1
	
SAI1:
	jal ORDENA
	printStr(strT)
	printNL
	la	$s7, array
	addu $s0, $zero, $zero
	FORP:	slti	$t0, $s0, 5	  	#s0 <1000 -> t0 = 1	
		beq	$t0, $zero, SAIP
		####
		lw	$s1, 0($s7)		# s1 <- MEM[$s7+0]
		printInt($s1)
		printNL
		addiu	$s7,$s7, 4		# apontar pro prox elemento de array
		
		####
		addiu	$s0, $s0, 1		# contador+=1
		j	FORP
		
	SAIP:
	
	
	return0


ORDENA:	addu $s0, $zero, $zero
	FORORD:	slti	$t0, $s0, 5	  	#s0 <1000 -> t0 = 1	
		beq	$t0, $zero, SAI1
		la	$s7, array
		####
		addiu $s1, $s0, 1
		printStr(strT)
		FORORD2:	slti	$t0, $s1, 5 	  	#s0 <1000 -> t0 = 1
				beq	$t0, $zero, SAIORD1
				####
				lw	$s5, 0($s7)
				lw	$s6, 4($s7)
				slt	$t1, $s5, $s6 		#compara
				bne	$t1, $zero, SAIORD2 
				sw	$s6, 0($s7)
				sw	$s5, 4($s7)	
	
				
				####
				addiu	$s1, $s1, 1		# contador+=1
				j	FORORD2
				SAIORD2:
		####
		addiu	$s0, $s0, 1		# contador+=1
		addiu	$s7,$s7, 4		# apontar pro prox elemento de array
		j	FORORD
		SAIORD1:
		
		jr $ra
