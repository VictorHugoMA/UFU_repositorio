typedef struct TMatQuad TMatQuad;
TMatQuad* cria_matquad(int ordem);
TMatQuad* cria_mat_identidade(int ordem);
void libera_matquad(TMatQuad *mat);
int* copia_diagonal(TMatQuad *mat);
