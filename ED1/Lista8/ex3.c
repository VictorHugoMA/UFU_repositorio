#include<stdio.h>
#include<string.h>
#include<ctype.h>
//3 - Compara nomes

    int main(){
        char nome1[50], nome2[50];

        printf("<<Compara nomes>>\n");
        printf("Digite o nome 1: ");
        gets(nome1);
        printf("Digite o nome 2: ");
        gets(nome2);

        if(strcmp(nome1, nome2)==0)
            printf("Os nomes digitados sao iguais.\n");
        
            else
                printf("Os nomes digitados sao diferentes.\n");

    }