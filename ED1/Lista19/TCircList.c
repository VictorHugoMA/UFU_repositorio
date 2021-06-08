#include<stdlib.h>
#include<stdio.h>
#include"TCircList.h"

typedef struct CLNode CLNode;

struct CLNode{
    CLNode *next;
    aluno data;
};

struct CircList{
    CLNode *end;
};


CircList *list_creat(){
    CircList *c;

    c = malloc(sizeof(CircList));

    if(c!=NULL){
        c->end = NULL;
    }
    return c;
}

int list_free(CircList *c){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux, *prox;
    aux = c->end->next;

    if(c->end==NULL){
        return SUCCESS;
    } 

    while(aux->next!=c->end){
        prox = aux->next;
        free(aux);
        aux = prox;
    }
    free(c->end);
    free(c);

    return SUCCESS;
}   

int list_push_front(CircList *c, aluno a){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *n;

    n = malloc(sizeof(CLNode));

    if(n==NULL){
        return OUT_OF_MEMORY;
    }
    if(c->end==NULL){
        c->end=n;
    }
    n->data = a;
    n->next = c->end->next;
    c->end->next=n;

    return SUCCESS;
}

int list_push_back(CircList *c, aluno a){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *n;

    n = malloc(sizeof(CLNode));

    if(n==NULL){
        return OUT_OF_MEMORY;
    }
    if(c->end==NULL){
        c->end=n;
    }
    n->data = a;
    n->next = c->end->next;
    c->end->next = n;
    c->end = n;

    return SUCCESS;
}

int list_pop_front(CircList *c){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    if(c->end==NULL){
        return ELEM_NOT_FOUND;
    }
    CLNode *aux;

    aux = c->end->next;
    c->end->next = c->end->next->next;
    free(aux);

    return SUCCESS;
}

int list_pop_back(CircList *c){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    if(c->end==NULL){
        return ELEM_NOT_FOUND;
    }
    CLNode *aux;
    
    aux = c->end->next;
    while(aux->next!=c->end){
        aux = aux->next;
    }
    aux = c->end->next;
    free(c->end);
    c->end = aux;

    return SUCCESS;
}

int list_size(CircList *c){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux;
    int cont=0;

    if(c->end==NULL){
        return cont;;
    }
    aux = c->end;
    cont++;
    while(aux->next!=c->end){
        cont++;
        aux = aux->next;
    }
    return cont;
}

int list_get_pos(CircList *c, int mat, int *pos){
    if(c==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(c->end==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            CLNode *aux;
            int cont=1;

            aux = c->end;
            while(aux->next!= c->end && aux->data.matricula != mat){
                cont++;
                aux=aux->next;
            }
            if(aux == c->end)
                return ELEM_NOT_FOUND; 
            
            else{
                *pos=cont;
                return SUCCESS;
            }  
        }
    }
}

int list_print(CircList *c){
    if(c==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux, *prox;
    aux = c->end;

    while(aux->next!=c->end){
        aux = aux->next;

        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
        
    }
    printf("\n------------------\n");
    printf("Matricula: %d\n", c->end->data.matricula);
    printf("Nome: %s\n", c->end->data.nome);
    printf("Notas: %.1f; %.1f; %.1f;\n", c->end->data.n1, c->end->data.n2, c->end->data.n3);

    return SUCCESS;
}