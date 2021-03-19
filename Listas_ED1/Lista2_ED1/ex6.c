#include<stdio.h>
//6 - Troca do conteudo de variaveis 

    int main(){
        int a, b, aux;

        printf("== Troca do conteudo de variaveis ==\n");
        printf("Entre com o valor de A: ");
        scanf("%d", &a);
        printf("Entre com o valor de B: ");
        scanf("%d", &b);

        aux=a;
        a=b;
        b=aux;

        printf("Apos a troca, o valor de A e %d e o de B e %d\n", a, b);

    }