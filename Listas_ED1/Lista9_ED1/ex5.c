#include<stdio.h>
#include<string.h>
//5 - Alunos Struct

    struct aluno{
        char nome[20];
        int mat, falta;
        float n1, n2, n3, media;
    };

    int main(){
        int i, alMN1, alMA, alME;
        float maiorN1=0, maiorM=-1, menorM=101;
        struct aluno p[3];

        for(i=0; i<3; i++){
            printf("Digite a matricula do aluno %d: ", i+1);
            scanf("%d", &p[i].mat);
            setbuf(stdin, NULL);
            printf("Digite o nome do aluno %d: ", i+1);
            gets(p[i].nome);
            printf("Digite a nota 1 do aluno %d: ", i+1);
            scanf("%f", &p[i].n1);
            printf("Digite a nota 2 do aluno %d: ", i+1);
            scanf("%f", &p[i].n2);
            printf("Digite a nota 3 do aluno %d: ", i+1);
            scanf("%f", &p[i].n3);
            printf("Digite o numero de faltas do aluno %d: ", i+1);
            scanf("%d", &p[i].falta);
            printf("\n");

            p[i].media=(p[i].n1+p[i].n2+p[i].n3)/3.0;


            if(p[i].n1>maiorN1){
                maiorN1=p[i].n1;
                alMN1=i;
            }
            if(p[i].media>maiorM){
                maiorM=p[i].media;
                alMA=i;
            }
            if(p[i].media<menorM){
                menorM=p[i].media;
                alME=i;
            }
        }

        printf("Aluno com a maior nota 1: %s, %.1f\n", p[alMN1].nome, maiorN1);
        printf("Aluno com a maior media geral: %s, %.1f\n", p[alMA].nome, maiorM);
        printf("Aluno com a menor media geral: %s, %.1f\n", p[alME].nome, menorM);
        printf("\n");

        for(i=0; i<3; i++){
            if(p[i].media>=60.0 && p[i].falta<=18){
                printf("Aluno %s: Aprovado\n", p[i].nome);
            }
                else if(p[i].falta>18){
                    printf("Alino %s: Reprovado por falta\n", p[i].nome);
                }
                    else{
                        printf("Aluno %s: Reprovado por nota\n", p[i].nome);
                    }
        }
    }