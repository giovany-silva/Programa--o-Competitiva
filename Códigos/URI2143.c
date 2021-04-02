#include <stdio.h>
int main()
{    int m,d,j;
    while(1)
    {
        scanf("%d",&m);
        if(m==0)return 0;
        for(j=0;j<m;j++)
        {scanf("%d",&d);
        if(d%2)printf("%d\n", d*2-1);
            else printf("%d\n", d*2-2);
            
        }
    }
    return 0;
}