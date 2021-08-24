.macro return0
addiu $v0, $zero, 10
syscall
.end_macro 

.macro printInt(%int)
addiu $v0, $zero, 1
addu $a0, $zero, %int
syscall
.end_macro 

.macro printStr(%str)
addiu $v0, $zero, 4
la $a0, %str
syscall
.end_macro 

.macro printNL
addiu $v0, $zero, 4
la $a0, strnl
syscall
.end_macro

.macro	readInt(%reg)
addiu	$v0, $zero, 5
syscall
addu	%reg, $zero, $v0
.end_macro

.macro push
addiu $sp, $sp, -52
sw $ra, 4($sp)
sw $a0, 8($sp)
sw $a1, 12($sp)
sw $a2, 16($sp)
sw $a3, 20($sp)
sw $s0, 24($sp)
sw $s1, 28($sp)
sw $s2, 32($sp)
sw $s3, 36($sp)
sw $s4, 40($sp)
sw $s5, 44($sp)
sw $s6, 48($sp)
sw $s7, 52($sp)
.end_macro

.macro pop
lw $ra, 4($sp)
lw $a0, 8($sp)
lw $a1, 12($sp)
lw $a2, 16($sp)
lw $a3, 20($sp)
lw $s0, 24($sp)
lw $s1, 28($sp)
lw $s2, 32($sp)
lw $s3, 36($sp)
lw $s4, 40($sp)
lw $s5, 44($sp)
lw $s6, 48($sp)
lw $s7, 52($sp)
addiu $sp, $sp, 52
.end_macro


.data
strnl: .asciiz  "\n"
