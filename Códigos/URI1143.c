#include <stdio.h>

void imprima_valores(int x);
int main()
{

    int X;
    do{
	scanf("%d",&X);
    }while(X<=1||X>=1000);

    imprima_valores(X);

    return 0;
}
void imprima_valores(int x)
{
    int i;
    for(i=1;i<=x;i++){
	        printf("%d %d %d\n",i,i*i,i*i*i);
    }


}
