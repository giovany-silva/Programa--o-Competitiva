#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,i,b,c;
 double s=0;

scanf("%d",&a);
for(i=0;i<a;i++)
   {
    scanf("%d %d",&b,&c);
     switch(b)
       {
         case 1001:{
                    s+=c*1.5 ;
                   break;}
         case 1002:{
                    s+=c*2.5; 
                   break;}
                    
         case 1003:{
                    s+=c*3.5 ;
                   break;}
         case 1004:{
                    s+=c*4.5 ;
                   break;}
          case 1005:{
                    s+=c*5.5 ;
                   break;}
                   
 
        break;
       }



   }
printf("%.2lf\n",s);

return 0;

}

