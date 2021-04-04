#include  <stdio.h>  /**< inclui as funções padrões de entrada e saída. */
#include <stdlib.h>  /**< inlcui as funções manipuladoras de memória. */
#include <string.h>  /**< inclui as funções manipuladoras de strings. */

void verifica (int n);

int main(int argc, char **argv)

{
    int N,X,i;
  do{  
	scanf("%d",&N);
  }while(N>=10000);

for(i=0;i<N;i++){
	do{
		scanf("%d",&X);
	}while(X<=-10000000||X>=10000000);
    verifica(X);
}





}


void verifica( int n)
{
    if(n>0){
	if(n%2==0)
		printf("EVEN POSITIVE\n");
    	else 
		printf("ODD POSITIVE\n");

    }else if(n==0)
	printf("NULL\n");
    else{
	if(n%2==0)
		printf("EVEN NEGATIVE\n");
    	else
	 	printf("ODD NEGATIVE\n");
    }


}
