#include <stdio.h>
int main()
{
    int p,j1,i;
    scanf("%d%d",&p,&j1);
    char s[7];
        for(i=0;i<j1;i++){
		scanf("%s",s);    
               
    		if(s[0]=='f')
			p++;
    		else 	
			p--;
    	}
    printf("%d\n",p);
return 0;
}
