#include <stdio.h>
#include <stdlib.h>

/*
--- Instruções da prova--- 
Qualquer exercício copiado de um colega ou da internet implicará nota zero em toda a prova,
 mesmo que a cópia seja feita somente de um trecho

A nota será zerada tanto para quem deixou copiar quanto para quem fez a cópia.

Não enviar o enunciado nem as respostas para os colegas

Não haverá checagem de exercício correto. 

Formate a saída de seu programa da melhor forma possível. Por exemplo, se o exercício
pede para informar o valor de um produto, escreva no printf um texto que seja adequado 
ao que for pedido:

Forma correta 
Digite o preço do produto 1: 20
Digite o preço do produto 2: 50.6

Forma errada
20
produto: 50.6

Fique atento também à saída gerada pelo programa. Escreva textos contextualizando os cálculos 
realizado e não somente mostre número Por exemplo:

Forma correta
O consumo de gasolina no mês 5 foi 50L – valor alto
O consumo de gasolina no mês 2 foi 20L – valor baixo

Forma errada
50L
50L – alto
*/



// Fazer um programa para cadastro de carros. As informações para cadastro são: 
// modelo (ex: gol, ka, c3), o ano (ex: 1999, 2015, 2021) e o consumo (ex: 10 Km/l, 7 km/l, 16 Km/l)
// Verificar no main() abaixo os exercícios da prova


// Definir as estruturas necessárias aqui:
    typedef struct carro{
        char modelo[10];
        int ano, consumo;

    }carro;

    typedef struct documento{
        char nome[20], cpf[20];
        carro dc;
    }documento;

// Função: Busca Maior Consumo (ex02)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados 
// Saída: índice do vetor indicando a posição de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)
    carro busca_maior_consumo(carro *c, int n){
        int i, maiorcons=c[0].consumo;
        carro cMaiorConsumo=c[0];

        for(i=0; i<n; i++){
            if(maiorcons>c[i].consumo){
                maiorcons=c[i].consumo;
                cMaiorConsumo=c[i];
            }
        }
        return cMaiorConsumo;

    }


// Função: Índice de Eficiência (ex03)
// Essa calcula a eficiência energética de um carro
// o índice de eficiência é calculado usando a seguinte fórmula
//
//                                 ano_veiculo - 1991
//   ind = consumo (em km/l)  *  ---------------------            
//                                        30                   
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos, zeros e ano menor que 1980 e maior que 2021
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Valor do índice de eficiência                 | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | acima ou igual 10                             | A              |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima ou igual a 8,8 e menor que 10           | B              |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima ou igual a 7,5 e menor que 8,8          | C              |
+-------------------+-----------------------------------------------+----------------+
| 4                 | abaixo de 7,5                                 | D              |
+-------------------+-----------------------------------------------+----------------+

*/
    int indiceEficiencia(carro *c, int x, float *ind){
        

       
            ind[x]=c[x].consumo*(c[x].ano-1991)/30.0;

            if(c[x].ano>2021 || c[x].ano<1980 || c[x].consumo<=0|| ind[x]<0){
                return -1;
            }
                
            else if(ind[x]>=10.0){
                return 1;
            }
            else if(ind[x]>=8.8){
                return 2;
            }
            else if(ind[x]>=7.5){
                return 3;
            }
            else if(ind[x]<7.5){
                return 4;
            }
        
    }
    

// Função: Busca Maior Consumo - retorno Ponteiro (ex05)
// Essa função retorna o carro de maior consumo
// Entrada: todos os carros cadastrados 
// Saída: ponteiro para posição de vetor de maior valor
// (se houver empate pode ser retornado qualquer um dos carros)

    carro* busca_maior_consumo2(carro *c, int n){
        int i, j=0, maiorcons=c[0].consumo;

        for(i=0; i<n; i++){
            if(maiorcons>c[i].consumo){
                maiorcons=c[i].consumo;
                j=i;
            }
        }
        return &c[j];

    }



int main(){
    int n, i;
    carro *c, cMaiorCons, *cMaiorCons2;
    char temp[20];
    float *ind;
    documento d={"Joao", "156.000.000-00", "Gol", 2020, 10};


    // Ex 01: permitir que o usuário cadastre quantos carros desejar
    //  - ler do teclado a quantidade de carros que o usuário escolheu
    //  - ler do teclado as informações dos carros 
    printf("Informe quantos carros deseja cadastrar: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &n);
    

    c=(carro *)malloc(n*sizeof(carro));
    ind=(float *)malloc(n*sizeof(float));


    for(i=0; i<n; i++){
        printf("Digite o modelo do carro %d: ", i+1);
        fgets(temp, 10, stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        strcpy(c[i].modelo, temp);

        printf("Digite o ano de carro %d: ", i+1);
        fgets(temp, 20, stdin);
        sscanf(temp, "%d", &c[i].ano);

        printf("Digite o consumo do carro %d: ", i+1);
        fgets(temp, 20, stdin);
        sscanf(temp, "%d", &c[i].consumo);
    }





   // Ex02: utilizando a função de buscar o maior consumo, mostre
   // todas as informações do carro que possui o maior consumo.
   // Todas as funções de entrada e saída devem estar no programa
   // principal
   cMaiorCons=busca_maior_consumo(c, n);
   printf("Carro com maior consumo: %s - Ano %d - Consumo %d\n",cMaiorCons.modelo, cMaiorCons.ano, cMaiorCons.consumo);


   // Ex03: utilizando a função de cálculo de eficiência de um carro
   // mostre para todos os carros o seu índice de eficiência e 
   // a sua classificação de eficiência
   // exemplo de saída:
   // Ford Ka - 2020 - 10 km/l; Indice: 9.7; Classificação: B

   printf("Eficiencia dos veiculos cadastrados");
        for(i=0; i<n; i++){
            indiceEficiencia(c, i, ind);
            printf("\n%s - %d - %d km/l; Indice: %.1f; ", c[i].modelo, c[i].ano, c[i].consumo, ind[i]);
        }

   // Ex04: Crie uma estrutura para guardar informações sobre o
   // documento de um carro CRLV (Certificado de Registro e
   //  Licenciamento de Veículo)
   // Nesse documento deverá ter o Nome, CPF, e as informações
   // do carro (deve-se utilizar a estrutura dos exercícios anteriores)
   // Crie uma variável dessa estrutura e inicialize ela com valores 
   // constantes (não precisa ler do teclado) e depois mostre esses valores
    printf("\nNome: %s\n", d.nome);

    printf("CPF: %s\n", d.cpf);

    printf("Modelo do carro: %s\n", d.dc.modelo);

    printf("Ano do carro: %d\n", d.dc.ano);

    printf("Consumo do carro: %d\n", d.dc.consumo);

 


   // Ex05: Duplique o exercício 2 e modifique ele para que ao invés de 
   // retornar o índice da posição do vetor que retorne um ponteiro
   // para a posição do vetor. Mostre no programa principal os dados
   // do carro utilizando o ponteiro retornado.
   cMaiorCons2 = busca_maior_consumo2(c, n);
   printf("Carro com maior consumo: %s - Ano %d - Consumo %d\n",cMaiorCons.modelo, cMaiorCons.ano, cMaiorCons.consumo);

   
    return 0;
}