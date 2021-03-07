#include<stdio.h>
#include<math.h>
//5 - Conversor de numeros binarios

    int main(){
        int b1, b2, b3, b4, dec;

        printf("== Conversor de numeros binarios ==\n");
        printf("Digite o 1o. bit: ");
        scanf("%d", &b1);
        printf("Digite o 2o. bit: ");
        scanf("%d", &b2);
        printf("Digite o 3o. bit: ");
        scanf("%d", &b3);
        printf("Digite o 4o. bit: ");
        scanf("%d", &b4);

        dec = 8*b1 + 4*b2 + 2*b3 + 1*b4;

        printf("O numero binario %d%d%d%d corresponde ao numero decimal %d\n", b1,b2,b3,b4, dec);
    
    }