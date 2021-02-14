#include<stdlib.h>
#include<math.h>
int main()
{
    float m,ma,m1,mb,mc,md,m2,m3,m4,h,epA,epAa,epC,epCb,epE,epEc,epEb,epG,epGd,epH,v;
    int g;
    g=10;
    m1=10;
    printf("FORNECA A MASSA E ALTURA:");
    scanf("\n%f \n%f",&m,&h);
    epA=m*g*h;
    epC=m1*g*(5/4)*h;

    if(epA<epC)

    {
        do
        {
            printf("FORNECA UMA MASSA MAIOR PARA SUBIR A RAMPA ATE O PONTO C\n");
            scanf("%f",&ma);
            epAa=ma*g*h;
        }
        while(epAa<epC);
        printf("VOCE CHEGOU AO PONTO C\n");
    }

    else
    {
        printf("VOCE CHEGOU AO PONTO C\n"); }
               printf("\n");
               m2=20;
               epE=m2*g*(3/4)*h;


               if(epC>=epE)
           {
               printf("VOCE CHEGOU AO PONTO E");
           }
               else
           {
               do
           {
               printf("FORNECA UMA MASSA MAIOR PARA SUBIR A RAMPA ATE O PONTO E");
               scanf("%f",&mb);
               epCb=mb*g*(5/4)*h;
           }
               while(epCb<epE);
               printf("VOCE CHEGOU EM E");
           }

               m3=30;
               epG=m3*g*h/2;
               if(epE=epG)
           {
               printf("VOCE CHEGOU EM G");
           }
               else if (epE>epG)
           {
               printf("VOCE ULTRAPASSOU G");
               v=sqrt(2*g*h);
               if(v>0)
               printf("VOCE CHEGOU H ");}
               else
           {
               do
           {
               printf("digite um valor para chegar em G");
               epEc=mc*g*(3/4);
           }
               while(epEc<epG);
               printf("VOCE CHEGOU EM G");
           }




               m4=40;
               epH=m4*g*(3/8)*h;
               if(epG=epH)
           {
               printf("VOCE CHEGOU EM H");

           }
               else
           {
               do
           {
               printf("FORNECA UMA MASSA MAIOR PARA DESCER  A RAMPA ATE O PONTO H");
               scanf("%f",&md);
               epGd=md*g*(1/2)*h;
           }
               while(epGd<epH);
               printf("VOCE CHEGOU EM H");

           }


               return 0;

           }


