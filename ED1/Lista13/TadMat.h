typedef struct TadMat TadMat;

TadMat *criar_mat(int nlin, int ncol);

int free_mat(TadMat *mat);

int escrever_mat(TadMat *mat, int nlin, int ncol, double val);

int acessar_mat(TadMat *mat, int nlin, int ncol, double *val);

int preencher_mat(TadMat *mat, int nlin, int ncol, double max);

int soma_mat(TadMat *m1, TadMat *m2, TadMat *sm, int nlin, int ncol);

int mult_mat(TadMat *m1, int nlin1, int ncol1, TadMat *m2, int nlin2, int ncol2, TadMat *tm);

int multConst_mat(TadMat *m1, TadMat *tm, int nlin, int ncol, double num);

int traco_mat(TadMat *m1, int nlin, int ncol, double *tot);

int somaL_mat(TadMat *m1, int nlin, int ncol, double *sl);

int somaC_mat(TadMat *m1, int nlin, int ncol, double *sc);