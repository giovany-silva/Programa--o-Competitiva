#include<stdlib.h>
#include<time.h>
int main()
{
    int t,v,d;
    float g;
    scanf("%d",&t);
    scanf("%d",&v);
    d=v*t;
    g=d/12;
    printf("%.3f\n",g);
    return 0;

}
