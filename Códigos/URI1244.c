#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct TREE* pno;
typedef struct TREE
{
    char chave[51];
    pno esq,dir;
    
}tree;
void libera(pno raiz);
pno insere_arvore (char* v, pno pt);
void imprime(pno raiz,pno ultimo);
pno ultimo(pno raiz);
int main ()
{
 pno raiz;  
 char s[2501],aux[51];
 int i,j,n;
 scanf("%d",&n);
while(n--){i=0;j=0;
                  raiz=NULL; 
                      scanf(" %[^\n]s",s);
                   
           while(i<strlen(s))
                   { 
                       
              if(s[i]==' ')
                           {aux[j]='\0';
                             raiz=insere_arvore(aux,raiz);j=0;  
                           }
               else{ aux[j]=s[i];j++;}
                              
                       
                          i++;
                   }
                       
                       aux[j]='\0';
                             raiz=insere_arvore (aux,raiz);
                   pno ult=ultimo(raiz);
                imprime(raiz,ult);
                 printf("\n");
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
void imprime(pno raiz,pno ultimo)
{int cont=0;
    if(raiz!=NULL)
    {
        imprime(raiz->esq,ultimo);
        printf("%s",raiz->chave);
        if(raiz!=ultimo)printf(" ");
        imprime(raiz->dir,ultimo);
    }
    
}

pno insere_arvore (char *v, pno pt)
{
    if (pt==NULL) {
   pt = (pno)malloc(sizeof(tree));
   strcpy(pt->chave ,v);
   pt->esq = pt->dir = NULL;
 }
 else if (strlen(v )> strlen(pt->chave)) // se for menor sub arvore da esquerda
   pt->esq = insere_arvore(v,pt->esq);
 else if (strlen(v )<= strlen(pt->chave)) // se for maior sub arvore da direita
   pt->dir = insere_arvore(v,pt->dir);
 return pt;
}

pno ultimo(pno raiz)
{
    if(raiz!=NULL)while(raiz->dir!=NULL)raiz=raiz->dir;

    return raiz;
}