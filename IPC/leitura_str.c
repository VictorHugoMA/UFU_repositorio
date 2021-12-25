#include<stdio.h>
#include<string.h>

int main(){
        int a;
        char nome[10];
        char temp[10];

        //Leitura de numero
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", &a);
        
        //Leitura de string
        //setbuf(stdin, NULL); //evitar usar
        fgets(temp, 10, stdin);
        temp[strcspn(temp, "\n")] = '\0';
        strcpy(nome, temp);

        printf("Numero: %d\n", a);
        printf("Nome: %s\n", nome);

    }