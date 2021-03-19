#include<stdio.h>
#include<stdlib.h>
//3 - Multiplica matriz 3x4 por 4x5

    int main(){
        int mat1[3][4], mat2[4][5], mat3[3][5], i, j, k, total=0;

        srand(time(NULL));

        for(i=0; i<3; i++){
            for(j=0; j<4; j++){
                mat1[i][j] = (rand()/(double)RAND_MAX)*100;
            }
        }
        for(i=0; i<4; i++){
            for(j=0; j<5; j++){
                mat2[i][j] = (rand()/(double)RAND_MAX)*100;
            }
        }

        for(i=0; i<3; i++){
		    for(j=0; j<5; j++){
			    mat3[i][j] = 0;

			    for(k=0; k<4; k++){
                    total+=mat1[i][k] * mat2[k][j];
			    }

			    mat3[i][j]=total;
			    total=0;
		    }
	    }
        for(i=0; i<3; i++){
            for(j=0; j<5; j++){
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }
    }