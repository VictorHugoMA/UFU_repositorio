#include<stdio.h>
//13 - Multiplos 

    int main(){
        int n, i, j, cont=1, num=0, vet[20];

        printf("<<Multiplos>>\n");
        printf("Entre com o valor de n: ");
        scanf("%d", &n);
        printf("Entre com o valor de i: ");
        scanf("%d", &i);
        printf("Entre com o valor de j: ");
        scanf("%d", &j);

        while(cont<=n){
            if(num%i==0 || num%j==0){
                vet[cont]=num;
                cont++;
            }
            num++;
        }

            printf("Os multiplos de i ou j sao : ");
            for(int z=0; z<cont-1; z++){
                printf("%d, ", vet[z]);
            }
            printf("%d.\n", vet[cont-1]);




    }