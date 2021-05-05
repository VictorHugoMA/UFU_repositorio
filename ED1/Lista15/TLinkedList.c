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


int list_insert(list *l, int pos, aluno a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *n, *aux;

        n = malloc(sizeof(list_node));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        else{

            n->data=a;
            if(pos==1){
                n->next=l->head;
                l->head=n;
            }
            else{
                int i;

                aux = l->head;
                for(i=0; i<pos-1; i++){
                    aux=aux->next;
                }
                n->next = aux->next;
                aux->next = n;

            }
            return SUCCESS;

        }
    }
}

int list_pop_front(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;

        aux=l->head;
        l->head=aux->next; 
        free(aux);

        return SUCCESS;
    }
}


int list_pop_back(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;
        aux = l->head;

        while(aux->next != NULL){
            aux=aux->next;
        }
        aux = NULL;
        free(aux);
        return SUCCESS;
    }
}

int list_find_mat(list *l, int mat, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->head==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            list_node *aux;

            aux = l->head;
            while(aux!= NULL && aux->data.matricula != mat){
                aux=aux->next;
            }
            if(aux == NULL)
                return ELEM_NOT_FOUND; 
            
            else{
                *a=aux->data;
                return SUCCESS;
            }  
        }
    }
}

int list_front(list *l, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->head==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            *a=l->head->data;
            return SUCCESS;
        }

    }
}

int list_back(list *l, aluno *a){
    if(l==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(l->head==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            list_node *aux;

            aux=l->head;
            while(aux->next != NULL){
                aux=aux->next;
            }
            *a=aux->data;
            return SUCCESS;
        }
        
    }
}

int list_size(list *l){
   if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        int cont=0;
        list_node *aux;
        
        aux = l->head;
        while(aux != NULL){
            cont++;
            aux=aux->next;
        }

        return cont;
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

