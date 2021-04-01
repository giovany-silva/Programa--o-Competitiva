#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    int chave,mod;
    pno esq,dir;

}tree;
pno insere_arvore (int v,int mod,pno pt);
void libera(pno raiz);
void imprime(pno raiz);
pno removeraiz (pno r);
int M;
int main ()
{
 pno raiz;
 
 int n,c;
 while(scanf("%d %d",&n,&M))
   {
   printf("%d %d\n",n,M);
   if(!n&&!M)break;
    raiz=NULL;
   while(n--){
       scanf("%d",&c);
                raiz=insere_arvore (c,c%M,raiz);
    }
    imprime(raiz);
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
void imprime(pno raiz)
{
    if(raiz!=NULL)
    {
        imprime(raiz->esq);
        printf("%d\n",raiz->chave);
        imprime(raiz->dir);
    }

}
int comp (int a, int b){
    if (b%M == a%M){ /// retorna primeiro os impares e depois os pares;
        if(abs(a)%2 ==abs(b)%2){ ///comparando dois pares ou dois impares
            if (a%2 != 0){ ///impares
                return a > b;
            }else{ ///a e b s?o pares
                return b > a;
            }
        }
        return abs(a)%2 > abs(b)%2; /// impares antes dos pares
    }
    return a%M < b%M;
};
pno insere_arvore (int v,int mod,pno pt)
{
  if (pt==NULL) {
    pt = (pno)malloc(sizeof(tree));
    pt->chave=v;
    pt->mod=mod;
    pt->esq = pt->dir = NULL;
 }
 else if (comp (v,pt->chave)) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,mod,pt->esq); 
 else  pt->dir = insere_arvore(v,mod,pt->dir);
  return pt;
}