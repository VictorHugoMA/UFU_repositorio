#include<stdio.h>
//1 - Contagem regressiva (while)

    int main(){
        int i=10;
        printf("<<Contagem regressiva>>\n");

        while(i>=0){
            printf("%d..", i);
            i--;
        }
        printf("FIM!\n");
    }