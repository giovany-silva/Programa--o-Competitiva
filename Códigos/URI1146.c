#include<stdlib.h>
#include<stdio.h>
imprime(int X);
int main()
{
    int X;
    do{scanf("%d",&X);imprime(X);}while(X!=0);
}
imprime(int X)
{
    int i;
    for(i=1;i<=X;i++){
	if(i==X){
		printf("%i\n",i); 
		break;
	}
        printf("%i ",i);
    }
}
