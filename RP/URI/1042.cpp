#include<stdio.h>

    int main(){
        int num1, num2, num3;
        int X, Y, Z, aux;

        scanf("%d %d %d", &num1, &num2, &num3);

        X=num1;
        Y=num2;
        Z=num3;

        if(X>Y){
            aux=X;
            X=Y;
            Y=aux;
        }
        if(X>Z){
            aux=X;
            X=Z;
            Z=aux;
        }
        if(Y>Z){
            aux=Y;
            Y=Z;
            Z=aux;
        }

        printf("%d\n%d\n%d\n\n", X, Y, Z);
        printf("%d\n%d\n%d\n", num1, num2, num3);



    }
