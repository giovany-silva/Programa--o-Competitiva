#include <stdio.h>
#include <math.h>
int main()
{  
int n,m,i=0;
scanf("%d",&n);

 while(i<n){
   	scanf("%d",&m);
  	if(m%2==0&&m>2||m%3==0&&m>3||m%5==0&&m>5||m%7==0&&m>7||m%11==0&&m>11||m%13==0&&m>13)
		printf("Not Prime\n");
  
  	else{
  		int j=13,cont=0;
   		while(j<=sqrt(m)){
            		if(m%j==0){
                      		cont++; break;
                      	}
              		j++;
                }
       		if(cont==1)
			printf("Not Prime\n");
                
       		else printf("Prime\n");
  	}	

  i++;
 }
        
    return 0;
}
