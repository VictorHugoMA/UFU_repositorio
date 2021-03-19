#include<stdio.h>
//11 - Soma de n valores (do while)

    int main(){
        int num, i=0, soma=0;

        printf("<<Soma de n valores naturais>>\n");
        printf("Quantos numeros deseja somar? ");
        scanf("%d", &num);

        do{
            soma+=i;
            i++;
        }
        while(i<=num);

        printf("A soma dos %d primeiros numeros naturais e: %d\n", num, soma);
    }