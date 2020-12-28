#include "ArvoreAVL.h"
#include <stdio.h>
#include <stdlib.h>

#define TMAX 20


ArvAVL *lerDict(FILE *fdict){

  ArvAVL* dict;
  dict=cria_ArvAVL();

  char *palavra = (char *) malloc(TMAX*sizeof(char));
  char *trad = (char *) malloc(TMAX*sizeof(char));

  int acessos=0;
  while(acessos>=0){
    fscanf(fdict,"%d",&acessos);
    fscanf(fdict,"%s",palavra);
    fscanf(fdict,"%s",trad);

    if(acessos>=0) acessos++;
    

    insere_ArvAVL(dict,palavra,trad,acessos);
  }

  return dict;
}
