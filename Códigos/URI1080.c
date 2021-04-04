#include<stdlib.h>
int main()
{
    int i,m,a,cont;
    m=0;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&a);
        if(a>m){m=a;cont=i; }

    }
printf("%d\n%d\n",m,cont);
}
