#include<stdio.h>
//10 - Soma de n valores (while)

    int main(){
        int num, i=0, soma=0;

        printf("<<Soma de n valores naturais>>\n");
        printf("Quantos numeros deseja somar? ");
        scanf("%d", &num);

        while(i<=num){
            soma+=i;
            i++;
        }
        printf("A soma dos %d primeiros numeros naturais e: %d\n", num, soma);
    }