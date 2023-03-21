#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//send+more=money;
//9567+1085=10652;
int modelo[9]  = {7, 5, 1, 6, 0, 8, 9, 2};
char letras[8] = {'d','e','m','n','o','r','s','y'};

int* geraIndividuo(){
    int *individuo = (int *)malloc(8 * sizeof(int));
    for(int i = 0; i < 8; i++){
        individuo[i] = rand() % 10;
    }
    return individuo;
}

int populacaoInicial(){
    return 0;
}



int main(){
    int *individuo;
    individuo = geraIndividuo();
    for(int i = 0; i < 8; i++){
        printf("%d ", individuo[i]);
    }
    
    free(individuo);

}