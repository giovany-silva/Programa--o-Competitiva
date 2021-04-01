#include<stdlib.h>
int main()
{
    double A,B,C,at,ac,ata,aq,ar;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    at=A*C/2;
    ac=3.14159*pow(C,2);
    ata=(A+B)*C/2;
    aq=pow(B,2);
    ar=A*B;
    printf("TRIANGULO: %.3lf\n",at);
    printf("CIRCULO: %.3lf\n",ac);
    printf("TRAPEZIO: %.3lf\n",ata);
    printf("QUADRADO: %.3lf\n",aq);
    printf("RETANGULO: %.3lf\n",ar);
    return 0;
}
