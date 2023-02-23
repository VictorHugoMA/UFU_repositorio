#include<stdio.h>

    int main(){
        int fim, vet[100];

        scanf("%d", &fim);

        for(int i=0; i<fim; i++){
            scanf("%d", vet[i]);
        }
        for(int i=0; i<fim; i++){
            printf("%d", vet[i]);
        }
    }