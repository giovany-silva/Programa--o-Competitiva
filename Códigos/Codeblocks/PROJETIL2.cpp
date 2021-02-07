#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#define m 10;
#define s0 150;
#define g 9.8;
int main()
/*#define ab 90;*/
{
    float a,x,y,v0,vy,vx,g,t,b,c;
    printf("Forneca a velocidade inicial(m/s):\n");
    scanf("%f",&v0);
    if(v0<0)
    {
        printf("Forneca um valor positivo para a velocidade.\n");

    }
    printf("Forneca o angulo de inclinacao(em graus):\n");
    scanf("%f",&a);
    if(a<-45)
    {
        printf("Forneca um valor maior que -45 para o ângulo.\n");

    }
    if(a>90)
    {
        printf("forneça um valor menor que 90º.\n");
    }
    scanf(%f,&y)
    if(y<150)
    {
        g=-9.8;

    }
    else
    {
        g=9.8;

    }
    vy=v0sin(a);
    vx=v0cos(a);
    y=pow(vy,2))/2g-pow(v0,2))/2g;
    x=x0+v0*cos(a)*t;


    return 0;
}
/*printf("Velocidade(m/s):%f\n",v0);*/
