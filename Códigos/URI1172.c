#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int primo(int a);
int main()
{int i,v[10];
    
    for(i=0;i<10;i++){
	scanf("%d",&v[i]);
       	if(v[i]<=0)v[i]=1; 
     }
    for(i=0;i<10;i++){
	printf("X[%d] = %d\n",i,v[i]); 
    }
    
    return 0;
}
