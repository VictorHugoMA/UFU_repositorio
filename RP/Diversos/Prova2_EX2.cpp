#include<stdio.h>

    void dp(float a, float b, float c, float d, float res);

    int main(){
        float a=0, b=0, c=0, d=0;
        float *res=0.0;

        scanf("%f %f %f %f", &a, &b, &c, &d);

        dp(a, b, c, d, &res);


        printf("%f", *res);
    }

    void dp(float a, float b, float c, float d, float *res){
        *res = a+b+c+d;
    }

/*
#include<stdio.h>
//326 - Soma do vetor (funcao fora da main)g
    int somaV(int n, int v[]); //prototipo da funcao 

    int main(){
        int n, v[100100];

        scanf("%d", &n); //faz a leitura do tamanho do array

        for(int i=0; i<n; i++){ //le o array 
            scanf("%d", &v[i]);
        }
        //poderia ter colocado o return dentro de uma variavel mas coloquei direto no printf 
        printf("%d\n", somaV(n, v)); //chama a funcao somaV e imprime o return dela
                                   
    }

    int somaV(int n, int v[]){ //funcao que soma todos os valores do array e devolve o resultado no return
        int soma=0;

        for(int i=0; i<n; i++){
            soma+=v[i];
        }
        return soma;
    }
*/
/*
#include <stdio.h>
//função que soma 10 ao valor recebido
void soma10(int x)
{
  x = x + 10;  
  printf("Valor de x apos a soma = %d \n",x);
  return;
}
void soma10p(int *x)
{
  *x = *x + 10;  
  printf("Valor de x apos a soma = %d \n",*x);
  return;
}
int main(void)
{
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);  
     
  printf("O numero digitado foi: %d \n",numero);  
  
  soma10(numero);  //chamada da função
  printf("Agora o numero vale: %d \n",numero);    
  
  soma10p(&numero);  //chamada da função com ponteiro como parâmetro
  printf("Agora o numero vale: %d \n",numero);  
  return 0;
}
*/
