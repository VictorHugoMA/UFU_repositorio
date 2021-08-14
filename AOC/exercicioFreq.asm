#2) escreva um programa que calcule a frequencia de um elemento em um
#array  [1 1 2 3 2 4 5 6 5 4 8 9 1 1 14] freq(5)

.include "BibliotecaMacros.asm"

.data
	.align 2
	arr: .space 60	
	strNum: .asciiz "Digite o numero para verificar a frequencia: "
	strDig: .asciiz "Digite um elemento do array: "			
	strFreq: .asciiz "A frequencia eh: "
	
.text
	addu	$s0, $zero, $zero #contador
	addu	$s6, $zero, $zero #contador frequencia
	la	$s7, arr	#pont. pro primeiro elem do arr
	
	printStr(strNum)
	readInt($s5)
	
FOR1:	slti	$t0, $s0, 15	  #s0 <15 -> t0 = 1	
	beq	$t0, $zero, SAI1
	####
	printStr(strDig)
	readInt($s1)
	bne	$s1, $s5, IF1
	addiu	$s6, $s6, 1
IF1: 
	
	sw	$s1, 0($s7)   # MEM[$s7+0] <- $s1
	addiu	$s7,$s7, 4 # apontar pro prox elemento de arr
	####
	addiu	$s0, $s0, 1
	j	FOR1
	
	

SAI1:	

	printNL
	printStr(strFreq)
	printInt($s6)
	printNL

	return0