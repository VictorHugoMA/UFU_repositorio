#include<stdlib.h>
#include<stdio.h>
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

    int insere_ordenado_lista(lista *l, aluno a){
        if(l==NULL)
            return -1;
        if(l->qtd==MAX)
            return -1;
        
        else{
            int k, i=0;
            while(i<l->qtd && l->dado[i].matricula<a.matricula){
                i++;
            }
            for(k=l->qtd-1; k>=i; k--){
                l->dado[k+1]=l->dado[k];
            }
            l->dado[i]=a;
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

    //Acessa uma os dados de um aluno pela matricula
    //dado a lista, a matricula e o ponteiro para um aluno
    //Retorno -1 para erro, -2 caso nao encontre e 1 para sucesso
    int consulta_lista_mat(lista *l, int mat, aluno *ac){
        if(l==NULL)
            return -1;
        
        else{
            int i=0;

            while(i<l->qtd && l->dado[i].matricula != mat){
                i++;
            }
            if(i==l->qtd)
                return -2; 
            
            else{
                *ac=l->dado[i];
                return 0;
            }       
        }
    }

    int remove_inicio_lista(lista *l){
        if(l==NULL)
            return -1;
        if(l->qtd==0)
            return 0;

        else{
            int k;
            for(k=0; k<l->qtd-1; k++){
                l->dado[k]=l->dado[k+1];
            }
            l->qtd--;
            return 0;
        }
    }

    int remove_final_lista(lista *l){
        if(l==NULL)
            return -1;
        if(l->qtd==0)
            return -1;

        else{
            l->qtd--;
            return 0;
        }
    }

    int remove_mat_lista(lista *l, int mat){
        if(l==NULL)
            return -1;
        if(l->qtd==0)
            return -1;

        else{
            int k, i=0;
            while(i<l->qtd && l->dado[i].matricula != mat){
                i++;
            }
            if(i==l->qtd){
                return 0;
            }
            else{
                for(k=i; k<l->qtd-1; k++){
                    l->dado[k]=l->dado[k+1];
                }
                l->qtd--;
                return 0;
            }
        }
    }

    int remove_mat_otimizado_lista(lista *l, int mat){
        if(l==NULL)
            return -1;
        if(l->qtd==0)
            return -1;

        else{
            int i=0;
            while(i<l->qtd && l->dado[i].matricula != mat){
                i++;
            }
            if(i==l->qtd){
                return 0;
            }
            l->qtd--;
            l->dado[i]=l->dado[l->qtd];
            return 0;
        }
    }

    int tamanho_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return l->qtd;
    }

    int cheia_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return (l->qtd==MAX);
    }

    int vazia_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return (l->qtd==0);
    }

    int imprime_lista(lista *l){
        if(l==NULL)
            return -1;
        
        else{
            for(int i=0; i<l->qtd; i++){
                printf("Matricula: %d\n", l->dado[i].matricula);
                printf("Nome: %s\n", l->dado[i].nome);
                printf("Notas: %.1f %.1f %.1f\n", l->dado[i].n1, l->dado[i].n2, l->dado[i].n3);
                printf("-------------------------------\n");           
            }
            return 0;
        }
    }