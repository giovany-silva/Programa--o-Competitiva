#include <stdio.h>

int main () {
int jogadorCPU, jogadorHUMANO;
int HUMANO;
printf ("Ecolha: par(0) ou impar(1):\n");
scanf ("%d", &HUMANO);
if (HUMANO > 1) HUMANO %= 2;
printf ("Escolha sua jogada:\n");
scanf ("%d", &jogadorHUMANO);
if (jogadorHUMANO > 10) {
jogadorHUMANO %= 10;
printf ("Utilizando %d.", jogadorHUMANO);
}
jogadorCPU = (rand() % 10);
if ((jogadorHUMANO + jogadorCPU) % 2 == HUMANO) printf ("Parabens voce ganhou!\n");
else prinft ("Surpresa, voce perdeu!!!\n");
return 0;
}
