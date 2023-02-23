/*#include<stdio.h>
#include<conio.h>

void main()
{
        char c;

        printf("Escreva um texto e depois digite ; para sair.\n");

        while(c != ';')
        {
              c = getche();

        }
}*/

#include<stdio.h>

void main()
{
    FILE *fp;
    char escrever[50];
    int x;

    fp = fopen("Arquivo.txt","w");
    printf("Escreva algo no arquivo\n");
    gets(escrever);

    for(x = 0; x < 50; x++)
    {
        putc(escrever[x],fp);
    }

   fclose(fp);
}
