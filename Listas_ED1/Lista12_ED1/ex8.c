#include<stdio.h>
//8 - Incrementar ou decrementar funcao

    int incp(int y, int x){
        if(y>=0){
            y+=10;
            return y;
        }
        else
            y-=20;
            return y;
    }
    int main(){
        int y, x=1;

        scanf("%d", &y);

        printf("Hexadecimal: %x\n", incp(y, x));
    }