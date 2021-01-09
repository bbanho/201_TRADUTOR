#include <stdio.h>

#include "ArvoreAVL.h"

ArvAVL *lerDict(FILE *fdict);

int escreveDict(FILE *fdict, ArvAVL dict);
struct NO *escreveDict_r(FILE *fdict, ArvAVL dict);

int traduz(ArvAVL *raiz, char *valor);
