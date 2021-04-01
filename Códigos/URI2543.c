#include <stdio.h>
int main ()
{int i,n,min,d,b,c;
 
  while (1)
    {c=0;
      if (scanf ("%d %d", &n,&min) == EOF)break;
	   for(i=0;i<n;i++)
	   {scanf("%d %d",&d,&b);if(d==min&&!b)c++;   }   
   printf("%d\n",c);
    }
  return 0;
}
