#include<stdio.h>

    int main(){
        double i, j,soma;

        soma=1;

        for(i=3, j=2; i<=39; i+=2, j*=2){
            soma+=i/j;
        }
        printf("%.2lf\n", soma);
        return 0;
    }



