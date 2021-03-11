#include<stdio.h>
//3 - Nome maiusculo

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
            if(nome[j]>=97)
                printf("%c", nome[j]-32);
                else
                    printf("%c", nome[j]);
        }
        
    }