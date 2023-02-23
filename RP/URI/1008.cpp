#include<stdio.h>

    int main(){
        int number, hrs;
        double valhr, salary;

        scanf("%d %d %lf", &number, &hrs, &valhr);

        salary = hrs * valhr;

        printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

    }
