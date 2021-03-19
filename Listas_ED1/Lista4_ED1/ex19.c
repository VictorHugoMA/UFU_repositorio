#include<stdio.h>
//19 - Banco

    int main(){
        float dj=50000, dc=25000;
        int mes=0;

        while(dj>dc){
            dj+=800;
            dc+=3000;
            mes++;

            printf("No mes %d Carlos tem %.2f e Jose tem %.2f\n", mes, dc, dj);
        }

        printf("Levara %d ano(s) para Carlos ter mais dinheiro que Jose\n", mes/12);



    }