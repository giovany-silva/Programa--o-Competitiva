#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int primo(int a);
int main()
{int i,v[10],d;
    scanf("%d",&v[0]);
    for(i=1;i<10;i++){
       v[i]=2*v[i-1]; 
    }
    for(i=0;i<10;i++){
	printf("N[%d] = %d\n",i,v[i]);       
    }
    
    return 0;
}
