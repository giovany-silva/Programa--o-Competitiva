#include<stdlib.h>
#include<stdio.h>

int main()
{
    double X,Y;
    scanf("%lf",&X);
    while(0>X||X>10)
    {
        printf("nota invalida\n");
        scanf("%lf",&X);
    }
    scanf("%lf",&Y);
    while(0>Y||Y>10)
    {
        printf("nota invalida\n");
        scanf("%lf",&Y);
    }
    printf("media = %.2lf\n",(X+Y)/2);
}
