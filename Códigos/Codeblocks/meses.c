#include  <stdio.h>  /**< inclui as fun��es padr�es de entrada e sa�da. */
#include <stdlib.h>  /**< inlcui as fun��es manipuladoras de mem�ria. */
#include <string.h>  /**< inclui as fun��es manipuladoras de strings. */

void apresente( int X);
int main(int argc, char **argv)
{


    int a;
do{ scanf("%d",&a);
    }while(a<1||a>12);
apresente (a);
}


void apresente( int X)
{switch(X)
{
    case 1:printf("January");break;
    case 2:printf("February\n");break;
    case 3:printf("March\n");break;
    case 4:printf("April\n");break;
    case 5: printf("May\n");break;
    case 6:printf("June\n");break;
    case 7: printf("July\n");break;
    case 8:printf("August\n");break;
    case 9:printf("September\n");break;
    case 10:printf("October\n");break;
    case 11:printf("November\n");break;
    case 12:printf("December\n");break;
}
}
