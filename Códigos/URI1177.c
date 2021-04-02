#include<stdio.h>
#include<stdlib.h>
  
int main()
{int i,a,n[1000];

    scanf("%d",&a);
    for(i=0;i<1000;i++)
    { 
     	n[i]=i%a; 

    }    
     for(i=0;i<1000;i++) 
		printf("N[%d] = %d\n",i,n[i]);
    return 0;
}

