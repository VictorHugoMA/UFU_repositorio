#include<stdio.h>
//24 - Alocar Funcao

    int *aloca_inteiro(int n){
        int *p;
        p=(int *)calloc(n,sizeof(int));

        return p;
    }
    void imprime_vet_int(int *vetori, int n){
        int i;
        for(i=0; i<n-1; i++){
            printf(" %d,", vetori[i]);
        }
            printf(" %d", vetori[i]);
    }

    int main(){
        int *p, n;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        p=aloca_inteiro(n);

        printf("O vetor eh:");
        imprime_vet_int(p, n);

        free(p);
        
    }