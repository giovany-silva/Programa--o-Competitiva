#include <stdio.h>
int josephus(int n,int j);
int main()
{int n,i,v;
              while(1)
            {i=1;
                scanf("%d",&n);    
            if(n==0)break;
                   while(i)
                   {v=josephus(n,i);
                      
                
                      if(v==13)
                      {
                        printf("%d\n",i);  break;
                      }
                      i++;
                   }
            
            }
    return 0;
}
int josephus(int n,int j)
{
    int i,v[n],c=n-1,p,aux;
    for(i=0;i<n;i++)v[i]=i+1;
    i=0;
    while(c>0)
    {           p=0;
                    c--;v[i]=-1;
                aux=(i+j)%n;
                while(p<j)
                {
                    i=(i+1)%n;
                    if(v[i]>0)p++;    
                }

    }
    
 return v[i];   
}