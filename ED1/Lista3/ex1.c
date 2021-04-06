#include<stdio.h>
//1 - Calculo Media

    int main(){
        char nome;
        float n1, n2, n3, media;

        printf("<<Calculo da Media>>\n");
        printf("Digite a inicial do nome do aluno: ");
        setbuf(stdin,NULL);
        scanf("%c", &nome);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n2);
        printf("Digite a nota da prova 3: ");
        scanf("%f", &n3);

        media = (n1*1+n2*1+n3*2)/4;

        if(media>=60)
            printf("A nota media do aluno %c. e %.1f => Aprovado!\n", nome, media);
            else
            printf("A nota media do aluno %c. e %.1f => Reprovado!\n", nome, media);
            
    }