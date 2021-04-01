#include <stdio.h>
int main()
{int n,d,i,an,j,k;
while(1)
    {
     if(scanf("%d %d",&n,&d)==EOF)break;
 char s[d][11];int v[n];
   i=n;
   for(j=0;j<d;j++)
   {an=1;
       scanf("%s",s[j]);
       for(k=0;k<n;k++){scanf("%d",&v[k]);if(!v[k])an=0;}
           
      
      if(an)if(j<i)i=j;
      
   }
   if(i==n)printf("Pizza antes de FdI\n");
   else  printf("%s\n",s[i]);   
    }
  return 0;
}
