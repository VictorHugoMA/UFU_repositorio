#include<stdio.h>
#include<string.h>
#include<ctype.h>
//4 - Compara nomes sem diferenca maius e minus

    int main(){
        char nome1[50], nome2[50];

        printf("<<Compara nomes>>\n");
        printf("Digite o nome 1: ");
        gets(nome1);
        printf("Digite o nome 2: ");
        gets(nome2);

        for(int i=0; nome1[i]!='\0'; i++){
            nome1[i] = tolower(nome1[i]);
        }
        for(int i=0; nome2[i]!='\0'; i++){
            nome2[i] = tolower(nome2[i]);
        }

        if(strcmp(nome1, nome2)==0)
            printf("Os nomes digitados sao iguais.\n");
        
            else
                printf("Os nomes digitados sao diferentes.\n");

    }