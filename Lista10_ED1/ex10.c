#include<stdio.h>
//10 - Imprimir vetor int sem tipo ponteiro

    int main(){
        int vet[10]= {1,2,3,4,5,6,7,8,9,10};

        for(int i=9; i>=0; i--){
            printf("%d\n", *(vet+i)); //igual vet[i]
        }
     
    }