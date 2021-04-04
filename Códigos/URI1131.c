#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

int main(int argc, char **argv)
{
    int x,y,vi=0,vg=0,e=0,a;
    do
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            vi++;
        }
        else if(x==y)
        {
            e++;
        }
        else
        {
            vg++;
        }


        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==2)
            break;
    }
    while(a==1);
     printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",e+vi+vg,vi,vg,e);

if(vi>vg)
    {
        printf("Inter venceu mais\n");
    }
    else if(vi<vg)
    {
        printf("Gremio venceu mais\n");
    }
    else
        {

            printf("Nao houve vencedor\n");
        }

}

