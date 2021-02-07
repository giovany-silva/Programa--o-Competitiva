#include<stdlib.h>
#include<stdio.h>
int soma(int a,int b);
int main()
{
    int n,a,b;
    scanf("%d %d",&a,&b);
    n=soma(a,b);
    printf("%d",n);
}
int soma(int a,int b)
{

    if(a==1) return b;
    else return b+soma(a-1,b);
}
