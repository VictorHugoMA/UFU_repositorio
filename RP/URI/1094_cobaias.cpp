#include<stdio.h>

    int main(){
        int i, fim, quant, qc=0, qr=0, qs=0, total=0;
        char entrada, coelho='C', rato='R', sapo='S';

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            quant=0;

            scanf("%d %c", &quant, &entrada);

            if(entrada==coelho) qc+=quant;
            else if(entrada==rato) qr+=quant;
            else if(entrada==sapo) qs+=quant;

            total+=quant;

        }

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %d\n", qc);
        printf("Total de ratos: %d\n", qr);
        printf("Total de sapos: %d\n", qs);

        printf("Percentual de coelhos: %.2f %%\n", (float)qc/total*100);
        printf("Percentual de ratos: %.2f %%\n", (float)qr/total*100);
        printf("Percentual de sapos: %.2f %%\n", (float)qs/total*100);

    }
