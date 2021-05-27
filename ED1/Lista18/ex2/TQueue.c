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
    TQueue *next;
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