#include<stdio.h>
#include<stdlib.h>
#include"TStack.h"
#include"TVarSeqList.h"


struct TStack{
    lista *list;
};


TStack *stack_create(int n){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st!=NULL){
        st->list = cria_lista(n);
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
        free_lista(st->list);
        free(st);
        return SUCCESS;
    }
}

int stack_push(TStack *st, struct aluno a){
    if (st == NULL)
        return ERROR;
    
    return insere_final_lista(st->list, a);

}

int stack_pop(TStack *st){
    if (st == NULL)
        return ERROR;

    else{
        return remove_final_lista(st->list);
    }
}

int stack_top(TStack *st, struct aluno *a){
    if (st == NULL)
        return ERROR;

    else{
        return consulta_lista_fim(st->list, a);
    }
}

int stack_empty(TStack *st){
    if (st == NULL)
        return ERROR;
    
    else{
        return vazia_lista(st->list);
    }
}

int stack_full(TStack *st){
    if(st==NULL)
        return ERROR;

    else{
        return cheia_lista(st->list);
    }
}

int stack_print(TStack *st){
    if(st==NULL)
        return ERROR;

    else{
        return imprime_lista(st->list);
    }
  
}