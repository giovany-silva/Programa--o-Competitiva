#include<stdlib.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>=B+C)
        {
            printf("NAO FORMA TRIANGULO\n");
        }

        else if(A>C&&C>B)
        {
            B=C;
            C=B;
        }
        /*verificar caso*/
        else if(B>A&&A>C)
        {
            A=B;
            B=A;
        }
        else if(B>C&&C>A)
        {
            A=B;
            B=C;
            C=A;
        }
        else if(C>B&&B>A)
        {
            A=C;
            C=A;
        }
        else if(C>A&&A>B)
        {
            A=C;
            C=B;
            B=A;
        }






        if(pow(A,2)>=pow(B,2)+pow(C,2))
        {
            if(A=!B&&(A!=C&&B!=C))//verificando se são eq. isc. ou "escaleno"
            {
                printf("TRIANGULO RETANGULO\n");
            }
       else if(((A==B&&B!=C)||A==C&&C!=B)||(B==C&&C!=A)){printf("TRIANGULO ISCOSCELES\n");}
        else{printf("TRIANGULO EQUILATERO\n");}
        }
         else if(pow(A,2)>pow(B,2)+pow(C,2)){printf("TRIANGULO OBTUSANGULO\n");}
         else if(pow(A,2)<pow(B,2)+pow(C,2)){printf("TRIANGULO ACUTANGULO\n");}

        if(((A==B&&B!=C)||A==C&&C!=B)||(B==C&&C!=A)){printf("TRIANGULO ISCOSCELES\n");}
        else{printf("TRIANGULO EQUILATERO\n");}
        }














