#include<stdio.h>
#include<string.h>
    int main(){
        char x[100];
        int gl=0, gr=0, pl=0, pr=0, saca=1; //1 esq, 2 dir

        scanf("%s", x);
        
        for(int i=0; i<strlen(x); i++){
            
            if(x[i]=='S' && saca==1)
                pl+=1;
            else if(x[i]=='S' && saca==2)
                pr+=1;
            else if(x[i]=='R' && saca==1){
                pr+=1;
                saca=2;
            }
            else if(x[i]=='R' && saca==2){
                pl+=1;
                saca=1;
            }
            if((pl==5 && pr<4 )|| pl==10){
                gl+=1;
                saca=1;
                pl=0;
                pr=0;
            }
            else if((pr==5 && pl<4) || pr==10){
                gr+=1;
                saca=2;
                pr=0;
                pl=0;
            }
            if(x[i]=='Q' && gl==2)
                printf("%d (winner) - %d\n", gl, gr);

            else if(x[i]=='Q' && gr==2)
                printf("%d - %d (winner)\n", gl, gr);

            else{
                if(x[i]=='Q' && saca==1)
                    printf("%d (%d*) - %d (%d)\n", gl, pl, gr, pr);
                else if(x[i]=='Q' && saca==2)
                    printf("%d (%d) - %d (%d*)\n", gl, pl, gr, pr);
            }
            
        }
    }