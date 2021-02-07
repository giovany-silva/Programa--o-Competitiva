#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

//...
int main () {
   clock_t tempoInicial, tempoFinal;
   int tempoGasto;
   tempoInicial = clock();
   getchar();
   tempoFinal = clock();
tempoGasto = ((tempoFinal-tempoInicial)/CLOCKS_PER_SEC);
   printf("Tempo em segundos: %d", tempoGasto);
   return 0;
}
