#include<stdio.h>
//20 - Copia vetor Funcao

    void copiarvet(int *vet, int *vet2, int n){
        for(int i=0; i<n; i++){
            vet2[i]=vet[i];
        }
    }

    int main(){
        int i, vet[5]={1,2,3,4,5}, vet2[5]={1,2,3,3,6};

        printf("O vetor de origem eh:");
        for(i=0; i<4; i++){
            printf(" %d,", vet[i]);
        }
        printf(" %d", vet[i]);
        
        printf("\n");
        printf("O vetor de destino eh:");
        for(i=0; i<4; i++){
            printf(" %d,", vet2[i]);
        }
        printf(" %d", vet2[i]);

        copiarvet(vet, vet2, 5);

        printf("\n");
        printf("O vetor de destino apos a copia eh:");
        for(i=0; i<4; i++){
            printf(" %d,", vet2[i]);
        }
        printf(" %d", vet2[i]);
        
        
    }