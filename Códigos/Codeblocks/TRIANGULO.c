#include<stdlib.h>
int main()
{
    float A,B,C,D;
    scanf("%f %f %f",&A,&B,&C);
    if(((A+B>C)&&(B+C>A))&&(A+C>B))
    {
        D=A+B+C;
        printf("%Perimetro = %.1f\n",D);
    }
    else
    {
        D=(A+B)*C/2;
        printf("Area = %.1f\n",D);
    }
    return 0;

}
