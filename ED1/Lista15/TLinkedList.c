#include<stdio.h>
#include<stdlib.h>
#include"TLinkedList.h"

typedef struct list_node list_node;

struct list_node{
    aluno data;
    list_node *next;
};

struct list{
    list_node *head;
};



list *list_creat(){
    list *l;

    l = malloc(sizeof(list));

    if(l!=NULL)
        l->head=NULL;

    return l;
}

int list_free(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    
    else{
        list_node *aux;

        aux=l->head;

        while(aux != NULL){
            l->head=aux->next; //l->head funciona como uma outra variavel auxiliar para armazenar a proxima posicao
            free(aux);
            aux=l->head;
        }

        free(l);
        return SUCCESS;
    }
}

int list_push_front(list *l, aluno a){
    if(l==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *n;

        n = malloc(sizeof(list_node));
        if(n==NULL){
            return OUT_OF_MEMORY;
        }

        n->data=a;
        n->next=l->head;
        l->head=n;
        
        return SUCCESS;
    }
}

int list_push_back(list *l, aluno a){
   if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *n;

        n = malloc(sizeof(list_node));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        else{
            n->data=a;
            n->next=NULL;

            if(l->head==NULL){
                l->head=n;
            }
            else{
                list_node *aux;
                aux = l->head;

                while(aux->next != NULL){
                    aux=aux->next;
                }
                aux->next=n;

            }
            return SUCCESS;
        }
    }
}

int list_print(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;
        aux=l->head;

        while(aux != NULL){
            printf("\n---------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f %.1f %.1f\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux=aux->next;
        }
        return SUCCESS;
    }
}

