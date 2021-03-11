#include<stdio.h>
//2 - Nome

    int main(){
        int i=0;
        char nome[50];

        printf("<<Vetor de char>>\n");
        printf("Digite um nome: ");
        while((nome[i]=getchar())!='\n'){
            i++;
        }

        printf("O nome digitado e: ");
        for(int j=0; j<i; j++){
            printf("%c", nome[j]);
        }
    }