#include<stdio.h>
//9 - Media de n alunos, max 100

    int main(){
        int i, alunos;
        float notas[100],soma, media;

        printf("<<Media de n alunos. Maxima 100>>\n");
        
        while(1){
            printf("Entre com o numero de alunos: ");
            scanf("%d", &alunos);

            if(alunos>100)
                printf("Erro! O numero maximo de alunos permitido e 100.\n");
            
            if(alunos<=100)
                break;
        }

        for(i=0; i<alunos; i++){
            printf("Digite a nota do aluno %d:", i+1);
            scanf("%f", &notas[i]);
            soma+=notas[i];
        }

            media=soma/alunos;
            printf("Relatorio de Notas\n");

            for(i=0; i<alunos; i++){
                printf("A nota do aluno %d e: %.1f\n", i, notas[i]);
            }
            printf("A media da turma e: %.1f\n", media);
        
    }