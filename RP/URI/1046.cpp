#include<stdio.h>

    int main(){
        int hri, hrf, tempo;

        scanf("%d %d", &hri, &hrf);

        tempo=24-hri+hrf;

        if(tempo>24)
            printf("O JOGO DUROU %d HORA(S)\n", tempo-24);

        else
            printf("O JOGO DUROU %d HORA(S)\n", tempo);


    }
