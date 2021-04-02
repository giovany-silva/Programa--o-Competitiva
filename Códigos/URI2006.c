#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,i,b,c=0;
 

scanf("%d",&a);
for(i=0;i<5;i++){
    	scanf("%d",&b);
     	if(b==a)c++;
}
printf("%d\n",c);

return 0;

}

