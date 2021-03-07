#include<stdio.h>
//7 - Contagem progressiva (while);

    int main(){
        int num;

        printf("<<Contagem progressiva ate 0>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &num);

        while(num<=0){
            printf("%d..", num);
            num++;
        }
        printf("FIM\n");
    }