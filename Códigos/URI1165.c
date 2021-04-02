#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int primo(int a);
int main()
{int d,i,a;
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        
        scanf("%d",&a);
        if(primo(a))printf("%d eh primo\n",a);
        else printf("%d nao eh primo\n",a);    
        
    }
    return 0;
}
int primo(int a)
{
    if(a%2==0&&a>2)return 0;
    else {int i=3;
        while(i<=sqrt(a)){
                   if(a%i==0)
			return 0;
                   i=i+2;
            
                  } 
        
         }
    return 1;
}