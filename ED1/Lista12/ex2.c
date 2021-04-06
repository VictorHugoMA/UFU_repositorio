#include<stdio.h>
//2 - Linha argumento Funcao 

    void Desenhalinhas(int x, int y){
        int i, j;
        for(i=0; i<x; i++){
            for(j=0; j<y; j++){
                printf("=");
            }
            printf("\n");
        }
    }

    int main(){
        int x, y;
        printf("Digite a quantidade de linhas a serem impressas: ");
        scanf("%d", &x);
        printf("Digite o tamanho da linha: ");
        scanf("%d", &y);

        Desenhalinhas(x, y);
        
    }