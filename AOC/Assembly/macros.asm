.macro return0
addiu $v0, $zero, 10
syscall
.end_macro 

.macro printInt(%intV)
addiu $v0, $zero, 1
addiu $a0, $zero, %intV
syscall
.end_macro 

.macro printfStr(%str)
addiu $v0, $zero, 4
la $a0, %str
syscall
.end_macro 

.macro printNL
addiu $v0, $zero, 4
la $a0, strnl
syscall
.end_macro


.data
strnl: .asciiz  "\n"