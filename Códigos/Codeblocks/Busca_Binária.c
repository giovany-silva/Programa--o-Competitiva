#include<stdio.h>
#include<stdlib.h>
void busca_binaria(int n,int k,int p);
int main()
{
    int n;
    scanf("%d",&n);
    busca_binaria(n/2,1,n);
}
void busca_binaria(int n,int k,int p)
{
    int a;

    printf("O Número é maior(1) ou menor(2) que %d?",n);
    scanf("%d",&a);

    switch(a)
    {
    case 1:
    {
        k=n++;
        busca_binaria((p+k)/2,k,p);
        break;
    }
    case 2:
    {

        p=n--;

        busca_binaria((p+k)/2,k,p);
    }
    break;

    }
}



