#include<stdio.h>
//23 - Numero neperiano

    int main(){
        int num, i, j;
        double fat, e=1.0;

        printf("<<Numero neperiano>>\n");
        printf("Entre com o numero de termos: ");
        scanf("%d", &num);

        for(i=1; i<=num; i++){
            fat=1.0;
            for(j=1; j<=i; j++){
                fat*=j;
            }
            e+=1.0/fat;
        }
        printf("e~ %lf", e);
    }