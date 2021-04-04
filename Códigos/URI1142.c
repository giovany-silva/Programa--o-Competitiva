#include <stdio.h>
void imprima_valores(int x);
int main()
{

    int X,Y,aux;
    do{
	scanf("%d",&X);
    }while(X<=0);

    imprima_valores(X);

    return 0;
}
void imprima_valores(int x)
{
    int i,j;
    for(i=0;i<x;i++){
	j=4*i+1;
        printf("%d %d %d PUM\n",j,j+1,j+2);

    }


}
