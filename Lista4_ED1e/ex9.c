#include<stdio.h>
//9 - Contagem progressiva (for)

    int main(){
        int num;

        printf("<<Contagem progressiva ate 0>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &num);

        for(int i=num; i<=0; i++){
            printf("%d..", i);
        }
        printf("FIM!\n");
    }