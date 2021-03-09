#include<stdio.h>
//2 - Leitura de vetor com for

    int main(){
        int vet[6];

        printf("<<Listando um vetor>>\n");

        for(int i=0; i<6; i++){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);
        }

            printf("\nOs valores lidos sao: ");
            for(int i=0; i<6; i++){
                printf("%d ", vet[i]);
            }
    }