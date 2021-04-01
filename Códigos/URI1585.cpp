#include <stdio.h>

int main()
{
    int n,i,a,b;
    
    while(scanf("%d",&n)!=EOF)
    {
       for(i=0;i<n;i++)
       {scanf("%d %d",&a,&b);
        printf("%d cm2\n",(a*b)/2);
       }
        
    }

    return 0;
}
