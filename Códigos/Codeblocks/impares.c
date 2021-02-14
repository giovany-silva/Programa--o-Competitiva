#include<stdlib.h>

int main()
{

    float s;
    scanf("%f",&s);

    if( s>=0&&s<=400.00)
    {
        printf("Novo salario: %f\n"
               "Reajuste ganho: %f\n"
               "Em percentual:%f%\n",1,15*s,0,15*s,15);
    }
    if(s>=400.01&&s<=800.00)
    {
     printf("Novo salario: %f\n"
               "Reajuste ganho: %f\n"
               "Em percentual:%f%\n",1,12*s,0,12*s,12);
    }
    if(s>=800.01&&s<=1200.00)
    {
     printf("Novo salario: %f\n"
               "Reajuste ganho: %f\n"
               "Em percentual:%f%\n",1,10*s,0,10*s,10);
    }
    if(s>=1200.01&&s<=2000.00)
    {
     printf("Novo salario: %f\n"
               "Reajuste ganho: %f\n"
               "Em percentual:%f%\n",1,07*s,0,07*s,7);
    }
    if(s>2000.00)
    {
     printf("Novo salario: %f\n"
               "Reajuste ganho: %f\n"
               "Em percentual:%f%\n",1,04*s,0,04*s,4);
    }

}
