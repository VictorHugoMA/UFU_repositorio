#include <stdio.h>
#include <stdlib.h>
#include "TGrafico.h"

struct TGrafico
{
    int qtd;
    struct ponto ptos[MAX];
    char nome_eixo_x[100];
    char nome_eixo_y[100];
    char titulo[100];
};


TGrafico* cria_grafico(){

}

void apaga_grafico(TGrafico* li){
}

int definir_nomes_eixos(TGrafico* li, char *eixo_x, char *eixo_y){
}

int definir_titulo(TGrafico* li, char *titulo){
}

int insere_ponto_inicio(TGrafico* li, struct ponto pto){
}

int insere_ponto_fim(TGrafico* li, struct ponto pto){
}

int mostrar_grafico(TGrafico* li){

}

int maior_grafico(TGrafico *li, struct ponto *p){
    if(li==NULL){
        return -1;
    }
    else{
        int i;
        struct ponto aux;
        float maior=li->ptos[0].y;
        for(i=0; i<li->qtd; i++){
            if(li->ptos[i].y>maior){
                maior=li->ptos[i].y;
                aux=li->ptos[i];
            }
        }
        *p=aux;
        return 0;
    }
}

int insere_pos_grafico(TGrafico *li, struct ponto p, int pos){
    if(li==NULL){
        return -1;
    }
    else{
        int i;

        if(pos<li->qtd){
            for(i=li->qtd-1; i>=pos; i--){
                li->ptos[i+1]=li->ptos[i];
            }
            li->ptos[i]=p;
            li->qtd++;
            return 0;
        }
        else{
            for(i=li->qtd; i<pos; i++){
                li->ptos[i].x=0;
                li->ptos[i].y=0;
            }
            li->ptos[pos]=p;
            li->qtd++;
            return 0;
        }
    }
}
