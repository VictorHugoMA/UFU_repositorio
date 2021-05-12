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

DLlist* list_creat();//

int list_free(DLlist *list);//

int list_push_front(DLlist *l, aluno a);//

int list_push_back(DLlist *li, struct aluno al);

int list_insert(DLlist *l, int pos, aluno a);//

int list_size(DLlist *li);

int list_pop_front(DLlist *li);

int list_pop_back(DLlist *li); 

int list_erase(DLlist *li, int pos);

int list_find_pos(DLlist *li, int pos, struct aluno *al);

int list_find_mat(DLlist *li, int nmat, struct aluno *al);

int list_front(DLlist *li, struct aluno *al); 

int list_back(DLlist *li, struct aluno *al); 

int list_get_pos(DLlist *li, int mat, int *pos);

int list_print_forward(DLlist *l);//

int list_print_reverse(DLlist *l);//