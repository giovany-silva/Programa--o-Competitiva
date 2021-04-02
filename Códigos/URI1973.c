#include <stdio.h>
#include <stdlib.h>
int main()
{
 long long  int i=0,d,j,s=0;
 scanf("%lld",&d);
 
 long long  int *v=malloc(d*sizeof(long long int));

   for(j=0;j<d;j++){
   	scanf("%lld",&v[j]);
   	s+=v[j];
  
   }

 long long int cont=0;

   for(j=0;j<d;j++){
    	 cont++;
	 if(v[j]%2==0)
		break;
   }

  while(i+1<=d&&i+1>=1){
 
  	if(v[i]>0){
        	  v[i]--;
          	  s--;
        	 if(v[i]%2==1)
			i--;
        	 else
	                i++; 
  	}
  else if(v[i]==0)
	i--;
  
 }


printf("%lld %lld\n",cont,s);
 return 0;
    
}
  