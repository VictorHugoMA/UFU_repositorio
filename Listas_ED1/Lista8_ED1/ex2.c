#include<stdio.h>
#include<string.h>
#include<ctype.h>
//2 - nome maiusculo e minusculo

     int main(){
        char nome[50];

        printf("<<Vetor de Char>>\n");
        
        printf("Digite um nome: ");
        gets(nome);

        for(int i=0; nome[i]!='\0'; i++){
            nome[i] = toupper(nome[i]);
        }
        printf("O nome digitado e: %s\n", nome);
        
        for(int i=0; nome[i]!='\0'; i++){
            nome[i] = tolower(nome[i]);
        }
        printf("O nome digitado e: %s\n", nome);

     }