#include<stdio.h>
//2 - 5 valores Aloc dinamica

    int main(){
        int *p, i;

        p = (int *)malloc(5*sizeof(int));

        for(i=0; i<5; i++){
            printf("Numero %d: ", i+1);
            scanf("%d", &p[i]);
        }
        
        printf("Os numeros foram\n");
        for(i=0; i<5; i++){
            printf("Numero %d: %d\n", i+1, p[i]);
        }

        free(p);
    }