#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "Teste.h"

    struct TadMat{
        int nlinhas;
        int ncolunas; 
        double *dado;
    };
    //Cria a matriz
    //dado o numero de linhas e colunas
    //Retorno NULL para erro, Struct TadMat para sucesso
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

    //Libera a memoria
    //dado o ponteiro para a struct
    //Retorno -1 para erro e 0 para sucesso
    int free_mat(TadMat *mat){
        if(mat==NULL)
            return -1;
        else{
            free(mat->dado);
            free(mat);
            return 0;
        }
    }

    //Preenche uma matriz com valores aleatorios
    //dado o ponteiro para a struct e o valor maximo de preenchimento
    //Retorno -1 para erro e 0 para sucesso
    int preencher_mat(TadMat *mat, double max){
        if(mat==NULL)
            return -1;

        else{
            srand(time(NULL));
            for(int i=0; i<mat->nlinhas*mat->ncolunas; i++){
                mat->dado[i]=(rand()/(double)RAND_MAX)*max;
            }
            return 0;
        }
    }

    int acessar_mat(TadMat *mat, int lin, int col, double *val){
        if(mat==NULL)
            return -1;

        else{
            int pos;
            pos = col * mat->nlinhas + lin;

            *val=mat->dado[pos];

            return 0;
        }
    }

    int somaL_mat(TadMat *m1, double **sl){
            if(m1==NULL){
                return -1;
            }
            else{
                int i, j, pos;
            
                *sl=calloc(m1->nlinhas, sizeof(double));
                
                for(i=0; i<m1->nlinhas; i++){
                    for(j=0; j<m1->ncolunas; j++){
                        pos = j*m1->nlinhas+i;
                        (*sl)[i]+=m1->dado[pos];
                    }
                }
                
                return 0;
            }
        }