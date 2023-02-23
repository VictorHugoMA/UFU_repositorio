#include<stdio.h>

    int main(){
        double m[12][12], soma=0;
        int i, j, cont=0;
        char op;

        scanf("%c", &op);

        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%lf", &m[i][j]);
            }
        }
        if(op=='S'){
            for(i=0; i<12; i++){
                for(j=0; j<12; j++){
                    if(i < j && i > 12-j-1){
                        soma+=m[i][j];
                    }
                }
            }
            printf("%.1lf\n", soma);
        }
        if(op=='M'){
            for(i=0; i<12; i++){
                for(j=0; j<12; j++){
                    if(i < j && i > 12-j-1){
                        soma+=m[i][j];
                        cont++;
                    }
                }
            }
            printf("%.1lf\n", soma/cont);
        }
        return 0;
    }
