#include<stdio.h>

    int main(){
        int i, f, total=1;

        scanf("%d", &f);

        for(i=f; i>=1; i--){
            total*=i;
        }
        printf("%d\n", total);

        return 0;
    }
