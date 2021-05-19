#include<stdlib.h>
#include<stdio.h>
#include "TSeqList.h"

    struct lista{
        int qtd;
        struct aluno dado[MAX];
    };

    //Cria a lista 
    //dado o numero de alunos
    //Retorno ponteriro para a lista
    lista *cria_lista(){
        lista *l;

        l=malloc(sizeof(lista));

        if(l!=NULL)
            l->qtd=0;
        
        return l;
    }

    //Libera a lista
    //dado a lista
    //Retorno -1 para erro e 0 para sucesso
    int free_lista(lista *l){
        if(l==NULL)
            return -1;
        
        else{
            free(l);
            return 0;
        }

    }

    //Insere um aluno no final da lista
    //dado a lista e o aluno
    //Retorno -1 para erro e 0 para sucesso
    int insere_final_lista(lista *l, struct aluno a){
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

    //Insere um aluno no inicio da lista
    //dado a lista e o aluno
    //Retorno -1 para erro e 0 para sucesso
    int insere_inicio_lista(lista *l, struct aluno a){
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

    //Insere o aluno de maneira ordenada de modo crescente das matriculas
    //dado a lista e o aluno
    //Retorno -1 para erro e 0 para sucesso
    int insere_ordenado_lista(lista *l, struct aluno a){
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
    
    //Consulta os dados de um aluno pela posicao 
    //dado a lista, a posicao e um ponteiro para aluno para receber as informacoes
    //Retorno -1 para erro e 0 para sucesso
    int consulta_lista_pos(lista *l, int pos, struct aluno *ac){
        if(l==NULL || pos<=0 || pos>l->qtd)
            return -1;

        else{
            *ac=l->dado[pos-1];
            return 0;
        }
    }

    //Consulta os dados de um aluno pela matricula
    //dado a lista, a matricula e o ponteiro para um aluno para receber as informacoes
    //Retorno -1 para erro, -2 caso nao encontre e 1 para sucesso
    int consulta_lista_mat(lista *l, int mat, struct aluno *ac){
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

    int consulta_lista_fim(lista *l, struct aluno *ac){
        if(l==NULL)
            return -1;
        
        else{
            *ac=l->dado[l->qtd-1];
            return 0;
        }
    }

    //Remove um aluno do inicio da lista
    //dado a lista
    //Retorno -1 para erro e 0 para sucesso
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

    //Remove um aluno do final da lista
    //dado a lista
    //Retorno -1 para erro e 0 para sucesso
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

    //Remove um aluno pelo numero de matricula
    //dado a lista e a matricula
    //Retorno -1 para erro e 0 para sucesso
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

    //Remove um aluno da lista de maneira otimizado(perde a ordem)
    //dado a lista e a matricula
    //Retorno -1 para erro e 0 para sucesso
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

    //Informa a quantidade de alunos na lista
    //dado a lista
    //Retorno -1 para erro e a quantidade de alunos caso sucesso
    int tamanho_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return l->qtd;
    }

    //Informa se a lista esta cheia 
    //dado a lista
    //Retorno -1 para erro, 1 para lista cheia e 0 caso nao esteja
    int cheia_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return (l->qtd==MAX);
    }

    //Informa se a lista esta vazia
    //dado a lista
    //Retorno -1 para erro, 1 para lista vazia e 0 caso nao esteja
    int vazia_lista(lista *l){
        if(l==NULL)
            return -1;
        else 
            return (l->qtd==0);
    }

    //Imprime a lista
    //dado a lista
    //Retorno -1 para erro e 0 para sucesso
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