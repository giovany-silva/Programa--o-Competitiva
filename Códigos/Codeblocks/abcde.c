#include<stdio.h>
#include<stdlib.h>

int main()
{
    float MASSA ,ALTURA,IMC;
    printf("DIGITE A MASSA E DIGITE A ALTURA");
    scanf("%f %f",&MASSA,&ALTURA);
    IMC= (MASSA)/pow(ALTURA,2);
    printf("%f",IMC);
    return 0;
}
