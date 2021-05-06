#include<stdio.h>
#include"TLinkedList.h"

    int main(){
        int i, aux, mat, pos;
        aluno a[10]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 10, 10, 10},
        {130, "Joao", 7, 8, 10},
        {105, "Maria", 7.5, 9.1, 10},
        {150, "Guilherme", 6.5, 9.0, 8},
        {100, "Alisson", 10, 10, 10},
        {170, "Felipe", 10, 10, 10},
        {200, "Carolina", 7, 8, 10},
        {115, "Jorge", 7.5, 9.1, 10},
        {195, "Ana", 6.5, 9.0, 8}
        }, aC;

        list *l;

        l = list_creat(); // cria a lista 

        for(i=0; i<9; i++){
            list_push_front(l, a[i]); //insere na primeira posicao da lista
        }

       //list_push_back(l, a[9]); //insere na ultima posicao da lista

        list_insert(l, 2, a[9]);

        list_print(l); //imprime toda a lista

        printf("\nTamanho da lista: %d\n", list_size(l)); //devolve o tamaho da lista

        /*
        aux = list_pop_back(l); //apaga o ultimo elemento da lista
        printf("%d", aux);
        printf("\nRetirarando o ultimo elemento\n");
        list_print(l);  
        */

        printf("\nRemovendo o primeiro elemento da lista\n");
        list_pop_front(l); //apaga o primeiro elemento da lista
        list_print(l);

        printf("\nConsultando o primeiro aluno da lista:\n");
        aux = list_front(l, &aC); //consulta o primeiro elemento da lista

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

        printf("\nConsultando o ultimo aluno da lista:\n");
        aux = list_back(l, &aC); //consulta o primeiro elemento da lista

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

        printf("\nDigite a matricula para consultar: ");
        scanf("%d", &mat);
        aux = list_find_mat(l, mat, &aC); //Consulta o aluno pela matricula

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

        printf("\nDigite a matricula para remover: ");
        scanf("%d", &mat);
        aux = list_erase_data(l, mat); //remove um aluno pela matricula 

            if(aux==INVALID_NULL_POINTER)
                printf("\nPonteiro invalido\n");
            else if(aux == ELEM_NOT_FOUND){
                printf("\nElemento nao encontrado\n");
            }
            else if(aux == SUCCESS){
                printf("Elemento removido\n");
            }
        
        list_print(l);


        list_free(l);

        return 0;
    }