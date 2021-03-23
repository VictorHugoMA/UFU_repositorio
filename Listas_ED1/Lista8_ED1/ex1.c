#include<stdio.h>
#include<string.h>
#include<ctype.h>
//1 - Nome

    int main(){
        char nome[50];

        printf("<<Vetor de Char>>\n");
        
        printf("Digite um nome: ");
        gets(nome);

        printf("O nome digitado e: %s\n", nome);

    }