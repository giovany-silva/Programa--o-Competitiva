#include<stdlib.h>
#include<stdio.h>
int conversao(int n,int i,int v[]);
int main()
{
    int n,i=0,v[100];
    scanf("%d",&n);

    conversao(n,i,v);

    return 0;
}
int conversao(int n,int i,int v[])
{
    if(n>2)
    {
        v[i]=n%2;

        i++;
        conversao(n/2,i,v);
        return 0;//uau o que aconteceu aqui...

    }

    else if(n==2||n==1)
    {
        v[i]=n%2;
        i++;
        v[i]=n/2;
    }
    int j;
    if(v[i]==0)
        for(j==1; j<=i; i++)
        {
            v[j-1]=v[j];
            for(j=i-1; j>=0; j--)
                {printf("%d",v[j]);
            return 0;}
        }
    for(j=i; j>=0; j--)
        printf("%d",v[j]);

}
