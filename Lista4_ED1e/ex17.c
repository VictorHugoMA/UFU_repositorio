#include<stdio.h>
//17 - Forca

    int main(){
        char esc, certa='q';

        printf("<<Forca de uma letra so>>\n");

        for(int i=5; i>0; i--){
            printf("Qual a letra? ");
            setbuf(stdin, NULL);
            scanf("%c", &esc);

            if(esc==certa){
                printf("ACERTOU!\n");
                break;
            }
                else if(i>2)
                    printf("Errado! Voce tem mais %d chances\n", i-1);
                
                else if(i==2)
                    printf("Ultima chance!!!\n");
                
                else if(i==1)
                    printf("Acabaram suas chances. A letra correta e '%c'\n", certa);
                        
        }
    }