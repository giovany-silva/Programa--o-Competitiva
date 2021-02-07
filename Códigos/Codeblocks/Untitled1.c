#include<stdlib.h>
int main()
{
    int i,N,r,s,c,Quantia;
    char Tipo;
    r=0;
    s=0;
    c=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        do{scanf("%d",&Quantia);}while(Quantia<1&&Quantia>15);
        scanf( " %c",&Tipo);
switch(Tipo)
{
case 'S':s=s+Quantia;
    break;
case 'R':r=r+Quantia;
    break;
case 'C':c=c+Quantia;
break;

}
    }


printf("Total: %d cobaias\n %d\nTotal de coelhos: %d"
"\nTotal de ratos: %d"
"\nTotal de sapos: %d"
"\nPercentual de coelhos: %.2d %%"
"\nPercentual de ratos: %.2d %%"
"\nPercentual de sapos: %.2d %%",c+r+s,c,r,s,c/(r+s+c),r/(r+s+c),s/(r+s+c));
}
