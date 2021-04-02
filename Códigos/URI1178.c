#include<stdio.h>
#include<stdlib.h>
  
int main()
{int i;
double n[100];

    scanf("%lf",&n[0]);
    for(i=1;i<100;i++){ 
	n[i]=n[i-1]/(double)2.0;
    }    
     for(i=0;i<100;i++) 
	printf("N[%d] = %.4lf\n",i,n[i]);
    return 0;
}

