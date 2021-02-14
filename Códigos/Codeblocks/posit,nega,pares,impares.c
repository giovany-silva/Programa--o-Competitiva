#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

void apresente( int X,int *po,int *n,int *p,int *i);
int main(int argc, char **argv)
{


    int a,b,c,d,e,po=0,n=0,p=0,i=0;


    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    apresente (a,&po,&n,&p,&i);
    apresente (b,&po,&n,&p,&i);
    apresente (c,&po,&n,&p,&i);
    apresente (d,&po,&n,&p,&i);
    apresente (e,&po,&n,&p,&i);

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",p,i,po,n);
}


void apresente( int X,int *po,int *n,int *p,int *i)
{
    if(X>0)
    {*po=*po+1;
        if(X%2==1) {  *i=*i+1; }
    else *p=*p+1;

    }
else if(X<0)
    {
        *n=*n+1;
        if(X%2==-1) {  *i=*i+1; }
    else *p=*p+1;

    }
    else{*p=*p+1;}
}
