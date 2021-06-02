#include<stdio.h>
#include<string.h>
#include"TStack.h"

    int main(){
        int aux, res;
        char str[20];
        TStack *inf;
        TStack *pos;
        int A=5, B=9, C=8, D=4, E=6, F=7;

        inf = stack_create; //cria a stack

        printf("Digite a expressao infixa: ");
        fgets(str, 20, stdin);
        for(int i=0; i<strlen(str)-1; i++){
            stack_push(inf, str[i]); //insere na stack
        }

        pos = inf_pos(inf);

        aux=calcula_op(pos, &res);
        if(aux!=SUCCESS){
            printf("Erro\n");
        }
        else{
            printf("Resultado: %d\n", res);
        }

        stack_free(inf);
        stack_free(pos);

        return 0;
    }