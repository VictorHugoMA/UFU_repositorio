#include<stdio.h>
//10 - Operadores boleanos(logicos)

    int main(){
        int a, b;

        printf("==Operadores Boleanos==\n");
        printf("Digite 0 para falso e nao 0 para verdadeiro\n");
        printf("Entre com o primeiro valor (A): ");
        scanf("%d", &a);
        printf("Entre com o segundo valor (B): ");
        scanf("%d", &b);
   
        if(a==0 || b==0)
            printf("A and B: FALSO\n");
            else 
                printf("A and B: VERDADEIRO\n");
        if(a!=0 || b!=0)
            printf("A or B: VERDADEIRO\n");
            else
                printf("A or B: FALSO\n");
        if(a==0 && b==0 || a!=0 && b!=0)
            printf("A xor B: FALSO\n");
            else
                printf("A xor B: VERDADEIRO\n");
        if(a==0)
            printf("not A: VERDADEIRO\n");
            else 
                printf("not A: FALSO\n");    
                
    }