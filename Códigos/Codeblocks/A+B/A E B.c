#include<stdlib.h>
int main()
{
char A ;
double B,C,D;
scanf("%c %lf %lf",&A,&B,&C);
D=C+0.15*B;
printf("TOTAL = R$ %.2lf",D);

   return 0;
}
