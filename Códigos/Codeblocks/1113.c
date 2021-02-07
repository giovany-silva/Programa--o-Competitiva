#include <stdio.h>

int imprima_valores(int x);
int main()
{

    int x;

    scanf("%d",&x);
    imprima_valores(x);


    return 0;
}
int imprima_valores(int x)
{
    if((x%2==1||x%2==0))
    {
        return x%2;
    }
    else

    {

        printf("%d",imprima_valores(x-1));
    }

}
