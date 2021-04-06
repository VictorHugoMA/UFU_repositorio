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
        int i;
        for(i=0; i<n-1; i++){
            printf(" %.2f,", vetorf[i]);
        }
        printf(" %.2f\n", vetorf[i]);
    }

    int main(){
        int i, n;
        float *vet;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        vet=(float *)malloc(n*sizeof(float));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%f", &vet[i]);
        }
        printf("O vetor principal eh:");
        imprime_vet_float(vet, n);
        printf("O vetor tem %d numero(s) negativo(s)", negativos(vet, n));

        free(vet);
    }