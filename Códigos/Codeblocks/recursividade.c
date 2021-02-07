#include<stdlib.h>
#include<stdio.h>
void binaria(int n,int i,int v[]);
int main()
{int n,v[100],i=0;
    scanf("%d",&n);
    binaria(n,i,v);

}

void binaria(int n,int i,int v[])
{

    if(n/2>1)
    {
       v[i]=n%2;
       i++;
    }

    else
    {
     v[i]=n%2;
       i++;
       v[i]=n/2;
binaria(n,i,v);
    }

    for(i=0;i<strlen(v);i++)
    {
        printf("%d",v[i]);
    }
}
