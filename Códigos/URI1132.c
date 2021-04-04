#include  <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

int main(int argc, char **argv)
{
    int X,Y,a,i,s=0;
    scanf("%d %d",&X,&Y);

    if(X>Y){
        a=Y;
        Y=X;
        X=a;
    }

    for(i=X;i<=Y;i++){
    	if(i%13!=0){
		s=s+i;
    	}
    }
printf("%d\n",s);
}

