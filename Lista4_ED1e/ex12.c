#include<stdio.h>
//12 - Soma de n valores (for)

    int main(){
        int num, soma=0;

        printf("<<Soma de n valores naturais>>\n");
        printf("Quantos numeros deseja somar? ");
        scanf("%d", &num);

        for(int i=0; i<=num; i++){
            soma+=i;
        }
        
        printf("A soma dos %d primeiros numeros naturais e: %d\n", num, soma);
    }