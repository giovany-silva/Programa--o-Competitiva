#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

void verifica (int n, int *d,int *f);

int main(int argc, char **argv)

{
    int N,X,i,d=0,f=0;
  do{  scanf("%d",&N);
    }while(N>=10000);
	for(i=0;i<N;i++){
		do{
			scanf("%d",&X);
		}while(X<=-10000000||X>=10000000);
  verifica(X,&d,&f);
}


printf("%d in\n%d out\n",d,f);


}


void verifica( int n,int *d,int *f)
{

	if(n<=20&&n>=10) {
		*d=*d+1;
	}
	else {
		*f=*f+1;
	}
}
