#include<stdio.h>

/* Prot�tipos */
int somaDoisNumeros(int A, int B);

/* Fun��o Principal */
int main()
{
   int N, num1, num2;


   printf("Digite o 1o. numero: ");
   scanf("%d", &num1);
   printf("Digite o 2o. numero: ");
   scanf("%d", &num2);

    //N colhe o retorno da fun��o que faz N1 + N2
   N = somaDoisNumeros(num1, num2);

   //adivinha o que acontece quando imprime N?

   return 0;
}

/* Fun��es */
int somaDoisNumeros( int num1, int num2) {
   return num1 + num2; //<-- Retorna a soma
}
