#include<stdio.h>
#include<string.h>
//15 - Coordenadas Funcao

    typedef struct ponto{
        int x, y;
    }ponto;

    void inc_dir(ponto *p, char d){
        if(d=='n')
            p->y+=1;
        else if(d=='s')
            p->y-=1;
        else if(d=='l')
            p->x+=1;
        else if(d=='o')
            p->x-=1;
    }

    int main(){
        ponto p;
        char d;

        printf("Digite o ponto: ");
        scanf("%d", &p.x);
        scanf("%d", &p.y);
        printf("Digite a direcao (n,s,l,o): ");
        scanf(" %c", &d);
        
        printf("(%d,%d) ", p.x, p.y);
        inc_dir(&p, d);

        if(d=='n')
            printf("norte => (%d,%d)\n", p.x, p.y);
        else if(d=='s')
            printf("sul => (%d,%d)\n", p.x, p.y);
        else if(d=='l')
            printf("leste => (%d,%d)\n", p.x, p.y);
        else if(d=='o')
            printf("oeste => (%d,%d)\n", p.x, p.y);

    }