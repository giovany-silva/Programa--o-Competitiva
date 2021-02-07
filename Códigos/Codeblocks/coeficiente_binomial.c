#include<stdlib.h>
#include<stdio.h>
int coeficiente (int n,int k);
int main()
{
int n,k,a;
scanf("%d %d",&n,&k);
if(n<k){a=n;
n=k;//troca-se os valores para não dar problema no coeficiente binomial
k=a;}
a=coeficiente (n,k);
printf("%d ",a);
}
int coeficiente (int n,int k)
{

    if(k==0||n==k){return 1;}
    else if(k>0){return coeficiente(n-1,k)+coeficiente(n-1,k-1);}


}

