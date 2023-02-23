#include<stdio.h>

    int main(){
        int num, i, pot;

        scanf("%d", &num);

        for(i=1; i<=num; i++){
            if(i%2==0){
                pot=i*i;
                printf("%d^2 = %d\n", i, pot);
            }
        }

    }
