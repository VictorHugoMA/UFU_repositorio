#include<stdio.h>

    int main(){

        int cont, quant, num;
        quant=0;

        for(cont=1; cont<=5; cont++){
            scanf("%d", &num);

            if(num%2==0){
                quant=quant+1;
            }
        }
        printf("%d valores pares\n", quant);

    }
