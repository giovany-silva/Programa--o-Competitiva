#include <stdio.h>
int main(){
int p,j1,i,v[]={0,0,0,0};

scanf("%d",&p);
        for(i=0;i<p;i++)
                {
                    scanf("%d",&j1);int j;
                    for(j=2;j<=5;j++)
                       {
                            if(j1%j==0)v[j-2]++;
                       }
                
                }
printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",v[0],v[1],v[2],v[3]);

return 0;
}
