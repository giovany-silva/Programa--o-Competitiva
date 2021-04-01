#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    char chave[100],c[20],n[2];
    pno esq,dir;

}tree;
pno insere_arvore (char *v,char *c,char *t, pno pt);
void libera(pno raiz);
void imprime(pno raiz);
pno removeraiz (pno r);
int main ()
{
 pno raiz;
 char no[100],c[20],t[2];
 int n,x=0;
 while(scanf("%d",&n)&&n)
   {if(x)printf("\n");
    x=1;               raiz=NULL;
       while(n--)
       {

               scanf(" %[^\n]s",no);
               scanf("%s %s",c,t);
               
              raiz=insere_arvore (no,c,t,raiz);

       }
            imprime(raiz);
            
            libera(raiz);

   }
  
  //raiz=removeraiz (raiz);
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
        printf("%s %s %s\n",raiz->c,raiz->n,raiz->chave);
        imprime(raiz->dir);
    }

}
pno insere_arvore (char *v,char *c,char *t, pno pt)
{
    if (pt==NULL) {
   pt = (pno)malloc(sizeof(tree));
   strcpy(pt->chave ,v);
   strcpy(pt->c ,c);
   strcpy(pt->n ,t);
   pt->esq = pt->dir = NULL;
   //pt->c=c;
   //pt->n=t;
 }
 else if (strcmp(c,pt->c)<0) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,c,t,pt->esq);
 else if (strcmp(c,pt->c)>0) // se for maior sub arvore da direita
   pt->dir = insere_arvore(v,c,t,pt->dir);
 else {
            if (strcmp(t,pt->n)>0) // se for menor sub arvore da esquerda
           pt->esq = insere_arvore(v,c,t,pt->esq);
         else if (strcmp(t,pt->n)<0) // se for maior sub arvore da direita
            pt->dir = insere_arvore(v,c,t,pt->dir);
              else 
             {
                if (strcmp(v,pt->chave)<0) // se for menor sub arvore da esquerda
               pt->esq = insere_arvore(v,c,t,pt->esq);
             else pt->dir = insere_arvore(v,c,t,pt->dir);
                 
             }   
 }
 
 return pt;
}
