#include<stdlib.h>
int main()
{
    int A,B,C;
    scanf("%f %f",&A,&B);
    if((A>11&&B<13)&&(A<25&&B>-1))           //A tem que estar entre 0 e 24 , e B
    {
        C=24-A+B;
        printf("O JOGO DUROU",C);
        printf(" HORA(S)");
    }

    return 0;
}
