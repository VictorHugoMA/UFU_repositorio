#include<stdio.h>

    int main(){
        double m[12][12], soma=0;
        int i, j, cont=0, inicio=5, fim=6;
        char op;

        scanf("%c", &op);

        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for(i=7; i<=11; i++){
            for(j=inicio; j<=fim; j++){
                soma+=m[i][j];
                cont++;
            }
            inicio--;
            fim++;
        }

        if(op=='S'){
            printf("%.1lf\n", soma);
        }
        else if(op=='M'){
            printf("%.1lf\n", soma/cont);
        }

        return 0;
    }
