typedef struct TadMat TadMat;

TadMat *criar_mat(int nlin, int ncol);

int free_mat(TadMat *mat);

int escrever_mat(TadMat *mat, int nlin, int ncol, double val);

int acessar_mat(TadMat *mat, int nlin, int ncol, double *val);

int preencher_mat(TadMat *mat, int nlin, int ncol, double max);