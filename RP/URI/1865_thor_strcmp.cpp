#include<stdio.h>
#include<string.h>

    int main(){
        int i, fim, fr;
        char he[15];

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%s %d", &he, &fr);

            if(strcmp(he,"Thor")==0){
                printf("Y\n");
            }
            else{
                printf("N\n");
            }
        }

        return 0;
    }
