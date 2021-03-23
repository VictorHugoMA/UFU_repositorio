#include<stdio.h>
#include<string.h>
#include<ctype.h>
//8 - Declaracao

    int main(){
        char nome[40], cpf[15], rg[15], end[50], cidade[20], estado[3], cep[10];

        printf("Digite o seu nome: ");
        gets(nome);
        printf("Digite seu CPF: ");
        gets(cpf);
        printf("Digite seu RG: ");
        gets(rg);
        printf("Digite seu endereco: ");
        gets(end);
        printf("Digite a cidade: ");
        gets(cidade);
        printf("Digite o estado: ");
        gets(estado);
        printf("Digite o CEP: ");
        gets(cep);

        printf("\n\tDECLARACAO\n\n");
        printf("Eu, %s, RG %s, CPF %s,\nresidente a %s, %s-%s, CEP %s\nvenho por meio desta declarar que vou estudar para a prova\n\n", nome, rg, cpf, end, cidade, estado, cep);

    }