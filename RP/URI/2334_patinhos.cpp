/*#include<stdio.h>

    int main(){
        long double num;

        while(1){
            scanf("%LF", &num);

            if(num==-1)
                break;

            else if(num==0)
                printf("%0\n");

            else
                printf("%.LF\n", --num);
        }
        return 0;
    }*/


#include <stdio.h>

    int main(){

        unsigned long long int num;

        while(scanf("%llu", &num)){

            if(num == -1) break;
            if(num == 0) printf("0\n");
            else printf("%llu\n", num - 1);
        }
        return 0;
    }
