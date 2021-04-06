#include<stdio.h>
#include<string.h>
#include<ctype.h>
//7 - Sem vogais

    int main(){
        char nome[50], sv[50];
        char vogais[11] = "aeiouAEIOU";
        int i, j, k=0, aux;

        printf("<<Sem vogais>>\n");
        printf("Digite a string: ");
        fgets(nome, 50, stdin);

            for(i=0; i<strlen(nome)-1; i++){
                aux=0;
                for(j=0; j<11; j++){
                    if(nome[i]==vogais[j]){
                        aux=1;
                        break;
                    }
                }
                if(aux==0){
                    sv[k]=nome[i];
                    k++;
                }
            }
            sv[k]='\0';

            printf("Saida sem vogais: %s\n", sv);

    }