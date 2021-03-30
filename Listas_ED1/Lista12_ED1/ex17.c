#include<stdio.h>
//17 - Funcoes vetor

    void imprime_vet_int(int *vetori, int n){
        for(int i=0; i<n; i++){
            printf("%d\n", vetori[i]);
        }
    }
    void imprime_vet_double(double *vetord, int n){
        for(int i=0; i<n; i++){
            printf("%lf\n", vetord[i]);
        }
    }
    void imprime_vet_float(float *vetorf, int n){
        for(int i=0; i<n; i++){
            printf("%f\n", vetorf[i]);
        }
    }
    
    //exemplo
    int main(){
        int vet[5];

        for(int i=0; i<5; i++){
            scanf("%d", &vet[i]);
        }

        imprime_vet_int(vet, 5);
    }