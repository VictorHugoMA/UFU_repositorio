/*
#include<stdio.h>
#include<string.h>

    int main(){
        char nome[15];
        char zelda[6] = "zelda";

        scanf("%c", &nome);

        if(strcmp(nome, zelda)==0)
            printf("Link Bolado\n");
        else
            printf("Link Tranquilo\n");
    }
*/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void lower(char* nome, int tam);

int main(){
    char comp[15] = "zelda";
    char nome[100005];
    char *controle;
    int lennome;

    scanf("%s", nome);
    lennome = strlen(nome);


    lower(nome, lennome);
    controle = strstr(nome, comp);

    if(!controle){
        printf("Link Tranquilo\n");
    }
    else{
        printf("Link Bolado\n");
    }

    return 0;
}
void lower(char* nome, int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(nome[i] >= 'A' && nome[i] <= 'Z'){
            nome[i] += 32;
        }
    }
}