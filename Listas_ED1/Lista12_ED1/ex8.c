#include<stdio.h>
//8 - Incrementar ou decrementar funcao

    int incp(int y, float x){
        float t=y;
        if(x>=0){
            y*=x;
            t+=y;
            return t;
        }
        else
            y*=x;
            t-=y;
            return t;
    }
    int main(){
        int y;
        float x, total;

        printf("Digite o valor de y: ");
        scanf("%d", &y);
        printf("digite o percentual de alteracao: ");
        scanf("%f", &x);

        total = incp(y, x);


        printf("O valor alterado eh: %.0f\n", total);
    }