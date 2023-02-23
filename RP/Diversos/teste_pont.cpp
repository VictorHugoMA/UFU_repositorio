#include<stdio.h>

    int main(){
        int a;
        int *pont=&a;

            scanf("%d", &a);

            printf("%p\n", &a);
            printf("%d\n", a);
            printf("%p\n", &pont);
            printf("%p\n", pont);
            printf("%d\n", *pont);

        return 0;
    }
