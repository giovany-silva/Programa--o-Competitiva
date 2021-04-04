#include<stdlib.h>
int main()
{
    int N,i;
    float a,b,c;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%f %f %f",&a,&b,&c);
                   printf("%.1lf\n",(a*2+b*3+c*5)/10);
    }

}
