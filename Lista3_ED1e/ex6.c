#include<stdio.h>
#include<math.h>
//6 - Quadrado Perfeito
    
    int main(){
        float num, nr;

        printf("Digite um numero: ");
        scanf("%f", &num);

        nr=sqrt(num);

        if((nr*nr)==num){
            printf("Eh quadrado perfeito\n");
            printf("Raiz: %f\n", nr);
        }

    }