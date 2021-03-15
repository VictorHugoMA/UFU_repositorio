#include<stdio.h>
#include<stdlib.h>
//6 - Soma de linha e coluna

    int main(){
        int mat[3][3], somai[3]={0,0,0}, somaj[3]={0,0,0}, i, j;

        srand(time(NULL));

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                mat[i][j] = (rand()/(double)RAND_MAX)*100;
                somai[i]+=mat[i][j];
                somaj[j]+=mat[i][j];
            }
        }

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%3d ", mat[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<3; i++){
            printf("Soma linha[%d] = %d\nSoma coluna[%d] = %d\n", i, somai[i], i, somaj[i]);
        }
    }