#include<stdlib.h>
#include <stdio.h>
#include<math.h>
int main ()
{
    int m;
    float l,l2,h,aq,ar,ate,atr,apa,pq,pr,pte,ptr,ppa,i,j,k,n;
    printf("\n\n");
    printf("############################################################\n");
    printf("###################### MENU DE OPCOES ######################\n");
    printf("############################################################\n");
    printf("##                                                        ##\n");
    printf("## ESCOLHA UMA FORMA GEOMETRICA                           ##\n");
    printf("##                                                        ##\n");
    printf("## 1.Quadrado                                             ##\n");
    printf("## 2.Retangulo                                            ##\n");
    printf("## 3.Triangulo equilatero                                 ##\n");
    printf("## 4.Triangulo Retangulo(catetos iguais)                  ##\n");
    printf("## 5.Paralelogramo                                        ##\n");
    printf("## 6.Sair                                                 ##\n");
    printf("##                                                        ##\n");
    printf("############################################################\n");
    printf("############################################################\n");
    printf("\n");
    printf("Opção:");


    scanf("%d",&m);

    switch(m)
    {
    case 1:
        printf("============================================================\n");
        printf("Quadrado\n");
        printf("============================================================\n");
        printf("DIGITE O LADO DO QUADRADO");
        scanf("%f",&l);
        aq=pow(l,2);
        pq=4*l;
        printf("ÁREA: %f\n PERIMETRO: %f\n",aq,pq);
        printf(" ");
        for(k=0; k<l; k++)
        {
            printf("_");
        }
        printf("\n");

        for(i=1; i<=l; i++)
        {
            printf("|");

            for (j=1; j<=l; j=j+ 1) printf("*");
            printf("|\n");


        }

        printf(" ");
        for(k=0; k<l; k++)
        {
            printf("-");
        }
        printf("\n");
        break;

    case 2:
        printf("============================================================\n");
        printf("Retangulo\n");
        printf("============================================================\n");
        printf("DIGITE OS LADOS DO RETANGULO: \n");
        scanf("%f %f",&l,&h);
        ar=l*h;
        pr=2*l+2*h;
        printf("AREA: %f\n PERIMETRO: %f\n",ar,pr);
        printf(" ");
        for(k=0; k<l; k++)
        {
            printf("_");
        }
        printf("\n");
        {
            for(i=1; i<=l; i++)
            {
                printf("|");
                {
                    for (j=1; j<=h; j=j+ 1) printf("*");
                    printf("|\n");
                }

            }
        }
        printf(" ");
        for(k=0; k<l; k++)
        {
            printf("-");
        }
        printf("\n");

        break;

    case 3:
        printf("============================================================\n");
        printf("Triangulo Equilatero\n");
        printf("============================================================\n");
        printf("DIGITE O LADO DO TRIANGULO EQUILÁTERO");
        scanf("%f",&l);
        ate=pow(l,2)*sqrt(3)/4.0;
        pte=3*l;
        printf("AREA: %f\n PERIMETRO: %f\n",ate,pte);
        for(i=1; i<=l; i++)
        {
            printf("//");

            for(i=0; i<=l; i++)

                for (j=0; j<=i; j++)
            {


                printf("*");

            }
            printf("\n");
        }


            break;

        case 4:
            printf("============================================================\n");
            printf("Triangulo Retangulo \n");
            printf("============================================================\n");
            printf("DIGITE O LADO DO TRIANGULO RETANGULO: \n");
            scanf("%f",&l);
            atr=pow(l,2)/2;
            ptr=2*l+l*pow(2,1/2.0);
            printf("ÁREA: %f\n PERÍMETRO %f\n",atr,ptr);
            printf(".\n");
            printf("|\\\n");
            for(i=0; i<l; i++)
            {
                printf("| ");
                for (j=1; j<=i; j=j+ 1)
                {
                    printf("* ");
                }
                printf(" \\ ");
                printf("\n");

            }
            printf(" ");
            for(k=0; k<l+1; k++)
            {
                printf("- ");
            }
            break;

        case 5:
            printf("============================================================\n");
            printf("Paralelogramo\n");
            printf("============================================================\n");
            printf("DIGITE OS LADOS E ALTURA DO PARALELOGRAMO:\n");
            scanf("%f %f %f",&l,&l2,&h);
            apa=l*h;
            ppa=2*l+2*l2;
            printf("ÁREA: %f\n PERÍMETRO %f\n",aq,pq);
            for(k=0; k<=l; k++)
            {
                printf("_");
            }
            printf("\n");
            for(i=0; i<=h; i++)
            {
                for(k=0; k<=i-1; k++)
                {
                    printf(" ");
                }
                if(i<h)
                {
                    printf("\\");
                }
                else
                {
                    printf("-");
                }
                for(j=0; j<l; j++)
                {
                    if(i<h)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("-");
                    }

                }
                if(i<h){
                    printf("\\");
                }else
                {
                    printf("-");
                }
                printf("\n");
            }
//            for(n=0; n<h-1; n++)
//            {
//                printf(" ");
//            }
            break;
        case 6:

            break;

        default:
            break;
        }
    }




//aq=pow(l,2) ar=l*h ate=






