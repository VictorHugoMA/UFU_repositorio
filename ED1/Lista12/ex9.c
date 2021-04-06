#include<stdio.h>
//9 - Incrementar ou decrementar funcao parametro

   void incp(float *y, float x){
        float t=(*y);
        
        (*y)*=x;
        t+=(*y);
        *y=t;
    
    }
    

    int main(){
        float y, x;

        printf("Digite o valor de y: ");
        scanf("%f", &y);
        printf("digite o percentual de alteracao: ");
        scanf("%f", &x);

        incp(&y, x);


        printf("O valor alterado eh: %.0f\n", y);
    }