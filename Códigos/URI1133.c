#include <stdio.h>
imprima_valores(int x,int y);
int main()
{

    int X,Y,aux;
    scanf("%d %d",&X,&Y);
    if(X>Y){
        aux=X;
        X=Y;
        Y=aux;
    }
    imprima_valores(X,Y);

    return 0;
}
imprima_valores(int x,int y)
{
    int i,r;
    for(i=x+1;i<y; i++)
    {
        r=(i%5);
        switch(r)
        {
        case 2:
            {printf("%i\n",i);
            break;}
        case 3:
            {printf("%i\n",i);
            break;}
        }
    }

}
