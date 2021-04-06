#include<stdio.h>
//8 - Ponteiro void

    int main(){
        int x;
        double y;
        void *p[2];

        p[0]= &x;
        p[1]= &y;

        printf("Leitura dos dois valores: ");
        scanf("%d %lf", p[0], p[1]);

        printf("Numero int: %d\n", *(int *) p[0]);
        printf("Numero double: %.1lf\n", *(double *) p[1]);
    }