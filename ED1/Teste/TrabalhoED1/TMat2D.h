#ifndef _TMat2D_
#define _TMat2D_

typedef struct TadMat TadMat;

TadMat *criar_mat(int nlin, int ncol);

int free_mat(TadMat *mat);

int escrever_mat(TadMat *mat, int nlin, int ncol, int val);

int acessar_mat(TadMat *mat, int nlin, int ncol, int *val);

int preencher_mat(TadMat *mat, int max);

int soma_mat(TadMat *m1, TadMat *m2, TadMat *sm);

int mult_mat(TadMat *m1, TadMat *m2, TadMat *tm);

int multConst_mat(TadMat *m1, TadMat *tm, int num);

int traco_mat(TadMat *m1, int *tot);

int somaL_mat(TadMat *m1, int **sl);

int somaC_mat(TadMat *m1, int **sc);

int print_matriz(TadMat *p);

#endif