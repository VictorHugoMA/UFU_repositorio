#ifndef _TCirc_
#define _TCirc_

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

typedef struct CircList CircList;

CircList *list_creat();//

int list_free(CircList *c);//

int list_push_front(CircList *c, aluno a);//

int list_push_back(CircList *c, aluno a);//

int list_print(CircList *c);//

int print_next(CircList *c);

int list_insert(CircList *c, int pos, aluno a);

int list_size(CircList *c);//

int list_pop_front(CircList *c);//

int list_pop_back(CircList *c);//

int list_erase_data(CircList *c, int mat);

int list_erase_pos(CircList *c, int pos);

int list_find_pos(CircList *c, int pos, aluno *a);

int list_find_mat(CircList *c, int mat, aluno *a);//n

int list_front(CircList *c, aluno *a);//

int list_back(CircList *c, aluno *a);//

int list_get_pos(CircList *c, int mat, int *pos);//

#endif