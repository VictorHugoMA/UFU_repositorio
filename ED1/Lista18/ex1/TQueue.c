#include<stdio.h>
#include<stdlib.h>
#include"TQueue.h"
#include"Tlinkedlist.h"


struct TStack{
    list *list;
};


TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st!=NULL){
        st->list = list_creat();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}


int stack_free(TStack *st){
    if(st ==NULL)
        return ERROR;
    
    else{
        list_free(st->list);
        free(st);
        return SUCCESS;
    }
}

int stack_push(TStack *st, struct aluno a){
    if (st == NULL)
        return ERROR;
    
    return list_push_back(st->list, a);

}

int stack_pop(TStack *st){
    if (st == NULL)
        return ERROR;

    else{
        return list_pop_front(st->list);
    }
}

int stack_top(TStack *st, struct aluno *a){
    if (st == NULL)
        return ERROR;

    else{
        return list_front(st->list, a);
    }
}

//Retorno -1 para erro, 0 para vazia
int stack_empty(TStack *st){
    if (st == NULL)
        return ERROR;
    
    else{
        return list_size(st->list);
    }
}


int stack_print(TStack *st){
    if(st==NULL)
        return ERROR;

    else{
        return list_print(st->list);
    }
  
}