#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    int chave;
    pno esq,dir;

}tree;

pno insere_arvore (int v, pno pt);
void libera(pno raiz);
void imprimepr(pno raiz);
void imprimepo(pno raiz);
void imprimein(pno raiz);
int main ()
{int n,c,i,x;
 scanf("%d",&c);
 int aux=c;
 pno raiz;
 while(c--)
 {raiz=NULL;
     scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&x);
        raiz=insere_arvore (x,raiz);
                    }
                    
printf("Case %d:\n",aux-c);
printf("Pre.:");
imprimepr(raiz);

       printf("\n");
printf("In..:");imprimein(raiz);
       printf("\n");

printf("Post:");       imprimepo(raiz);                    
        printf("\n\n");
     libera(raiz);
 }
  
  
  return 0;
}
void libera(pno raiz)
{
    if(raiz!=NULL)
    {
        libera(raiz->esq);

        libera(raiz->dir);
        free(raiz);
    }

}
void imprimepr(pno raiz)
{
    if(raiz!=NULL)
    {  printf(" %d",raiz->chave);
        imprimepr(raiz->esq);
        imprimepr(raiz->dir);
    }

}
void imprimepo(pno raiz)
{
    if(raiz!=NULL)
    { 
        imprimepo(raiz->esq);
        imprimepo(raiz->dir);
     printf(" %d",raiz->chave);
    }

}

void imprimein(pno raiz)
{
    if(raiz!=NULL)
    {
        imprimein(raiz->esq);
       printf(" %d",raiz->chave);
        imprimein(raiz->dir);
    }

}

pno insere_arvore (int v, pno pt)
{
    if (pt==NULL) {
   pt = (pno)malloc(sizeof(tree));
   pt->chave=v;
   pt->esq = pt->dir = NULL;
 }
 else if (v<pt->chave) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,pt->esq);
 else if (v>pt->chave) // se for maior sub arvore da direita
   pt->dir = insere_arvore(v,pt->dir);
 return pt;
}
