#include<stdio.h>
#include<stdlib.h>
//5 - Soma diagonal principal

    int main(){
        int mat[5][5], i, j, soma=0;

        srand(time(NULL));

        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                mat[i][j] = (rand()/(double)RAND_MAX)*100;
                if(i==j){
                    soma+=mat[i][j];
                }
            }
        }
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                printf("%3d ", mat[i][j]);
            }
            printf("\n");
        }
        printf("Soma diagonal principal = %d\n", soma);
    }