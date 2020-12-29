typedef struct NO* ArvAVL;

struct NO{

  char *info;
  char *trad;
  int acessos;

  int altura;
  struct NO *esq;
  struct NO *dir;

};

ArvAVL* cria_ArvAVL();
void libera_ArvAVL(ArvAVL *raiz);
int insere_ArvAVL(ArvAVL *raiz, char *data, char *trad, int acessos);
int remove_ArvAVL(ArvAVL *raiz, char *valor);
int estaVazia_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int consulta_ArvAVL(ArvAVL *raiz, char *valor);
void preOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_ArvAVL(ArvAVL *raiz);
void posOrdem_ArvAVL(ArvAVL *raiz);

