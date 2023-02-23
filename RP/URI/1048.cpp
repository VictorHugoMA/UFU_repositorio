#include<stdio.h>

    int main(){
        float sal;

        scanf("%f", &sal);

        if(sal>0 && sal<=400){
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", sal*0.15+sal, sal*0.15);
        }
        else if(sal>=400.01 && sal<=800){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", sal*0.12+sal, sal*0.12);
        }
        else if(sal>=800.01 && sal<=1200){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", sal*0.10+sal, sal*0.10);
        }
        else if(sal>=1200.01 && sal>=2000){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", sal*0.07+sal, sal*0.07);
        }
        else if(sal>2000){
             printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", sal*0.04+sal, sal*0.04);
        }

    }
