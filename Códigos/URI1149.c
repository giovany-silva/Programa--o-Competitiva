#include<stdlib.h>
#include<stdio.h>
imprime(int X,int Y);
int main()
{
    int X,Y;
    scanf("%d",&X);
    do{scanf("%d",&Y);}while(Y<=0);
imprime(X,Y);
}
imprime(int X,int Y)
{
    int i,soma=0;
    for(i=0;i<=Y-1;i++)
    {
    soma=X+i+soma;
    }
printf("%d\n",soma);
}
