#include<stdio.h>

    int main(){
        int i, fim, mat, pos;
        float nota, maior=0;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d", &mat);
            scanf("%f", &nota);

            if(nota>maior){
                maior=nota;
                pos=mat;
            }
        }

        if(maior>=8.0){
            printf("%d\n", pos);
        }
        else{
            printf("Minimum note not reached\n");
        }

        return 0;
    }

