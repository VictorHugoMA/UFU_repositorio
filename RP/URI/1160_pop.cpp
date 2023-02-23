#include<stdio.h>

    int main(){
        int fim, i, PA, PB, cont, nPA, nPB;
        float GA, GB;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            scanf("%d %d", &PA, &PB);
            scanf("%f %f", &GA, &GB);

            nPA=PA;
            nPB=PB;
            cont=1;

            while(1){
                nPA+=nPA*GA/100;
                nPB+=nPB*GB/100;

                if(cont>100){
                    printf("Mais de 1 seculo.\n");
                    break;
                }
                else if(nPA>nPB){
                    printf("%d anos.\n", cont);
                    break;
                }
                cont++;
            }
        }
        return 0;
    }
