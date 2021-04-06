#include<stdio.h>
//26 - Converter Funcao

    double *to_double(int *veti, int n){
        double *d; 

        d=(double *)malloc(n*sizeof(double));

        for(int i=0; i<n; i++){
            d[i]=(double)veti[i];
        }
        return d;
    }

    int main(){
        int i, n, *vet;
        double *vet_double;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        vet=(int *)malloc(n*sizeof(int));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%d", &vet[i]);
        }

        vet_double=to_double(vet, n);

        printf("\nO vetor de origem eh:");
        for(i=0; i<n-1; i++){
            printf(" %d,", vet[i]);
        }
        printf(" %d\n", vet[i]);

        printf("O vetor convertido para double eh:");
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vet_double[i]);
        }
        printf(" %.2lf", vet_double[i]);

        free(vet);
        free(vet_double);
        
    }