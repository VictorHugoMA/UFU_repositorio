#include<stdio.h>

    int main(){

        int X, i;

        scanf("%d", &X);

        for(i=X;i<=X+12; i++){
            if(i%2!=0){
                printf("%d\n", i);
            }
        }

    }
