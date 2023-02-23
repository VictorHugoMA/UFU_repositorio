#include<stdio.h>

    int main(){
        float m[12][12], soma=0;
        int i, j;
        char op;

        scanf("%c", &op);

        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%f", &m[i][j]);

                if((i+j)>11){
                    soma+=m[i][j];
                }
            }
        }
        if(op=='S'){
            printf("%.1f\n", soma);
        }
        else if(op=='M'){
            printf("%.1f\n", soma/66);
        }

        return 0;
    }
