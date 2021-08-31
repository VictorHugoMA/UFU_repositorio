.data
x : .word 42
y : .space 4
pi : .float 3.1415
str1 : .asciiz "Digite um int: "

.text
addiu $v0, $zero, 4 #imprimir string
la $a0 , str1
syscall

addiu $v0, $zero, 5 #ler inteiro
syscall
la $at, y
sw $v0, 0($at)
addu $s0, $zero, $v0 #salva variavel lida

addiu $v0, $zero, 10
syscall

