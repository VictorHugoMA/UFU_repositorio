#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "TGrafico.h"
#include "TMatQuad.h"

int main(){
    TGrafico *grafico;
    struct ponto p, cons;
    
    char temp[100], nomex[100], nomey[100], nomet[100];
    int n, i, x, y;

    grafico=cria_grafico();

    printf("Digite o nome do eixo x: ");
    fgets(temp, 100, stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        strcpy(nomex, temp);
    
    printf("Digite o nome do eixo y: ");
    fgets(temp, 100, stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        strcpy(nomey, temp);
    
    definir_nomes_eixos(grafico, nomex, nomey);

    printf("Digite o nome do titulo: ");
    fgets(temp, 100, stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        strcpy(nomet, temp);
    
    definir_titulo(grafico, nomet);

    printf("Digite quantos pontos deseja inserir na lista: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Digite a coordenada(x) do ponto %d: ", i+1);
        scanf("%f", &p.x);
        printf("Digite a coordenada(y) do ponto %d: ", i+1);
        scanf("%f", &p.y);
        insere_ponto_fim(grafico, p);
    }

    mostrar_grafico(grafico);

    maior_grafico(grafico, &cons);
    printf("Maior valor: %.1f (ponto x=%.1f; y=%.1f)\n", cons.y, cons.x, cons.y);

    printf("Digite a posicao em que o ponto deve ser inserido: ");
    scanf("%d", &n);
    printf("Digite a coordenada (x) do ponto %d: ", n);
    scanf("%f", &p.x);
    printf("Digite a coordenada (y) do ponto %d: ", n);
    scanf("%f", &p.y);

    TMatQuad *mat;
    int *vet, ord=3;

    mat = cria_mat_identidade(ord);

    vet = malloc(ord*sizeof(int));

    vet=copia_diagonal(mat);

    printf("Diagonal principal: ");
    for(i=0; i<ord; i++){
        printf("%d ", vet[i]);
    }

    apaga_grafico(grafico);
    libera_matquad(mat);
    free(vet);

}