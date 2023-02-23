/*
#include<stdio.h>
//1
    int main(){
        printf("Ola Neps Academy!");

        return 0;
    }
*/
/*
#include<stdio.h>
//5
    int main(){
        int H, P, F, D;

        scanf("%d %d %d %d", &H, &P, &F, &D);

        while(1)
            if(D==-1){
                if(F==P){
                    printf("N");
                    break;
                }
                else if(F==H){
                    printf("S");
                    break;
                }
                F--;
            }
            else if(D==1){
                if(F==P){
                    printf("N");
                    break;
                }
                else if(F==H){
                    printf("S");
                    break;
                }
                F++;
            }
        return 0;
    }
*/
/*
#include<stdio.h>

    int main(){
        int n, x, y, z, soma=0;

        scanf("%d %D %d %d", &n , &x, &y, &z);

        if(n>=x){
            soma+=1;
        }
        if(n>=(x+y)){
            soma+=1;
        }
        if(n>=(x+y+z)){
            soma+=1;
        }
        printf("%d", soma);

        return 0;
    }
*/
/*
#include<stdio.h>
//134 - Soma Facil
    int main(){
        int A, B;

        scanf("%d %d", &A, &B);

        printf("%d", A+B);

        return 0;
    }
*/
/*
#include<stdio.h>
//138 - Area quadrado
    int main(){
        int l;

        scanf("%d", &l);

        printf("%d", l*l);

        return 0;
    }
*/
/*
#include<stdio.h>
//136 - Media inteira
    int main(){
        int A, B;

        scanf("%d %d", &A, &B);

        printf("%d", (A+B)/2);

        return 0;
    }
    */
/*
#include<stdio.h>
//87 - Fliper
    int main(){
        int P, R; //posicao das duas portas

        scanf("%d %d", &P, &R);

        if(P==0){
            printf("C");
        }
        else{
            if(R==0)
                printf("B");
            else
                printf("A");
        }

    return 0;
    }
*/
/*
#include<stdio.h>
//13 - Bondinho
    int main(){
        int A, M; //numero de alunos e monitores

        scanf("%d %d", &A, &M);
 //verificar  se é possível levar todos os alunos e monitores em apenas uma viagem (max 50)
        if(A+M<=50) 
            printf("S");
        else
            printf("N");

    return 0;
    }
*/
/*
#include<stdio.h>
//86 - Aprovado ou reprovado
    int main(){
        double A, B, media; //notas do aluno e media

        scanf("%lf %lf", &A, &B);
        media = (A+B)/2;
    
        if(media>=7.0)
            printf("Aprovado");
        else if(media>=4.0)
            printf("Recuperacao");
        else
            printf("Reprovado");
        
    return 0;
    }
*/
/*
#include<stdio.h>
//212 - Ola codcad
    int main(){

        printf("Ola CodCad!");

    return 0;
    }
*/
/*
#include<stdio.h>
//145 - Positivo, negativo ou nulo
    int main(){
        int x;

        scanf("%d", &x);

        if(x>0)
            printf("positivo");
        else if(x<0)
            printf("negativo");
        else
            printf("nulo");

    return 0;
    }
*/
/*
#include<stdio.h>
//84 - Soma
    int main(){
        int x, y;

        scanf("%d %d", &x, &y);

        printf("%d", x+y);

    return 0;
    }
*/
/*
#include<stdio.h>
//148 - Par(Bino) ou impar(Cino)
    int main(){
        int x, y;

        scanf("%d %d", &x, &y);

        if((x+y)%2==0)
            printf("Bino");
        else
            printf("Cino");
    
    return 0;
    }
*/
/*
#include<stdio.h>
//48 - Premio do milhao
    int main(){
        int fim, a , i, soma=0, cont=1;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){ //i<fim: se i for menor q fim a repeticao continua
            scanf("%d", &a);
            soma+=a;
            

            if(soma<1000000) //faz a contagem enquanto o total for menor q 1M
                cont++;
        }

        printf("%d", cont);

    return 0;
    }
*/
/*
#include<stdio.h>
//260 - Gangorra
    int main(){
        int p1, p2, c1, c2; //peso(criancas) e comprimento(lado gangorra) 

        scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

        if(p1*c1==p2*c2)     //gangorra equilibrada
            printf("0");

        else if(p1*c1>p2*c2) //para a esquerda
            printf("-1");

        else                 //para a direita
            printf("1");

    return 0;
    }
*/
/*
#include<stdio.h>
//52 - Lampadas 
	int main(){

		int fim, cont = 0, inter, i; // fim, contador do inter2, interrupitor e i para o for

		scanf("%d", &fim);

		for(i=0; i<fim; i++){ 
			scanf("%d", &inter);

			if(inter==2) //se o interropetur for o 2, ele diminui 1 da contagem da lampada(sempre sera 1 ou 0), atribuindo a propria variavel
				cont = 1 - cont;
				
		}
		printf("%d\n%d\n", fim%2, cont); // a primeira lampada e possivel descobrir apenas com a quant de vezes que os inter foram apertadas

	return 0;
	}
*/
/*
#include<stdio.h>
//85 - Divisao
    int main(){
        float A, B;

        scanf("%f %f", &A, &B);

        printf("%.2f", A/B); // divisao de dois numeros reais

        return 0;
    }
*/
/*
#include<stdio.h>
//324 - Garcom
    int main(){
        int fim, i, lata, copo, total=0;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){ // faz a leitura de latas e copos 
            scanf("%d %d", &lata, &copo);

            if(lata>copo) // se o num de lata for maior q o de copos soma os copos ao total
                total+=copo;    
        }
        printf("%d", total);

        return 0;
    }
*/
/*
#include<stdio.h>
#include<math.h>
//175 - Potencia simples
    int main(){
        double x, y;

        scanf("%lf %lf", &x, &y);

        printf("%.4lf", pow(x,y)); // faz a potencia de x elevado a y

        return 0;
    }
*/
/*
#include<stdio.h>
//88 - Zerinho ou um
    int main(){
        int A, B, C; // escolha dos participantes

        scanf("%d %d %d", &A, &B, &C);

        if(A!=B && B==C)
            printf("A");
        else if(B!=A && A==C)
            printf("B");
        else if(C!=A && A==B)
            printf("C");
        else 
            printf("*");

    return 0;
    }
*/
/*
#include<stdio.h>
//162 - Basquete de robos 
    int main(){
        int dist; // distancia do lancamento 

        scanf("%d", &dist);

        if(dist<=800) // distancia e pontos correspondentes 
            printf("1");
        else if(dist<=1400)
            printf("2");
        else 
            printf("3");

    return 0;
    }
*/
/*
#include<stdio.h>
//150 - Maior entre tres numeros 
    int main(){
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if(a>b && a>c)
            printf("%d", a);
        else if(b>c)
            printf("%d", b);
        else 
            printf("%d", c);
    }
*/
/*
#include<stdio.h>
//147 - Reprovado, aprovado ou final
    int main(){
        float n1, n2, media; //nota 1 , nota 2 e media ponderada

        scanf("%f %f", &n1, &n2);

        media = (n1*2.0+n2*3.0)/5.0; //calculo da media ponderada

        if(media>=7.0)
            printf("Aprovado");
        else if(media>=3.0)
            printf("Final");
        else 
            printf("Reprovado");
    }
*/
/*
#include<stdio.h>
//146 - Quadrante
    int main(){
        int x, y; //posicao no plano cartesiano

        scanf("%d %d", &x, &y);

        if(x>0 && y>0)
            printf("Q1");
        else if(x<0 && y>0)
            printf("Q2");
        else if(x<0 && y<0)
            printf("Q3");
        else if(x>0 && y<0)
            printf("Q4");
        else
            printf("eixos");
    }
*/
/*
#include <stdio.h>
//151 - Ordenacao de 3 numeros
    int main(){
        int n1, n2, n3;       
        
        scanf("%d %d %d", &n1, &n2, &n3);
  
 //possibilidades da ordem de 3 numeros 
    if (n1 <= n2 && n2 <= n3)
        printf("%d\n%d\n%d\n", n1, n2, n3);
    
    else if (n1 <= n3 && n3 <= n2)
        printf("%d\n%d\n%d\n", n1, n3, n2);

    else if (n2 <= n1 && n1 <= n3)
        printf("%d\n%d\n%d\n", n2, n1, n3);
    
    else if (n2 <= n3 && n3 <= n1) 
        printf("%d\n%d\n%d\n", n2, n3, n1);
    
    else if (n3 <= n1 && n1 <= n2) 
        printf("%d\n%d\n%d\n", n3, n1, n2);
    
    else
        printf("%d\n%d\n%d\n", n3, n2, n1);
    

return 0;
}
*/
/*
#include<stdio.h>
//177 - Pares ou algarismo 5
    int main(){
        int x, y, z, total=0;

        scanf("%d %d %d", &x, &y, &z);
//se o numero for par ou terminar com 5 soma +1 ao total
        if(x%2==0 || x%5==0)
            total+=1;
        if(y%2==0 || y%5==0)
            total+=1;
        if(z%2==0 || z%5==0)
            total+=1;

        printf("%d", total);
    }
*/
/*
#include<stdio.h>
//152 - Dez valores
    int main(){
        int x, i;

        scanf("%d", &x);

        for(i=x+1; i<=x+10; i++){
            printf("%d ", i); //imprime os proximos 10 valores depois de x
        }

    }
*/
/*
#include<stdio.h>
//153 - Senha 2018
    int main(){
        int x=0, soma=0;

        while(x != 2018){ //enquanto o numero digitado for diferente de 2018 soma 1 para descobrir a quantidade 
            scanf("%d", &x);
            soma+=1;
        }

        printf("%d", soma-1);

    }
*/
/*
#include<stdio.h>
//155 - Multiplos de 2, 3 e 4
    int main(){
        int x, fim, m2=0, m3=0, m4=0;

        scanf("%d", &fim);

        for(int i=0; i<fim; i++){ //le ate a quantidade pedida
            scanf("%d", &x);

            if(x%2==0) //descobre os multiplos vendo se o resto eh zero 
                m2+=1;
            if(x%3==0)
                m3+=1;
            if(x%4==0)
                m4+=1;

            
        }

        printf("%d\n%d\n%d\n", m2, m3, m4);

    }
*/
/*
#include<stdio.h>
//144 - Area da circuferencia 
    int main(){
        float r;

        scanf("%f", &r);

        printf("%.2f", 3.1416*r*r); //calculo da area pi*r^2
    }
*/
/*
#include<stdio.h>
//159 - Soma dos elementos
    int main(){
       int fim, num, soma=0; 

       scanf("%d", &fim); //le o total de numeros q serao colocados

       for(int i=0; i<fim; i++){
           scanf("%d", &num); //le os num em si
           soma+=num; //soma esses numeros 
       }
       printf("%d", soma);
    }
*/
/*
#include<stdio.h>
//157 - Repetir X vezes
    int main(){
        int x;

        scanf("%d", &x);

        for(int i=0; i<x; i++){ //imprime a frase x vezes nesse loop
            printf("NepsAcademy eh Sucesso\n");
        }
    }
*/
/*
#include<stdio.h>
#include<math.h>
//170 - Raizes
    int main(){
        int fim;
        float x[1000];

        scanf("%d", &fim); //le a quantidade de num que serao colocados

        for(int i=0; i<fim; i++){ // vetor para armazenar os num
            scanf("%f", &x[i]);
        }
        for(int i=0; i<fim; i++){ //vetor para calcular e mostrar os resultados 
            printf("%.4f\n", sqrt(x[i]));
        }
    }
*/
/*
#include<stdio.h>
//21 - Montanha
    int main(){
        int fim, pico=0;

        scanf("%d", &fim); //tamanho do vetor 

        int mont[fim];

        for(int i=0; i<fim; i++){ //leitura de todo vetor
            scanf("%d", &mont[i]); 

        }
        for(int i=0; i<fim; i++){
            if(i>1 && i<fim){ //passa por todo vetor verificando a existencia de picos 
                if(mont[i]<mont[i-1] && mont[i]<mont[i+1]){
                    pico+=1; //se houver soma ao total de picos 
                }
            } 
        }
        if(pico>1) //no fim quer saber se existem mais de um pico na montanha 
            printf("S\n");
        else
            printf("N\n");
    }
*/
/*
#include<stdio.h>
//47 - Codigo(100)
    int main(){
        int fim, total=0;

        scanf("%d", &fim); //leitura do  tam do vetor

        int cod[fim];

        for(int i=0; i<fim; i++){ //leitura do vetor 
            scanf("%d", &cod[i]);
        }
        for(int i=0; i<fim; i++){ //percorre o vetor para descobrir quantos num 100 tem nele e soma +1 ao total
            if(i<(fim-2)){
                if(cod[i]==1 && cod[i+1]==0 && cod[i+2]==0){
                    total+=1;
                }
            }
        }
        printf("%d\n", total);
    }
*/
/*
#include<stdio.h>
//160 - Vestibular 
    int main(){
        int n, i, soma=0;
        char gab[80], resp[80]; //inicializacao da string com max tamanho que o exercicio determina 

        scanf("%d", &n);
        scanf("%s %s", gab, resp);

        for(i=0; i<n; i++){
            if(gab[i]==resp[i]){ //verifica se o gabarito esta igual a resposta
                soma+=1; //se sim +1 no soma de questoes certas 
            }
        }
        printf("%d", soma);
    }
*/
/*
#include<stdio.h>
//218 - Operacoes
    int main(){
        char op;
        float x, y;

        scanf("%c", &op);
        scanf("%f %f", &x, &y);

        if(op=='M' || op=='m') //faz a divisao ou multiplicacao dependendo do char que foi lido
            printf("%.2f", x*y);
        
        else if(op=='D' || op=='d')
            printf("%.2f", x/y);
        
    }
*/
/*
#include<stdio.h>
//326 - Soma do vetor (funcao fora da main)
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
#include<stdio.h>
#include<string.h>
//397 - Tamanho da String
    int main(){
        char str[50];

        scanf("%s", str); //leitura da string

        printf("%d", strlen(str)); //impressao da funcao q da o tamanho da string
    }
*/
/*
#include<stdio.h>
#include<string.h>
//398 - Quantas letras x 
    int main(){
        char str[50], c;
        int total = 0;

        gets(str); //faz a leitura da string
        scanf("%c", &c);

        for(int i=0; i<strlen(str); i++){ //passa por toda a string
            if(str[i]==c) //compara a string com o char, se for igual +1 no total
                total+=1;
        }
        printf("%d", total);
    }
*/
#include<stdio.h>
//51 - Jogo de par ou impar
    int main(){
        int p, d1, d2; //pessoa e num de dedos

        scanf("%d %d %d", &p, &d1, &d2);

        if(p==0 && (d1+d2)%2==0 || p==1 && (d1+d2)%2!=0)//se a 0 escolheu par e for par ou nao escolher mas for impar, ela ganha 
            printf("0\n");
        else
            printf("1\n");
    }
