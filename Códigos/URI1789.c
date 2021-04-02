#include <stdio.h>
int main ()
{
 int a,b,c,d;

while(1)
 {
  if(scanf("%d",&c)==EOF)break;
  b=0;
 for(a=0;a<c;a++){
                 scanf("%d",&d);
                 if(d>b)b=d;
                 }  
if(b<10)printf("%d\n",1);
else if(b<20)printf("%d\n",2);
else printf("%d\n",3);
 }



return 0;
}
