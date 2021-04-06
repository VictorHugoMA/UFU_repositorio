#include<stdio.h>
//4 - Contagem regressiva 2 (while)

    int main(){
        int num;

        printf("<<Contagem regressiva>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &num);

        while(num>=0){
            printf("%d..", num);
            num--;
        }

        printf("FIM!\n");
    }