#Ler 10 inteiros do teclado, calcular a soma media e maior
#elemento.
#
#
#DDA 

.include "BibliotecaMacros.asm"

.data
	.align 2
	arr: .space 40	
	strDig: .asciiz "Digite um numero: "
	strSoma: .asciiz "A soma dos elemento eh: "
	strMaior: .asciiz "O maior elemento eh: "
	strMed: .asciiz "A media dos elementos eh: "				
	
.text
	addu	$s0, $zero, $zero #contador

	la	$s7, arr	#pont. pro primeiro elem do arr
	
FOR1:	slti	$t0, $s0, 10	  #s0 <10 -> t0 = 1	
	beq	$t0, $zero, SAI1
	####
	printStr(strDig)
	readInt($s1)
	sw	$s1, 0($s7)   # MEM[$s7+0] <- $s1
	addiu	$s7,$s7, 4 # apontar pro prox elemento de arr
	####
	addiu	$s0, $s0, 1
	j	FOR1
SAI1:	

	addu	$s0, $zero, $zero #contador

	la	$s7, arr	#pont. pro primeiro elem do arr
	addu	$s6, $zero, $zero  #maior
	addu	$s5, $zero, $zero  #soma
	
FOR2:	slti	$t0, $s0, 10	  #s0 <10 -> t0 = 1	
	beq	$t0, $zero, SAI2
	
	lw	$s1, 0($s7)   # s1 <- MEM[$s7+0]
	addiu	$s7,$s7, 4
	
	#soma
	addu	$s5, $s5, $s1
	
	#maior
	slt	$t1, $s1, $s6 #  arr[i] < maior ?
	bne	$t1, $zero, SAIIF1 
	addu	$s6, $zero, $s1  # troca
	
SAIIF1:	addiu	$s0, $s0, 1
	j	FOR2
	
SAI2:	      
	div  	$t0, $s5, $s0
	
	printNL
	printStr(strSoma)
	printInt($s5)
	printNL
	printStr(strMed)
	printInt($t0)
	printNL
	printStr(strMaior)
	printInt($s6)
	printNL

	return0

#1) escreva um programa que calcule o fatorial de N. (sem funcoes)

#2) escreva um programa que calcule a frequencia de um elemento em um
#array  [1 1 2 3 2 4 5 6 5 4 8 9 1 1 14] freq(5)