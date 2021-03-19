#include<stdio.h>
//7 - Aritimetica de ponteiro print char

    int main(){
        char nome[] = "Jose Augusto";
        char *p;

        p=nome;

        for(int i=0; i<13; i++){
            printf("%c", *(p+i)); //ou p[i]
        }
    }