#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//#define m 10;
//#define s0 150;
/*#define ab 90;*/


int main()
{
    float a,x,y,v0,vy,vx,g,t,b,c;

    printf("Forneca a velocidade inicial(m/s):\n");
    scanf("%f",&v0);
    if (v0<=0)
    {
        printf("Forneca um valor positivo para a velocidade.\n");

    }

    printf("Forneca o angulo de inclinacao(em graus):\n");

    scanf("%f",&a);

    if(a<-45)
    {
        printf("Forneca um valor maior que -45 para o ângulo.\n");

    }
    else if(a>90)
    {
        printf("forneca um valor menor que 90º.\n");


    }
    else
    {
        scanf("%f",&a);
    }
    printf("Forneca o tempo");
    scanf("%f",&t);
    vy=v0*sin(a);
    vx=v0*cos(a);
    y=vy*t+g*pow(t,2)/2;
    x=vx*cos(a)*t;
    scanf("%f",&y);
    if(x<150)
    {
        g=-9.8;


    }
    else
    {
        g=9.8;

    }

    return 0;
}
/*printf("Velocidade(m/s):%f\n",v0);*/

//(X,Y)=(x0+v0*cos(a)*t,pow(vy,2))/2g-pow(v0,2))/2g)





