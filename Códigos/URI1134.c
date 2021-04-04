#include  <stdio.h>  
#include <stdlib.h>  
#include <string.h> 

int main(int argc, char **argv)
{
   int a=0,g=0,d=0,x;
   do{
	do{
		scanf("%d",&x);
	}while(x<1||x>4);
   	switch(x){
   		case 1:{
			a++;break;
		}
   		case 2:{
			g++;break;
		}
   		case 3:{
			d++;break;
		}
   	}

   }while(x!=4);
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
}

