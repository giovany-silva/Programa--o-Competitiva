#include <stdio.h>
#include <math.h>
int main()
 {int t,b,ai,di,li,i,j;
 double v[2];
 scanf("%d",&t);
 for(i=0;i<t;i++)
     {  scanf("%d",&b);
     for(j=0;j<2;j++){scanf("%d%d%d",&ai,&di,&li);
                     v[j]=(ai+di)/2;
                     if(li%2==0)v[j]+=b;
                    }
     
         if(v[0]>v[1])printf("Dabriel\n");
         else if(v[0]==v[1])printf("Empate\n");
         else printf("Guarte\n");
     }
    return 0;    
}