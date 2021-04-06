#include<stdio.h>
#include<string.h>
#include<ctype.h>
//10 - Palindromo

    int main(){
        char palavra[30], pinv[30];
        int i, j=0;

        printf("Digite uma String: ");
        gets(palavra);

        for(i=0; i<strlen(palavra); i++){
            palavra[i]= tolower(palavra[i]);
        }
        
        for(i=strlen(palavra)-1; i>=0; i--){
            pinv[j]=palavra[i];
            j++;
        }
        pinv[j]='\0';

        if(strcmp(palavra, pinv)==0)
            printf("Eh palindromo\n");
            else
                printf("Nao eh palindromo\n");
    }