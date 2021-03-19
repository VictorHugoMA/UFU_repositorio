#include<stdio.h>
//1 - Leitura de vetor sem loop

    int main(){
        int vet[6];

        printf("<< Listando um vetor >>\n");
        printf("Entre com o numero 1: ");
        scanf("%d", &vet[0]);
        printf("Entre com o numero 2: ");
        scanf("%d", &vet[1]);
        printf("Entre com o numero 3: ");
        scanf("%d", &vet[2]);
        printf("Entre com o numero 4: ");
        scanf("%d", &vet[3]);
        printf("Entre com o numero 5: ");
        scanf("%d", &vet[4]);
        printf("Entre com o numero 6: ");
        scanf("%d", &vet[5]);

        printf("\nValores lidos: %d %d %d %d %d %d\n", vet[0],vet[1],vet[2],vet[3],vet[4],vet[5]);
    }