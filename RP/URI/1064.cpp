#include<stdio.h>

    int main(){
        int i, qpar=0;
        float num, media, spar=0;

        for(i=1; i<=6; i++){
            scanf("%f", &num);

            if(num>0){
                qpar++;
                spar=spar+num;
            }
        }
        media=spar/qpar;

        printf("%d valores positivos\n", qpar);
        printf("%.1f\n", media);


    }
