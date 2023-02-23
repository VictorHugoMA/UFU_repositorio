/*#include<stdio.h>

    int main(){

        int dia = getchar();

            switch(dia){

                    case '1':
                        printf("Segunda feira");
                        break;

                    case '2':
                        printf("Terca feira");
                        break;

                    case '3':
                        printf("Quarta feira");
                        break;

                    case '4':
                        printf("Quinta feira");
                        break;

                    case '5':
                        printf("Sexta feira");
                        break;

                    case '6':
                        printf("Sabado");
                        break;

                    case '7':
                        printf("Domingo");
                        break;

                    default:
                        printf("Nenhuma opcao valida");
                        break;

            }
    }*/


   /* #include<stdio.h>

int main()
{
        char operacao = getchar();

        char numero2 = getchar();

        switch(operacao){

        case '*':

            switch(numero2){
            case '0':

            printf("Erro");
            break;
        }
        break;
            default:
                printf("Nenhuma opcao valida");
                break;
    }
}*/

#include <stdio.h>
#include <conio.h>
int main (void )
{
  int valor;

  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);

  switch ( valor )
  {
    case 1 :
    printf ("Domingo\n");
    break;

    case 2 :
    printf ("Segunda\n");
    break;

    case 3 :
    printf ("Terça\n");
    break;

    case 4 :
    printf ("Quarta\n");
    break;

    case 5 :
    printf ("Quinta\n");
    break;

    case 6 :
    printf ("Sexta\n");
    break;

    case 7 :
    printf ("Sabado\n");
    break;

    default :
    printf ("Valor invalido!\n");
  }

  getch();
  return 0;
}

