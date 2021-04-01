#include<stdlib.h>
#include<stdio.h>
int main()
{
   int totals=0,tcs=0,totalb=0,tcb=0,totala=0,tca=0,n,i,s,b,a;
  char nome[100];
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",nome);
        scanf("%d %d %d",&s,&b,&a);
    totals+=s;
    totala+=a;
    totalb+=b;
    scanf("%d %d %d",&s,&b,&a);
    tcs+=s;
    tca+=a;
    tcb+=b;
    }

    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",(double)tcs*100/totals,(double)tcb*100/totalb,(double)tca*100/totala);
return 0;
    
}
