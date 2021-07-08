#include<stdio.h>
#include<stdlib.h>
#include"TStack.h"

typedef struct Snode Snode;

struct Stack{
    Snode *head;
    int size;
};

struct Snode{
    Snode *next;
    ponto data;
};

//Cria a Stack
//Retona NULL para erro e a struct Stack para sucesso
Stack *stack_create(){

    Stack *st;
    st = malloc(sizeof(Stack));

    if(st != NULL){
        st->head = NULL;
        st->size = 0;
    }

    return st;
}

//Libera a memoria
//Dado o ponteiro para a Stack
//Retorna SUCCESS para sucesso e INVALID_NULL_POINTER para erro 
int  stack_free(Stack *st){
    Snode *aux, *aux2;

    if(st==NULL)
        return INVALID_NULL_POINTER;

    if(st->size > 0){
        aux = st->head;
        while(aux != NULL){
            aux2 = aux;
            aux = aux->next;
            free(aux2);
        }
    }
    free(st);
    return SUCCESS;
}

//Insere um elemento
//Dado o ponteiro para a Stack e o elemento
//Retorna SUCCESS para sucesso e INVALID_NULL_POINTER ou OUT_OF_MEMORY para erro 
int stack_push(Stack *st, ponto p){
    Snode *n;

    if(st==NULL)
        return INVALID_NULL_POINTER;

    n = malloc(sizeof(Snode));
    
    if(n==NULL)
        return OUT_OF_MEMORY;

    n->data = p;
    n->next = NULL;

    if(st->size == 0){
        st->head = n;
        st->size++;
    }
    else{
        n->next = st->head;
        st->head = n;
        st->size++;
    }
    return SUCCESS;
}

//Remove o ultimo elemento inserido
//Dado o ponteiro para a Stack
//Retorna SUCCESS para sucesso e INVALID_NULL_POINTER ou OUT_OF_RANGE para erro 
int stack_pop(Stack *st){

    Snode *aux;

    if(st==NULL)
        return INVALID_NULL_POINTER;

    if(st->size <= 0)
        return OUT_OF_RANGE;

    if(st->size == 1){
        free(st->head);
        st->head = NULL;
        st->size--;
    }
    else{
        aux = st->head->next;
        free(st->head);
        st->head = aux;
        st->size--;
    }
        return SUCCESS;
}

//Devolve o ultimo elemento da lista por parametro
//Dado o ponteiro para Stack e o ponteiro para o elemento
//Retorna SUCCESS para sucesso, INVALID_NULL_POINTER ou ELEM_NOT_FOUND para erro 
int stack_top(Stack *st, ponto *p){

    if(st==NULL)
        return INVALID_NULL_POINTER;

    if(st->size == 0)
        return ELEM_NOT_FOUND;

    *p = st->head->data;
    return SUCCESS;
}

//Devolve o tamanho da Stack
//Dado o ponteiro para a Stack
//Retorna o tamanho para sucesso e INVALID_NULL_POINTER para erro
int stack_size(Stack *st){
    if(st==NULL)
        return INVALID_NULL_POINTER;

    return st->size;
}

//Imprime a Stack
//Dado o ponteiro para a Stack
//Retorna SUCCESS para sucesso, INVALID_NULL_POINTER ou ELEM_NOT_FOUND para erro 
int stack_print(Stack *st){
    Snode *aux;

    if(st==NULL)
        return INVALID_NULL_POINTER;

    if(st->size == 0)
        return ELEM_NOT_FOUND;

    aux = st->head;
    while(aux != NULL){

        printf("X = %d\n", aux->data.x);
        printf("Y = %d\n", aux->data.y);
        aux = aux->next;
    }

    return SUCCESS;
}