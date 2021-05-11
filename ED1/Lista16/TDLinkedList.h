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
