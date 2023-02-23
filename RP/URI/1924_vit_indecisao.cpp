#include<stdio.h>
#include<stdlib.h>

    int main(){
        int i, fim;
        char curso[100];

        scanf("%d", &fim);

        for(i=0; i<fim; i++){

            scanf(" %[^\n]s", curso);
        }

        printf("Ciencia da Computacao\n");

        return 0;
    }
