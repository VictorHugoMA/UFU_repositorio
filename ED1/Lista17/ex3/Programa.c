#include<stdio.h>
#include"TStack.h"

    int main(){
        TStack *t;
        char a, b, c;

        a='A';
        b='B';
        c='C';

        t = stack_create(5); //cria a pilha

        stack_push(t, a); //insere no topo da pilha
        stack_push(t, b);
        stack_push(t, c);

        printf("\nElemmento no topo da pilha: ");
        stack_print(t); //imprime o topo da pilha

        stack_pop(t); //remove o topo da pilha
        printf("\nElemmento no topo da pilha depois de uma remocao: ");
        stack_print(t);

        stack_pop(t);
        printf("\nElemmento no topo da pilha depois de mais uma remocao: ");
        stack_print(t);

        stack_free(t); //libera a pilha
    }