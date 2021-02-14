#include <stdio.h>
#include <time.h>


char A;
int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    scanf("%c",&A);
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    if(Tempo>5&&Tempo<10){printf ("você acertou\n");}
    getchar();
    return 0;
}



