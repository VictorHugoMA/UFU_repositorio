#Escreva um programa em assembly mips que salva os números de 1 a 10 na memória.
#A seguir leia os números da memória, calcule seu quadrado e salve novamente na memória

.text

	#la	$s7, array
	lui $at, 4097
	ori $s7, $at, 0
	addiu 	$s0, $zero, 1		# contador
	addiu 	$s5, $zero, 11 		# maximo


FOR1:	slt	$t0, $s0, $s5	  	# s0 <11 -> t0 = 1	
	beq	$t0, $zero, SAI1
	
	sw	$s0, 0($s7)       	# MEM[$s7+0] <- $s0
	
	addiu	$s7,$s7, 4        	# apontar pro proximo elemento do array
	addiu	$s0, $s0, 1		# +1 no contador
	j	FOR1

SAI1:	#la $s7, array			# volta para a primeira pos do array
	lui $at, 4097
	ori $s7, $at, 0
	addiu 	$s0, $zero, 1		# contador
	addiu 	$s5, $zero, 11 		# maximo


FOR2:	slt	$t0, $s0, $s5	  	# s0 <11 -> t0 = 1	
	beq	$t0, $zero, SAI2
	
	lw	$t1, 0($s7) 
	mul	$s6, $t1, $t1		# calcula o quadrado
	sw	$s6, 0($s7)    	
	
	addiu	$s7,$s7, 4        	# apontar pro proximo elemento do array
	addiu	$s0, $s0, 1		# +1 no contador
	j	FOR2

SAI2: 
	
	
