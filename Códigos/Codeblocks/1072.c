#include  <stdio.h>  /**< inclui as fun��es padr�es de entrada e sa�da. */
#include <stdlib.h>  /**< inlcui as fun��es manipuladoras de mem�ria. */
#include <string.h>  /**< inclui as fun��es manipuladoras de strings. */

void verifica (int X, int Y);

int main(int argc, char **argv)

{
    int X,Y,N,i,aux;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d %d",&X,&Y);
    if(X>Y){aux=X; X=Y;Y=aux;}
    verifica(X,Y);
}
}







void verifica( int X,int Y)
{int i,s;
s=0;
for(i=X+1;i<Y;i++)
{
   if(i%2==1)s=s+i;
}
printf("%d\n",s);

}
