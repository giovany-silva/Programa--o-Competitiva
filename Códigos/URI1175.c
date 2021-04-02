#include <stdio.h>
#include<stdlib.h>
int main(){
int i,v[20],a=19,aux;
    
    for(i=0;i<20;i++)
		scanf("%d",&v[i]);
    for(i=0;i<10;i++)
    {
     aux=v[a];
       v[a]=v[i];     
        v[i]=aux;
        a--;
    }    
    
    for(i=0;i<20;i++)
		printf("N[%d] = %d\n",i,v[i]);
 
    return 0;
}
