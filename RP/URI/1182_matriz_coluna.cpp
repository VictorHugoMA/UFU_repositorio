#include<stdio.h>

    int main(){
        int i, j, col;
        float m[12][12], soma=0, media=0;
        char operacao;

        scanf("%d %c", &col, &operacao);

        for ( i=0; i<12; i++ ){
            for ( j=0; j<12; j++ ){

                scanf ("%f", &m[i][j]);

                if(j==col){
                    soma+=m[i][j];
                }
            }
        }

            if(operacao=='S'){
                printf("%.1f\n", soma);
            }

            else if(operacao=='M'){
                media=soma/12;
                printf("%.1f\n", media);
            }

        return 0;

    }
