
#integrantes : Guilherme Kameoka, Pedro Henrique S. Santana, Victor Hugo Martins Alves

.include "biblioUtil.asm"


.data

	arr:	.word	2,3,5,4,1,6,9,8,7,10,14,11,12,15,13	#array 
	
	n:	.word	15	#tamanho do array
	
.text

	la $t1,arr
	lw $s0,n
	subu $s0,$s0,1
	
	addu $s5,$zero,$zero
	addu $s1,$zero,$zero

FOR1:	
	addu $s2,$zero,$zero
	
	subu $t9,$s0,$s1

	FOR2:
		addu $t2, $t1, 4
		lw $t4, ($t1)
		lw $t5, ($t2)
	
		bleu $t4, $t5, CONTINUE
	
		sw $t4, ($t2)
		sw $t5, ($t1)
	
		addu $s5, $zero, 1
	
	CONTINUE:
	
		beq $s2, $t9, SAI2
		addu $s2, $s2, 1
		addu $t1, $t1, 4
		addu $t2, $t2, 4
		b FOR2
	SAI2:
	
		beqz $s5, SAI1
		beq $s1, $s0, SAI1
		addu $s1, $s1, 1
		la $t1, arr
		b FOR1
SAI1:

	la $t1, arr
	and $s1, $zero, $zero
	
	lw $s5, n

	addu	$s0,$zero,$zero
FORp:	sltu	$t0,$s0,$s5			#printa o resultado
	beq	$t0,$zero,SAIp
	####
	lw    $s1, 0($t1)       
        printInt($s1)
	printNL
	addiu	$t1,$t1,4
	
	####
	addiu	$s0,$s0,1
	j	FORp
	
SAIp:						
	return0
