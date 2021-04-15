#include<stdio.h>
#include "TadMat.h"

    int main(){
        TadMat *p;
        int nlin, ncol, i, j;
        double max, val1, val2;

        printf("Digite a quantidade de linhas e colunas da matriz: ");
        scanf("%d %d", &nlin, &ncol);
        p=criar_mat(nlin, ncol);

        printf("Digite um valor maximo para preencher a matriz: ");
        scanf("%lf", &max);
        preencher_mat(p, nlin, ncol, max);

        printf("Digite a posicao e o valor que deseja alterar: ");
        scanf("%d %d %lf", &i, &j, &val1);
        escrever_mat(p, i, j, val1);


        printf("Digite a posicao que deseja visualizar: ");
        scanf("%d %d", &i, &j);
        acessar_mat(p, i, j, &val2);
        printf("O valor de Mat[%d][%d] eh %.1lf\n", i, j, val2);

        //Mostrando os elemetos da matriz
        printf("\n");
        for(i=0; i<nlin; i++){
            for(j=0; j<ncol; j++){
                acessar_mat(p, i, j, &val2);
                printf("%5.1lf ", val2);
            }
            printf("\n");
        }

        free_mat(p);

        return 0;
    }