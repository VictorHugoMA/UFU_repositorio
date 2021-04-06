#include<stdio.h>
#include<string.h>
//16 - Coordenadas 2 Funcao

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

    void ind_diag(ponto *p, char* dg){
        if(strcmp(dg, "nordeste")==0){
            inc_dir(&(*p), 'n');
            inc_dir(&(*p), 'l');
        }
        else if(strcmp(dg, "noroeste")==0){
            inc_dir(&(*p), 'n');
            inc_dir(&(*p), 'o');
        }
        else if(strcmp(dg, "sudeste")==0){
            inc_dir(&(*p), 's');
            inc_dir(&(*p), 'l');
        }
        else if(strcmp(dg, "sudoeste")==0){
            inc_dir(&(*p), 's');
            inc_dir(&(*p), 'o');
        }
    }

    int main(){
        ponto p;
        char dg[10], temp[10];

        printf("Digite o ponto: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", &p.x);
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", &p.y);
        printf("Digite a direcao: ");
        fgets(temp, 10, stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        strcpy(dg, temp);
        
        printf("(%d,%d) ", p.x, p.y);
        ind_diag(&p, dg);

        if(strcmp(dg, "nordeste")==0)
            printf("nordeste => (%d,%d)\n", p.x, p.y);
        
        else if(strcmp(dg, "noroeste")==0)
            printf("noroeste => (%d,%d)\n", p.x, p.y);
        
        else if(strcmp(dg, "sudeste")==0)
            printf("sudeste => (%d,%d)\n", p.x, p.y);
        
        else if(strcmp(dg, "sudoeste")==0)
            printf("sudoeste => (%d,%d)\n", p.x, p.y);

    }