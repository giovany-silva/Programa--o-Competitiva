#include <stdio.h>
#include <math.h>
int main()
{    double h,M;
          scanf("%lf %lf",&h,&M);
             h=h/log(h);
             M=1.25506*h;
       printf("%.1lf %.1lf\n",h,M);
    return 0;
}