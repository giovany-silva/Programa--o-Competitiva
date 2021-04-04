#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

void apresente (int X);

int main(int argc, char **argv)

{
    int X;

    do
    {
        scanf("%d",&X);
    }
    while(X<=0);
    apresente (X);
}


void apresente( int X)
{
    int i;
    for(i=X; i<X+12; i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }


}
