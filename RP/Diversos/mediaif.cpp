#include<stdio.h>
    int main(){
     float nota1, nota2, media;

        printf("digite a nota 1: ");
        scanf("%f", &nota1);

        printf("digite a nota 2: ");
        scanf("%f", &nota2);

        media = (nota1+nota2)/2.0;
        printf("\nMEDIA = %.1f\n\n", media);

        if(media>=7){
            printf("ALUNO APROVADO\n");
        }
        else if(media>=5){
            printf("ALUNO DE RECUPERACAO\n");
        }
        else{
        printf("ALUNO REPROVADO\n");
        }
    }
