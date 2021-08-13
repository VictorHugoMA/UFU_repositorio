.include "BibliotecaMacros.asm"

.data
str1: .asciiz  "Ola Mundo"

.text

printInt(42)
printNL
printStr(str1)

return0