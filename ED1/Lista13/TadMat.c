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

    int mult_mat(TadMat *m1, int nlin1, int ncol1, TadMat *m2, int nlin2, int ncol2, TadMat *tm){
        if(m1==NULL || m2==NULL || tm==NULL || ncol1!=nlin2){
            return -1;
        }
        else{
            int i, j, k, pos1, pos2, pos3;
            double total=0;

            for(i=0; i<nlin1; i++){
		        for(j=0; j<ncol2; j++){

			        for(k=0; k<ncol1; k++){
                        pos1 = k*m1->nlinhas+i;
                        pos2 = j*m2->nlinhas+k;
                        
                        total+=m1->dado[pos1] * m2->dado[pos2];
			        }
                pos3 = j*tm->nlinhas+i;
			    tm->dado[pos3]=total;
			    total=0;
		        }
	        }
            return 0;
        }
    }

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