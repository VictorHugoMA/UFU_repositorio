#include<stdio.h>
//1 - N produtos Aloc dinamica

    int main(){
        int n, i;
        double *produtos; 

        printf("Informe o numero de produtos "); 
        scanf("%d",&n);
        
        produtos = (double *)malloc(n*sizeof(double));  // é necessário usar o comando malloc para alocar a memória

        for(i = 0; i < n; i++){
            printf("Informe o valor do produto %d R$:",i+1);
            scanf("%lf", &produtos[i]);
        } 
            
        printf("\nProdutos cadastrados\n" );  
        for(i = 0; i < n; i++){
            printf("Produto %d  - R$: %f\n" ,i+1, produtos[i]); 
        }

        free(produtos); // ao terminar de usar o vetor, devemos liberar a memória


    }

/*
o N representa a quantidade de produtos que serao cadastrados, 
que so sera definida depois da compilacao do programa e o sizeof(double)
representa a quantidade de bytes que um double ocupa, por isoo quando
multiplicado por N se descobre quantos bytes deverao ser alocados para
armazenar todos os produtos.
*/