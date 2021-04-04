#include<stdlib.h>
#include<stdio.h>
int main()
{
    int N,i;
    do
    {
        scanf("%d",&N);
    }
    while(N<=5||N>=2000);

for(i=1;i<=N;i++)
    {
    if(i%2==0)
        {
            printf("%i^2 = %i\n",i,i*i);
        }
    }

}
