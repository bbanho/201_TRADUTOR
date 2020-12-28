// Analise de Algoritmos Experimental
// Insercao:
// LDE - Lista Dinâmica Encadeada Ordenada
// ABO - Arvore Binaria Ordenada Não Balanceada
// AVL - Arvore Binaria Ordenada Balanceada
//
// F.Osorio - Nov.2020

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "f.h"

#define TMAX 20


int main()
{
    FILE *fdict = fopen("dict.txt","rw");

    ArvAVL *avl_dict = lerDict(fdict);
    
    emOrdem_ArvAVL(avl_dict);

    libera_ArvAVL(avl_dict);
    fclose(fdict);

    return 0;
}
