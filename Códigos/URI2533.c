#include<stdio.h>
int main () 
{
  int c, n,m, i,j,s,b;
  while (1)
  {s=b=0;
     
      if (scanf ("%d", &m) == EOF)break;
     for(i=0;i<m;i++)
     {
         scanf("%d %d",&n,&c);
     s+=n*c;
     b+=c*100;         
     }
      printf("%.4lf\n",(double)s/b);
  }
  
return 0;

}
