#include <stdio.h> 
#include <string.h>

    int main(void){ 
        char buff[5];     
        int pass = 0;   

        printf("\n Entre com a senha : \n"); 
        gets(buff);   

        if(strcmp(buff, "1234")){ 
            printf("\n Senha Errada \n");    
        }  
            else{        
                printf("\n Senha Correta \n");         
                pass = 1;    
            }   

        if(pass){   /* O usuário acertou a senha, poderá continuar*/       
            printf("\n Acesso liberado \n");     
        } 
            else{         
                printf("\n Acesso negado \n");     
            }   


        return 0; 
    } 

/*
a) verificar se o usuario acertou a senha e liberar ou nao o acesso
b) Senha Correta Acesso liberado
c)  123: Senha Errada Acesso negado
    12345: Senha Errada Acesso negado
    123456: Senha Errada Acesso liberado
d) Quando se le uma string maior que a declarada com gets() ocorre um estouro de buffer(buffer overflow), que gera falhas no programa, pois os 
dados lidos podem sobrescrever outros e neste caso liberar o acesso mesmo sem a senha correta

*/