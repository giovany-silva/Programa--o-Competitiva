#include<stdlib.h>
#include<stdio.h>
        int main()
{
    float A,B,C;


do {
        scanf("%f %f %f",&A,&B,&C);
    } while((A<=0&&B<=0)&&C<=0);


    if(B>A)
    {
        if(A>C)
        {
            A=B;
            B=A;
        }
        else
        {
            A=B;
            B=C;
            C=A;
        }
    }
    else if(C>A)
    {
        if(A>B)
        {
            A=C;
            B=A;
              C=B;
        }
        else
        {
            A=C;
            C=A;
        }
    }

    else if(C>B)
    {
        B=C;
    }
printf("%f\n %f\n %f\n",A,B,C);
}
