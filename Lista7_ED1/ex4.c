#include<stdio.h>
//4 - Menor e posicao matriz 5x8

    int main(){
        int mat[5][8], i, j, maior, posi=0, posj=0;

        for(i=0; i<5; i++){
            for(j=0; j<8; j++){
                scanf("%d", &mat[i][j]);
            }   
        }
        maior=mat[0][0];
        for(i=0; i<5; i++){
            for(j=0; j<8; j++){
                if(mat[i][j]>maior){
                    maior=mat[i][j];
                    posi=i;
                    posj=j;
                }
            }   
        }

        printf("Maior numero %d, na posicao [%d][%d]\n", maior, posi, posj);

    }