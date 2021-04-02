#include <stdio.h>
int main(){
int i,d,j;

scanf("%d %d %d",&d,&i,&j);

int e=((d+i+j)%24);
if(e>=0)
	printf("%d\n",e);
else 
	printf("%d\n",24+e);
    return 0;
}
