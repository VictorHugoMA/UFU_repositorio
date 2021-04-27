typedef struct TadMat TadMat;

TadMat *criar_mat(int nlin, int ncol);

int free_mat(TadMat *mat);

int preencher_mat(TadMat *mat, double max);

int acessar_mat(TadMat *mat, int lin, int col, double *val);

int somaL_mat(TadMat *m1, double **sl);