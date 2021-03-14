#include<stdio.h>
//14 - Universidade

    int main(){
        int fim, i;

        printf("<< Universidade X >>\n");
        printf("Quantos alunos serao cadastrados: ");
        scanf("%d", &fim);

        if(fim>10000)
            return 0;

        int num[fim];
        float cra[fim];
        char cla[fim];

        for(i=0; i<fim; i++){
            printf("Entre com o numero do aluno: ");
            scanf("%d", &num[i]);
            printf("Entre com a classe social do aluno %d: ", num[i]);
            setbuf(stdin, NULL);
            scanf("%c", &cla[i]);
            printf("Entre com o CRA do aluno %d: ", num[i]);
            scanf("%f", &cra[i]);
            printf("\n");
        }

            printf("=== Alunos Cadastrados ===\n");
            for(i=0; i<fim; i++){
                printf("Numero: %d Classe social: %c CRA: %.2f\n", num[i], cla[i], cra[i]);
            }
            
    }