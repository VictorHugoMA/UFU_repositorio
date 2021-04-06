#include<stdio.h>
//2 - Calculo de media 2

    int main(){
        char nome;
        float n1, n2;

        printf("<<Calculo da Media>>\n");
        printf("Digite o nome do aluno: ");
        scanf("%c", &nome);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n2);

        printf("A nota media do aluno %c. e %.1f\n", nome, (n1+n2)/2);

    }