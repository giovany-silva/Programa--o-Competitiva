#include<stdlib.h>
#include<stdio.h>

int main()
{
int v[5]={6,7,5,4,3},i,j=0,p,k=0,m,t;
m=v[0];
for(i=0;i<5;i++)
{

 for(j=0;j<=i-k;j++)
{
    if(v[j]>m)
    {
    m=v[j];
p=j;
    }

}

v[4-k]=m;
k++;


}
for(i=0;i<5;i++){printf("%d\n",v[i]);}

}
