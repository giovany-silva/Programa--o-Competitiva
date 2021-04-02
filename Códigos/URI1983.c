#include <stdio.h>
#include <stdlib.h>
int triangulo(int v[]);
int main(){

int i,mt,m=-1,mn,a;
double d=-1.0,dn;

scanf("%d",&a);
for(i=0;i<a;i++)
	{

         scanf("%d %lf",&mn,&dn);
         if(dn>d){d=dn; m=mn; }        

  
	}

if(d>=8)printf("%d\n",m);
else printf("Minimum note not reached\n");

return 0;

}

