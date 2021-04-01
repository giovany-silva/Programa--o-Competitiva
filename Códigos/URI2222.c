#include <stdio.h>
#include <malloc.h>
int intersecao(int v[],int v2[]);
int *vetorzinho(int v[]);
int uniao(int v[],int v2[]);
int main()
{
    int t,n,mi,q,li,i,j,x,y,k,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {         scanf("%d",&n);
       int **s=(int**)malloc(sizeof(int*)*n);
       
       for(j=0;j<n;j++)
       {
           scanf("%d",&mi);
           s[j]=(int*)malloc((mi+1)*sizeof(int));   
           for(k=0;k<mi;k++)scanf("%d",&s[j][k]);
           s[j][mi]=0;
       s[j]=vetorzinho(s[j]);
        
       }
       
      

      scanf("%d",&q);
for(k=0;k<q;k++)
              { scanf("%d %d %d",&z,&x,&y);
                           switch(z)
                           {
                    
                              case 1:{
                    
                                     printf("%d\n",intersecao(s[x-1],s[y-1]));
                    
                                   break;
                                      }
                              case 2:{
                    
                                     printf("%d\n",uniao(s[x-1],s[y-1]));
                                   break;
                                      }
                    
                               break;
                           }
               }

    }
   return 0;
}
int intersecao(int v[],int v2[])
{ int i=0 ,j,c=0;
    while(v[i]!=0)
     { 
     j=0;
         
    while(v2[j]!=0)     
         {
             if(v[i]==v2[j]&&v2[j]!=-1)
            {
                c++;
           break;
                
            }  
              j++;
         }

         i++;
     }

    return c;
}

int uniao(int v[],int v2[])
{
     int i=0 ,j,c=0,b;
         while(v[i]!=0)
     { b=1;
     j=0;
             while(v2[j]!=0)     
         {
             j++;
             if(i==0&&v2[j-1]>0)c++;
             if(v[i]!=v2[j-1])continue;
             b=0;
            if(i>0)break;
         }
         
     if(v[i]>0)if(b)c++;     
         i++;
     }
return c;
}
int *vetorzinho(int v[])
{int i=0,j;
while(v[i]!=0){j=i+1;
                    while(v[j]!=0)
                               {if(v[i]==v[j])v[j]=-1;
                               j++;
                               }
                    i++;
                  }

return v;
}