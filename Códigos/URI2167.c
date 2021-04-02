#include <stdio.h>
int main()
{
 int a,b,i,m=-1;
    scanf("%d",&a);
    for(i=0;i<a;i++){
	scanf("%d",&b);
    	if(b<m){
        	printf("%d\n",i+1);
    		return 0;
	}
    else m=b;     
    
    }
    printf("%d\n",0);
    return 0;
}