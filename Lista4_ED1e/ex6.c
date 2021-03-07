#include<stdio.h>
//6 - Contagem regressiva 2 (for)

    int main(){
        int inicio;

        printf("<<Contagem regressiva>>\n");
        printf("Qual e o numero inicial? ");
        scanf("%d", &inicio);

        for(int i=inicio; i>=0; i--){
            printf("%d..", i);
        }

        printf("FIM!\n");
    }