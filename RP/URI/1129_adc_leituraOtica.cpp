#include<stdio.h>

    int main(){
        int fim, i, A, B, C, D, E, cont;
        char resp;

        while(scanf("%d", &fim) != 0){
            if(fim==0){
                break;
            }

            for(i=0; i<fim; i++){
                scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

                cont=0;

                    if(A<=127){
                        cont++;
                        resp='A';
                    }
                    if(B<=127){
                        cont++;
                        resp='B';
                    }
                    if(C<=127){
                        cont++;
                        resp='C';
                    }
                    if(D<=127){
                        cont++;
                        resp='D';
                    }
                    if(E<=127){
                        cont++;
                        resp='E';
                    }
                if(cont==1){
                    printf("%c\n", resp);
                }
                else{
                    printf("*\n");
                }
            }
        }

    return 0;
    }
