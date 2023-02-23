#include<stdio.h>

    int main(){
        char time1[20], time2[20];
        int p1, p2, fim, i;

        printf("Quantos jogos voce deseja saber quem venceu ?\n");
        scanf("%d", &fim);
        printf("\n");

        for(i=0; i<fim; i++){
            printf("Digite o nome dos dois times: ");
            scanf("%s %s", time1, time2);
            printf("\n");

            printf("Com quantos pontos o(a) %s ficou: ", time1);
            scanf("%d", &p1);

            printf("Com quantos pontos o(a) %s ficou: ", time2);
            scanf("%d", &p2);
            printf("\n");

            if(p1>p2){
                printf("%s venceu por %d x %d\n\n\n", time1, p1, p2);
            }
            else if(p1==p2){
                printf("%s e %s empataram por %d x %d\n\n\n", time1, time2, p1, p2);
            }
            else{
                printf("%s venceu por %d x %d\n\n\n", time2, p2, p1);
            }
        }

        return 0;
    }
