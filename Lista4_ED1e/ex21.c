#include<stdio.h>
//21 - Fatorial

    int main(){
        int i, j, total=1;

        for(i=1; i<=10; i++){
            for(j=i; j>=1; j--){
                total*=j;
            }
            printf("%d! = %d\n", i, total);
            total=1;
        }


    }