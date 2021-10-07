.text	
	addu	$s0, $zero, $zero #contador
	addu	$s5, $zero, $zero  #soma
	
FOR1:	
	slti	$t0, $s0, 5	  #s0 <5 -> t0 = 1	
	beq	$t0, $zero, SAI1
	####
	
	addiu	$v0, $zero, 5
	syscall
	addu 	$s1, $zero, $v0
	
	addu	$s5, $s5, $s1
	####
	addiu	$s0, $s0, 1
	j	FOR1


SAI1:
	addiu $v0, $zero, 1 #printInt
	addu $a0, $zero, $s5
	syscall