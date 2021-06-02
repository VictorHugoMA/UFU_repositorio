#include<stdio.h>
#include<stdlib.h>
#include"TDLinkedList.h"

typedef struct DLNode DLNode;

struct DLNode{
    aluno data;
    DLNode *prev;
    DLNode *next;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

int list_erase_zeros(DLlist *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            DLNode *aux;

            if(l->begin->data.n1 == 0.0 && l->begin->data.n2 == 0.0 && l->begin->data.n3 == 0.0){
                aux=l->begin;
                l->begin=l->begin->next;
                l->begin->prev=NULL;
                free(aux);
                l->size--;
            }
            if(l->end->data.n1 == 0.0 && l->end->data.n2 == 0.0 && l->end->data.n3 == 0.0){
                aux=l->end;
                l->end=l->end->prev;
                l->end->next=NULL;
                free(aux);
                l->size--;
            }
            else{
                aux=l->begin;
                while(aux!=NULL){
                    if(aux->data.n1 == 0.0 && aux->data.n2 == 0.0 && aux->data.n3 == 0.0){
                        aux->prev->next=aux->next;
                        aux->next->prev=aux->prev;
                        free(aux);
                        l->size--;
                    }
                    aux=aux->next;
                }
            }
            return SUCCESS;
        }

    }
}

int list_splice(DLlist *dest, DLlist *source, int pos){
    if(dest==NULL || source==NULL || pos<0)
        return -1;

    else{
        if(dest->size==0){
            dest->begin=source->begin;
            dest->end=source->end;
            dest->size+=source->size;
        }
        else if(pos==1){
            source->end->next=dest->begin;
            dest->begin->prev=source->end;
            dest->begin=source->begin;
            dest->size+=source->size;
        }
        else if(pos==dest->size+1){
            source->begin->prev=dest->end;
            dest->end->next=source->begin;
            dest->end=source->end;
            dest->size+=source->size;
        }
        else{
            DLNode *aux;
            int cont=1;

            aux = dest->begin;
            while(aux!=NULL && cont!=pos){
                aux=aux->next;
                cont++;
            }
            if(aux==NULL){
                return -1;
            }
            else{
                aux->next->prev=source->end;
                source->end->next=aux->next;
                aux->next=source->begin;
                source->begin->prev=aux;
                dest->size+=source->size;
            }
        }
        source->begin=NULL;
        source->end=NULL;
        source->size=0;
        return 0;
    }
}

DLlist* list_creat(){
    DLlist *list;

    list = malloc(sizeof(DLlist));

    if(list!=NULL){
        list->begin=NULL;
        list->end=NULL;
        list->size=0;
    }
    return list;
}

int list_free(DLlist *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    
    else{
        DLNode *atu, *prox;

        atu=l->begin;

        while(atu != NULL){
            prox=atu->next;
            free(atu);
            atu=prox;
        }

        free(l);
        return SUCCESS;
    }
}

int list_push_front(DLlist *l, aluno a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        DLNode *n;

        n = malloc(sizeof(DLNode));

        if(n==NULL)
            return OUT_OF_MEMORY;
        
        else{
            n->data=a;
            n->prev=NULL;
            n->next=l->begin;

            if(l->begin==NULL){
                l->begin=n;
                l->end=n;
                l->size=1;
            }
            else{
                l->begin->prev=n;
                l->begin=n;
                l->size++;
            }
            return SUCCESS;
        }
    }

}

int list_push_back(DLlist *l, aluno a){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *n;
        n=malloc(sizeof(DLNode));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        else{
            n->data=a;
            n->next=NULL;

            if(l->begin==NULL){
                l->begin=n;
                l->end=n;
                n->prev=NULL;
                l->size++;
            }
            else{
                l->end->next=n;
                n->prev=l->end;
                l->end=n;
                l->size++;
            }

            return SUCCESS;
        }
    }
}

int list_insert(DLlist *l, int pos, aluno a){
    if(l == NULL)
        return INVALID_NULL_POINTER;
    if(pos<1 || pos>l->size+1)
        return OUT_OF_RANGE;

    else{
        DLNode *n;
        n=malloc(sizeof(DLNode));

        if(n==NULL)
            return OUT_OF_MEMORY;

        else{
            n->data=a;

            if(l->size==0){
                n->prev=NULL;
                n->next=NULL;
                l->begin=n;
                l->end=n;
                l->size++;
            }
            else if(pos==1){
                n->prev=NULL;
                n->next=l->begin;
                l->begin->prev=n;
                l->begin=n;
                l->size++;
            }
            else if(pos==l->size+1){
                n->next=NULL;
                n->prev=l->end;
                l->end->next=n;
                l->end=n;
                l->size++;
            }
            else{
                int cont=1;
                DLNode *aux;

                aux=l->begin;
                while (cont<pos-1){
                   aux=aux->next;
                   cont++;
                }
                n->prev=aux;
                n->next=aux->next;
                aux->next->prev=n;
                aux->next=n;
                l->size++;
            }
            return SUCCESS;
        }
    }
}

int list_size(DLlist *l){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        return l->size;
    }
}

int list_pop_front(DLlist *l){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(l->begin==NULL)
            return ELEM_NOT_FOUND;
        else{
            DLNode *aux;

            aux=l->begin;
            l->begin=l->begin->next;
            l->begin->prev=NULL;
            free(aux);
            l->size--;

            return SUCCESS;
        }
    }
}

int list_pop_back(DLlist *l){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(l->begin==NULL || l->end==NULL)
            return ELEM_NOT_FOUND;
        else{
            DLNode *aux;

            aux = l->end;
            l->end = l->end->prev;
            l->end->next=NULL;
            free(aux);
            l->size--;

            return SUCCESS;
        }
    }
}

int list_erase(DLlist *l, int pos){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            DLNode *aux;
            int cont=1;

            if(pos==1){
                aux=l->begin;
                l->begin=l->begin->next;
                l->begin->prev=NULL;
                free(aux);
                l->size--;
            }
            else if(pos==l->size){
                aux=l->end;
                l->end=l->end->prev;
                l->end->next=NULL;
                free(aux);
                l->size--;
            }
            else{
                aux=l->begin;
                while(aux!=NULL && pos != cont){
                    aux=aux->next;
                    cont++;
                }
                if(aux==NULL){
                    return ELEM_NOT_FOUND;
                }
                else{
                    aux->prev->next=aux->next;
                    aux->next->prev=aux->prev;
                    free(aux);
                    l->size--;
                }
            }
            return SUCCESS;
        }

    }
}

int list_find_pos(DLlist *l, int pos, aluno *a){
    if(l == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            DLNode *aux;
            int cont=1;

            aux = l->begin;
            while(aux!=NULL && cont!=pos){
                aux=aux->next;
                cont++;
            }
            if(aux==NULL){
                return ELEM_NOT_FOUND;
            }
            else{
                *a=aux->data;
                return SUCCESS;
            }
        }
    }
}

int list_find_mat(DLlist *l, int mat, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            DLNode *aux;

            aux = l->begin;
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

int list_front(DLlist *l, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            *a=l->begin->data;
            return SUCCESS;
        }

    }
}
int list_back(DLlist *l, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->end==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            *a=l->end->data;
            return SUCCESS;
        }

    }
}

int list_get_pos(DLlist *l, int mat, int *pos){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->begin==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            DLNode *aux;
            int cont=1;

            aux = l->begin;
            while(aux!= NULL && aux->data.matricula != mat){
                cont++;
                aux=aux->next;
            }
            if(aux == NULL)
                return ELEM_NOT_FOUND; 
            
            else{
                *pos=cont;
                return SUCCESS;
            }  
        }
    }
}

int list_print_forward(DLlist *l){
    if(l == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *aux;
        aux = l->begin;

        printf("\nImprimindo a lista\n");
        while(aux!=NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        return SUCCESS;

    }
}


int list_print_reverse(DLlist *l){
    if(l == NULL)
        return INVALID_NULL_POINTER;
        
    else{
        DLNode *aux;
        aux = l->end;

        printf("\nImprimindo a lista - Reverso\n");
        while(aux!=NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->prev;
        }
        return SUCCESS;

    }
}