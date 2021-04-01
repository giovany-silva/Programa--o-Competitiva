#include <stdio.h>
int main ()
{
  int n, d, i, j,t;
 double max;
  while (1)
    {max=0;
      if (scanf ("%d", &n) == EOF)break;
	   for(i=0;i<n;i++)
	   {scanf("%d %d",&t,&d);
        if((double)d/t>max){printf("%d\n",i+1);max=(double)d/t;}
	   }   
    }
  return 0;
}
