#include<stdio.h>
#include<stdlib.h>
#include "TadMat.h"

    int mostra_matriz(TadMat *p, int nlin, int ncol, double *val);

    int main(){
        TadMat *p, *mat[3], *mult, *multC;
        int nlin, ncol, i, j;
        double max, val, traco, num;

        printf("Digite a quantidade de linhas e colunas da matriz: ");
        scanf("%d %d", &nlin, &ncol);
        p=criar_mat(nlin, ncol); //criar matriz

        printf("Digite um valor maximo para preencher a matriz: ");
        scanf("%lf", &max);
        preencher_mat(p, nlin, ncol, max); //preencher matriz

        printf("Digite a posicao e o valor que deseja alterar: ");
        scanf("%d %d %lf", &i, &j, &val);
        escrever_mat(p, i, j, val); //modificar matriz


        printf("Digite a posicao que deseja visualizar: ");
        scanf("%d %d", &i, &j);
        acessar_mat(p, i, j, &val); //visualizar posicao da matriz
        printf("\nO valor de Mat[%d][%d] eh %.1lf\n", i, j, val);

        mostra_matriz(p, nlin, ncol, &val); //mostrar toda a matriz

        printf("\nSomando duas matrizes\n");
        for(i=0; i<2; i++){
            mat[i]=criar_mat(nlin, ncol);
            preencher_mat(mat[i], nlin, ncol, max);
            printf("\nMatriz %d\n", i+1);
            mostra_matriz(mat[i], nlin, ncol, &val);
        }
        mat[2]=criar_mat(nlin, ncol);
        soma_mat(mat[0], mat[1], mat[2], nlin, ncol); //soma duas matrizes
        printf("\nSoma\n");
        mostra_matriz(mat[2], nlin, ncol, &val);


        traco_mat(mat[2], nlin, ncol, &traco); //traco ou soma da diagonal principal da matriz
        printf("\nTraco da Matriz Soma: %.1lf\n", traco);

        printf("\nMatriz 1 x Matriz 2\n");
        mult = criar_mat(nlin, ncol);
        mult_mat(mat[0], nlin, ncol, mat[1], nlin, ncol, mult); //multiplicacao de duas matrizes
        mostra_matriz(mult, nlin, ncol, &val);

        printf("\nDigite o numero que pra multiplicar a matriz soma: ");
        scanf("%lf", &num);
        multC=criar_mat(nlin, ncol);
        multConst_mat(mat[2], multC, nlin, ncol, num); //multiplica uma matriz por um numero escalar
        printf("\nMatriz Soma multilicada por %.1lf\n", num);
        mostra_matriz(multC, nlin, ncol, &val);

        double *sl, *sc;
        sl=calloc(nlin,sizeof(double));
        sc=calloc(ncol,sizeof(double));

        printf("\nVetor com a soma das linhas da Matriz Soma: ");
        somaL_mat(mat[2], nlin, ncol, sl); //somas das linhas da matriz
        for(i=0; i<nlin; i++){
            printf("%.1lf ", sl[i]);
        }
        

        printf("\nVetor com a soma das colunas da Matriz Soma: ");
        somaC_mat(mat[2], nlin, ncol, sc); //somas das colunas da matriz
        for(i=0; i<ncol; i++){
            printf("%.1lf ", sc[i]);
        }


        free_mat(p); //libera matriz
        for(i=0; i<3; i++){
            free_mat(mat[i]);
        }
        free_mat(mult);
        free_mat(multC);
        free(sl);
        free(sc);

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