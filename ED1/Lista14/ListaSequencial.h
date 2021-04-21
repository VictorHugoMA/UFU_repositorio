#define MAX 100

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct lista lista;

lista *cria_lista();

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

int cheia_lista(lista *l);

int vazia_lista(lista *l);

int imprime_lista(lista *l);