#include<stdlib.h>
#include<stdio.h>
int main()
{
int t,n,i,c,j;
double media;
scanf("%d",&c);
for(i=0;i<c;i++)
{t=0;media=0;
    scanf("%d",&n);
    double v[n];
    for(j=0;j<n;j++)
    {
     scanf("%lf",&v[j]);
        media+=v[j];
    }
        media/=(double)n;

    for(j=0;j<n;j++) if(v[j]>media)t++;
    


    printf("%.3lf%\n",(double)(t*100)/(double)n);
}



return 0;
}
