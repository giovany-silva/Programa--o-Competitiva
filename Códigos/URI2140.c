#include <stdio.h>
int main ()
{
    int t,x,n,v[]={2, 5, 10, 20, 50,100},i,j,aux,b,y;
while(1)    
    {b=0;
    scanf("%d %d",&x,&n);
    if(x==0&&n==0)break;
    t=n-x;
    if(t<=200)
    {
     for(j=5;j>=0;j--)
          {x=t/v[j];
          y=t%v[j];
              if(x==2&&y==0)b=1;
            else
                {      
                  for(i=j-1;i>=0;i--)
                  
                      if(x==1&&y/v[i]==1&&y%v[i]==0||(x==0&&y/v[i]==2&&y%v[i]==0))
                      {
                          b=1;
                          break;
                      }
                      
                          

                }
          if(b)break;
          }
        
    }
    if(b)printf("possible\n");
    else printf("impossible\n");
    }
    
    
  return 0;
}