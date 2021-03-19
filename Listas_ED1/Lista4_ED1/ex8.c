#include<stdio.h>
//8 - Contagem progressiva (do while)

    int main(){
        int num;

        printf("<<Contagem progressiva ate 0>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &num);

        do{
            printf("%d..", num);
            num++;
        }
        while(num<=0);

        printf("FIM!\n");
    }