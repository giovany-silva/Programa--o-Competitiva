#include<stdlib.h>
#include<stdio.h>

struct cobaias{
	int c,r,s,total;

}teste;

int main(){

teste.c=teste.r=teste.s=0,teste.total=0;
int M,N,cont=0;

scanf("%d",&N);
char c;

while(cont<N){

	int Quantia=0;
	scanf("%d %c",&Quantia,&c);
	teste.total=Quantia+teste.total;

	switch(c){
	         case 'C':{
                 	teste.c=teste.c+Quantia;
                 }  
        break;
         	case 'R':{
              		teste.r=teste.r+Quantia;
         	}  
        break; 
         	case 'S':{
              		teste.s=teste.s+Quantia;
         	}
        break;

	}	

  
   
	  if(cont==N-1)   
		printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",teste.total,teste.c,teste.r,teste.s,(float)teste.c/teste.total*100,(float)teste.r/teste.total*100,(float)teste.s/teste.total*100);
   cont++;
}



return 0;
}