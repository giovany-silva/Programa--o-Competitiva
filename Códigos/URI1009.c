#include <stdio.h>

int main() {
 char nome[15];
 double A,B,C;
 scanf("%s",nome);
 scanf("%lf %lf",&A,&B);
 C=A+B*0.15;
 printf("TOTAL = R$ %.2lf\n",C);
return 0;
}
