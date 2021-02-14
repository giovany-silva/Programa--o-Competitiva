#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("O JOGO DUROU  24 HORA(S)\n");
    }
    else
    {
        if((a>=0&&a<12)&&(b>12&&b<=24))
        {
            c=b-a;   // se a estiver entre 0 e 12 e se  b estiver entre 12 e 0
        }
        else if((a>12&&a<=24)&&(b<=12&&b>0))
        {
            c=24-a+b;
        }
        printf("O JOGO DUROU %d"" HORA(S)\n",c);
    }


//esta com falha pois nao estou considerando intervalos em q a<11 e b=0 e tbm em q

    return 0;

}
