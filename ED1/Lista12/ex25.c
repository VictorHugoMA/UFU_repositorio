#include<stdio.h>
//25 - Copia vetor, aloc dentro Funcao

    double *copiarvet(double *vet, int n){
        int i;
        double *p;

        p=(double *)malloc(n*sizeof(double));

        for(i=0; i<n; i++){
            p[i]=vet[i];
        }
        return p;
    }

    int main(){
        int i, n=5;
        double vet_origem[5]={1.2,2.0,3.2,4.0,5.1}, *vet_destino;

        vet_destino=copiarvet(vet_origem, n);

        printf("O vetor de origem eh:");
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vet_origem[i]);
        }
        printf(" %.2lf\n", vet_origem[i]);

        printf("O vetor de destino eh:");
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vet_destino[i]);
        }
        printf(" %.2lf\n", vet_destino[i]);

        free(vet_destino);


    }