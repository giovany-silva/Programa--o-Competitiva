#include <stdio.h>
int main()
{
int p,n,d,i,a;
scanf("%d %d",&p,&n);
   
	for(i=0;i<n;i++)
		{
                scanf("%d",&d);
                    if(i==0)a=d;
                  if(d-a<=p&&d-a>=0||d-a>=-p&&d-a<=0)a=d;
                          
                         
                   else{
                       
                       printf("GAME OVER\n");
                       return 0;
                       }
                      
		}

printf("YOU WIN\n");

 return 0;
    
}
  