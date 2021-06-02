#include<stdlib.h>
#include "TMatQuad.h"

struct TMatQuad
{
    int *dados;
    int ordem; // ordem indica o tamanho da matriz. Por exemplo, ordem 3 indica uma matriz 3x3
};


TMatQuad* cria_matquad(int ordem){

}

void libera_matquad(TMatQuad *mat){

}

TMatQuad* cria_mat_identidade(int ordem){
    TMatQuad *mat;

    mat=malloc(sizeof(TMatQuad));

    if(mat==NULL)
        return NULL;
    else{
        mat->ordem=ordem;
        mat->dados=calloc((ordem*ordem),sizeof(int));

        if(mat->dados==NULL){
            free(mat);
            return NULL;
        }
        else{
            int i, j, pos;
            for(i=0; i<ordem; i++){
                for(j=0; j<ordem; j++){
                    if(i==j){
                        pos=j*mat->ordem+i;
                        mat->dados[pos]=1;
                    }
                }
            }
        }
        return mat;
    }
}

int* copia_diagonal(TMatQuad *m){
    if(m==NULL){
        return NULL;
    }

    else{
        int i, j, k=0, pos;
        int *vet;
        for(i=0; i<m->ordem; i++){
            for(j=0; j<m->ordem; j++){
                if(i==j){
                    pos=j*m->ordem+i;
                    vet[k]=m->dados[pos];
                    k++;
                }
            }
        }
        return vet;
    }
}
