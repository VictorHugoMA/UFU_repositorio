#include<stdio.h>

    int main(){
        int i, fim, num;

            scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            scanf("%d", &num);

            if(num%2==0 && num>0){
                printf("EVEN POSITIVE\n");
            }
            else if(num%2==0 && num<0){
                printf("EVEN NEGATIVE\n");
            }
            else if(num%2!=0 && num>0){
                printf("ODD POSITIVE\n");
            }
            else if(num%2!=0 && num<0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("NULL\n");
            }

        }


    }
