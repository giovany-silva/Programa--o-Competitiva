#include <stdio.h>
int fibonacci(int num,int *pont);
int main()
{
int n,a,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    {scanf("%d",&a);
        int v=fibonacci(a,&c);
     if(a>=1)c--;
        printf("fib(%d) = %d calls = %d\n",a,c,v);
    
        c=0;
    }
    return 0;
}
int fibonacci(int num,int *pont)
{
    (*pont)++;
   if(num==0)return 0;
   if(num==1)return 1;
   else{
       return fibonacci(num-1,&(*pont)) + fibonacci(num-2,&(*pont)); }
}