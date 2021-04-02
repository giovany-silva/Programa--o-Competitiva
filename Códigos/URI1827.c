#include <stdio.h>
void imprime_matriz(int d);
int main()
{int d;

while(1)
   {     
  if(scanf("%d",&d)==EOF)break;   
   imprime_matriz(d);
   
   }
    
    return 0;
    
}
void imprime_matriz(int d)
{int m[d][d],ci=0,i,j,k;

for(i=0;i<d;i++)for(j=0;j<d;j++)
{if(i==j&&j+i==d-1)m[i][j]=4;
else if(i>=d/3&&i<=d-1-d/3&&(j>=d/3&&j<=d-1-d/3))m[i][j]=1;
 else if(i==j)m[i][j]=2;
else if(i+j==d-1)m[i][j]=3;

else m[i][j]=0;
}     
     
    for(i=0; i<d; i++)
            {
                for(j=0; j<d; j++)
                {
                    if(j==0)printf("%d",m[i][j]);
                    else printf("%d",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
}