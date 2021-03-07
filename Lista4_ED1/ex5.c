#include<stdio.h>
//5 - Contagem regressiva 2 (do while)

    int main(){
        int num;

        printf("<<Contagem regressiva>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &num);

        do{
            printf("%d..", num);
            num--;
        }
        while(num>=0);

        printf("FIM!\n");
    }