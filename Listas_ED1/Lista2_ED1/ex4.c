#include<stdio.h>
//4 - Calculo da Media 4

    int main(){
        char nome;
        float n1, n2, n3, p1, p2, p3;

        printf("<<Calculo da Media>>\n");
        printf("Digite o nome do aluno: ");
        scanf("%c", &nome);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n2);
        printf("Digite a nota da prova 3: ");
        scanf("%f", &n3);
        printf("Digite o peso da prova 1: ");
        scanf("%f", &p1);
        printf("Digite o peso da prova 2: ");
        scanf("%f", &p2);
        printf("Digite o peso da prova 3: ");
        scanf("%f", &p3);

        printf("A nota media do aluno %c. e %.2f\n", nome, (n1*p1+n2*p2+n3*p3)/(p1+p2+p3));

    }