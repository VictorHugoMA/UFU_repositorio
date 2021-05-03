#include<stdio.h>
//3 - Antecessor e sucessor 

    int main(){
        int x;
        
        printf("<< Sucessor e Antecessor >>\n");
        printf("Digite um numero: ");
        scanf("%d", &x);

        printf("\nAntecessor: %d\n", x-1);
        printf("Numero: %d\n", x);
        printf("Sucessor: %d", x+1);

    }