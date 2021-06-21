#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"TArquivos.h"


    int main(int argc, char *argv[]){
        int aux, thr;

        if(strcmp(argv[1], "-open")==0){
            aux = print_file(argv[2]);

            if(aux!=SUCCESS)
                printf("Erro na abertura do arquivo\n");

        }
        else if(strcmp(argv[1], "-convert")==0){
            aux = convert_file(argv[2], argv[3]);

            if(aux==SUCCESS)
                printf("Conversao feita com sucesso\n");
            else{
                printf("Erro na conversao\n");
            }


        }
        else if(strcmp(argv[1], "-segment")==0){
            thr = atoi(argv[2]);

            aux = segment_file(thr, argv[3], argv[4]);

            if(aux==SUCCESS)
                printf("Segmentacao feita com sucesso\n");
            else{
                printf("Erro na segmentacao\n");
            }
            
        }

        else if(strcmp(argv[1], "-cc")==0){
            aux = cc_imm(argv[2], argv[3]);

            if(aux==SUCCESS)
                printf("Deteccao de componentes conexos feita com sucesso\n");
            else{
                printf("Erro da deteccao do componentes conexos\n");
            }
        }

        else if(strcmp(argv[1], "-lab")==0){
            aux = lab_file(argv[2], argv[3]);

            if(aux==SUCCESS)
                printf("Resolucao do labirinto feita com sucesso\n");
            else if(aux==NO_WAY_OUT){
                printf("Labirinto sem saida\n");
            }
            else{
                printf("Erro na resolucao do labirinto\n");
            }
        }

        else{
            printf("Comando nao encontrado\n");
        }
        
        return 0;
    }