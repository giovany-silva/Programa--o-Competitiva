#include<stdlib.h>
#include<stdio.h>


int main(){
	int M,cont,soma;
	
           scanf("%d",&M);
           
while(M!=0){
	   soma=0,cont=0;
           switch(M%2)
                     { case -1:
                       case 1:M++;
                        
                       case 0:
                       default:{
                                while(cont!=5){
                                               cont++;
                                                 
                                               soma=soma+M; 
                                               M=M+2;

                                              } 
                              printf("%d\n",soma);                
                              }   
                           
                      break;
                     }
            
        scanf("%d",&M);
	}
          





	return 0;
}