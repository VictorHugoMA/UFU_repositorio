#include<stdio.h>
//19 - Negativos vetor funcao

    int negativos(float *vet, int n){
        int total=0;

        for(int i=0; i<n; i++){
            if(vet[i]<0.0){
                total+=1;
            }
        }
        return total;
    }
    void imprime_vet_float(float *vetorf, int n){
        for(int i=0; i<n; i++){
            printf("%.1f ", vetorf[i]);
        }
        printf("\n");
    }

    int main(){
        float vet[5];
        int i;

        for(i=0; i<5; i++){
            scanf("%f", &vet[i]);
        }
        printf("Vetor: ");
        imprime_vet_float(vet, 5);
        printf("Quantidade de negativos no vetor: %d\n", negativos(vet, 5));

    }