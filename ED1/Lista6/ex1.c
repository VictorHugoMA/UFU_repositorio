#include<stdio.h>
//1 - Tabela ASCII

    int main(){
        int i, j;

        for(i=32; i<127; i++){
            printf("%3d %c\t",i, i);
            if(i%7==3)
                printf("\n");
        }
    }