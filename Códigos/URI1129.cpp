#include <stdio.h>

int main()
{

int n,a,b,c,d,e,i,j,q,p,v[5];
	//varios casos
	while(1){
    
		scanf("%d",&n);
		if(!n)break;

    		for(i=0;i<n;i++){
			q=0;  
			for(j=0;j<5;j++){
		            scanf("%d",&v[j]);
            		    if(v[j]<=127){q+=1;p=j;}
        		}
    		if(q==1)printf("%c\n",65+p);
    		else printf("*\n");
     
    		}
       }

    return 0;
}
