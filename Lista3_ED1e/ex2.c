#include<stdio.h>
//2 - Conversor de temperatura

    int main(){
        char un;
        float temp;

        printf("<<Conversor de Temperatura>>\n");
        printf("Digite a temperatura: ");
        scanf("%f", &temp);
        printf("Digite a unidade: ");
        setbuf(stdin,NULL);
        scanf("%c", &un);

        if(un=='c')
            printf("%.0f graus Celsius equivale a %.1f graus Fahrenheit\n", temp, temp*1.8+32);
            else if(un=='f')
                printf("%.0f graus Fahrenheit equivale a %.1f graus Celsius\n", temp, (temp-32)/1.8);
                else
                    printf("Unidade invalida\n");
                
    }