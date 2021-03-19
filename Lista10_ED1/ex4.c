#include<stdio.h>
//4 - Subtrair val

    int main(){
        int val[5] = {2,4,5,8,10}, i;
        int *p;

        p=&val;

        for(i=0; i<5; i++){
            p[i]-=1;
        }
        

        for(i=0; i<5; i++){
            printf("%d ", p[i]);
        }
    }