#include <stdio.h>
int main ()
{
  int n,min,max,d,c,i, j;
 
  while (1)
    {c=0;
      if (scanf ("%d %d %d", &n,&min,&max) == EOF)break;
	   for(i=0;i<n;i++)
	   {scanf("%d",&d);if(d>=min&&d<=max)c++;   }   
   printf("%d\n",c);
    }
  return 0;
}
