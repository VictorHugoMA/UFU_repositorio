#include<stdio.h>

    int main(){
        int cod, quant;

        scanf("%d %d", &cod, &quant);

        if(cod==1){
            printf("Total: R$ %.2f\n", 4.00*quant);
        }
        else if(cod==2){
            printf("Total: R$ %.2f\n", 4.50*quant);
        }
        else if(cod==3){
            printf("Total: R$ %.2f\n", 5.00*quant);
        }
        else if(cod==4){
            printf("Total: R$ %.2f\n", 2.00*quant);
        }
        else if(cod==5){
            printf("Total: R$ %.2f\n", 1.50*quant);
        }

    }
