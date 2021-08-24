.data
	.align 2
	file: .asciiz "C:\\UFU_repositorio\\AOC\\teste.txt"
	buff: .space 4

.text
	#fopen
  	li   $v0, 13       # system call for open file
  	la   $a0, file     # output file name
  	li   $a1, 1        # Open for writing (flags are 0: read, 1: write)
  	li   $a2, 0        # mode is ignored
  	syscall            # open a file (file descriptor returned in $v0)
  	move $s6, $v0      # save the file descriptor 

WHILE1:
	beq $s7, $t7, SAI1
    	#####
  	addiu $v0, $zero, 14  #le do arquivo
  	addu $a0, $s0, $zero
  	la $a1, buff
  	addiu $a2, $zero, 1
  	syscall
  	
  	lb $s7, 0($a1)
  	li $v0, 4
  	la $a0, buff
  	syscall
  	#####
  	
  	j WHILE1
  	
SAI1:	  
  	#fclose
  	li   $v0, 16       # system call for close file
  	move $a0, $s6      # file descriptor to close
  	syscall            # close file
