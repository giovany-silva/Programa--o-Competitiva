#include <stdio.h>
int main(){
int n,i,j=1,a=0,aux;

     do{
	scanf("%d",&n);}while(n<=0||n>=46);
     	for(i=0;i<n;i++){
		if(i==0){
			printf("%d ",0);
			continue;
		}
     		if(i==1){
			printf("%d ",1);
			continue;
		}
     		if(i==n-1){
			printf("%d\n",j+a);
			continue;
     		}
        	aux=j;
        	j=j+a;
        	a=aux;
        	printf("%d ",j);
     }
     return 0;
}
