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

    if(acessos>=0) acessos++;
    

    insere_ArvAVL(dict,palavra,trad,acessos);
  }

  return dict;
}

ArvAVL *escreveDict(FILE *fdict, ArvAVL dict){

  int acessos   = dict->acessos;

  char palavra[TMAX];
  strcpy(palavra,dict->info);

  char trad[TMAX];
  strcpy(trad,dict->info);

  while(acessos>=0){
    fprintf(fdict,"%d",acessos);
    fprintf(fdict,"%s",palavra);
    fprintf(fdict,"%s",trad);
  }

  return dict;
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

int strcmp_n(char *inp1, char *inp2){

//  for(int i=0;i<strlen())

  return 0;
}


