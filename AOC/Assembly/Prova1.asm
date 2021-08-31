.include "BibliotecaMacros.asm"


.data 
	.align 2
	array: .word 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	strDig: .asciiz "Digite um numero: "
	strSoma: .asciiz "A soma do array eh: "
	strMenor: .asciiz "O menor elemento do array eh: "
	strMaior: .asciiz "O maior elemento do array eh: "
	
	
.text
	addu	$s0, $zero, $zero 	#contador
	la	$s7, array		#ponteiro pro primeiro elem do array
	
FOR1:	slti	$t0, $s0, 42	  	#s0 <42 -> t0 = 1	
	beq	$t0, $zero, SAI1
	####
	printStr(strDig)
	readInt($s1)
	sw	$s1, 0($s7)   		# MEM[$s7+0] <- $s1
	addiu	$s7,$s7, 4 		# apontar pro prox elemento de array
	####
	addiu	$s0, $s0, 1		# contador+=1
	j	FOR1
	
SAI1:	
	la $s7, array
	addiu $a0, $zero, 42		#a0 recebe o tamanho do array
	jal SOMA			#chama a funcao de soma
	addu $s6, $v0, $zero
	printNL
	printStr(strSoma)
	printInt($s6)
	
	la $s7, array
	jal MENOR			#chama a funcao do menor
	addu $s6, $v0, $zero
	printNL
	printStr(strMenor)
	printInt($s6)
	
	la $s7, array
	jal MAIOR			#chama a funcao do menor
	addu $s6, $v0, $zero
	printNL
	printStr(strMaior)
	printInt($s6)


	return0

SOMA:	push
	addu $s0, $zero, $zero
	addu $s5, $zero, $zero
	FORS:	slti	$t0, $s0, 42	  	#s0 <42 -> t0 = 1	
		beq	$t0, $zero, SAIS
		####
		lw	$s1, 0($s7)   		# s1 <- MEM[$s7+0]
		addiu	$s7,$s7, 4		# apontar pro prox elemento de array
		
		addu	$s5, $s5, $s1		#soma
		####
		addiu	$s0, $s0, 1		# contador+=1
		j	FORS
		
	SAIS:	
	addu $v0, $s5, $zero
	pop
	jr $ra

MENOR:	push
	addu $s0, $zero, $zero
	lw	$s5, 0($s7)
	FORME:	slti	$t0, $s0, 42	  	#s0 <42 -> t0 = 1	
		beq	$t0, $zero, SAIME
	
		lw	$s1, 0($s7)   		# s1 <- MEM[$s7+0]
		addiu	$s7,$s7, 4

		sgt	$t1, $s1, $s5		#compara
		bne	$t1, $zero, SAIIFME 
		addu	$s5, $zero, $s1  	#se menor troca
	
	SAIIFME: addiu	$s0, $s0, 1
		 j FORME
	
	SAIME:
		addu $v0, $s5, $zero

	pop
	jr $ra

	
MAIOR:	push
	addu $s0, $zero, $zero
	lw	$s5, 0($s7)
	FORMA:	slti	$t0, $s0, 42	  	#s0 <42 -> t0 = 1	
		beq	$t0, $zero, SAIMA
	
		lw	$s1, 0($s7)   		# s1 <- MEM[$s7+0]
		addiu	$s7,$s7, 4
		
		slt	$t1, $s1, $s5 		#compara
		bne	$t1, $zero, SAIIFMA 
		addu	$s5, $zero, $s1  	#se maior troca
	
	SAIIFMA: addiu	$s0, $s0, 1
		 j FORMA
	
	SAIMA:
		addu $v0, $s5, $zero

	pop
	jr $ra