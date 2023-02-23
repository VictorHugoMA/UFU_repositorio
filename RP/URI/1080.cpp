#include<stdio.h>

    int main(){
        int i, num, maior=0, posi=0;

        for(i=1; i<=100; i++){
            scanf("%d", &num);

            if(num>maior){
                maior=num;
                posi=i;
            }
        }

        printf("%d\n%d\n", maior, posi);

    }
