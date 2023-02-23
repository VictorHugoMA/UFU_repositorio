#include<stdio.h>

    int main(){
        int X, Y, i, lin=1;

        scanf("%d %d", &X, &Y);

        for(i=1; i<=Y; i++){
            if(lin!=X){
                printf("%d ", i);
                lin++;
            }
            else{
                printf("%d\n", i);
                lin=1;
            }
        }
        return 0;
    }
