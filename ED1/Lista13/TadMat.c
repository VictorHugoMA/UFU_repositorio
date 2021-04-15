#include<stdlib.h>
#include "TadMat.h"

    struct TadMat{
        int nlinhas;
        int ncolunas; 
        double *dado;
    };

    TadMat *criar_mat(int nlin, int ncol){
        TadMat *mat;

        mat = malloc(sizeof(TadMat));
        if(mat==NULL)
            return NULL;
        
        mat->nlinhas = nlin;
        mat->ncolunas = ncol;
        mat->dado = malloc((nlin*ncol)*sizeof(double));

        if(mat->dado==NULL){
            free(mat);
            return NULL;
        }

        return mat;
    }

    int free_mat(TadMat *mat){
        if(mat==NULL)
            return -1;
        else{
            free(mat->dado);
            free(mat);
            return 0;
        }
    }

    //a funcao escreve um valor na posicao desejada
    //dado a struct, a linha, a coluna e o valor 
    int escrever_mat(TadMat *mat, int nlin, int ncol, double val){
        if(mat==NULL)
            return -1;

        else{
            int pos;
            pos = ncol * mat->nlinhas + nlin;
            mat->dado[pos] = val;
        
            return 0;
        }
    }

    int acessar_mat(TadMat *mat, int nlin, int ncol, double *val){
        if(mat==NULL)
            return -1;

        else{
            int pos;
            pos = ncol * mat->nlinhas + nlin;

            *val=mat->dado[pos];

            return 0;
        }
    }

    int preencher_mat(TadMat *mat, int nlin, int ncol, double max){
        if(mat==NULL)
            return -1;

        else{
            for(int i=0; i<nlin*ncol; i++){
                mat->dado[i]=rand() % (int)max;
            }
            return 0;
        }
    }