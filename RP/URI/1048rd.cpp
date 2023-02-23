#include<stdio.h>

    int main(){
        float sal;

        scanf("%f", &sal);

        if(sal>0 && sal<=400){
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", sal*1.15, sal*1.15-sal);
        }
        else if(sal>=400.01 && sal<=800){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", sal*1.12, sal*1.12-sal);
        }
        else if(sal>=800.01 && sal<=1200){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", sal*1.10, sal*1.10-sal);
        }
        else if(sal>=1200.01 && sal>=2000){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", sal*1.07, sal*1.07-sal);
        }
        else if(sal>2000){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", sal*1.04, sal*1.04-sal);
        }

    }
