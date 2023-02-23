#include<stdio.h>

    int main(){
        int idade, total=0, cont=0;
        float media;

        while(1){
            scanf("%d", &idade);

            if(idade<0){
                break;
            }
            else{
                total+=idade;
                cont++;
            }
        }
        media=(float)total/cont;

        printf("%.2f\n", media);

        return 0;
    }
