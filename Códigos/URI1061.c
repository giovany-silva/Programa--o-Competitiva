#include<stdlib.h>
#include<stdio.h>
int main() 
{  int di[4],df[4],i;
 char dia[4];
    scanf("%s %d",dia,&di[0]);
    scanf("%d %s",&di[1],dia);
    scanf("%d %s %d",&di[2],dia,&di[3]);
    
    scanf(" %s %d",dia,&df[0]);
    scanf("%d %s",&df[1],dia);
    scanf("%d %s %d",&df[2],dia,&df[3]);
                     di[0]=df[0]-di[0];
                     di[1]=df[1]-di[1];
for(i=2;i<4;i++){
                     di[i]=df[i]-di[i];
                     if(di[i]<0)
                     {
                         di[i]=60+di[i];di[i-1]--;
                         
                     }
                }
if(di[1]<0){di[1]=24+di[1];di[0]--;}
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",di[0],di[1],di[2],di[3]);
    return 0;
}