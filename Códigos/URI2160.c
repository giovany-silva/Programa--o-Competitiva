#include <stdio.h>
#include <math.h>
int main(){  
char s[502];int i=0;
    
    while(1)
    {scanf("%c",&s[i]);
    if(s[i]=='\n')break;
        i++;
    }        
 if(i>80)printf("NO\n");            
 else printf("YES\n");        
        return 0;
}