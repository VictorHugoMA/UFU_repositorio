#include<stdio.h>

    int main(){
        int X, Y, aux, i;

        scanf("%d %d", &X, &Y);

        if(X>Y){
            aux=X;
            X=Y;
            Y=aux;
        }
        for(i=X+1; i<Y; i++){
            if(i%5==2 || i%5==3){
                printf("%d\n", i);
            }
        }
    }
