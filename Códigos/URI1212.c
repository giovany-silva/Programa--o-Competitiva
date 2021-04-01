#include<stdlib.h>
#include<stdio.h>
int main()
{
long long int a,b,r;
int c,aux;
while(1)
{scanf("%lld %lld",&a,&b);
   if(a==0&&b==0)break;
c=0;r=0;
if(b>a){aux=b;b=a; a=aux;}
while(a>0)
	{
if(a%10+b%10+r>9){
             c++;
             r=1;
             
               }
          else r=0;
         a/=10;
         b/=10;
           
          
	}
if(!c)printf("No carry operation");
else printf("%d carry operation",c);
if(c>1)printf("s");
printf(".\n");
}



return 0;
}
