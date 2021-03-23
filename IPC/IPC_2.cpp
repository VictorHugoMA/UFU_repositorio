#include<stdio.h>

    int main(){
        int n;
        float x, soma=0;

        scanf("%d", &n);

        for(int i=0; i<n; i++){
            scanf("%f", &x);
            soma+=x;
        }

        printf("%.3f %.3f\n", soma, soma/n);

    }