#include<stdlib.h>
#include<time.h>
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

    //escreve um valor na posicao desejada
    //dado a struct *, a linha, a coluna e o valor 
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
            srand(time(NULL));
            for(int i=0; i<nlin*ncol; i++){
                mat->dado[i]=(rand()/(double)RAND_MAX)*max;
            }
            return 0;
        }
    }

    int soma_mat(TadMat *m1, TadMat *m2, TadMat *sm, int nlin, int ncol){
        int i;

        if(m1==NULL || m2==NULL){
            return -1;
        }

        else{
            for(i=0; i<nlin*ncol; i++){
                sm->dado[i] = m1->dado[i] + m2->dado[i];
            }
            return 0;
        }
    }

    //mult_mat

    int multConst_mat(TadMat *m1, TadMat *tm, int nlin, int ncol, double num){
        if(m1==NULL){
            return -1;
        }

        else{
            for(int i=0; i<nlin*ncol; i++){
                tm->dado[i]=m1->dado[i]*num;
            }
        return 0;
        }
    }

    int traco_mat(TadMat *m1, int nlin, int ncol, double *tot){

        if(m1==NULL){
            return -1;
        }
        else{
            int i, j, pos;
            double dp;
            for(i=0; i<nlin; i++){
                for(j=0; j<ncol; j++){
                    if(i==j){
                        pos = j*m1->nlinhas+i;
                        dp+=m1->dado[pos];
                    }
                }
            }
            *tot=dp;
            return 0;
        }
    }

    int somaL_mat(TadMat *m1, int nlin, int ncol, double *sl){
        if(m1==NULL){
            return -1;
        }
        else{
            int i, j, pos;

            for(i=0; i<nlin; i++){
                for(j=0; j<ncol; j++){
                    pos = j*m1->nlinhas+i;
                    sl[i]+=m1->dado[pos];
                }
            }
            return 0;
        }
    }

    int somaC_mat(TadMat *m1, int nlin, int ncol, double *sc){
        if(m1==NULL){
            return -1;
        }
        else{
            int i, j, pos;

            for(i=0; i<nlin; i++){
                for(j=0; j<ncol; j++){
                    pos = j*m1->nlinhas+i;
                    sc[j]+=m1->dado[pos];
                }
            }
            return 0;
        }
    }