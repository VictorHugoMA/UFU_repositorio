#include<stdio.h>

    int main(){
        long long int num;

        scanf("%lld", &num);

            if(num%2==0){
                printf("%lld\n", num+2);
            }
            else{
                printf("%lld\n", num+1);
            }
        return 0;
    }
