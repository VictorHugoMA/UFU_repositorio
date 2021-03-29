#include<stdio.h>
//9 - Incrementar ou decrementar funcao parametro

    void incp(int *y){
        if(*y>=0){
            *y+=10;

        }
        else
            *y-=20;
    }
    int main(){
        int y;

        scanf("%d", &y);
        incp(&y);

        printf("Hexadecimal: %x\n", y);
    }