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


//Cria a lista
//Retorna o ponteiro para a lista
list *list_creat(){
    list *l;

    l = malloc(sizeof(list));

    if(l!=NULL)
        l->head=NULL;

    return l;
}

//Libera a lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) para erro e SUCCESS(0) para sucesso
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

//Insere um elemento na primeira posicao da lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
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

//Insere um elemento na ultima posicao da lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
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

//Insere um elemento em uma determinada posicao da lista
//dado a lista, a posicao e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_insert(list *l, int pos, aluno a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *n, *atu, *ant;

        n = malloc(sizeof(list_node));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        else{

            n->data=a;
            if(pos==1){
                n->next=l->head;
                l->head=n;
                return SUCCESS;
            }
            else{
                int i;

                atu = l->head;
                ant = l->head;
                for(i=1; i<pos; i++){
                    ant=atu;
                    atu=atu->next;
                    if(atu==NULL && i<(pos-1)){
                        return OUT_OF_RANGE;
                    }
                }
                ant->next=n;
                n->next = atu;
                return SUCCESS;
            }

        }
    }
}

//Insere um elemento de maneira ordenada na lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_insert_sorted(list *l, aluno a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *n, *atu, *ant;

        n = malloc(sizeof(list_node));

        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        else{
            n->data=a;
            
            atu = l->head;
            ant = l->head;

            if(l->head==NULL || l->head->data.matricula> n->data.matricula){
                n->next=l->head;
                l->head=n;
                return SUCCESS;
            }
            else{
                while(atu!= NULL && atu->data.matricula < n->data.matricula){
                        ant=atu;
                        atu=atu->next;
                    }
                ant->next=n;
                n->next=atu;
                return SUCCESS;
            }
        }
    }
}

//Remove o primeiro elemento da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_pop_front(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->head==NULL)
            return ELEM_NOT_FOUND;
        else{
            list_node *aux;

            aux=l->head;
            l->head=aux->next; 
            free(aux);

            return SUCCESS;
        }
    }
}

//Remove o ultimo elemento da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_pop_back(list *l){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *atu, *ant;

        atu = l->head;
        ant = l->head;
        while(atu->next != NULL){
            ant=atu;
            atu=atu->next;
        }
        ant->next=NULL;
        free(atu);
        return SUCCESS;
    }
}

//Remove um elemento de uma determindada posicao da lista
//dado a lista e a posicao
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_erase_pos(list *l, int pos){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *atu, *ant;
        int cont=1;

            atu = l->head;
            ant = l->head;

            if(l->head==NULL)
                return ELEM_NOT_FOUND;
            
            else if(pos == 1 ){
                l->head=l->head->next;
                free(atu);
                return SUCCESS;
            }
            else{
                while(atu!= NULL && cont != pos){
                    cont++;
                    ant=atu;
                    atu=atu->next;
                }
                if(atu == NULL)
                    return ELEM_NOT_FOUND; 
                
                else{
                    ant->next=atu->next;
                    free(atu);
                    return SUCCESS;
                }  
            }
    }
}

//Remove um elemento da lista pela matricula
//dado a lista e a matricula
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_erase_data(list *l, int mat){ 
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *atu, *ant;

            atu = l->head;
            ant = l->head;

            if(l->head ==NULL)
                return ELEM_NOT_FOUND;

            else if(atu->data.matricula == mat){
                l->head=l->head->next;
                free(atu);
                return SUCCESS;
            }
            else{
                while(atu!= NULL && atu->data.matricula != mat){
                    ant=atu;
                    atu=atu->next;
                }
                if(atu == NULL)
                    return ELEM_NOT_FOUND; 
                
                else{
                    ant->next=atu->next;
                    free(atu);
                    return SUCCESS;
                }  
            }
    }
}

//Consulta os dados de uma posicao da lista
//dado a lista, a posicao e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_find_pos(list *l, int pos, aluno *a){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->head==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            list_node *aux;
            int cont=1;

            aux = l->head;
            while(aux != NULL && pos != cont){
                cont++;
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

//Consulta os dados de uma matricula na lista
//dado a lista, a matricula e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
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

//Consulta os dados da primeira posicao da lista
//dado a lista e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
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

//Consulta os dados da ultima posicao da lista
//dado a lista e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
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

//Verifica o tamanho da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) para erro e a tamnho da lista para sucesso
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

//Informa a posicao de um elemento na lista
//dado a lista, a matricula e o ponteiro de inteiro que recebe a posicao
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_get_pos(list *l, int mat, int *pos){
    if(l==NULL)
        return INVALID_NULL_POINTER;
    else{
        if(l->head==NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            list_node *aux;
            int cont=1;

            aux = l->head;
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

//Imprime a lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) para erro e SUCCESS(0) para sucesso
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

