#include<stdio.h>

    int main(){
        int fim, i;

        while(1){
            scanf("%d", &fim);

            if(fim==0){
                break;
            }
            else{
                for(i=1; i<fim; i++){
                    printf("%d ", i);
                }
            }
            printf("%d\n", fim);
        }
        return 0;
    }
