#include<stdio.h>

    int main(){
        int num, maior=0;

        do{
            scanf("%d", &num);

            if(num>maior){
                maior=num;
            }
        }
        while(num!=0);

        printf("%d\n", maior);

        return 0;
    }
