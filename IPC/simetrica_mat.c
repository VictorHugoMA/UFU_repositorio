#include<stdio.h>
//Matriz simetrica

    int main(){
        int mat[3][3], i, j, sinal=0;

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                scanf("%d", &mat[i][j]);
            }
        }

        for(i=0; i<3; i++){
            for(j=i+1; j<3; j++){
                if(mat[i][j]!=mat[j][i])
                    sinal+=1;
            }
        }

        if(sinal==0)
            printf("Eh simetrica\n");
            else
                printf("Nao eh simetrica\n");
            
    }

/*int simetrica(int matriz[TAMANHO][TAMANHO]){
    int i, j;

    for(i = 0; i < TAMANHO; i++){
        for(j = i + 1; j < TAMANHO; j++){
            if(matriz[i][j] != matriz[j][i])
                return 0;
        }
    }
    return 1;
}
*/
