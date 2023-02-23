#include<stdio.h>
#include<string.h>

    int main(){
        char ent1, ent2, ent3;
        char ver[15]="vertebrado";
        char in[15]="invertebrado";

        scanf("%s", &ent1);

        if( strcmp(ent1, ver)==0){
            printf("vertebrado");
        }

    }

