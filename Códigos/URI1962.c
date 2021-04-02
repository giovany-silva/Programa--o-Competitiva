#include <stdio.h>
int main()
{
long long int p,n,d,i,a;
scanf("%lld",&n);
   
	for(i=0;i<n;i++)
		{
                scanf("%lld",&p);
                 if(p>=2015)printf("%d A.C.\n",p-2015+1);
                 else printf("%d D.C.\n",2015-p);               
		}



 return 0;
    
}
  