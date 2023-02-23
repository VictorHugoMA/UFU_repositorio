#include<stdio.h>

    int main(){
        int a, b, c, d, e, soma=0;

        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            soma+=a*300;
            soma+=b*1500;
            soma+=c*600;
            soma+=d*1000;
            soma+=e*150;
            soma+=225;

        printf("%d\n", soma);

        return 0;
    }
