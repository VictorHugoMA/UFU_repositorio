#include<stdio.h>
#include"TDLinkedList.h"

    int main(){
        int aux, pos;
        aluno aC, a[10]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 0, 0, 0},
        {130, "Joao", 7, 8, 10},
        {105, "Maria", 7.5, 9.1, 10},
        {150, "Guilherme", 6.5, 9.0, 8},
        {100, "Alisson", 0, 0, 0},
        {170, "Felipe", 10, 10, 10},
        {200, "Carolina", 7, 8, 10},
        {115, "Jorge", 7.5, 9.1, 10},
        {195, "Ana", 6.5, 9.0, 8}
        };

        DLlist *l;

        l = list_creat(); //cria a lista

        for(int i=0; i<8; i++){
            list_push_back(l, a[i]); //insere aluno na ultima posicao
        }
        list_insert(l, 5, a[8]); //insere aluno em uma determinada posicao
        list_push_front(l, a[9]); //insere aluno na primeira posicao




        aux=list_size(l); //da o tamanho da lista
        if(aux>=0){
            printf("\nTamanho da lista: %d\n", aux);
        }
        list_print_forward(l); //imprime a lista na ordem 


        printf("\nDigite a posicao para consultar: ");
        scanf("%d", &pos);
        aux = list_find_pos(l, pos, &aC); //Consulta o aluno pela posicao na lista

            if(aux==INVALID_NULL_POINTER)
                printf("\nPonteiro invalido\n");
            else if(aux == ELEM_NOT_FOUND){
                printf("\nElemento nao encontrado\n");
            }
            else if(aux == SUCCESS){
                printf("Matricula %d\n", aC.matricula);
                printf("Nome: %s\n", aC.nome);
                printf("Notas: %.1f %.1f %.1f\n", aC.n1, aC.n2, aC.n3);
            }

        
        printf("\nDigite a posicao para remover: ");
        scanf("%d", &pos);
        aux = list_erase(l, pos); //remove um aluno pela posicao

            if(aux==INVALID_NULL_POINTER)
                printf("\nPonteiro invalido\n");
            else if(aux == ELEM_NOT_FOUND){
                printf("\nElemento nao encontrado\n");
            }
            else if(aux == SUCCESS){
                printf("Elemento removido\n");
            }
        
        list_print_forward(l);


        list_erase_zeros(l);
        list_print_forward(l);

        list_free(l); //libera a lista

        return 0;
    }