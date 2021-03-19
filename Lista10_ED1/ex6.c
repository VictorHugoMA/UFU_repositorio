#include<stdio.h>
//5 - Ponteiro e endereco explicacao

    int main(){
        int v1 = 1;
        double v2 = 2;
        char c = 'a'  ; 
        int *p_v1;
        double *p_v2; 
        char *p_c;p_v1 = &v1; p_v2 = &v2; p_c = &c;

        printf("\nEndereco de v1 %u", p_v1); 
        printf("\nEndereco de v2 %u", p_v2); 
        printf("\nEndereco de c %u", p_c);

        printf("\nEndereco+1 de v1 %u", p_v1+1); 
        printf("\nEndereco+1 de v2 %u", p_v2+1); 
        printf("\nEndereco+1 de c %u", p_c+1);

        printf("\nEndereco-1 de v1 %u", p_v1-1);   
        printf("\nEndereco-1 de v2 %u", p_v2-1);   
        printf("\nEndereco-1 de c %u", p_c-1);  
    } 
/*
Ao somar e subtrair um valor do ponteiro ha um comportamento diferente para cada
variavel pois cada tipo de variavel possui um tamanho em bytes diferente, e cada 
vez que se soma ou subtrai um ponteiro ele vai fazer essa operacao referente ao 
tipo de memoria ao qual ele aponta.
*/