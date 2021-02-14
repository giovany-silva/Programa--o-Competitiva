#include<stdlib.h>
#include<stdio.h>

int main()
{
    int N,i=0,s=0;
    do
    {
        scanf("%d",&N);
        if(N>=0)
        {
            s=N+s;
            i++;
        }
    }
    while(N>=0);
printf("%.2lf",(float)s/i);

}
