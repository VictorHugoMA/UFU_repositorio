#include<stdio.h>
//3 - Vetor em ordem invertida

    int main(){
        int vet[6], i;

        printf("<< Listando um vetor em ordem inversa >>\n");

        for(i=0; i<6; i++){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);
        }

            printf("Ordem inversa dos numeros: ");
            for(i=5; i>=0; i--){
                printf("%d ", vet[i]);
            }
    }