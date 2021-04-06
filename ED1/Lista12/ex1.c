#include<stdio.h>
//1 - Linha Funcao

    void Desenhalinha(int n){
        for(int i=0; i<n; i++){
            printf("========");
            printf("\n");
        }
    }

    int main(){
        int n;
        printf("Digite a quantidade de linhas a serem impressas: ");
        scanf("%d", &n);
        Desenhalinha(n);
    }