#include<stdio.h>
#include<stdlib.h>
#include"TStack.h"
#include"TSeqList.h"


struct TStack{
    lista *list;
};


TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st!=NULL){
        st->list = cria_lista();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}


int stack_free(TStack *st){

}

int stack_push(TStack *st, struct aluno a){
    if (st == NULL)
        return ERROR;
    
    return insere_final_lista(st->list, a);

}

int stack_pop(TStack *st){

}

int stack_top(TStack *st, struct aluno *a){

}

int stack_empty(TStack *st){

}

int stack_full(TStack *st){

}

int stack_print(TStack *st){

}
