#include<stdio.h>
#include<string.h>
#include<ctype.h>
//5 - Nome e sobrenome

    int main(){
        char nome[40], n[20], s[20];
        int i, j, k=0;

        printf("<<Vetor de Char>>\n");

        printf("Digite um nome e sobrenome: ");
        fgets(nome, 40, stdin);

        for(i=0; nome[i]!=32; i++){
            n[i]=nome[i];
        }
        n[i]='\0';
        
        for(j=i+1; nome[j]!='\0'; j++){
            s[k]=nome[j];
            k++;
        }
        s[k]='\0';

        printf("Nome: %s\n", n);
        printf("Sobrenome: %s\n", s);
    }