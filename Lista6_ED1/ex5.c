#include<stdio.h>
//5 - Compara nomes 2

    int main(){
        int i=0, j=0, k, cont=0;
        char nome1[50], nome2[50];

        printf("<< Compara nomes>>\n");
        printf("Digite o nome 1: ");
        while((nome1[i]=getchar())!='\n'){
            i++;
        }
        printf("Digite o nome 2: ");
        fflush(stdin);
        while((nome2[j]=getchar())!='\n'){
            j++;
        }

        if(i==j){
            for(k=0; k<i; k++){
                if(nome1[k]==nome2[k] || nome1[k]==nome2[k]+32 || nome1[k]==nome2[k]-32)
                    cont+=1;
            }
        }
            else{
                printf("Os nomes digitados sao diferentes\n");
            }

        if(cont>0 && i==j)
            printf("Os nomes digitados sao iguais\n");
        
            else if(cont==0)
                printf("Os nomes digitados sao diferentes\n");
            
    }