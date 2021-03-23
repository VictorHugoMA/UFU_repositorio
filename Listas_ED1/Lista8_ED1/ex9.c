#include<stdio.h>
#include<string.h>
#include<ctype.h>
//9 - Inverter string

    int main(){
        char palavra[30];

        printf("<<invertendo>>\n\n");

        printf("Digite a string: ");
        gets(palavra);

        printf("\nSaida inverrtida: ");
        for(int i= strlen(palavra)-1; i>=0; i--){
            printf("%c", palavra[i]);
        }
        printf("\n");
    }