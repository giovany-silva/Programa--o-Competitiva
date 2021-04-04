#include<stdlib.h>
#include<stdio.h>

int main()
{
    double Y,Z;
    int X;
    do{
        scanf("%lf",&Z);
        while(0>Z||Z>10){
            printf("nota invalida\n");
            scanf("%lf",&Z);
        }
        scanf("%lf",&Y);
        while(0>Y||Y>10){
            printf("nota invalida\n");
            scanf("%lf",&Y);
        }
        printf("media = %.2lf\n",(Z+Y)/2);
        printf("novo calculo (1-sim 2-nao)\n");

        scanf("%d",&X);

        while(X!=1&&X!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&X);
        }

        if(X==2)
            break;
    }
    while(X==1);
}
