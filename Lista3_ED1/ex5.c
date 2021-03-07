#include<stdio.h>
//5 - IMC

    int main(){
        float mas, alt, imc;

        printf("Digite a massa (kg): ");
        scanf("%f", &mas);
        printf("Digite a altura (m): ");
        scanf("%f", &alt);

        imc = mas/(alt*alt);

        printf("Classificacao: ");
        
        if(imc<18.5)
            printf("Magreza\n");
            else if(imc<=24.9)
                printf("Saudavel\n");
            else if(imc<=29.9)
                printf("Sobrepeso\n");
            else if(imc<=34.9)
                printf("Obesidade Grau I\n");
            else if(imc<=39.9)
                printf("Obesidade Grau II (severa)\n");
                else 
                    printf("Obesidade Grau III (morbida)\n");

    }