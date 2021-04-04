#include<stdlib.h>
#include<stdio.h>
int main()
{
int M,N,cont;
do{
	cont=0;
	scanf("%d %d",&M,&N);
	if(M>0&&N>0){
         	if(M>N){
			while(N<=M){
				cont=N+cont;
                           	printf("%d ",N);
                           	N++; 
                        } 
                  	printf("Sum=%d\n",cont); 

                }
		else {

                    	while(M<=N){
				cont=M+cont;
                           	printf("%d ",M);
                           	M++; 
                        } 
             
                  	printf("Sum=%d\n",cont); 
                }

       }
	else break;
}
while(1);


return 0;
}