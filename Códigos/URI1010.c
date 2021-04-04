#include <stdio.h>

int main() {
int cod_peca1,n_peca1,n_peca2,cod_peca2;
 float valorpeca1,valorpeca2,pague;
 scanf("%d %d %f",&cod_peca1,&n_peca1,&valorpeca1);
 scanf("%d %d %f",&cod_peca2,&n_peca2,&valorpeca2);
 pague=n_peca1*valorpeca1+n_peca2*valorpeca2;
 printf("VALOR A PAGAR: R$ %.2f\n",pague);
return 0;
}
