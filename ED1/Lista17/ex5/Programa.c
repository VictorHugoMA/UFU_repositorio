#include<stdio.h>
#include"TStack.h"

    int main(){
        int aux;
        char str[14]= "(A*(B+C)/D-E)";
        TStack *inf;
        TStack *pos;

        inf = stack_create; //cria a stack

        for(int i=0; i<14; i++){
            stack_push(inf, str[i]); //insere na stack
        }

        pos = inf_pos(inf);

        stack_free(inf);
        stack_free(pos);

        return 0;
    }