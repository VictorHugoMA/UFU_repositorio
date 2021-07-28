#include<stdio.h>

    int main(){
        int num, vetor[]={1,7,3,0,5};

        num = maiorSubCresc(vetor, 5);

        printf("Maior: %d\n", num-1);
    }

    int maiorSubCresc(int *vet, int n){
        if(n==0){
            return 1;
        }
        int i, temp, max=-1;

        
        for(i=0; i<n; i++){
            if(vet[i]<vet[n]){
                temp = maiorSubCresc(vet, i)+1;
            }
            if(temp>max){
                max=temp;
            }
        }
        return max;
        
    }