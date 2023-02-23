#include<stdio.h>

    int main(){
        int fim, i, N, aux=21, cont=0, pos;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d", &N);
            cont++;

            if(aux>N){
                aux=N;
                pos=cont;
            }
        }
        printf("%d\n", pos);

        return 0;
    }
