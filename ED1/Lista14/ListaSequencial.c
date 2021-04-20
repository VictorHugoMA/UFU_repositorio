#include<stdlib.h>
#include "ListaSequencial.h"

    struct lista{
        int qtd;
        aluno dado[MAX];
    };

    lista *cria_lista(){
        lista *l;

        l=malloc(sizeof(lista));

        if(l!=NULL)
            l->qtd=0;
        
        return l;
    }

    int free_lista(lista *l){
        if(l==NULL)
            return -1;
        
        else{
            free(l);
            return 0;
        }

    }

    int insere_final_lista(lista *l, aluno a){
        if(l==NULL)
            return -1;
        if(l->qtd==MAX)
            return -1;

        else{
            l->dado[l->qtd]=a;
            l->qtd++;
            return 0;
        }
    }

    int insere_inicio_lista(lista *l, aluno a){
        if(l==NULL)
            return -1;
        if(l->qtd==MAX)
            return -1;

        else{
            int i;

            for(i=l->qtd-1; i<=0; i--){
                l->dado[i+1]=l->dado[i];
            }
            l->dado[0]=a;
            l->qtd++;
            return 0;
        }
    }

    int consulta_lista_pos(lista *l, int pos, aluno *ac){
        if(l==NULL || pos<=0 || pos>l->qtd)
            return -1;

        else{
            *ac=l->dado[pos-1];
            return 0;
        }
    }

    int consulta_lista_mat(lista *l, int mat, aluno *ac){
        if(l==NULL)
            return -1;
        
        else{
            int i=0;

            while(i<l->qtd && l->dado[i].matricula != mat){
                i++;
            }
            if(i==l->qtd)
                return -1;
            
            else{
                *ac=l->dado[i];
                return 0;
            }       
        }
    }