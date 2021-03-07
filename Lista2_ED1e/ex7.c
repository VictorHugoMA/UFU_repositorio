#include<stdio.h>
//7 - Operadores boleanos 

    int main(){
        int a, b;

        printf("==Operadores Boleanos==\n");
        printf("Digite 0 para falso e nao 0 para verdadeiro\n");
        printf("Entre com o primeiro valor (A): ");
        scanf("%d", &a);
        printf("Entre com o segundo valor (B): ");
        scanf("%d", &b);

        if(a==0 || b==0)
            printf("A and B: 0\n");
            else 
                printf("A and B: 1\n");
        if(a!=0 || b!=0)
            printf("A or B: 1\n");
            else
                printf("A or B: 0\n");
        if(a==0 && b==0 || a!=0 && b!=0)
            printf("A xor B: 0\n");
            else
                printf("A xor B: 1\n");
        if(a==0)
            printf("not A: 1\n");
            else 
                printf("not A: 0\n");    
                
    }