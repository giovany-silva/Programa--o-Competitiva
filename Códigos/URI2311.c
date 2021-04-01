

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,i;
typedef struct comp
{
    char nome[100];
    double nota;
    
}COMP;
     scanf("%d",&n);
     COMP v[n]; 
    int j;
    double me,dif,ma,no[7],s;
for(i=0;i<n;i++)
    {s=0;
     scanf("%s %lf",v[i].nome,&dif);   
     
        for(j=0;j<7;j++)
      {scanf("%lf",&no[j]);
         s+=no[j]; if(j==0){
              me=no[j];ma=no[j];
                  }
            else {
                if(no[j]>ma)ma=no[j];
                
                else if(no[j]<me)me=no[j];
                 }      
      }
    v[i].nota=(s-me-ma)*dif;    
    }
for(j=0;j<n;j++)
{
    printf("%s %.2lf\n",v[j].nome,v[j].nota);
    
}
  return 0;
    
}
