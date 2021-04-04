#include<stdlib.h>
#include<stdio.h>

int main()
{
	int M,N,cont=1;
	scanf("%d %d",&M,&N);
	if(M>=N)
			while(M>=N){

				scanf("%d",&N);
  			} 

	int aux=M;
	while(aux<=N){
		M++;
		aux=aux+M;
		cont++;
	}
	printf("%d\n",cont);

	return 0;
}