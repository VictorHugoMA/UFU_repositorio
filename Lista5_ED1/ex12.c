#include<stdio.h>
//12 - Probabilidade 

    int main(){
        int i;
        float cor[4], prob[4], soma=0;

        printf("<< Probabilidades >>\n\n");
        printf("Digite a quantidade de bolinhas\n");
        printf("Verde: ");
        scanf("%f", &cor[0]);
        printf("Azul: ");
        scanf("%f", &cor[1]);
        printf("Amarela: ");
        scanf("%f", &cor[2]);
        printf("Vermelha: ");
        scanf("%f", &cor[3]);

        for(i=0; i<4; i++){
            soma+=cor[i];
        }
        for(i=0; i<4; i++){
            prob[i]=(cor[i]/soma)*100.0;
        }

        if(prob[0]>prob[1]&&prob[0]>prob[2]&&prob[0]>prob[3]){
            printf("\nProbabilidades\n");
            printf("Verde: %.2f%% << Maior probabilidade\n", prob[0]);
            printf("Azul: %.2f%%\n", prob[1]);
            printf("Amarelo: %.2f%%\n", prob[2]);
            printf("Vermelha: %.2f%%\n", prob[3]);
        }

            else if(prob[1]>prob[2]&&prob[1]>prob[3]){
                printf("\nProbabilidades\n");
                printf("Verde: %.2f%%\n", prob[0]);
                printf("Azul: %.2f%% << Maior probabilidade\n", prob[1]);
                printf("Amarelo: %.2f%%\n", prob[2]);
                printf("Vermelha: %.2f%%\n", prob[3]);
            }

            else if(prob[2]>prob[3]){
                printf("\nProbabilidades\n");
                printf("Verde: %.2f%%\n", prob[0]);
                printf("Azul: %.2f%%\n", prob[1]);
                printf("Amarelo: %.2f%% << Maior probabilidade\n", prob[2]);
                printf("Vermelha: %.2f%%\n", prob[3]);
            }

                else{
                    printf("\nProbabilidades\n");
                    printf("Verde: %.2f%%\n", prob[0]);
                    printf("Azul: %.2f%%\n", prob[1]);
                    printf("Amarelo: %.2f%%\n", prob[2]);
                    printf("Vermelha: %.2f%% << Maior probabilidade\n", prob[3]);
                }
    }