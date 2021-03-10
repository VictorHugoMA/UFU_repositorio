#include<stdio.h>
//12 - Probabilidade 

    int main(){
        float qvd, qaz, qam, qvm, soma, pvd, paz, pam, pvm;

        printf("<<Probabilidades>>\n");
        printf("Digite a quantidade de bolinhas\n");
        printf("Verde: ");
        scanf("%f", &qvd);
        printf("Azul: ");
        scanf("%f", &qaz);
        printf("Amarela: ");
        scanf("%f", &qam);
        printf("Vermelho: ");
        scanf("%f", &qvm);

        soma=qvd+qaz+qam+qvm;
        pvd=(qvd/soma)*100;
        paz=(qaz/soma)*100;
        pam=(qam/soma)*100;
        pvm=(qvm/soma)*100;

        if(pvd>paz&&pvd>pam&&pvd>pvm){
            printf("\nProbabilidades\n");
            printf("Verde: %.2f%% << Maior probabilidade\n", pvd);
            printf("Azul: %.2f%%\n", paz);
            printf("Amarelo: %.2f%%\n", pam);
            printf("Vermelha: %.2f%%\n", pvm);
        }

            else if(paz>pam&&paz>pvm){
                printf("\nProbabilidades\n");
                printf("Verde: %.2f%%\n", pvd);
                printf("Azul: %.2f%% << Maior probabilidade\n", paz);
                printf("Amarelo: %.2f%%\n", pam);
                printf("Vermelha: %.2f%%\n", pvm);
            }

            else if(pam>pvm){
                printf("\nProbabilidades\n");
                printf("Verde: %.2f%%\n", pvd);
                printf("Azul: %.2f%%\n", paz);
                printf("Amarelo: %.2f%% << Maior probabilidade\n", pam);
                printf("Vermelha: %.2f%%\n", pvm);
            }

                else{
                    printf("\nProbabilidades\n");
                    printf("Verde: %.2f%%\n", pvd);
                    printf("Azul: %.2f%%\n", paz);
                    printf("Amarelo: %.2f%%\n", pam);
                    printf("Vermelha: %.2f%% << Maior probabilidade\n", pvm);
                }

    }