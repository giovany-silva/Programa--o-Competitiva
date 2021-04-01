#include <stdio.h>

int main ()
{
  int n, i, c;
  double a;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
{
      c = 0;
      scanf ("%lf", &a);
      while (a > 1.0)
	{
	  c++;
	  a /= 2;
	  
	}
    printf ("%d dias\n", c);
}

return 0;
}
