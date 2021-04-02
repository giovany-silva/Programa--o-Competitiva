#include <stdio.h>
#include <math.h>
int main(){
double b=1,c=1;
 int i,a;  scanf("%d",&a);
 
 for(i=0;i<a;i++)
   {b=(1+sqrt(5))/2*b;
    c=(1-sqrt(5))/2*c;   
   }
   printf("%.1lf\n",(b-c)/sqrt(5));
    return 0;
}
