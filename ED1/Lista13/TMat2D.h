typedef struct TadMat TadMat;

TadMat *criar_mat(int nlin, int ncol);

int free_mat(TadMat *mat);

int escrever_mat(TadMat *mat, int nlin, int ncol, double val);

int acessar_mat(TadMat *mat, int nlin, int ncol, double *val);

int preencher_mat(TadMat *mat, double max);

int soma_mat(TadMat *m1, TadMat *m2, TadMat *sm);

int mult_mat(TadMat *m1, TadMat *m2, TadMat *tm);

int multConst_mat(TadMat *m1, TadMat *tm, double num);

int traco_mat(TadMat *m1, double *tot);

int somaL_mat(TadMat *m1, double **sl);

int somaC_mat(TadMat *m1, double **sc);