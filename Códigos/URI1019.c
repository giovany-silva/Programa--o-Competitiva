#include<stdlib.h>
#include<math.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    a=N/3600;
    b=(N%3600)/60;
    c=N%60;
    printf("%d:%d:%d\n",a,b,c);
}
