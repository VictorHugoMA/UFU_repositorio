#include<stdio.h>
#include<stdlib.h>

    int main(){
        int fim, i;
        char pergunta[30];

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf(" %[^\n]s", pergunta);
            printf("I am Toorg!\n");
        }
        return 0;
    }

    //setbuf(stdin, NULL); ou espaco antes da porcentagem == limpa o buffer do teclado
