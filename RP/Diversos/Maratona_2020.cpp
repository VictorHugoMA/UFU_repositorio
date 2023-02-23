#include<stdio.h>

    int main(){
        int fim, caixas[100], soma=100, maior=100;

        scanf("%d", &fim);

        for(int i=0; i<fim; i++){
            scanf("%d", &caixas[i]);

            soma+=caixas[i];
            
            if(soma>maior){
                maior=soma;
            }
        }
        
        printf("%d\n", maior);
    }