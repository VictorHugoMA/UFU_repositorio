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
        for(int i=0; i<n; i++){
            printf("%.1lf ", vetord[i]);
        }
        printf("\n");
    }

    int main(){
        double vet[5], maior, menor;
        int i;

        for(i=0; i<5; i++){
            scanf("%lf", &vet[i]);
        }
        maior=vet[0];
        menor=vet[0];

        printf("Vetor: ");
        imprime_vet_double(vet, 5);
        maior_menor_vet(vet, 5, &maior, &menor);
        printf("Maior = %.1lf\n", maior);
        printf("Menor = %.1lf\n", menor);



    }