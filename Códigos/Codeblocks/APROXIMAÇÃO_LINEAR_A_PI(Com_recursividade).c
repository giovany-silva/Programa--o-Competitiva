#include<stdlib.h>
#include<stdio.h>
float valor_pi(int n);
float um_ou_zero(int n);

int main()
{
    int n;
    float p;
    scanf("%d",&n);
    p=valor_pi(n);
    printf("%.15f",p);
}
float valor_pi(int n)
{
    float soma=0.0;

n--;
    soma=soma+um_ou_zero(n);

    return 4*soma;
}
float um_ou_zero(int n)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        if(n%2==0)
            {
            return 1.0/(2*n+1)+um_ou_zero(n-1);
            }
               if(n%2==1)
            {
            return -1.0/(2*n+1)+um_ou_zero(n-1);
            }


    }
}
