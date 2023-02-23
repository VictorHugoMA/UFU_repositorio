#include<stdio.h>

    int main(){
        int tel, fim, i, estrela, total=0;

        scanf("%d %d", &tel, &fim);

        for(i=0; i<fim; i++){
            scanf("%d", &estrela);

            if(tel*estrela>=40000000){
                total+=1;
            }
        }
        printf("%d\n", total);

        return 0;
    }
