#include<stdio.h>
    //10 - Loteria 2
        int main(){
            float a1, a2, a3, premio;

            printf("<<Loteria>>\n");
            printf("Bolao jogador 1 R$: ");
            scanf("%f", &a1);
            printf("Bolao jogador 2 R$: ");
            scanf("%f", &a2);
            printf("Bolao jogador 3 R$: ");
            scanf("%f", &a3);

            printf("Informe o valor do premio: ");
            scanf("%f", &premio);
            
            printf("Jogador 1 recebera R$: %.2f\n", (a1/(a1+a2+a3))*premio);
            printf("Jogador 2 recebera R$: %.2f\n", (a2/(a1+a2+a3))*premio);
            printf("Jogador 2 recebera R$: %.2f\n", (a3/(a1+a2+a3))*premio);
            
        }