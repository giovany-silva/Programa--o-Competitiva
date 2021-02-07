#include<stdlib.h>
#include<stdio.h>
int main()
{int n1,n2,i,j;
    scanf("%d %d",&n1,&n2);

    int v1[n1],v2[n2];
for(i=0;i<n1;i++)
{
 scanf("%d",&v1[i]);
}
for(i=0;i<n2;i++)
{
 scanf("%d",&v2[i]);
}
concatena(v1,v2,n1,n2);
}
int concatena(int *v1,int *v2,int n1,int n2)
{int i,j,cont;
cont=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
            {
            if(v1[i]!=v2[j])
{
for(i=0;i<=j;i++)
{
v2[j]!=v1[i];
{
    cont=cont+1;
}

}
}
            }
    }



    int *v3;
    v3=malloc((n1+cont)*sizeof(int));
    for(i=0;i<n1;i++)
        {
        v3[i]=v1[i];
        }
    for(i=n1;i<n1+cont;i++)
        {
        v3[i]=v2[i-n1];
        }

    for(i=0;i<n1+cont;i++){printf("%d\n",v3[i]);}
}


