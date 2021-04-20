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

int consulta_lista_pos(lista *l, int pos, aluno *av);