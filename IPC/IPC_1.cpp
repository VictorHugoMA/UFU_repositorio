#include<stdio.h>
    int main(){
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if(a<b){
            for(int i=a; i<=b; i++){
                if(i%c==0){
                printf("%d\n", i);
                }
            }

        }
        else{
            for(int i=b; i<=a; i++){
                if(i%c==0){
                    printf("%d\n", i);
                }
            }
        }

    }