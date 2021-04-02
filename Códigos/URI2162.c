#include <stdio.h>
int main(){  
	int i,d,m,v[100],c=1;
   	scanf("%d",&d);
 	
	for(i=0;i<d;i++){
         	scanf("%d",&v[i]);
      	}
	i=0;
     
	if(d==2)
		if(v[0]==v[1])
			c=0; 
        while(i+2<d){
		if(v[i]-v[i+1]<0&&v[i+1]-v[i+2]>0||v[i]-v[i+1]>0&&v[i+1]-v[i+2]<0){
			i++;continue;
		}
        	c=0;
        	break;
       }
    printf("%d\n",c);     
    return 0;
}