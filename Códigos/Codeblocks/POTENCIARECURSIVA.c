#include<stdlib.h>
#include<stdio.h>
double pot (double x,int k);
int main()
{

    double x;
    int k;
    scanf("%lf %d",&x,&k);

    x=pot(x,k);
    printf("\n%.2lf\n",x);

}

double pot (double x,int k)
{


   if(k==0) return 1;
   else{
        return x*pot(x,k-1);
       }


}
