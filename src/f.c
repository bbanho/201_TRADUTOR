#include "ArvoreAVL.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define TMAX 20


ArvAVL *lerDict(FILE *fdict){

  ArvAVL* dict;
  dict=cria_ArvAVL();

  char palavra[TMAX];
  char trad[TMAX];

  int acessos=0;
  while(acessos>=0){
    fscanf(fdict,"%d",&acessos);
    fscanf(fdict,"%s",palavra);
    fscanf(fdict,"%s",trad);

    insere_ArvAVL(dict,palavra,trad,acessos);
  }

  return dict;
}


struct NO *escreveDict_r(FILE *fdict, ArvAVL dict){

  fprintf(fdict,"%d\n",dict->acessos);
  fprintf(fdict,"%s\n",dict->info);
  fprintf(fdict,"%s\n",dict->trad);

  struct NO *aux = NULL;

  if(dict->esq != NULL){
    aux=escreveDict_r(fdict,dict->esq);
  }

  if(dict->dir != NULL&&aux==NULL){
    aux=escreveDict_r(fdict,dict->dir);
  }

  return aux;
}

int escreveDict(FILE *fdict, ArvAVL dict){

  escreveDict_r(fdict,dict);
  
  fprintf(fdict,"%s\n","-1");

  return 0;
}

int traduz(ArvAVL *raiz, char *valor){
    if(raiz == NULL)
        return 0;
    struct NO* atual = *raiz;
    while(atual != NULL){
        if(strcmp(valor,atual->info)==0){
          atual->acessos++;
          printf("%s\n",atual->trad);
            return 1;
        }
        if(strcmp(valor,atual->info)>0)
            atual = atual->dir;
        else
            atual = atual->esq;
    }
    return 0;
}

