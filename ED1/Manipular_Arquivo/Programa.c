#include<stdio.h>

    int main(){
        FILE *fp;
        char temp[30], str[30]="Envio:\n";

        fp = fopen("C:\\UFU_repositorio\\ED1\\Manipular_Arquivo\\Escrita.txt", "a");
        if(fp==NULL){
            printf("Erro na abertura do arquivo\n");
            return 0;
        }
        fputs(str, fp);

        printf("O que deseja escrever no arquivo:\n");
        fgets(str, 30, stdin);

        fputs(str, fp);

        fclose(fp);
        return 0;
    }