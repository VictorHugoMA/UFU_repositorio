#include<stdio.h>
#include<stdlib.h>
#include"TQueue.h"

typedef struct Qnode Qnode;

struct TQueue{
    Qnode *begin;
    Qnode *end;
    int size;
};

struct Qnode{
    aluno data;
    Qnode *next;
};

TQueue *queue_create(){
    TQueue *t;

    t = malloc(sizeof(TQueue));

    if(t!=NULL){
        t->begin=NULL;
        t->end=NULL;
        t->size=0;
    }
    return t;
}


int queue_free(TQueue *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else{

    }
}

int queue_push(TQueue *t, aluno a){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        Qnode *n;

        n=malloc(sizeof(Qnode));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        n->data=a;
        n->next=NULL;

        if(t->size==0){
            t->begin=n;
            t->end=n;
            t->size++;
        }
        else{
            t->end->next=n;
            t->end=n;
            t->size++;
        }
        return SUCCESS;
    }
}


int queue_pop(TQueue *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->size==0){
        return ELEM_NOT_FOUND;
    }
    else{
        Qnode *aux;

        aux=t->begin;
        t->begin=t->begin->next;
        free(aux);

        return SUCCESS;
    }
}


int queue_top(TQueue *t, aluno *a){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->size==0){
        return ELEM_NOT_FOUND;
    }
    else{
        *a=t->begin->data;
        return SUCCESS;
    }
}

int queue_empty(TQueue *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        return (t->size==0);
    }
}


int queue_print(TQueue *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->size==0){
        return ELEM_NOT_FOUND;
    }
    else{
        Qnode *aux;
        aux = t->begin;

        printf("\n---------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f %.1f %.1f\n", aux->data.n1, aux->data.n2, aux->data.n3);

        return SUCCESS;
    }
}