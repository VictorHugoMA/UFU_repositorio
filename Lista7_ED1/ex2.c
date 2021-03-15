#include<stdio.h>
#include<stdlib.h>
//2 - Multiplica matriz 3x3

    int main(){
        int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k, total=0;

        srand(time(NULL));

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                mat1[i][j] = (rand()/(double)RAND_MAX)*100;
            }
        }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                mat2[i][j] = (rand()/(double)RAND_MAX)*100;
            }
        }
        for(i=0; i<3; i++){
		    for(j=0; j<3; j++){
			    mat3[i][j] = 0;

			    for(k=0; k<3; k++){
                    total+=mat1[i][k] * mat2[k][j];
			    }

			    mat3[i][j]=total;
			    total=0;
		    }
	    }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%5d ", mat3[i][j]);
            }
            printf("\n");
        }
        
       
    }