#include<stdlib.h>
#include<stdio.h>
void verifica();
int main()
{ verifica();
return 0;
}
void verifica()
{
    int i,j,k;

    for(i=0;i<5;i++){
   	 printf("I=%d J=%d\n",1+2*i,7);
    	 printf("I=%d J=%d\n",1+2*i,6);
   	 printf("I=%d J=%d\n",1+2*i,5);
    }
}
