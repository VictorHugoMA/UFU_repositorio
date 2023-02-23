#include<stdio.h>
    int main(){
        int fim;

        scanf("%d", &fim);

        struct medalha{
            char pais[20];
            int ou, pr, br;
        };

        struct medalha m[fim];
            for(int i=0; i<fim; i++){
                fflush(stdin);
                gets(m[i].pais);
                fflush(stdin);
                scanf("%d %d %d", &m[i].ou, &m[i].pr, &m[i].br);
            }
    }