#include <stdio.h>
int main()
{  char p[120];
    long double S;
    
    scanf("%LE", &S);
    sprintf(p,"%LE", S);
    if(p[0] != '-') printf("+");
    printf("%.4LE\n", S);
    return 0;
}