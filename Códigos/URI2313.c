#include<stdlib.h>
#include<stdio.h>
int main(){
int a,b,c,me,ma;
 
scanf("%d",&a);
me=a;int med;

scanf("%d",&b);
if(b<me){ ma=me;me=b;}
else ma=b;

scanf("%d",&c);
{if(c<=me)
    {
         med=me;
         me=c;
    }
else if(c>=ma)
{
     med=ma;
         ma=c;
    
    
}
    else med=c;
}

if(ma+med>me&&ma-med<me&&ma+me>med&&ma-me<med&&med+me>ma&&med-me<ma)
{
    printf("Valido-");
    if(ma==me&&me==med)printf("Equilatero\n");
     else if(ma==me||ma==med||med==me)printf("Isoceles\n");
     else printf("Escaleno\n");
    printf("Retangulo: ");
 if(me*me+med*med==ma*ma)printf("S\n");
 else printf("N\n");
    return 0;
}
    printf("Invalido\n");
  return 0;
    
}
