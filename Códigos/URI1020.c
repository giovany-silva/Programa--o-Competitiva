#include<stdlib.h>
#include<math.h>
int main()

{

    int d,m,a,i,r;
    scanf("%d",&i);
    a=i/365;
    r=i%365;
    if(r<365&&r>=360)
    {m=11;
    d=r-360+30;}
    else{m=(i%365)/30;
    d=(i%365)%30;}

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
  return 0;


}
