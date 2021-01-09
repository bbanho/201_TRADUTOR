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
  FILE *fdict = fopen("dict.txt","r");
  ArvAVL *avl_dict = lerDict(fdict);
  fclose(fdict);

  int inp_n;
  char inp_s[TMAX];
  while(inp_n>=0){

    scanf("%d",&inp_n);
    if(inp_n<0) break;
    fflush(stdin);

    scanf("%s",inp_s);
    fflush(stdin);

    if(inp_n==0){
      traduz(avl_dict,inp_s);
    } else {
    }

  }

  fdict = fopen("dict.txt","w");
  escreveDict(fdict,*avl_dict);
  fclose(fdict);

  libera_ArvAVL(avl_dict);

    return 0;
}
