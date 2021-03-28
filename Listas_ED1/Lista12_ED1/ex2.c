#include<stdio.h>
//2 - Linha argumento Funcao 

    void Desenhalinha(int x){
        for(int i=0; i<x; i++){
            printf("=");
        }
    }

    int main(){
        int n;
        scanf("%d", &n);
        Desenhalinha(n);
    }