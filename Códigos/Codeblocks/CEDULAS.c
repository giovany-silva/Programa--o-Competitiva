#include<stdlib.h>
#include<math.h>
int main()
{
    long int N;
    int a,b,c,d,e,f,g,h,i,j,k,m,l;
    scanf("%ld",&N);
    if(N>0&&N<1000000)
    {


        do
        {
            b=N%100;
        }
        while(b>=100);
        a=(N-b)/100;//notas de 100
        do
        {
            d=b%50;
        }
        while(d>=50);
        e=(b-d)/50; //notas 50
        do
        {
            f=d%20;
        }
        while(f>=20);
        g=(d-f)/20;
        do
        {
            h=f%10;
        }
        while(h>=10);
        i=(f-h)/10;
        do
        {
            j=h%5;
        }
        while(j>=5);
        k=(h-j)/5;
        do
        {
            l=j%2;
        }
        while(l>=2);
        m=(j-l)/2;


        printf("%d\n %d nota(s) de R$ 100,00\n %d nota(s) de R$ 50,00\n %d nota(s) de R$ 20,00\n %d nota(s) de R$ 10,00\n %d nota(s) de R$ 5,00\n %d nota(s) de R$ 2,00\n %d nota(s) de R$ 1,00\n ",N,a,e,g,i,k,m,l);
    }
    return 0;
}
