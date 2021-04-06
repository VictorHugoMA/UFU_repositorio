#include<stdio.h>
//2 - Contagem regressiva (do while)

    int main(){
        int i=10;

        printf("<<Contagem regressiva>>\n");

        do{
            printf("%d..", i);
            i--;
        }
        while(i>=0);

        printf("FIM!\n");
    }