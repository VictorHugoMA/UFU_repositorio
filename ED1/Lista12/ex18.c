#include<stdio.h>
//18 - Maior e menor vetor funcao


    void maior_menor_vet(double *vet, int n, double *maior, double *menor){

        for(int i=0; i<n; i++){
            if(*maior<vet[i])
                *maior=vet[i];

            if(*menor>vet[i])
                *menor=vet[i];
        }
    }
    
    void imprime_vet_double(double *vetord, int n){
        int i;
        for(i=0; i<n-1; i++){
            printf(" %.2lf,", vetord[i]);
        }
        printf(" %.2lf\n", vetord[i]);
    }

    int main(){
        double *vet, maior, menor;
        int i, n;

        printf("Digite o tamnho do vetor: ");
        scanf("%d", &n);
        vet=(double *)malloc(n*sizeof(double));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%lf", &vet[i]);
        }
        maior=vet[0];
        menor=vet[0];

        printf("O vetor principal eh:");
        imprime_vet_double(vet, n);
        maior_menor_vet(vet, n, &maior, &menor);
        printf("O maior valor eh %.2lf\n", maior);
        printf("O menor valor eh %.2lf", menor);

        free(vet);

    }