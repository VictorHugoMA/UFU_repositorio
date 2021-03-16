#include<stdio.h>
#include<stdlib.h>
//8 - Matriz 6x6 e soma partes

    int main(){
        int mat[6][6], soma[8]={0,0,0,0,0,0,0,0}, i, j, inicio=1, fim=5, somaInf=0;

        /*
        srand(time(NULL));
        
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                mat[i][j] = (rand()/(double)RAND_MAX)*100;
            }
        }
        */
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                scanf("%d", &mat[i][j]);

                if(j>i)
                    soma[0]+=mat[i][j];
                if((i+j)<(6-1))
                    soma[1]+=mat[i][j];
                if(i>j && i<6-j-1)
                    soma[3]+=mat[i][j];
                if(i>j && i<6-j-1 || i<j && i>6-j-1)
                    soma[4]+=mat[i][j];
            }
        }

        for(i=0; i<2; i++){
            for(j=inicio; j<=fim; j++){
                soma[2]+=mat[i][j];
            }
            inicio++;
            fim--;
        }




        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                printf("%3d ", mat[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<8; i++){
            printf("Soma %d = %d\n", i+1, soma[i]);
        }
    }

    /*
    soma[0] = acima da diagonal principal -
    soma[1] = acima da diaginal secundaria -
    soma[2] = area superior -
    soma[3] = area direita -
    soma[4] = area esquerda e direita - 
    soma[5] = area superior e inferior 
    soma[6] = area esquerda e superior
    soma[7] = area esquerda e inferior
    */