#include <stdio.h>
//1435 - Matriz Quadrada 1(URI)
    int main (){
        unsigned short int tam, coluna, linha, iniMat, fimMat, elem; //Valores pequenos, sem sinal;

            while (1){
                scanf("%hd", &tam);
                short mat[tam][tam]; //Declaração de matriz de tamanho variado;

                if (tam == 0)
                    return 0;

                iniMat = 0;
                fimMat = tam;
                elem = 1;

                while(1){
                    for (linha = iniMat; linha < fimMat; linha++)
                        for (coluna = iniMat; coluna < fimMat; coluna++)
                            mat[linha][coluna] = elem;

                    if (fimMat == 0)
                        break;

                 //Preenche matrizes de tamanho menor cada vez que o laço reinicia;
                    fimMat--;
                    iniMat++;
                    elem++;
                }

                //Imprime a matriz;
                for (linha = 0; linha < tam; linha++){
                    for (coluna = 0; coluna < tam; coluna++){
                        if (coluna == 0)
                            printf("%3hd", mat[linha][coluna]);
                        else
                            printf(" %3hd", mat[linha][coluna]);

                    }

                    printf("\n");
                }

                printf("\n");

            }
        }