#include<stdio.h>
#include<stdlib.h>
#include "Teste.h"

    int mostra_matriz(TadMat *p, int nlin, int ncol, double *val);

    int main(){
        TadMat *m;
        double valor, *soma;

        m = criar_mat(2,2);
        preencher_mat(m, 5);
        mostra_matriz(m, 2, 2, &valor);

        printf("%p\n", soma);
        somaL_mat(m, &soma);
        printf("\n%p\n", soma);
        
        printf("\n");
        for(int i=0; i<2; i++){
            printf("%.1lf ", soma[i]);
        }

        free_mat(m);

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