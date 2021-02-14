#include<stdlib.h>
#include<stdio.h>
float valor_pi(int n);
static float um_ou_zero(int n);//procurar saber para que serve static...

int main()
{
int n;
float p;
scanf("%d",&n);
    p=valor_pi(n);
    printf("%.15f",p);
}
float valor_pi(int n)
{float soma=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        soma=soma+um_ou_zero(i)/(2*i+1);

    }
return 4*soma;
}
static float um_ou_zero(int n)
{
    if(n%2==0)
        {
        return 1.0;
        }

else{
    return -1.0;
}
}
