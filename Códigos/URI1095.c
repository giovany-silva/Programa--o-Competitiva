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
    j=60;
    k=1;
    for(i=0;i<13;i++)
    {
        printf("I=%d J=%d\n",k,60-5*i);
	k=k+3;
    }
}
