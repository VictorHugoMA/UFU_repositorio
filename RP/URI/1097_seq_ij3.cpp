#include<stdio.h>

    int main(){
        int i, j, x=7;

        for(i=1; i<10; i+=2){
            for(j=x; j>(x-3); j--){
                printf("I=%d J=%d\n", i, j);
            }
        x+=2;
        }

        return 0;
    }
