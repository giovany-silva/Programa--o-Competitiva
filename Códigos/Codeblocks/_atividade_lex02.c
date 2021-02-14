#include<stdlib.h>
#include<math.h>
int main()
{
    float m,ma,m1,mb,mc,mcx,md,m2,m3,m4,mEd,mf,mf2,h,ec,eatrito,ec2,epA,epAa,epC,epCc,epCb,epE,epEc,epEb,epEd,epG,epGd,epH,v;
    int g;
    g=10;
    m1=10;
    printf("FORNECA A MASSA PARA O CARRINHO E ALTURA PARA MONTANHA:\n");
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
    printf("DIGITE UMA NOVA MASSA PARA SUBIR ATE E\n");
         scanf("%f",&mc);
         epCc=mc*g*(5/4)*h;
               if(epCc>=epE)
           {
               printf("VOCE CHEGOU AO PONTO E\n");
           }
               else
           {
               do
           {
               printf("FORNECA UMA MASSA MAIOR PARA SUBIR A RAMPA ATE O PONTO E\n");
               scanf("%f",&mb);
               epCb=mb*g*(5/4)*h;
           }while(epCb<epE);


           }
           printf("FORNECA UMA MASSA MAIOR PARA SUBIR A RAMPA ATE O PONTO G\n");
           scanf("%f",&mEd);

               m3=30;
               epG=m3*(g*h)/2;
               epEd=mEd*g*(3/4)*h;
               if(epEd=epG)
           {
               printf("VOCE CHEGOU EM G\n");
           }
               else if (epEd>epG)
           {
               printf("VOCE ULTRAPASSOU G\n");
               printf("VOCE CHEGOU H\n");}
               else
           {
               do
           {
               printf("DIGITE UM VALOR DE MASSA MAIOR PARA CHEGAR EM G\n");
               scanf("%f",&mcx);
               epEc=mc*g*(3/4);
           }
               while(epEc<epG);
               printf("VOCE CHEGOU EM G\n");

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
               printf("FORNECA UMA MASSA MAIOR PARA DESCER  A RAMPA ATE O PONTO H\n");
               scanf("%f",&md);
               epGd=md*g*(1/2)*h;
           }
               while(epGd<epH);
               printf("VOCE CHEGOU EM H\n");
               printf("\n");
               printf("FORNECA UMA NOSSA MASSA E VELOCIDADE PARA CHEGAR AO PONTO I\n");
               scanf("%f %f",&mf,&v);
               eatrito=100;
               ec=pow(mf,2)/2;
               if(ec>=eatrito)printf("VOCE CHEGOU AO PONTO I\n");
               else{ do {printf("DIGITE UMA NOVA MASSA\n");
                     scanf("%f",&mf2);
                    ec2=mf2*pow(v,2)/2;
                }while(ec2<eatrito);
                printf("VOCE CHEGOU EM I");
               }
             scanf("%f",v);

           }


               return 0;

           }
