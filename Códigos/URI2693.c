#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    char chave[1000],regiao;
    int dist;
    
    pno esq,dir;

}tree;
pno insere_arvore (char* v,char c,int n,pno pt);
void libera(pno raiz);
void imprime(pno raiz);

int main()
{int x,i,a,b,n;

 pno raiz;
 char s[100],c;
 int num;
  
  
while(1)
{raiz=NULL;
if(scanf("%d",&x)==EOF)break;
for(i=0;i<x;i++)
    {
     
     scanf("%s %c %d",s,&c,&num);
     
      raiz=insere_arvore(s,c,num,raiz);

     
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
        printf("%s\n",raiz->chave);
        imprime(raiz->dir);
    }

}

pno insere_arvore (char *v,char c,int n, pno pt)
{
    if (pt==NULL) {
   pt = (pno)malloc(sizeof(tree));
   strcpy(pt->chave ,v);
   pt->esq = pt->dir = NULL;
   pt->regiao=c;
   pt->dist=n;
 }
 else if (n<pt->dist) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,c,n,pt->esq);
 else if (n>pt->dist) // se for maior sub arvore da direita
   pt->dir = insere_arvore(v,c,n,pt->dir);
 else 
 {
    if (c<pt->regiao) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,c,n,pt->esq);
 else if (c>pt->regiao) // se for maior sub arvore da direita
    pt->dir = insere_arvore(v,c,n,pt->dir);
      else 
     {
        if (strcmp(v,pt->chave)<0) // se for menor sub arvore da esquerda
       pt->esq = insere_arvore(v,c,n,pt->esq);
     else if (strcmp(v,pt->chave)>0) // se for maior sub arvore da direita
        pt->dir = insere_arvore(v,c,n,pt->dir);
         
     }   
 }
 
 return pt;
}
