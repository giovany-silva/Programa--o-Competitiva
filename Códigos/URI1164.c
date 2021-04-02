#include <stdio.h>
#include <stdlib.h>
int perfeito(int a);
int main()
{
    int n,i,a;
    do scanf("%d",&n);while(n<1||n>20);
    for(i=0;i<n;i++)
    {
     	do scanf("%d",&a);
     	while(a<1||a>100000000);

      	if(perfeito(a))
      		printf("%d eh perfeito\n",a);
      	else 
		printf("%d nao eh perfeito\n",a);
    }

    return 0;
}
int perfeito(int a)
{
    int aux=0;
    if(a>1){
                         int i=2;
                        while(i<a)
                         {
                             if(a%i==0)aux=aux+i; 
                               i++;
                             
                         } 
                         aux++;
           }
    
    if(aux==a)return 1;
    else return 0;
    
}