#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define ERROR -2
#define TXT_FILE 9
#define IMM_FILE 8
#define INCONSISTENT_FILE 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"TMat2D.h"

int open_file(char *argv, TadMat **mat);

int convert_file(char *argv1, char *argv2);

int segment_imm(char *argv1, char *argv2, char *argv3);

int cc_imm(char *argv1, char *argv2);

int lab_txt(char *argv1, char *argv2);

int print_file(char *file);

int identify_type(char *file);

int tam_mat_file(char *file, int *nl, int *nc);

int mat_to_file(TadMat *mat, char *fileOUT);



    int main(){
        TadMat *mat;

        open_file("teste.txt", &mat);

        return 0;
    }


    int open_file(char *file, TadMat **mat){
        FILE *fp;
        int aux, nl, nc, i, j, num;  

        printf("Abrir %s\n", file);

        if (identify_type(file) == TXT_FILE)
        {      

            fp = fopen("C://UFU_repositorio//ED1//Teste//TrabalhoED1//Mat_teste.txt", "r");
            if(fp==NULL){
                printf("Erro na abertura do arquivo\n");
                return INVALID_NULL_POINTER;
            }

            /* aux = tam_mat_file(file, &nl, &nc);
            if(aux!=SUCCESS){
                return ERROR;
            } */
            nl=3;
            nc=3;

            *mat = criar_mat(nl, nc);

            for(i=0; i<nl; i++){
                for(j=0; j<nc; j++){
                    fscanf(fp, "%d", &num);
                    escrever_mat(*mat, i, j, num);
                }
            }


            print_matriz(*mat);
            free_mat(*mat);
            fclose(fp);

            return SUCCESS;


        }
        else if (identify_type(file) == IMM_FILE)
        {

            fp = fopen(file, "rb");
            if(fp==NULL){
                printf("Erro na abertura do arquivo\n");
                return INVALID_NULL_POINTER;
            }
            fread(&nl, sizeof(int), 1, fp);
            fread(&nc, sizeof(int), 1, fp);

            *mat = criar_mat(nl, nc);

            for(i=0; i<nl; i++){
                for(j=0; j<nc; j++){
                    fread(&num, sizeof(int), 1, fp);
                    escrever_mat(*mat, i, j, num);
                }
            }
            fclose(fp);
            return SUCCESS;
        }

        else{
            return INCONSISTENT_FILE;
        }
          
    }

    int identify_type(char *file) {

        int tamanho;

        tamanho = strlen(file); //Recebe o tamanho da string, para verificar cada caracter 

        if (file[tamanho-3] == 't' && file[tamanho-2] == 'x' && file[tamanho-1] == 't')
        {//Analisa cada caracter da string para conferir se eh "txt"
            return TXT_FILE;
        }
        else if (file[tamanho-3] == 'i' && file[tamanho-2] == 'm' && file[tamanho-1] == 'm')
        {//Analisa cada caracter da string para conferir se eh "imm"
            return IMM_FILE;
        }
        else
        {//Caso nao seja nenhum dos 2
            return INCONSISTENT_FILE;
        }

    }

    int print_file(char *file){
        TadMat *mat;
        int aux;

        aux = open_file(file, &mat);

        if(aux!=SUCCESS){
            return ERROR;
        }

        print_matriz(mat);
        free_mat(mat);

        return SUCCESS;
    } 