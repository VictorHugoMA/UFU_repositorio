# add rd, rs, rt - rd <= rs + rt
# addu rd, rs, rt - rd <= rs + rt (untrapped - ignora o erro)
# addiu rt, rs, const - rt <= rs + const  (untrapped - ignora o erro)
#
#

.data
n: .space 4
i: .space 4
anterior: .space 4
atual: .space 4
str1: .asciiz "Digite o num de termos: "
strerr: .asciiz "O numero de termos deve ser inteiro positivo"
str21: .asciiz "O fibonacci de "
str22: .asciiz " eh: 1"
str31: .asciiz "O fibonacci de "
str32: .asciiz " eh: "


.text

# printf("Digite o num de termos: ");
addiu $v0, $zero, 4
la $a0, str1
syscall

# scanf("%d", &n);
addiu $v0, $zero, 5
syscall

addu $s0, $zero, $v0  #s0 = n
la $t0, n
sw $s0, 0 ($t0) #MEM[t0+0] = s0

# if(n<=0){
#
#
# }
slt $t0, $zero, $s0  # 0 < n ? se sim t0 <- 1 senao t0 <- 0
bne $t0, $zero, LABEL

# corpo do if
addiu $v0, $zero, 4
la $a0, strerr
syscall
j EXIT

LABEL:
# if(n==1 || n==2){
#	printf("O fib de %d eh", n);
#	return 0;
# }
addiu $t1, $zero, 1
addiu $t2, $zero, 2

EXIT:
# return 0
addiu $v0, $zero, 10
syscall  


