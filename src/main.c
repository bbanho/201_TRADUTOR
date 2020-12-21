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
#include "ArvoreAVL.h"

//#define  MAXDADOS  131072     // 2^17 = 131.072   (2 x 65536 dados)
#define  MAXDADOS  1000000      // 2^20 = 1.048.576 (1 Mega dados)
//#define  MAXDADOS  250000     // 2^18 = 262144, 2^19 = 524288
//#define  MAXDADOS  65535

double drand48(void);

int main()
{
    FILE *dict = fopen("dict.txt","r");

    DADO dt;
    dt=(char *)malloc(25*sizeof(char));

    ArvAVL* avl;
    avl  = cria_ArvAVL();

    while(fscanf(dict," %s ",dt)!=EOF){
      insere_ArvAVL(avl,dt);
    }
    
    puts("\n>> Listando todas Palavras da ABO Balanceada em Ordem:\n");
    emOrdem_ArvAVL(avl);

    puts("\n>> Listando todas Palavras da ABO Balanceada em Ordem:\n");
    preOrdem_ArvAVL(avl);

    printf("\n>> Altura da Arvore: %d\n",altura_ArvAVL(avl));
    printf(">> Total de Nodos da Arvore: %d nodos\n",totalNO_ArvAVL(avl));
  

    puts("\n>> Gerando lista ordenada de ocorrencias.\n");
    Lista *lo = cria_lista();
    geraListaOrdenadaOcorr(avl,lo);

    int nmin;
    printf(">> Qual o numero minimo de ocorrencias a ser listado: ");
    scanf("%d",&nmin);

    imprime_lista(lo,nmin);

    printf("FIM!\n\n");
    

    libera_lista(lo);
    libera_ArvAVL(avl);

    return 0;
}
