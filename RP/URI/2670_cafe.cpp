#include<stdio.h>

    int main(){
        int a1, a2, a3, aux, total;

        scanf("%d %d %d", &a1, &a2, &a3);

            if(a1<a2){
                aux=a2;
                a2=a1;
                a1=aux;
            }
            if(a1<a3){
                aux=a3;
                a3=a1;
                a1=aux;
            }
            if(a2<a3){
                aux=a3;
                a3=a2;
                a2=aux;
            }

        total=a2*2+a3*2;

        printf("%d\n", total);

        return 0;
    }
