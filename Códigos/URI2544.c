#include <stdio.h>
int main()
{int c;
long long int n,aux;
while(1)
    {
     if(scanf("%lld",&n)==EOF)break;
     c=0;
     aux=1;
        while(aux<n)
        {
         aux=2*aux;
         c++;
        }
     printf("%d\n",c);   
    }
  return 0;
}
