#include <stdio.h>

void imprima_valores(int x,int y);
int main()
{

    int X,Y;
    do{scanf("%d",&X);}while(X<=1||X>=20);
        do{scanf("%d",&Y);}while(X>=Y||Y>=100000);

    imprima_valores(X,Y);

    return 0;
}
void imprima_valores(int x,int y)
{if(y%x!=0){y=y-y%x+x;}
    int i,j,k=0;
    for(i=0;i<(int)y/x;i++){for(j=1;j<=x;j++)
    { k++;
    if(j==x){printf("%d\n",k);}
   else{ printf("%d ",k);}

    }

    }


}
