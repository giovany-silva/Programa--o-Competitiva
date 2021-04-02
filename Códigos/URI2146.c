#include <stdio.h>
int main()
{    int m;
    while(1)
    {
        if(scanf("%d",&m)==EOF)return 0;
        printf("%d\n",m-1);
    }
    return 0;
}