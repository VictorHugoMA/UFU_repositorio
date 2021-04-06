#include<stdio.h>
//28 - Tentativa copia de vetor Funcao

    void copiarvet(double *vet, double *vet2, int n){
        vet2=(double *)malloc(n*sizeof(double));

        for(int i=0; i<n; i++){
            vet2[i]=vet[i];
        }
    }

    int main(){
        int i, n=5;
        double *vet_origem, *vet_destino;

        vet_origem=(double *)calloc(n,sizeof(double));

        copiarvet(vet_origem, vet_destino, n);

        printf("\nO vetor de origem eh:");
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vet_origem[i]);
        }
        printf(" %.2lf\n", vet_origem[i]);

        printf("O vetor de destino eh:");
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vet_destino[i]);
        }
        printf(" %.2lf\n", vet_destino[i]);

        free(vet_origem);
        free(vet_destino);

    }
/*
A solucao eh declarar o vet_destino como um ponteiro e depois fazer 
a alocao dinamica partindo desse ponteiro na funcao copiarvet
*/