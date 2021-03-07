#include<stdio.h>
#include<math.h>
//16 - Quantidade endereco de memoria

    int main(){
        double exp=1;

        for(int i =0; i<8; i++){
            printf("Com %.0lf bits e possivel enderecar %.0lf posicoes de memoria\n", exp, pow(2, exp));
            exp*=2;
        }
    }