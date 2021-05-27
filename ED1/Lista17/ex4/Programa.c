#include<stdio.h>
#include"TStack.h"

    int main(){
        int aux;
        char str[7]= "([()])";
        TStack *t;

        t = stack_create; //cria a stack

        for(int i=0; i<8; i++){
            stack_push(t, str[i]); //insere na stack
        }

        aux=bemFormada(t); //informa se a string tem os parenteses e colchetes bem formados

        if(aux==1)
            printf("Sequencia bem formada");
        else
            printf("Sequencia nao eh bem formada");

        stack_free(t);

        return 0;
    }