.include "BibliotecaMacros.asm"


.data
	.align 2
	array: .space 4000
	strOrd: .asciiz "Ordenacao do Array"
	strDig: .asciiz "Digite um numero: "


.text
	addu	$s0, $zero, $zero #contador

	la	$s7, array	  #ponteiro pro primeiro elem do array
	
	printStr(strOrd)
	printNL
	
FOR1:	slti	$t0, $s0, 1000	  #s0 <1000 -> t0 = 1	
	beq	$t0, $zero, SAI1
	
	printStr(strDig)
	readInt($s1)
	sw	$s1, 0($s7)       # MEM[$s7+0] <- $s1
	
	addiu	$s7,$s7, 4        # apontar pro prox elemento de array
	addiu	$s0, $s0, 1
	j	FOR1
	
SAI1:
	
	
	return0