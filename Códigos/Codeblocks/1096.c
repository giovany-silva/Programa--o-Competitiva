
#include<stdlib.h>
#include<stdio.h>
#define j 7
#define I 1
void verifica();
int main()
{ verifica();
return 0;
}
void verifica()
{
    int i;

    for(i=0;i<27;i++)
    {
      if(i%3==0){printf("I=%d J=%d\n",I+i/3,j);}
    if(i%3==1){printf("I=%d J=%d\n",I+i/3,j-1);}
    if(i%3==2){printf("I=%d J=%d\n",I+i/3,j-2);}
    }
}
