#include<stdio.h>
//1 - Soma matriz

    int main(){
        int mat1[4][4], mat2[4][4], mat3[4][4], i, j;

        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                printf("Matriz 1 [%d][%d]: ", i,j);
                scanf("%d", &mat1[i][j]);
            }
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                printf("Matriz 2 [%d][%d]: ", i,j);
                scanf("%d", &mat2[i][j]);
            }
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                mat3[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }

    }