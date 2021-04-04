#include<stdlib.h>
int main()
{
    int N,i;
    do{scanf("%d",&N);}while(N>=10000);
    for(i=1; i<=10000; i++)
    {
        if(i%N==2)
            printf("%i\n",i);
    }

}
