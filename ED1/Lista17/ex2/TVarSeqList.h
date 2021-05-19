#ifndef _TVarL_
#define _TVarL_
#include"aluno.h"

typedef struct lista lista;

lista *cria_lista(int n);

int aumenta_tam_lista(lista *l);

int compactar_lista(lista *l);

int free_lista(lista *l);

int insere_inicio_lista(lista *l, aluno a);

int insere_final_lista(lista *l, aluno a);

int insere_ordenado_lista(lista *l, aluno a);

int consulta_lista_pos(lista *l, int pos, aluno *ac);

int consulta_lista_mat(lista *l, int mat, aluno *ac);

int remove_inicio_lista(lista *l);

int remove_final_lista(lista *l);

int remove_mat_lista(lista *l, int mat);

int remove_mat_otimizado_lista(lista *l, int mat);

int tamanho_lista(lista *l);

int tamanho_aloc_lista(lista *l);

int cheia_lista(lista *l);

int vazia_lista(lista *l);

int imprime_lista(lista *l);

#endif