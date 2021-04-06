#include<stdio.h>
#include<string.h>
#include<ctype.h>
//6 - Separa letras

    int main(){
        char nome[50];

        printf("<<Separa letras>>\n");

        printf("Digite o nome: ");
        gets(nome);

        for(int i=0; i<strlen(nome); i++){
            printf("%da letra: %c\n", i+1, nome[i]);
        }
    
    }