#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}aluno;

typedef struct TDLinkedList DLlist;

DLlist* list_creat();

int list_free(DLlist *list);

int list_push_front(DLlist *l, aluno a);

int list_push_back(DLlist *l, aluno a); 

int list_insert(DLlist *l, int pos, aluno a);

int list_size(DLlist *l); 

int list_pop_front(DLlist *l); 

int list_pop_back(DLlist *l); 

int list_erase(DLlist *l, int pos); 

int list_find_pos(DLlist *l, int pos, aluno *a); 

int list_find_mat(DLlist *l, int mat, aluno *a); 

int list_front(DLlist *l, aluno *a); 

int list_back(DLlist *l, aluno *a); 

int list_get_pos(DLlist *l, int mat, int *pos); 

int list_print_forward(DLlist *l);

int list_print_reverse(DLlist *l);