#include  <stdio.h>  /**< inclui as fun��es padr�es de entrada e sa�da. */
#include <stdlib.h>  /**< inlcui as fun��es manipuladoras de mem�ria. */
#include <string.h>  /**< inclui as fun��es manipuladoras de strings. */

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
