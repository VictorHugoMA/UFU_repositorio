#include<stdio.h>

    int main(){
        int peca1, peca2, quant1, quant2;
        double val1, val2, total;

        scanf("%d %d %lf", &peca1, &quant1, &val1);
        scanf("%d %d %lf", &peca2, &quant2, &val2);

        total = quant1 * val1 + quant2 * val2;

        printf("VALOR A PAGAR: R$ %.2lf\n", total);

    }
