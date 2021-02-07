#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

void soma (int X, int Y,int c);

int main(int argc, char **argv)

{
    int X,Y,c,aux;
    c=0;
    scanf("%d %d",&X,&Y);
    if(X>Y)
    {
        aux=X;
        X=Y;
        Y=aux;
    }
     soma (X,Y,c);
}


void soma( int X,int Y,int c)
{
    int i;
    for(i=X+1; i<Y; i++)
    {
        if(i%2==1||i%2==-1)
        {
            c=c+i;
        }
    }
    printf("%d\n",c);



}
