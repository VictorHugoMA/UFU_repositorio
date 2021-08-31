#1) escreva um programa que calcule o fatorial de N. (sem funcoes)

.include "BibliotecaMacros.asm"

.data
	.align 2
	strNum: .asciiz "Digite o valor para calcular o fatorial: "		
	strFat: .asciiz "O fatorial eh: "
	
.text
	addiu	$s6, $zero, 1 #fatorial
	
	printStr(strNum)
	readInt($s5)    #numero a se calcular o fatorial
	
FOR1:	sgt	$t0, $s5, 1	  #s5 > 1 -> t0 = 1	
	beq	$t0, $zero, SAI1
	####
	mul $s6, $s6, $s5
	
	####
	addiu 	$s5, $s5, -1
	j	FOR1
	
SAI1:	

	printNL
	printStr(strFat)
	printInt($s6)
	printNL

	return0