#include<stdio.h>
#include<stdlib.h>
#include"TStack.h"

    struct TStack{
        char *data;
        int qtd;
        int max;
    };


TStack *stack_create(int n){
    TStack *t;

    t=malloc(sizeof(TStack));

    if(t!=NULL){
        t->data=malloc(n*sizeof(char));
        t->qtd=0;
        t->max=n;

        return t;
    }
}

int stack_free(TStack *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        free(t->data);
        free(t);

        return SUCCESS;
    }
}

int stack_push(TStack *t, char c){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->qtd==t->max){
        return OUT_OF_MEMORY;
    }
    else{
        t->data[t->qtd]=c;
        t->qtd++;

        return SUCCESS;
    }
}

int stack_pop(TStack *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->qtd==0){
        return SUCCESS;
    }
    else{
        t->qtd--;
        return SUCCESS;
    }
}

int stack_top(TStack *t, char *c){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->qtd==0){
        return ELEM_NOT_FOUND;
    }
    else{
        *c=t->data[t->qtd-1];
        return SUCCESS;
    }
}

//Retorna 1 para vazia, 0 quando nao esta vazia e -1 para erro
int stack_empty(TStack *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        return (t->qtd==0);
    }
}

int stack_print(TStack *t){
    if(t==NULL){
        return INVALID_NULL_POINTER;
    }
    else if(t->qtd==0){
        return ELEM_NOT_FOUND;
    }
    else{
        printf("%c\n", t->data[t->qtd-1]);
        return SUCCESS;
    }
}