#include<stdio.h>

    int main(){

        float num;
        int cont, quant;

        quant=0;

        for(cont=1; cont<=6; cont++){
            scanf("%f", &num);

            if(num>=0){
                quant=quant+1;
            }
        }

        printf("%d valores positivos\n", quant);


    }
