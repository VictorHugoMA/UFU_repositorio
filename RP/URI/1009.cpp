#include<stdio.h>

    int main (){
        char nome[15];
        double salf, vendas, total;

        scanf("%s %lf %lf", nome, &salf, &vendas);

        total = (vendas * 0.15) + salf;

        printf("TOTAL = R$ %.2lf\n", total);
    }
