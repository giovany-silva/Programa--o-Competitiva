#include<stdio.h>
#include<math.h>
int f(int n, int k);
int main () 
{
    int nc,c,i,n;
scanf("%d",&nc);
for(i=0;i<nc;i++)
    {
    scanf("%d%d",&n,&c);
     printf("Case %d: %d\n",i+1,f(n,c));
    }

return 0;
}
int f(int n, int k){
    if(n==1) return 1;
    return (((f(n-1, k) + k-1)%n)+1);   
}
