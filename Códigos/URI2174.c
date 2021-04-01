#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    char chave[1000];
    pno esq,dir;

}tree;

pno insere_arvore (char* v,int *c, pno pt);
void libera(pno raiz);
int main()
{int n,c=0;
char s[1001];
 pno raiz=NULL;
       
 
 

  scanf("%d",&n);
while(n--)
{scanf(" %s",s);
raiz=insere_arvore(s,&c,raiz);

}
printf("Falta(m) %d pomekon(s).\n",151-c);    
 libera(raiz);
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

pno insere_arvore (char *v,int *c, pno pt)
{
    if (pt==NULL) {
   pt = (pno)malloc(sizeof(tree));
   strcpy(pt->chave ,v);
   pt->esq = pt->dir = NULL;
 
 *c+=1;       
    }
 else if (strcmp(v , pt->chave)<0) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,c,pt->esq);
 else if (strcmp(v , pt->chave)>0) // se for maior sub arvore da direita
   pt->dir = insere_arvore(v,c,pt->dir);
 
 return pt;
}

