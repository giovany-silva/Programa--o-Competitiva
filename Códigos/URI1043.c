#include<stdlib.h>
int main()
{
    double A,B,C,p,a;
    scanf("%lf %lf %lf",&A,&B,&C);
    if((A+B>C&&B+C>A)&&A+C>B)
    {
        p=A+B+C;
        printf("Perimetro = %.1lf\n",p);
    }
    else
    {
        a=(A+B)*C/2;
        printf("Area = %.1lf\n",a);
    }
}

