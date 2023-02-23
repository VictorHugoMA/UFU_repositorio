#include<stdio.h>

    int main(){
        int td, ano, mes, dia;

        scanf("%d", &td);

        ano = td/365;
        mes = (td%365)/30;
        dia = (td%365)%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    }
