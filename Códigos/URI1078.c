#include<stdlib.h>
int main()
{
    int N,i;
    do{scanf("%d",&N);}while(N<=2&&N>=1000);
    for(i=1; i<=10; i++)
    {
                   printf("%i x %d = ""%i\n",i,N,i*N);
    }

}
