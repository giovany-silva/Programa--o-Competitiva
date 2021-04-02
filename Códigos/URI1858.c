#include <stdio.h>
#include <string.h>
int main(){
   int n,i,d,m,p=1;
   scanf("%d",&n);
   
   for(i=1;i<=n;i++){ 
 		scanf("%d",&d);
	 	if(i==1)m=d;        
	 	else if(d<m){
		      m=d;
                      p=i;
		}
		  
   }
   printf("%d\n",p);


  return 0;
}