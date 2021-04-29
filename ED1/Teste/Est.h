typedef struct ponto ponto;

ponto *cria_ponto(int x, int y);

int libera_ponto(ponto *p);

int acessa_ponto(ponto *p, int *x, int *y);

int altera_ponto(ponto *p, int x, int y);

int dist_2pontos(ponto *p1, ponto *p2, float *d);