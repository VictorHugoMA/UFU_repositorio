#include<stdio.h>

    int main(){
        int N, i, votos, ult=0, soma=0;

        scanf("%d", &N);

        for(i=0; i<N; i++){
            scanf("%d", &votos);

            if(votos>ult){
                ult=votos;
                soma+=1;
            }
        }
        if(soma==1)
            printf("S\n");

        else if(soma>1)
            printf("N\n");

        return 0;
    }