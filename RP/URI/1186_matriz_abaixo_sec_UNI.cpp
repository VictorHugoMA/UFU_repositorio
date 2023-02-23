#include<stdio.h>
#define X 12

    int main(){
        float m[X][X], soma=0, cont=0;
        int i, j;
        char op;

        scanf("%c", &op);

        for(i=0; i<X; i++){
            for(j=0; j<X; j++){
                scanf("%f", &m[i][j]);

                if((i+j)>(X-1)){
                    soma+=m[i][j];
                    cont++;
                }
            }
        }
        if(op=='S'){
            printf("%.1f\n", soma);
        }
        else if(op=='M'){
            printf("%.1f\n", soma/cont);
        }

        return 0;
    }
