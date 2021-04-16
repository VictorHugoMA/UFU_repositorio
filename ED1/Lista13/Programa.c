#include<stdio.h>
#include "TadMat.h"

    int mostra_matriz(TadMat *p, int nlin, int ncol, double *val);

    int main(){
        TadMat *p, *mat[3];
        int nlin, ncol, i, j;
        double max, val;

        printf("Digite a quantidade de linhas e colunas da matriz: ");
        scanf("%d %d", &nlin, &ncol);
        p=criar_mat(nlin, ncol);

        printf("Digite um valor maximo para preencher a matriz: ");
        scanf("%lf", &max);
        preencher_mat(p, nlin, ncol, max);

        printf("Digite a posicao e o valor que deseja alterar: ");
        scanf("%d %d %lf", &i, &j, &val);
        escrever_mat(p, i, j, val);


        printf("Digite a posicao que deseja visualizar: ");
        scanf("%d %d", &i, &j);
        acessar_mat(p, i, j, &val);
        printf("\nO valor de Mat[%d][%d] eh %.1lf\n", i, j, val);

        mostra_matriz(p, nlin, ncol, &val);

        printf("\nSomando duas matrizes\n");
        for(i=0; i<2; i++){
            mat[i]=criar_mat(nlin, ncol);
            preencher_mat(mat[i], nlin, ncol, max);
            printf("\nMatriz %d\n", i+1);
            mostra_matriz(mat[i], nlin, ncol, &val);
        }
        mat[2]=criar_mat(nlin, ncol);
        soma_mat(mat[0], mat[1], mat[2], nlin, ncol);
        printf("\nSoma\n");
        mostra_matriz(mat[2], nlin, ncol, &val);

        free_mat(p);
        for(i=0; i<3; i++){
            free_mat(mat[i]);
        }

        return 0;
    }

    int mostra_matriz(TadMat *p, int nlin, int ncol, double *val){
        int i, j;
        printf("\n");
        for(i=0; i<nlin; i++){
            for(j=0; j<ncol; j++){
                acessar_mat(p, i, j, val);
                printf("%5.1lf ", *val);
            }
            printf("\n");
        }
    }