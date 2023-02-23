#include<stdio.h>

    int main(){
        int i, fim, num, in=0, out=0;


        scanf("%d", &fim);


        for(i=1; i<=fim; i++){
            scanf("%d", &num);

            if(num>=10 && num<=20){
                in++;
            }
            else{
                out++;
            }
        }

        printf("%d in\n%d out\n", in, out);


    }
