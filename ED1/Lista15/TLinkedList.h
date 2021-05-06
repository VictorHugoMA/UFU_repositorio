#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct list list;

list *list_creat();

int list_free(list *l);

int list_push_front(list *l, aluno a);

int list_push_back(list *l, aluno a);

int list_print(list *l);

int list_insert(list *l, int pos, aluno a);

int list_insert_sorted(list *l, aluno a);

int list_size(list *l);

int list_pop_front(list *l);

int list_pop_back(list *l);

int list_erase_data(list *l, int mat);

int list_erase_pos(list *l, int pos);

int list_find_pos(list *l, int pos, aluno *a);

int list_find_mat(list *l, int mat, aluno *a);

int list_front(list *l, aluno *a);

int list_back(list *l, aluno *a);

int list_get_pos(list *l, int mat, int *pos);