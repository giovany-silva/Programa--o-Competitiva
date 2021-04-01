#include<stdio.h>
int main()
{
    int c,n,i,a;
    while(1)
    {c=0;
        if(scanf("%d",&n)==EOF)break;
    for(i=0;i<n;i++){scanf("%d",&a);if(a)c++;
    }
     if(c>=(double)2*n/3)printf("impeachment\n");
     else printf("acusacao arquivada\n");
    }
    return 0;
}