#include<stdio.h>
//9 - Imprimir vetor double sem tipo ponteiro

    int main(){
        double vet[10]= {1,2,3,4,5,6,7,8,9,10};

        for(int i=0; i<10; i++){
            printf("%.1lf\n", *(vet+i)); //igual vet[i]
        }
     
    }