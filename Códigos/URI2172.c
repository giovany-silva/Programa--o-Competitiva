#include <stdio.h>
int main()
{int a;
 long long int b;
    while(1)
    {
        scanf("%d %lld",&a,&b);
        if(a==0&&b==0)return 0;
    printf("%lld\n",a*b);  
    }
    return 0;
}