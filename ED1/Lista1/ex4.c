#include<stdio.h>
//4 - Notas e media

    int main(){
        float n1, n2, n3, n4;

        printf("<< Media aritimetica >>\n");
        printf("Digite a 1a nota: ");
        scanf("%f", &n1);
        printf("Digite a 2a nota: ");
        scanf("%f", &n2);
        printf("Digite a 3a nota: ");
        scanf("%f", &n3);
        printf("Digite a 4a nota: ");
        scanf("%f", &n4);

        printf("===Notas==\n");
        printf("Nota 1: %.0f; ", n1);
        printf("Nota 2: %.0f; ", n2);
        printf("Nota 3: %.0f; ", n3);
        printf("Nota 4: %.0f\n", n4);
        printf("Media: %.0f", (n1+n2+n3+n4)/4);


    }