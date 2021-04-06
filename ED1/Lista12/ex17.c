#include<stdio.h>
//17 - Funcoes vetor

    void imprime_vet_int(int *vetori, int n){
        for(int i=0; i<n; i++){
            printf(" %d", vetori[i]);
        }
    }
    void imprime_vet_double(double *vetord, int n){
        for(int i=0; i<n; i++){
            printf(" %.2lf", vetord[i]);
        }
    }
    void imprime_vet_float(float *vetorf, int n){
        for(int i=0; i<n; i++){
            printf(" %.2f", vetorf[i]);
        }
    }
    
    //exemplo
    int main(){
        int vetI[] = {1,2,3,4,5};
        double vetD[] = {1.2, 2.3, 3.4, 4.5, 5.5};
        float vetF[] = {1.2, 2.3, 3.4, 4.5, 5.5};;

        printf("Os valores inseridos neste vetor de inteiros eh:");
        imprime_vet_int(vetI, 5);
        printf("\nOs valores inseridos neste vetor de float eh:");
        imprime_vet_float(vetF, 5);
        printf("\nOs valores inseridos neste vetor de double eh:");
        imprime_vet_double(vetD, 5);
        
    }