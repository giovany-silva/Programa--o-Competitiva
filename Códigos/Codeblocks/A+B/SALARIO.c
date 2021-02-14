#include<stdlib.h>
#include<stdio.h>
void verifica(float n);
int main()
{
float n;
scanf("%f",&n);
verifica(n);
    return 0;
}
void verifica(float n)
{float a;
    if(n<=2000&&n>=0)printf("Isento\n");
else if(n>=2000.01&&n<=3000)
{a=0.08*(n-2000);
printf("R$ %.2f\n",a);}
else if(n>=3000.01&&n<=4500)
{a=80+(n-3000)*0.18;
printf("RS %.2f\n",a);

}else if(n>=4500)
{a=80+270+(n-4500)*0.28;
    printf("RS %.2f\n",a);

}
}
