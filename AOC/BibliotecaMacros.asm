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


.data
strnl: .asciiz  "\n"
